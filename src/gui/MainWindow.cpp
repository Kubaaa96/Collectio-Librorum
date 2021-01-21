#include "MainWindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent, Qt::WindowTitleHint
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint
        | Qt::WindowCloseButtonHint)
    , m_centralWidget(new QWidget(this))
    , m_menuBar(new QMenuBar(m_centralWidget))
    , m_fileMenu(new QMenu(tr("File")))
    , m_addBookAction(new QAction(tr("Add Book")))
    , m_addLibraryAction(new QAction(tr("Add Library")))
    , m_addCollectionAction(new QAction(tr("Add Collection")))
    , m_editMenu(new QMenu(tr("Edit")))
    , m_optionsMenu(new QMenu(tr("Options")))
    , m_settingsAction(new QAction(tr("Settings")))
    , m_aboutMenu(new QMenu(tr("About")))
    , m_aboutAction(new QAction(tr("About")))
    , m_helpAction(new QAction(tr("Help")))
    , m_settingsDialog(new SettingsDialog(this))
    , m_aboutDialog(new AboutDialog(this))
    , m_helpDialog(new HelpDialog(this))
{
    initGui();
    connecting();
}

MainWindow::~MainWindow()
{
    delete m_fileMenu;
    delete m_addBookAction;
    delete m_addLibraryAction;
    delete m_addCollectionAction;
    delete m_editMenu;
    delete m_optionsMenu;
    delete m_settingsAction;
    delete m_aboutMenu;
    delete m_aboutAction;
    delete m_helpAction;
    delete m_menuBar;
    delete m_centralWidget;
    delete m_settingsDialog;
    delete m_aboutDialog;
    delete m_helpDialog;
}

void MainWindow::addBook()
{
    qDebug("Add Book");
}


void MainWindow::addLibrary()
{
    qDebug("Add Library");
}

void MainWindow::addCollection()
{
    qDebug("Add Collection");
}

void MainWindow::settings()
{
    m_settingsDialog->show();
}

void MainWindow::about()
{
    m_aboutDialog->show();
}

void MainWindow::help()
{
    m_helpDialog->show();
}

void MainWindow::initGui()
{
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);

    initMenu();
    
    setCentralWidget(m_centralWidget);
}

void MainWindow::initMenu()
{
    m_fileMenu->addAction(m_addBookAction);
    m_fileMenu->addAction(m_addLibraryAction);
    m_fileMenu->addAction(m_addCollectionAction);
    m_menuBar->addMenu(m_fileMenu);

    m_menuBar->addMenu(m_editMenu);

    m_optionsMenu->addAction(m_settingsAction);
    m_menuBar->addMenu(m_optionsMenu);

    m_aboutMenu->addAction(m_aboutAction);
    m_aboutMenu->addAction(m_helpAction);
    m_menuBar->addMenu(m_aboutMenu);
}

void MainWindow::connecting()
{
    connect(m_addBookAction, &QAction::triggered, this, &MainWindow::addBook);
    connect(m_addLibraryAction, &QAction::triggered, this, &MainWindow::addLibrary);
    connect(m_addCollectionAction, &QAction::triggered, this, &MainWindow::addCollection);

    connect(m_settingsAction, &QAction::triggered, this, &MainWindow::settings);
    connect(m_aboutAction, &QAction::triggered, this, &MainWindow::about);
    connect(m_helpAction, &QAction::triggered, this, &MainWindow::help);
}
