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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLineEdit *lineEdit_add_new;
    QPushButton *pushButton_add_new;
    QPushButton *pushButton_remove;
    QCheckBox *checkBox_view_mode;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(712, 425);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 20, 441, 261));
        lineEdit_add_new = new QLineEdit(centralWidget);
        lineEdit_add_new->setObjectName(QStringLiteral("lineEdit_add_new"));
        lineEdit_add_new->setGeometry(QRect(500, 20, 171, 31));
        pushButton_add_new = new QPushButton(centralWidget);
        pushButton_add_new->setObjectName(QStringLiteral("pushButton_add_new"));
        pushButton_add_new->setGeometry(QRect(580, 70, 88, 34));
        pushButton_remove = new QPushButton(centralWidget);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));
        pushButton_remove->setGeometry(QRect(580, 130, 88, 34));
        checkBox_view_mode = new QCheckBox(centralWidget);
        checkBox_view_mode->setObjectName(QStringLiteral("checkBox_view_mode"));
        checkBox_view_mode->setGeometry(QRect(500, 260, 101, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 30));
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
        pushButton_add_new->setText(QApplication::translate("MainWindow", "add new", Q_NULLPTR));
        pushButton_remove->setText(QApplication::translate("MainWindow", "remove", Q_NULLPTR));
        checkBox_view_mode->setText(QApplication::translate("MainWindow", "view mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
