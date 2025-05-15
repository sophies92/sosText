#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "ui/mainWindow/mainWindow.h"
#include "ui/openFileDialog/loadFileDialogWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.showMaximized();

    return a.exec();
}
