#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setMinimumSize(800, 800);
    mftw = new MyFileTreeWidget(this);
}

MainWindow::~MainWindow()
{
    delete mftw;
}
