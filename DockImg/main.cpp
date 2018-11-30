#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


/*
https://www.qtcentre.org/threads/8723-Setting-an-icon-to-an-Item-in-a-QlistWidget?p=46559
https://forum.qt.io/topic/1786/qlistwidget-reorder-with-drag-and-drop/11

https://www.qtcentre.org/threads/37753-Drag-and-Drop-items-in-QListWidget
https://wiki.qt.io/QList_Drag_and_Drop_Example
https://stackoverflow.com/questions/8023983/how-to-show-icons-without-text-in-qlistwidget





  */
