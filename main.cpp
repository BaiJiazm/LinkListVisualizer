#include "mainwindow.h"
#include <QApplication>
#include <QTime>
#include <QSplashScreen>
#include <QPixmap>
#include <qthread.h>

void sleep(unsigned int msec)
{
    QTime reachTime=QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime()<reachTime)
        QApplication::processEvents(QEventLoop::AllEvents,100);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置启动图标
    QPixmap splash(":/ico/resource/splash.png");
    QSplashScreen splashScreen(splash);
    splashScreen.show();

    sleep(1000);

    MainWindow w;
    w.show();

    splashScreen.finish(&w);
    return a.exec();
}
