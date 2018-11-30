#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QListWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void createDockWindows();

    QTextEdit   *textEdit;
    QListWidget *videoEditList;
};

#endif // MAINWINDOW_H
