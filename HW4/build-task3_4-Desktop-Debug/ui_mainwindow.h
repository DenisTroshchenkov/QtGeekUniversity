/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QPushButton *addCmd;
    QLineEdit *lineEdit_cmd_button;
    QLineEdit *lineEdit_cmd;
    QPushButton *pushButton_remove_cmd;
    QTextEdit *textEdit_monitor;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(876, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 30, 401, 191));
        addCmd = new QPushButton(centralWidget);
        addCmd->setObjectName(QStringLiteral("addCmd"));
        addCmd->setGeometry(QRect(40, 250, 88, 34));
        lineEdit_cmd_button = new QLineEdit(centralWidget);
        lineEdit_cmd_button->setObjectName(QStringLiteral("lineEdit_cmd_button"));
        lineEdit_cmd_button->setGeometry(QRect(170, 250, 271, 32));
        lineEdit_cmd = new QLineEdit(centralWidget);
        lineEdit_cmd->setObjectName(QStringLiteral("lineEdit_cmd"));
        lineEdit_cmd->setGeometry(QRect(170, 290, 271, 32));
        pushButton_remove_cmd = new QPushButton(centralWidget);
        pushButton_remove_cmd->setObjectName(QStringLiteral("pushButton_remove_cmd"));
        pushButton_remove_cmd->setGeometry(QRect(40, 300, 88, 34));
        textEdit_monitor = new QTextEdit(centralWidget);
        textEdit_monitor->setObjectName(QStringLiteral("textEdit_monitor"));
        textEdit_monitor->setGeometry(QRect(480, 30, 361, 291));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 876, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        addCmd->setText(QApplication::translate("MainWindow", "Add cmd", Q_NULLPTR));
        pushButton_remove_cmd->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
