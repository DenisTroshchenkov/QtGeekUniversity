#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmath.h"

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
    double val_a = ui->lineEdit_a->text().toDouble();

    if (val_a == 0) {
        ui->label_res->setText("Error: 'a' can't be zero");
        return;
    }

    double val_b = ui->lineEdit_b->text().toDouble();
    double val_c = ui->lineEdit_c->text().toDouble();

    qreal desc = qPow(val_b, 2) - 4 * val_a * val_c;

    if (desc < 0) {
        ui->label_res->setText("Error: cant calculate result, discriminant < 0");
        return;
    }

    desc = qSqrt(desc);
    QString x1 = QString::number((-val_b + desc)/(2 * val_a));
    QString x2 = QString::number((-val_b - desc)/(2 * val_a));

    QString res = "X1: ";
    res += x1;
    res += " X2: ";
    res += x2;

    ui->label_res->setText(res);
}
