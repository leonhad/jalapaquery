#include "newfiledialog.h"
#include "ui_newfiledialog.h"
#include "modelinterface.h"
#include <QListWidgetItem>

NewFileDialog::NewFileDialog(QList<ModelInterface *> models, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewFileDialog)
{
    ui->setupUi(this);
    m_models = models;

    int loop;
    for (loop = 0; loop < m_models.size(); loop++) {
        ModelInterface *mi = m_models.at(loop);
        QListWidgetItem *item = new QListWidgetItem(mi->getModelName(), ui->projectType, loop);
    }

}

NewFileDialog::~NewFileDialog()
{
    delete ui;
}
