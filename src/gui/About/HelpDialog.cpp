#include "HelpDialog.h"

HelpDialog::HelpDialog(QWidget* parent):
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainLayout(new QVBoxLayout(this))
    , m_logoLabel(new QLabel())
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
    setWindowTitle(QString("Collectio Librorum - Help"));
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
    m_logo = QPixmap(":/general/img/logo.png");
    m_logoLabel->setPixmap(m_logo);
    m_logoLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_logoLabel);
    m_helpLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_helpLabel);
}
