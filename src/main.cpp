#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "utils/appManager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Utils::AppManager *appManager = new Utils::AppManager();

    return a.exec();
}
