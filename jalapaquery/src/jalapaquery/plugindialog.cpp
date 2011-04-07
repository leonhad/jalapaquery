#include "plugindialog.h"
#include "ui_plugindialog.h"
#include "modelinterface.h"
#include <QStringList>
#include <QTreeWidgetItem>

PluginDialog::PluginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluginDialog)
{
    ui->setupUi(this);

    QStringList list;
    list << tr("Name") << tr("Version") << tr("Vendor");
    ui->pluginList->setHeaderLabels(list);
    ui->pluginList->setColumnWidth(1, 60);
    ui->pluginList->setColumnWidth(2, 150);
    ui->pluginList->setColumnWidth(0, 300);
}

void PluginDialog::setModelPlugins(QList<ModelInterface *> list)
{
    QTreeWidgetItem *root = new QTreeWidgetItem(ui->pluginList);
    root->setText(0, "Modeling Tool");

    foreach(ModelInterface *model, list) {
        QTreeWidgetItem *modelItem = new QTreeWidgetItem(root);
        modelItem->setText(0, model->pluginName());
        modelItem->setText(1, model->pluginVersion());
        modelItem->setText(2, model->pluginVendor());
    }
    root->setExpanded(true);
}

PluginDialog::~PluginDialog()
{
    delete ui;
}
