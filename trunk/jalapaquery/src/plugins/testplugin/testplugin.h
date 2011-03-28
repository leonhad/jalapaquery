#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include <testinterface.h>
#include <QObject>

class TestPlugin : public QObject, public TestInterface
{
    Q_OBJECT
    Q_INTERFACES(TestInterface)

public:
    TestPlugin();
    virtual ~TestPlugin();
    virtual QString getName();
    virtual void setMainWindow(MainWindow *) {}
};

#endif // TESTPLUGIN_H
