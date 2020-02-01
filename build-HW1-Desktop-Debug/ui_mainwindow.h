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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_c;
    QLineEdit *lineEdit_b;
    QLineEdit *lineEdit_a;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_res;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(419, 307);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_c = new QLineEdit(centralWidget);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(90, 129, 135, 32));
        lineEdit_b = new QLineEdit(centralWidget);
        lineEdit_b->setObjectName(QStringLiteral("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(90, 91, 135, 32));
        lineEdit_a = new QLineEdit(centralWidget);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(90, 53, 135, 32));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(241, 51, 104, 34));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(74, 53, 16, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(73, 91, 16, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(75, 129, 16, 18));
        label_res = new QLabel(centralWidget);
        label_res->setObjectName(QStringLiteral("label_res"));
        label_res->setGeometry(QRect(240, 100, 161, 61));
        label_res->setScaledContents(false);
        label_res->setAlignment(Qt::AlignCenter);
        label_res->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        lineEdit_c->raise();
        lineEdit_b->raise();
        lineEdit_a->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_res->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdit_c->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_b->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        lineEdit_a->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lineEdit_a->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\272\320\276\321\200\320\265\320\275\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "a:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "b:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "c:", Q_NULLPTR));
        label_res->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
