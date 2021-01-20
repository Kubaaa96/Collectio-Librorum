#include "HelpDialog.h"

HelpDialog::HelpDialog(QWidget* parent):
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainLayout(new QVBoxLayout(this))
    , m_logoLabel(new QLabel(QString("Test")))
    , m_helpString(QString("Help"))
    , m_helpLabel(new QLabel(m_helpString))
{
    initGui();
}

HelpDialog::~HelpDialog()
{
    delete m_logoLabel;
    delete m_helpLabel;
    delete m_mainLayout;
}

void HelpDialog::initGui()
{
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
    m_logoLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_logoLabel);
    m_helpLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_helpLabel);
}
