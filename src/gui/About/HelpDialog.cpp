#include "HelpDialog.h"

HelpDialog::HelpDialog(QWidget* parent):
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
{
    initGui();
}

HelpDialog::~HelpDialog()
{
}

void HelpDialog::initGui()
{
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
}
