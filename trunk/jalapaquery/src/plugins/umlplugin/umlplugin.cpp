#include "umlplugin.h"

UmlPlugin::UmlPlugin()
{
}

UmlPlugin::~UmlPlugin()
{
}

QList<TypeModel *> UmlPlugin::types()
{
    return QList<TypeModel *>();
}

QString UmlPlugin::modelName()
{
    return QString("UML");
}

QString UmlPlugin::pluginName()
{
    return "UML Plugin";
}

QString UmlPlugin::pluginVersion()
{
    return "0.1";
}

QString UmlPlugin::pluginVendor()
{
    return "JalapaQuery.org";
}

#define UmlPlugin_iid "org.jalapaquery.UmlPlugin"

Q_DECLARE_INTERFACE(UmlPlugin, UmlPlugin_iid)
//Q_EXPORT_PLUGIN2(umlplugin, UmlPlugin);
