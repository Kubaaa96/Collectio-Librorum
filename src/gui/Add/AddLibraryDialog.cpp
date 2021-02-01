#include "AddLibraryDialog.h"

AddLibraryDialog::AddLibraryDialog(QWidget* parent)
    : QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainLayout(new QVBoxLayout(this))
    , m_libraryNameHLayout(new QHBoxLayout())
    , m_libraryNameLabel(new QLabel(tr("Library Name")))
    , m_libraryNameLineEdit(new QLineEdit())
    , m_descriptionTextEdit(new QTextEdit())
    , m_buttonsHLayout(new QHBoxLayout())
    , m_addLibraryButton(new QPushButton(tr("Add")))
    , m_cancelLibraryButton(new QPushButton(tr("Cancel")))
{
    initGui();
}

AddLibraryDialog::~AddLibraryDialog()
{
    delete m_cancelLibraryButton;
    delete m_addLibraryButton;
    delete m_buttonsHLayout;
    delete m_descriptionTextEdit;
    delete m_libraryNameLineEdit;
    delete m_libraryNameLabel;
    delete m_libraryNameHLayout;
    delete m_mainLayout;
}

void AddLibraryDialog::initGui()
{
    setWindowTitle(tr("Collectio Librorum - Add Library"));
    resize(m_currentSize);
    setMinimumSize(m_minimumSize);
    setMaximumSize(m_maximumSize);

    initLayouts();

    m_libraryNameHLayout->addWidget(m_libraryNameLabel);
    m_libraryNameHLayout->addWidget(m_libraryNameLineEdit);

    m_buttonsHLayout->addWidget(m_addLibraryButton);
    m_buttonsHLayout->addWidget(m_cancelLibraryButton);
}

void AddLibraryDialog::initLayouts()
{

    m_mainLayout->addLayout(m_libraryNameHLayout);
    m_mainLayout->addWidget(m_descriptionTextEdit);
    m_mainLayout->addLayout(m_buttonsHLayout);
}
