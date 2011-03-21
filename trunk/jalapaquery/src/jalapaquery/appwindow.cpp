#include "appwindow.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMenuItem>
#include <QTabWidget>

AppWindow::AppWindow(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle(tr("JalapaQuery"));
    resize(800, 600);

    m_mainWidget = new QTabWidget;
    m_mainWidget->setDocumentMode(true);
    m_mainWidget->setMovable(true);
    m_mainWidget->setTabsClosable(true);
    setCentralWidget(m_mainWidget);

    connect(m_mainWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(closeTab(int)));

    loadPlugins();

    createMenus();
    createDocks();

    // load state

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(appClose()));
}

AppWindow::~AppWindow()
{

}

void AppWindow::closeEvent(QCloseEvent *event) {
    event->accept();
    // ignore if canceled
}

void AppWindow::appClose()
{
    // save state
}

void AppWindow::loadPlugins()
{

}

void AppWindow::newFile()
{

}

void AppWindow::closeTab(int index)
{
    m_mainWidget->removeTab(index);
}

void AppWindow::createMenus()
{
    QMenuBar *menuBar;
#ifdef Q_OS_MACX
    menuBar = new QMenuBar;
#else
    menuBar = new QMenuBar(this);
#endif

    m_file = new QMenu(tr("&File"), menuBar);
    m_edit = new QMenu(tr("&Edit"), menuBar);
    m_view = new QMenu(tr("&View"), menuBar);
    m_tools = new QMenu(tr("&Tools"), menuBar);
    m_help = new QMenu(tr("&Help"), menuBar);

    menuBar->addMenu(m_file);
    menuBar->addMenu(m_edit);
    menuBar->addMenu(m_view);
    menuBar->addMenu(m_tools);
    menuBar->addMenu(m_help);

    setMenuBar(menuBar);
}

void AppWindow::createDocks()
{

}
