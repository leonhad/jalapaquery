#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

class QGraphicsScene;
class ModelInterface;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void aboutDialog();
    void pluginDialog();
    void newFile();
    void closeTab(int);
    void appClose();

protected:
    virtual void closeEvent(QCloseEvent *);

private:
    void loadPlugins();
    void loadModelPlugins();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_scene;

    QList<ModelInterface *> m_model_plugins;
};

#endif // MAINWINDOW_H
