#ifndef TESTINTERFACE_H
#define TESTINTERFACE_H

#include <QString>
#include <QtPlugin>

class TestInterface
{
public:
    virtual ~TestInterface() { }

    virtual QString getName() = 0;
};

Q_DECLARE_INTERFACE(TestInterface, "com.jalapaquery.TestInterface/1.0");

#endif // TESTINTERFACE_H
