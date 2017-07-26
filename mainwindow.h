#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QIcon>
#include <QPixmap>
#include <QPalette>

#include "linklist.h"
#include "clinklist.h"
#include "dlinklist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

private:
    Ui::MainWindow *ui;
    LinkList linkList;
    CLinkList clinklist;
    DLinkList dlinklist;

    void initUI();
};

#endif // MAINWINDOW_H
