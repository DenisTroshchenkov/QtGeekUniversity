#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>
#include <QMessageBox>
#include <QStack>
#include <QTime>
#include <QFileDialog>
#include <QDebug>

#define MIN_TIME_FOR_SAVE_IN_STACK 1

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
    void on_pushButton_Prev_clicked();

    void on_pushButton_Save_clicked();

    void on_pushButton_OpenFile_clicked();

    void on_pushButton_ReadMe_clicked();

    void on_plainTextEdit_textChanged();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void switchReadOnlyMode();
    void setDefaultStyle();
    void setBlackStyle();


private:
    Ui::MainWindow *ui;
    QStack<QString> stack;
    QString current_text;
    QTime last_update;
    QString current_file;
};

#endif // MAINWINDOW_H
