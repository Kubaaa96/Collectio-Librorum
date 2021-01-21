#include "AboutDialog.h"

AboutDialog::AboutDialog(QWidget* parent)
    : QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
    , m_mainLayout(new QVBoxLayout(this))
    , m_logoLabel(new QLabel())
    , m_aboutString(QString(tr("About")))
    , m_aboutLabel(new QLabel(m_aboutString))
    
{
    initGui();
}

AboutDialog::~AboutDialog()
{
    delete m_logoLabel;
    delete m_aboutLabel;
    delete m_mainLayout;
}

void AboutDialog::initGui()
{
    setWindowTitle(QString("Collectio Librorum - About"));
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
    m_logo = QPixmap(":/general/img/logo.png");
    m_logoLabel->setPixmap(m_logo);
    m_logoLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_logoLabel);
    m_aboutLabel->setAlignment(Qt::AlignCenter);
    m_mainLayout->addWidget(m_aboutLabel);
    
}
