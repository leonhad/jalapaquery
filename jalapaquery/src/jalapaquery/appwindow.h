#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QMainWindow>

class QDockWidget;
class QMenu;
class QToolBar;
class QTabWidget;

class AppWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

public slots:
    void newFile();
    void appClose();
    void closeTab(int);

protected:
    virtual void closeEvent(QCloseEvent *);

private:
    void loadPlugins();
    void createMenus();
    void createDocks();

    QMenu *m_file;
    QMenu *m_edit;
    QMenu *m_view;
    QMenu *m_tools;
    QMenu *m_help;

    QTabWidget *m_mainWidget;
    QDockWidget *m_projectDock;
    QDockWidget *m_toolsDock;
};

#endif // APPWINDOW_H
