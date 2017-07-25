#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
    //set mainWindow's title and ico
    this->setWindowTitle("LinkListVisualizer");
    QIcon exeIcon(":/ico/resource/exe.ico");
    this->setWindowIcon(exeIcon);

    //set background image
    QPixmap background(":/ico/resource/background.png");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);

    //set tool tip
    ui->pushButton1->setToolTip("<img src=':/tip/resource/linklist.png' /> ");
    ui->pushButton2->setToolTip("<img src=':/tip/resource/clinklist.png' />");
    ui->pushButton3->setToolTip("<img src=':/tip/resource/dlinklist.png' />");
}

//LinkList
void MainWindow::on_pushButton1_clicked()
{
    linkList.show();
}
//Cicular LinkList
void MainWindow::on_pushButton2_clicked()
{

}
//Double LinkList
void MainWindow::on_pushButton3_clicked()
{

}
