#include <QtGui/QApplication>
#include "appwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(resources);

    QCoreApplication::setOrganizationName("jalapaquery");
    QCoreApplication::setOrganizationDomain("jalapaquery.org");
    QCoreApplication::setApplicationName("jalapaquery");

    AppWindow w;
    w.show();

    return a.exec();
}
