#include "testplugin.h"

TestPlugin::TestPlugin()
{
}

TestPlugin::~TestPlugin()
{
}

QString TestPlugin::getName()
{
    return "Test Plugin";
}

Q_EXPORT_PLUGIN2(testplugin, TestPlugin);
