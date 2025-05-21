#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "ui/mainWindow/mainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.showMaximized();

    return a.exec();
}
