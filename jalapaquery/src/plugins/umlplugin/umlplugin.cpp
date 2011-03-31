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

Q_EXPORT_PLUGIN2(umlplugin, UmlPlugin);
