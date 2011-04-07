#include <QtGui/QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDebug>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Q_INIT_RESOURCE(icons);

    QCoreApplication::setOrganizationName("jalapaquery");
    QCoreApplication::setOrganizationDomain("jalapaquery.org");
    QCoreApplication::setApplicationName("jalapaquery");

    app.setAttribute(Qt::AA_DontShowIconsInMenus);

    QTranslator qtTranslator;
    qtTranslator.load("qt_" + QLocale::system().name(),
                      QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    app.installTranslator(&qtTranslator);

    QTranslator myappTranslator;
    myappTranslator.load("jalapaquery_" + QLocale::system().name());
    app.installTranslator(&myappTranslator);

    qDebug() << QLocale::system().name();

    MainWindow w;
    w.show();

    return app.exec();
}
