#include "umlplugin.h"

UmlPlugin::UmlPlugin()
{
}

UmlPlugin::~UmlPlugin()
{
}

QString UmlPlugin::getModelName()
{
    return QString("UML");
}

QString UmlPlugin::getPluginName()
{
    return "UML Plugin";
}

QString UmlPlugin::getPluginVersion()
{
    return "0.1";
}

QString UmlPlugin::getPluginVendor()
{
    return "JalapaQuery.org";
}


Q_EXPORT_PLUGIN2(umlplugin, UmlPlugin);
