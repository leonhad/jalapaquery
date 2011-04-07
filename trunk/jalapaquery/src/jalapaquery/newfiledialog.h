#ifndef NEWFILEDIALOG_H
#define NEWFILEDIALOG_H

#include <QDialog>
#include <QList>

class ModelInterface;

namespace Ui {
    class NewFileDialog;
}

class NewFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewFileDialog(QList<ModelInterface *> models, QWidget *parent = 0);
    ~NewFileDialog();

private slots:
    void modelChanged();
    void modelSelected();

private:
    Ui::NewFileDialog *ui;
    QList<ModelInterface *> m_models;
};

#endif // NEWFILEDIALOG_H
