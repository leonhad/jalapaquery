#ifndef NEWFILEDIALOG_H
#define NEWFILEDIALOG_H

#include <QtWidgets/QDialog>
#include <QList>

class ModelInterface;
class TypeModel;

namespace Ui {
    class NewFileDialog;
}

class NewFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewFileDialog(QList<ModelInterface *> models, QWidget *parent = 0);
    ~NewFileDialog();
    QString projectName();
    TypeModel *typeModel();

private slots:
    void modelChanged();
    void modelSelected();
    void done(int value);

private:
    Ui::NewFileDialog *ui;
    QList<ModelInterface *> m_models;

    QString m_projectName;
    TypeModel *m_type;
};

#endif // NEWFILEDIALOG_H
