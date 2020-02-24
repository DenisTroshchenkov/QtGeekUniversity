#ifndef MYFILETREEWIDGET_H
#define MYFILETREEWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QTreeView>
#include <QComboBox>
#include <QPushButton>
#include <QStandardItemModel>
#include <QApplication>
#include <QFileInfoList>
#include <QDir>
#include <QDebug>

Q_PROPERTY(QStandardItemModel *model READ getCurrentModel WRITE setNewModel)


class MyFileTreeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyFileTreeWidget(QWidget *parent = 0);

    void clearTree();
    QStandardItemModel *getCurrentModel()const
    {
        return model;
    }
    void setNewModel(QStandardItemModel *newmodel);
    void rebuildModel(QString str);
    QList<QStandardItem*> getFiles(QString str);
 private:
    QGridLayout *gridLay;
    QTreeView *tree;
    QPushButton *mainPath;
    QComboBox *disckSelBox;
 private slots:
    void chgDisk(int index);
    void goMainPath();

 private:
    QStandardItemModel *model;
    QString curretnPath;
 protected:
};

#endif // MYFILETREEWIDGET_H
