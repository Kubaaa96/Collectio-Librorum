#include "AddCollectionDialog.h"

AddCollectionDialog::AddCollectionDialog(QWidget* parent)
    : QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainVLayout(new QVBoxLayout(this))
    , m_nameHLayout(new QHBoxLayout())
    , m_nameLabel(new QLabel(tr("Name")))
    , m_nameLineEdit(new QLineEdit())
    , m_buttonsHLayout(new QHBoxLayout())
    , m_addPushButton(new QPushButton(tr("Add")))
    , m_cancelPushButton(new QPushButton(tr("Cancel")))
{
    initGui();
}

AddCollectionDialog::~AddCollectionDialog()
{
    delete m_cancelPushButton;
    delete m_addPushButton;
    delete m_buttonsHLayout;
    delete m_nameLineEdit;
    delete m_nameLabel;
    delete m_nameHLayout;
    delete m_mainVLayout;
}

void AddCollectionDialog::initGui()
{
    setWindowTitle("CollectioL Librorum - Add Collection");
    resize(m_currentSize);
    setMinimumSize(m_minimumSize);
    setMaximumSize(m_maximumSize);

    initLayouts();

    m_nameHLayout->addWidget(m_nameLabel);
    m_nameHLayout->addWidget(m_nameLineEdit);

    m_buttonsHLayout->addWidget(m_addPushButton);
    m_buttonsHLayout->addWidget(m_cancelPushButton);
}

void AddCollectionDialog::initLayouts()
{
    m_mainVLayout->addLayout(m_nameHLayout);
    m_mainVLayout->addLayout(m_buttonsHLayout);
}
