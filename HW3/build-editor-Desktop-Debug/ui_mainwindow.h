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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_current_file;
    QPushButton *pushButton_ReadMe;
    QLineEdit *lineEdit;
    QSplitter *splitter;
    QPushButton *pushButton_Prev;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_OpenFile;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(885, 493);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 40, 821, 351));
        label_current_file = new QLabel(centralWidget);
        label_current_file->setObjectName(QStringLiteral("label_current_file"));
        label_current_file->setGeometry(QRect(30, 397, 401, 21));
        pushButton_ReadMe = new QPushButton(centralWidget);
        pushButton_ReadMe->setObjectName(QStringLiteral("pushButton_ReadMe"));
        pushButton_ReadMe->setGeometry(QRect(760, 0, 84, 34));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(590, 390, 261, 32));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 0, 252, 34));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Prev = new QPushButton(splitter);
        pushButton_Prev->setObjectName(QStringLiteral("pushButton_Prev"));
        splitter->addWidget(pushButton_Prev);
        pushButton_Save = new QPushButton(splitter);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        splitter->addWidget(pushButton_Save);
        pushButton_OpenFile = new QPushButton(splitter);
        pushButton_OpenFile->setObjectName(QStringLiteral("pushButton_OpenFile"));
        splitter->addWidget(pushButton_OpenFile);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 885, 30));
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
        label_current_file->setText(QString());
        pushButton_ReadMe->setText(QApplication::translate("MainWindow", "ReadMe", Q_NULLPTR));
        pushButton_Prev->setText(QApplication::translate("MainWindow", "<--", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_OpenFile->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
