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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_a;
    QLineEdit *lineEdit_b;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *res;
    QLabel *label_4;
    QLineEdit *lineEdit_c;
    QRadioButton *radioButton_deg;
    QRadioButton *radioButton_rad;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(522, 380);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_a = new QLineEdit(centralWidget);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(115, 28, 135, 32));
        lineEdit_b = new QLineEdit(centralWidget);
        lineEdit_b->setObjectName(QStringLiteral("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(115, 66, 135, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 27, 58, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 65, 58, 18));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(115, 142, 88, 34));
        res = new QLabel(centralWidget);
        res->setObjectName(QStringLiteral("res"));
        res->setGeometry(QRect(286, 106, 141, 91));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 103, 58, 18));
        lineEdit_c = new QLineEdit(centralWidget);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(115, 104, 135, 32));
        radioButton_deg = new QRadioButton(centralWidget);
        radioButton_deg->setObjectName(QStringLiteral("radioButton_deg"));
        radioButton_deg->setGeometry(QRect(320, 30, 104, 22));
        radioButton_deg->setChecked(true);
        radioButton_rad = new QRadioButton(centralWidget);
        radioButton_rad->setObjectName(QStringLiteral("radioButton_rad"));
        radioButton_rad->setGeometry(QRect(320, 58, 104, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 522, 30));
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
        lineEdit_a->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_b->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "a:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "b:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        res->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "angle:", Q_NULLPTR));
        lineEdit_c->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        radioButton_deg->setText(QApplication::translate("MainWindow", "&deg", Q_NULLPTR));
        radioButton_rad->setText(QApplication::translate("MainWindow", "&rad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
