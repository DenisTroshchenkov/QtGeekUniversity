#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

signals:
     void switchWidowTitle();

protected:
    virtual void keyPressEvent(QKeyEvent *event);

private slots:
   void widowTitle();
};

#endif // MAINWINDOW_H
