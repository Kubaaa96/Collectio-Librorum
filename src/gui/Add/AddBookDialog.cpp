#include "AddBookDialog.h"


AddBookDialog::AddBookDialog(QWidget* parent)
    : QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainVLayout(new QVBoxLayout(this))
    , m_tabWidget(new QTabWidget())
    , m_addBookTab(new AddBookTab())
    , m_addBookISBNTab(new AddBookISBNTab())
    , m_addBookPhotoTab(new AddBookPhotoTab())
    , m_buttonsHLayout(new QHBoxLayout())
    , m_addButton(new QPushButton(tr("Add")))
    , m_cancelButton(new QPushButton(tr("Cancel")))
{
    initGui();
    connecting();
}

AddBookDialog::~AddBookDialog()
{
    delete m_addBookTab;
    delete m_addBookISBNTab;
    delete m_addBookPhotoTab;
    delete m_tabWidget;
    delete m_addButton;
    delete m_cancelButton;
    delete m_buttonsHLayout;
    delete m_mainVLayout;
}

void AddBookDialog::add()
{
    qDebug("Add Book");
}

void AddBookDialog::cancel()
{
    qDebug("Cancel");
}

void AddBookDialog::connecting()
{
    connect(m_addButton, &QPushButton::pressed, this, &AddBookDialog::add);
    connect(m_cancelButton, &QPushButton::pressed, this, &AddBookDialog::cancel);
}

void AddBookDialog::initGui()
{
    resize(m_currentSize);
    setMinimumSize(m_minimumSize);
    setMaximumSize(m_maximumSize);
    setWindowTitle(tr("Collectio Librorum - Add Book"));
    // TODO set max and min size of window
    // TODO adjust size of LineEdits
    m_tabWidget->addTab(m_addBookTab, tr("Add Book"));
    m_tabWidget->addTab(m_addBookISBNTab, tr("ISBN"));
    m_tabWidget->addTab(m_addBookPhotoTab, tr("Photo"));
    m_mainVLayout->addWidget(m_tabWidget);
    m_mainVLayout->addLayout(m_buttonsHLayout);
    initButtons();
}

void AddBookDialog::initButtons()
{
    m_buttonsHLayout->addWidget(m_addButton);
    m_buttonsHLayout->addWidget(m_cancelButton);
}
