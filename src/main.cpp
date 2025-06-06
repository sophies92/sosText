#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "app/app.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sosText::app::App *app = new sosText::app::App();

    return a.exec();
}
