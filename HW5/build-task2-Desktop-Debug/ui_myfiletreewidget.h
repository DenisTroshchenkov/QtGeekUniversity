/********************************************************************************
** Form generated from reading UI file 'myfiletreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFILETREEWIDGET_H
#define UI_MYFILETREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFileTreeWidget
{
public:

    void setupUi(QWidget *MyFileTreeWidget)
    {
        if (MyFileTreeWidget->objectName().isEmpty())
            MyFileTreeWidget->setObjectName(QStringLiteral("MyFileTreeWidget"));
        MyFileTreeWidget->resize(400, 300);

        retranslateUi(MyFileTreeWidget);

        QMetaObject::connectSlotsByName(MyFileTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *MyFileTreeWidget)
    {
        MyFileTreeWidget->setWindowTitle(QApplication::translate("MyFileTreeWidget", "MyFileTreeWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyFileTreeWidget: public Ui_MyFileTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFILETREEWIDGET_H
