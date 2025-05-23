#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "app/app.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    App::App *app = new App::App();

    return a.exec();
}
