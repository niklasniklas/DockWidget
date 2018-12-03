#include "mainwindow.h"
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), textEdit(new QTextEdit)
{
    setMinimumSize(1500,800);
    setCentralWidget(textEdit);

    videoClip tmp("E:/1.mp4", 100, 200);
    files.append(tmp);

    createDockWindows();

    int i =10;

}

MainWindow::~MainWindow()
{

}

void MainWindow::createDockWindows()
{
    QDockWidget *dock = new QDockWidget(tr("Video Edit"), this);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
    videoEditList = new QListWidget(dock);
    videoEditList->setFlow(QListView::LeftToRight);
//    videoEditList->setViewMode    (QListWidget::IconMode  );
//    videoEditList->setResizeMode  (QListWidget::Adjust    );
    videoEditList->setIconSize    (QSize(100,100         ));
//    videoEditList->setAcceptDrops (true                   );
//    videoEditList->setDragEnabled (true                  );
    setWindowIcon(QIcon("D:\\1.jpg"));



    QListWidgetItem *item1 = new QListWidgetItem(QIcon("E:\\1.jpg"), "E:\\2.jpg", videoEditList);
    item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    item1->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item1);


    QListWidgetItem *item2 = new QListWidgetItem(QIcon("E:\\2.jpg"), "B", videoEditList);
    item2->setTextAlignment(Qt::AlignRight|Qt::AlignBottom);
    item2->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item2);

    QListWidgetItem *item3 = new QListWidgetItem(QIcon("E:\\3.jpg"), "C", videoEditList);
    item3->setTextAlignment(Qt::AlignCenter|Qt::AlignBottom);
    item3->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item3);


    //QString str = files.at(0).filepath;
//    QListWidgetItem *item4 = new QListWidgetItem(QIcon("E:\\2.jpg"), files.at(0).filepath, videoEditList);
    QListWidgetItem *item4 = new QListWidgetItem(QIcon("E:\\2.jpg"), "E:\\2.jpg", videoEditList);
    item4->setTextAlignment(Qt::AlignRight|Qt::AlignBottom);
    item4->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item4);


    dock->setWidget(videoEditList);
    addDockWidget(Qt::BottomDockWidgetArea, dock);



}
