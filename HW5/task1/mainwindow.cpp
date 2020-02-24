#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->installEventFilter(this);
    ui->plainTextEdit->setContextMenuPolicy(Qt::ActionsContextMenu);

    QMenu*   pmnu   = new QMenu("&Style");
    pmnu->addAction("&Default", this, SLOT(setDefaultStyle()));
    pmnu->addAction("&Black", this, SLOT(setBlackStyle()));
    ui->menuBar->addMenu(pmnu);
    setDefaultStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Prev_clicked()
{
    if (stack.size()) {
        QString str = stack.pop();
        current_text = str;
        ui->plainTextEdit->setPlainText(current_text);
    }
}

void MainWindow::on_pushButton_Save_clicked()
{
    QString filename;

    if (current_file.length()) {
        filename = current_file;
    }
    else {
        filename = QFileDialog::getSaveFileName(this, "Фильтр", QDir::currentPath(),"Text(*.txt);;Bin(*.original)");
    }

    if (filename.length())
    {
        QString ext = QString(&(filename.data()[filename.length() - 4]));
        QFile file(filename);
        if (file.open(QFile::WriteOnly))
        {
            QTextStream stream(&file);
            if (ext != ".txt")
            {
                stream << "Author: " << ui->lineEdit->text() << "\n";
            }
            stream << ui->plainTextEdit->toPlainText();
            file.close();
        }
     }
}

void MainWindow::on_pushButton_OpenFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Фильтр", QDir::currentPath(),"Text(*.txt);;Bin(*.original)");
    if (filename.length()) {
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&file);
            QString str = stream.read(file.size());
            current_text = str;
            ui->plainTextEdit->setPlainText(current_text);
            stack.clear();
            current_file = filename;
            ui->label_current_file->setText(current_file);
            file.close();
        }
    }
}

void MainWindow::on_pushButton_ReadMe_clicked()
{
    QFile file (":/texts/ReadMe");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString str = stream.read(file.size());
        QMessageBox msgBox;
        msgBox.setText(str);
        msgBox.exec();
    }
}

void MainWindow::on_plainTextEdit_textChanged()
{
    QTime current_time  = QTime::currentTime();
    if (last_update.secsTo(current_time) < MIN_TIME_FOR_SAVE_IN_STACK) {
        last_update = current_time;
        return;
    }
    QString str = ui->plainTextEdit->toPlainText();
    if (current_text != str) {
       stack.push(current_text);
       current_text = str;
       last_update = current_time;
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->plainTextEdit && event->type() == QEvent::ContextMenu)
    {
        QContextMenuEvent *contextEvent = static_cast<QContextMenuEvent*>(event);
        static_cast<QMenu*>(obj)->addAction("Switch read only mode", this, SLOT(switchReadOnlyMode()));

        return true;
    }

    return QObject::eventFilter(obj, event);
}

void MainWindow::switchReadOnlyMode() {
    if (ui->plainTextEdit->isReadOnly()) {
        ui->plainTextEdit->setReadOnly(false);
        ui->label_read_only_mode->setText("");
    } else {
        ui->plainTextEdit->setReadOnly(true);
        ui->label_read_only_mode->setText("Read only");
    }
}


void MainWindow::setDefaultStyle() {
    setStyleSheet("MainWindow {font: bold 14 px; background-color: grey;}");
}

void MainWindow::setBlackStyle() {
    setStyleSheet("MainWindow {font: bold 14 px; background-color: black;}");
}
