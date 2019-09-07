#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a = ui->lineEdit_a->text().toDouble();
    double b = ui->lineEdit_b->text().toDouble();
    double angle = ui->lineEdit_c->text().toDouble();


    if (ui->radioButton_deg->isChecked()) {
        angle = qDegreesToRadians(angle);
    }

    qreal res = qSqrt(qPow(a, 2) + qPow(b, 2) - 2 * a * b * qCos(angle));
    ui->res->setText(QString::number(res));

}
