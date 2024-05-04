#include "practical_use.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    Practical_use w;
    w.show();
    return a.exec();
}
