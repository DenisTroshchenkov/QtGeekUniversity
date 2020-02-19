#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this, SIGNAL(switchWidowTitle()), this, SLOT(widowTitle()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
   if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
   {
       emit switchWidowTitle();
   }
}


void MainWindow::widowTitle()
{
  setWindowTitle(ui->lineEdit->text());
}
