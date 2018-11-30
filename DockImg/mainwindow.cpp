#include "mainwindow.h"
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), textEdit(new QTextEdit)
{
    setMinimumSize(1500,800);
    setCentralWidget(textEdit);

    createDockWindows();

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



    QListWidgetItem *item1 = new QListWidgetItem(QIcon("D:\\1.jpg"), "A", videoEditList);
    item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    item1->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item1);


    QListWidgetItem *item2 = new QListWidgetItem(QIcon("D:\\2.jpg"), "B", videoEditList);
    item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    item1->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item2);

    QListWidgetItem *item3 = new QListWidgetItem(QIcon("D:\\3.jpg"), "C", videoEditList);
    item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignBottom);
    item1->setSizeHint(QSize(100, 120));
    videoEditList->addItem(item3);

    dock->setWidget(videoEditList);
    addDockWidget(Qt::RightDockWidgetArea, dock);



}
