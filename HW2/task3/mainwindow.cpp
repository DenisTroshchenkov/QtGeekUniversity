#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setRowCount(3);
    ui->tableWidget->setColumnCount(4);

    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "№" << "Name" << "IP" << "MAC");

    for(int i = 0; i < ui->tableWidget->rowCount(); i++) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i)));
        QString name = tr("Name %1").arg(i);
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(name));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem("123.32.12.1"));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem("01:0C:CD:01:01:21"));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int row = ui->tableWidget->currentRow();
    for(int i = 0; i < ui->tableWidget->columnCount(); i++) {
        ui->tableWidget->item(row, i)->setBackgroundColor(QColor("red"));
    }
}
