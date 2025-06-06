#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "app/app.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sosText::App::App *app = new sosText::App::App();

    return a.exec();
}
