#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


//#include "widget.h"
//#include <QApplication>
//#include <QListWidget>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);

//    QListWidget lw;
//    for(int i = 1; i < 10; ++i)
//        lw.addItem(new QListWidgetItem(QString("Item %1").arg(i)));
//    lw.setSelectionMode(QAbstractItemView::ExtendedSelection);
//    lw.setDragDropMode(QAbstractItemView::InternalMove);
//    lw.setFlow(QListView::LeftToRight);
//    lw.show();

//    a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));

//    return a.exec();
//}






/*
https://www.qtcentre.org/threads/8723-Setting-an-icon-to-an-Item-in-a-QlistWidget?p=46559
https://forum.qt.io/topic/1786/qlistwidget-reorder-with-drag-and-drop/11

https://stackoverflow.com/questions/25187444/pyqt-qlistwidget-custom-items



https://www.qtcentre.org/threads/37753-Drag-and-Drop-items-in-QListWidget
https://wiki.qt.io/QList_Drag_and_Drop_Example
https://stackoverflow.com/questions/8023983/how-to-show-icons-without-text-in-qlistwidget





  */
