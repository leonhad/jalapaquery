#ifndef TESTINTERFACE_H
#define TESTINTERFACE_H

#include <QString>
#include <QtPlugin>
#include "mainwindow.h"

class TestInterface
{
public:
    virtual ~TestInterface() { }

    virtual void setMainWindow(MainWindow *m) = 0;

    virtual QString getName() = 0;
};

Q_DECLARE_INTERFACE(TestInterface, "com.jalapaquery.TestInterface/1.0");

#endif // TESTINTERFACE_H
