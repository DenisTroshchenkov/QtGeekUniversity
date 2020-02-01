#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmath.h"
#include <complex>

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

QString makeResult(std::complex<qreal> complex_x1, std::complex<qreal> complex_x2) {
    QString x1_real = QString::number(complex_x1.real());
    QString x2_real = QString::number(complex_x2.real());

    QString res = "X1: ";
    res += x1_real;
    if (complex_x1.imag() != 0) {
        res += "+ " + QString::number(complex_x1.imag()) + "i";
    }

    res += " X2: ";
    res += x2_real;
    if (complex_x2.imag() != 0) {
        res += "+ " + QString::number(complex_x2.imag()) + "i";
    }

    return res;
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

    std::complex<qreal> complex_desc(desc, 0);

    std::complex<qreal> complex_val_a(val_a, 0);
    std::complex<qreal> complex_val_b(val_b, 0);
    std::complex<qreal> complex_val_c(val_c, 0);

    std::complex<qreal> complex_x1 = (-complex_val_b + std::sqrt(complex_desc))/(qreal(2) * complex_val_a);
    std::complex<qreal> complex_x2 = (-complex_val_b - std::sqrt(complex_desc))/(qreal(2) * complex_val_a);

    ui->label_res->setText(makeResult(complex_x1, complex_x2));
}
