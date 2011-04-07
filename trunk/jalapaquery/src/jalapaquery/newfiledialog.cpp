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
}

void NewFileDialog::modelChanged()
{
    ModelInterface *mi = m_models.at(ui->projectType->currentItem()->type());

    disconnect(ui->fileType, SIGNAL(itemSelectionChanged()), this, SLOT(modelSelected()));
    ui->fileType->clear();
    ui->details->clear();

    int loop;
    for (loop = 0; loop < mi->types().size(); loop++) {
        TypeModel *type = mi->types().at(loop);
        new QListWidgetItem(type->icon(), type->name(), ui->fileType, loop);
    }    
    connect(ui->fileType, SIGNAL(itemSelectionChanged()), this, SLOT(modelSelected()));
}

void NewFileDialog::modelSelected()
{
    ModelInterface *mi = m_models.at(ui->projectType->currentItem()->type());
    TypeModel *type = mi->types().at(ui->fileType->currentItem()->type());
    ui->details->setPlainText(type->description());
}

NewFileDialog::~NewFileDialog()
{
    delete ui;
}
