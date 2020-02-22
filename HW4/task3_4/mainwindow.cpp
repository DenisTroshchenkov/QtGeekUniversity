#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    config_file.setFileName(CONFIG_FILE);
    config_file.open(QIODevice::ReadWrite);
    if (!config_file.isOpen()) {
        exit(1);
    }

    proc = new QProcess(this);
    connect(proc, SIGNAL(readyReadStandardOutput()), this, SLOT(procCMD()));

    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Cmd" << "Button");

     QTextStream in(&config_file);
     QString line = in.readLine();
     int cnt_line = 0;
     while (!line.isNull()) {
         QStringList cmd_and_button = line.split(" ", QString::SkipEmptyParts);
         line = in.readLine();
         if (cmd_and_button.size() != 2) {
             continue;
         }
         ui->tableWidget->insertRow(cnt_line);
         ui->tableWidget->setItem(cnt_line, 0, new QTableWidgetItem(cmd_and_button[0]));
         ui->tableWidget->setItem(cnt_line, 1, new QTableWidgetItem(cmd_and_button[1]));
         cnt_line++;
     }
}

MainWindow::~MainWindow()
{
    config_file.resize(0);
    QTextStream out(&config_file);
    for(int i = 0; i < ui->tableWidget->rowCount(); i++) {
        out << ui->tableWidget->item(i, 0)->text() << " " <<
                ui->tableWidget->item(i, 1)->text() << "\n";
    }
    config_file.close();
    delete ui;
}

void MainWindow::on_addCmd_clicked()
{

    int cnt_line = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(cnt_line);
    ui->tableWidget->setItem(cnt_line, 0, new QTableWidgetItem(ui->lineEdit_cmd_button->text()));
    ui->tableWidget->setItem(cnt_line, 1, new QTableWidgetItem(ui->lineEdit_cmd->text()));
}

void MainWindow::on_pushButton_remove_cmd_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
     for(int i = 0; i < ui->tableWidget->rowCount(); i++) {
         QString key_name = ui->tableWidget->item(i, 0)->text();
         QKeySequence seq = QKeySequence(key_name);
         uint keyCode = seq[0];
         if (keyCode == event->key())
         {
             QString cmd = "";
             if (QSysInfo::productType() == "windows")
             {
                 cmd = "cmd /C";
             }
             cmd += ui->tableWidget->item(i, 1)->text();
             proc->start(cmd);
         }
     }
}

void MainWindow::procCMD()
{
   QTextCodec *codec = QTextCodec::codecForName("IBM866");
   ui->textEdit_monitor->setText((codec->toUnicode(proc->readAllStandardOutput())));
}
