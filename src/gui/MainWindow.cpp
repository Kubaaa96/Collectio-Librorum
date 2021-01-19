#include "MainWindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent, Qt::WindowTitleHint
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint
        | Qt::WindowCloseButtonHint)
    , m_centralWidget(new QWidget(this))
    , m_menuBar(new QMenuBar(m_centralWidget))
    , m_file(new QMenu("&File"))
    , m_addBook(new QAction("&Add Book"))
    , m_addLibrary(new QAction("&Add Library"))
    , m_addCollection(new QAction("Add Collection"))
    , m_edit(new QMenu("&Edit"))
    , m_options(new QMenu("&Options"))
    , m_settingsDialog(new QAction("&Settings"))
    , m_about(new QMenu("&About"))
    , m_aboutDialog(new QAction("&About"))
    , m_helpDialog(new QAction("&Help"))
{
    initGui();
    connecting();
}

MainWindow::~MainWindow()
{
    delete m_file;
    delete m_addBook;
    delete m_addLibrary;
    delete m_addCollection;
    delete m_edit;
    delete m_options;
    delete m_settingsDialog;
    delete m_about;
    delete m_aboutDialog;
    delete m_helpDialog;
    delete m_menuBar;
    delete m_centralWidget;
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
    qDebug("Settings");
}

void MainWindow::about()
{
    qDebug("About");
}

void MainWindow::help()
{
    qDebug("Help");
}

void MainWindow::initGui()
{
    setMinimumSize({ 800, 600 });
    setMaximumSize({ 1920, 1080 });
    resize(1240, 720);

    initMenu();
    
    setCentralWidget(m_centralWidget);
}

void MainWindow::initMenu()
{
    m_file->addAction(m_addBook);
    m_file->addAction(m_addLibrary);
    m_file->addAction(m_addCollection);
    m_menuBar->addMenu(m_file);

    m_menuBar->addMenu(m_edit);

    m_options->addAction(m_settingsDialog);
    m_menuBar->addMenu(m_options);

    m_about->addAction(m_aboutDialog);
    m_about->addAction(m_helpDialog);
    m_menuBar->addMenu(m_about);
}

void MainWindow::connecting()
{
    connect(m_addBook, &QAction::triggered, this, &MainWindow::addBook);
    connect(m_addLibrary, &QAction::triggered, this, &MainWindow::addLibrary);
    connect(m_addCollection, &QAction::triggered, this, &MainWindow::addCollection);

    connect(m_settingsDialog, &QAction::triggered, this, &MainWindow::settings);
    connect(m_aboutDialog, &QAction::triggered, this, &MainWindow::about);
    connect(m_helpDialog, &QAction::triggered, this, &MainWindow::help);
}
