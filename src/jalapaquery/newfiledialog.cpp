#include "newfiledialog.h"
#include "ui_newfiledialog.h"
#include "modelinterface.h"
#include <QtWidgets/QListWidgetItem>
#include <QtGui/QIcon>
#include <QtWidgets/QMessageBox>

NewFileDialog::NewFileDialog(QList<ModelInterface *> models, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFileDialog)
{
    ui->setupUi(this);
    m_models = models;
    setWindowFlags(Qt::Sheet);

    for (int loop = 0; loop < m_models.size(); loop++) {
        ModelInterface *mi = m_models.at(loop);
        new QListWidgetItem(mi->modelName(), ui->projectType, loop);
    }
    connect(ui->projectType, SIGNAL(itemSelectionChanged()), this, SLOT(modelChanged()));

    if (ui->projectType->count() > 0) {
        ui->projectType->setCurrentItem(ui->projectType->item(0));
    }
}

void NewFileDialog::done(int value)
{
    if(QDialog::Accepted == value) {
        if (ui->fileType->selectedItems().size() == 0) {
            QMessageBox *message = new QMessageBox(this);
            message->setText(tr("Select a template first."));
            message->setIcon(QMessageBox::Warning);
            message->setWindowFlags(Qt::Sheet);
            message->setWindowModality(Qt::WindowModal);
            message->exec();
        } else if(ui->projectName->text().size() > 0) {
            ModelInterface *mi = m_models.at(ui->projectType->currentItem()->type());
            m_type = mi->types().at(ui->fileType->currentItem()->type());
            m_projectName = ui->projectName->text();
            QDialog::done(value);
        } else {
            QMessageBox *message = new QMessageBox(this);
            message->setText(tr("The project name is mandatory."));
            message->setIcon(QMessageBox::Warning);
            message->setWindowFlags(Qt::Sheet);
            message->setWindowModality(Qt::WindowModal);
            message->exec();
        }
    } else  {
        QDialog::done(value);
    }
}

QString NewFileDialog::projectName()
{
    return m_projectName;
}

TypeModel *NewFileDialog::typeModel()
{
    return m_type;
}

void NewFileDialog::modelChanged()
{
    ModelInterface *mi = m_models.at(ui->projectType->currentItem()->type());

    disconnect(ui->fileType, SIGNAL(itemSelectionChanged()), this, SLOT(modelSelected()));
    ui->fileType->clear();
    ui->details->clear();

    int loop;
    for (loop = 0; loop < mi->types().size(); loop++)
    {
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
