#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Q_INIT_RESOURCE(icons);

    QCoreApplication::setOrganizationName("jalapaquery");
    QCoreApplication::setOrganizationDomain("jalapaquery.org");
    QCoreApplication::setApplicationName("jalapaquery");

    app.setAttribute(Qt::AA_DontShowIconsInMenus);

    MainWindow w;
    w.show();

    return app.exec();
}
