#include "myfiletreewidget.h"

MyFileTreeWidget::MyFileTreeWidget(QWidget *parent) : QWidget(parent), model(nullptr)
{
    gridLay = new QGridLayout(this);
    this->setLayout(gridLay);
    tree = new QTreeView(this);

    gridLay->addWidget(tree, 1, 0, 10, 10);


    setMinimumSize(500, 600);

    if(QSysInfo::productType() == "windows")
    {
        disckSelBox = new QComboBox(this);
        QFileInfoList list = QDir::drives();
        QFileInfoList::const_iterator listdisk = list.begin();
        int amount = list.count();
        for (int i = 0; i < amount; i++)
        {
            disckSelBox->addItem(listdisk->path());
            listdisk++;
        }
        if (amount > 0)
        {
            rebuildModel(list.at(0).path());
        }
        gridLay->addWidget(disckSelBox, 0, 0, 1, 2); // координаты
        connect(disckSelBox, SIGNAL(activated(int)), this, SLOT(chgDisk(int)));
    } else {
        mainPath = new QPushButton(this);
        mainPath->setText("/");
        gridLay->addWidget(mainPath, 0, 0, 1, 2);
        connect(mainPath, SIGNAL(clicked()), this, SLOT(goMainPath()));
        rebuildModel("/");
    }

}


void MyFileTreeWidget::chgDisk(int index)
{
   tree->collapseAll();
}

void MyFileTreeWidget::goMainPath()
{
   tree->collapseAll();
}


void MyFileTreeWidget::setNewModel(QStandardItemModel *newmodel)
{
    tree->setModel(newmodel);
    model = newmodel;
}


QList<QStandardItem*> MyFileTreeWidget::getFiles(QString str)
{

   QDir dir(str);
   dir.setFilter(QDir::Hidden | QDir::NoSymLinks | QDir::AllEntries | QDir::NoDotAndDotDot );
   QFileInfoList list = dir.entryInfoList();
   int amount = list.count();
   QList<QStandardItem*>files;
   for (int i = 0; i < amount; i++)
   {
       QStandardItem* f;
       if (list.at(i).isDir()) {
          f = new QStandardItem(QIcon(QApplication::style()->standardIcon(QStyle::SP_DirIcon)), list.at(i).fileName());
          QString path_to_dir = list.at(i).absoluteFilePath();
          QList<QStandardItem*> subFiles = getFiles(path_to_dir);
          f->appendRows(subFiles);
       } else {
          f = new QStandardItem(QIcon(QApplication::style()->standardIcon(QStyle::SP_FileIcon)), list.at(i).fileName());
       }
       files.append(f);
   }

   return files;
}

void MyFileTreeWidget::rebuildModel(QString str) {
    curretnPath = str;
    QStandardItemModel *model = new QStandardItemModel;
    QList<QStandardItem*> items;
    items.append(new QStandardItem(QIcon(QApplication::style()->standardIcon(QStyle::SP_DriveHDIcon)), str));
    model->appendRow(items);

    items.at(0)->appendRows(getFiles(str));

    setNewModel(model);
}
