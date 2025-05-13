#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "mainWindow.h"
#include "loadDialogWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.showMaximized();

    return a.exec();
}
