#include "plugindialog.h"
#include "ui_plugindialog.h"
#include <QStringList>
#include "modelinterface.h"

PluginDialog::PluginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluginDialog)
{
    ui->setupUi(this);

    QStringList list;
    list << tr("Name") << tr("Version") << tr("Vendor");
    ui->pluginList->setHeaderLabels(list);
}

void PluginDialog::setModelPlugins(QList<ModelInterface *> list)
{

}

PluginDialog::~PluginDialog()
{
    delete ui;
}
