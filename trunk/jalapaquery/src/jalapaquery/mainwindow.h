#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QGraphicsScene;

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
    void newFile();
    void closeTab(int);
    void appClose();

protected:
    virtual void closeEvent(QCloseEvent *);

private:
    Ui::MainWindow *ui;

    QGraphicsScene *m_scene;
};

#endif // MAINWINDOW_H
