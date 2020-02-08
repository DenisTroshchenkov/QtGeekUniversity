#include "mainwindow.h"
#include "ui_mainwindow.h"

struct Language {
    QString lang_name;
    QString icon_name;
};

Language languages[] = {
    {"C++","c++"},
    {"Python", "python"},
    {"Java", "java"},
    {"C#", "c-sharp"},
    {"PHP", "php"},
    {"JavaScript", "javascript"},
    {"Ruby", "ruby"},
};


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->setIconSize(QSize(32,32));
    ui->listWidget->setEditTriggers(QListWidget::DoubleClicked);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDropIndicatorShown(true);
    ui->listWidget->setDragDropMode(QAbstractItemView::InternalMove);

    for (Language l : languages)
    {
         QString icon_path = QString(":/icons/%1.png").arg(l.icon_name);
         QString lang_name = QString("%1").arg(l.lang_name);
         QListWidgetItem* item = new QListWidgetItem(QIcon(icon_path), lang_name);
         item->setFlags(item->flags () | Qt::ItemIsEditable);
         ui->listWidget->addItem(item);
     }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_new_clicked()
{
    QString icon_path = QString(":/icons/default.png");
    QString lang_name = QString(ui->lineEdit_add_new->text());
    QListWidgetItem* item = new QListWidgetItem(QIcon(icon_path), lang_name);
    item->setFlags(item->flags () | Qt::ItemIsEditable);
    ui->listWidget->addItem(item);
}

void MainWindow::on_pushButton_remove_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    ui->listWidget->removeItemWidget(item);
}

void MainWindow::on_checkBox_view_mode_toggled(bool checked)
{
    if (checked) {
        ui->listWidget->setViewMode(QListView::IconMode);
    } else {
        ui->listWidget->setViewMode(QListView::ListMode);
    }
}
