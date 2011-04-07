#include "newfiledialog.h"
#include "ui_newfiledialog.h"
#include "modelinterface.h"
#include <QListWidgetItem>
#include <QIcon>
#include <QDebug>

NewFileDialog::NewFileDialog(QList<ModelInterface *> models, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFileDialog)
{
    ui->setupUi(this);
    m_models = models;

    int loop;
    for (loop = 0; loop < m_models.size(); loop++) {
        ModelInterface *mi = m_models.at(loop);
        new QListWidgetItem(mi->modelName(), ui->projectType, loop);
    }
    connect(ui->projectType, SIGNAL(itemSelectionChanged()), this, SLOT(modelChanged()));
    //QListWidgetItem *item = new QListWidgetItem(QIcon(":/icons/icon128.png"), "teste", ui->fileType);
}

void NewFileDialog::modelChanged()
{
    ModelInterface *mi = m_models.at(ui->projectType->currentItem()->type());
    ui->fileType->clear();;

    int loop;
    for (loop = 0; loop < mi->types().size(); loop++) {
        TypeModel *type = mi->types().at(loop);
        new QListWidgetItem(type->icon(), type->name(), ui->fileType, loop);
    }
}

NewFileDialog::~NewFileDialog()
{
    delete ui;
}
