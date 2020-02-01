#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_textEdit_textChanged()
{
    int ch_count = ui->textEdit->document()->characterCount();
    ui->label->setText(QString::number(ch_count));
}

void MainWindow::on_lineEdit_editingFinished()
{
     qreal margin = ui->lineEdit->text().toDouble();
     ui->textEdit->document()->setDocumentMargin(margin);

}

void MainWindow::on_lineEdit_2_editingFinished()
{
     qreal size = ui->lineEdit_2->text().toDouble();
     QFont font = ui->textEdit->document()->defaultFont();
     font.setPixelSize(size);
     ui->textEdit->document()->setDefaultFont(font);
}

void MainWindow::on_lineEdit_3_editingFinished()
{
     QString family = ui->lineEdit_3->text();
     QFont font = ui->textEdit->document()->defaultFont();
     font.setFamily(family);
     ui->textEdit->document()->setDefaultFont(font);
}
