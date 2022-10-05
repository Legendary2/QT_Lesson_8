#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QStyleFactory>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    QTranslator translator;
//  translator.load(QApplication::applicationName() + "_" + QLocale::system().name());
    a.installTranslator(&translator);
    qApp->setStyle(QStyleFactory::create("Fusion"));
    //qDebug() << QDateTime::currentDateTime();
    MainWindow w;
    w.setWindowTitle("");
    w.show();
    return a.exec();
}
