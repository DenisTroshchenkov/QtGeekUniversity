#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QKeySequence>
#include <QKeyEvent>
#include <QProcess>
#include <QTextCodec>


const QString CONFIG_FILE = "/tmp/cmd_scheduler.conf";

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_addCmd_clicked();

    void on_pushButton_remove_cmd_clicked();
    void procCMD();

private:
    Ui::MainWindow *ui;
    QFile config_file;
    QProcess *proc;

protected:
    virtual void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
