#include <QtWidgets/QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QDir>
#include <QLocale>
#include <QDebug>
#include <QStyleFactory>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("jalapaquery");
    QCoreApplication::setOrganizationDomain("jalapaquery.org");
    QCoreApplication::setApplicationName("jalapaquery");

#ifdef Q_OS_MAC
    app.setAttribute(Qt::AA_DontShowIconsInMenus);

    // Fix for the Dark Mode.
    qApp->setStyle(QStyleFactory::create("Fusion"));

    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53,53,53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25,25,25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53,53,53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    qApp->setPalette(darkPalette);

    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
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

    MainWindow w;
    w.show();

    return app.exec();
}
