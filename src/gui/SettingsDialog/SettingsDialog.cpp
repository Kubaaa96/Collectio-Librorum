#include "SettingsDialog.h"

SettingsDialog::SettingsDialog(QWidget* parent):
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
{
    initGui();
}

SettingsDialog::~SettingsDialog()
{
}

void SettingsDialog::initGui()
{
    setMinimumSize(m_minimumDialogSize);
    resize(m_initialDialogSize);
}