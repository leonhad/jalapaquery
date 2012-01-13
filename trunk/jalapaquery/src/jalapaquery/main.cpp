#include <QtGui/QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDir>
#include <QLocale>
#include <QDebug>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("jalapaquery");
    QCoreApplication::setOrganizationDomain("jalapaquery.org");
    QCoreApplication::setApplicationName("jalapaquery");

#ifdef Q_OS_MAC
    app.setAttribute(Qt::AA_DontShowIconsInMenus);
#endif

    QTranslator qtTranslator;
    qtTranslator.load("qt_" + QLocale::system().name(),
                      QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    app.installTranslator(&qtTranslator);

    QDir translationDir(app.applicationDirPath());
#ifdef Q_OS_MAC
    if (translationDir.dirName() == "MacOS") {
        translationDir.cdUp();
        translationDir.cd("Resources");
    }
#else
    translationDir.cd("resources");
#endif

    QTranslator myappTranslator;
    myappTranslator.load("jalapaquery_" + QLocale::system().name(), translationDir.absolutePath());
    app.installTranslator(&myappTranslator);

    //qDebug() << QLocale::system().name();

    MainWindow w;
    w.show();

    return app.exec();
}
