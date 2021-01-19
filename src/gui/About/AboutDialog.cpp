#include "AboutDialog.h"

AboutDialog::AboutDialog(QWidget* parent):
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
{
    initGui();
}

AboutDialog::~AboutDialog()
{
}

void AboutDialog::initGui()
{
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
}
