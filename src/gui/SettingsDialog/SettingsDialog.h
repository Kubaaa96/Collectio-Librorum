#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "../BookHolder/BookWidget.h"
#include <QVBoxLayout>

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget* parent = nullptr);
    ~SettingsDialog() override;

private:
    void initGui();
    QSize m_minimumDialogSize{ 500, 600 };
    QSize m_initialDialogSize{ 600, 700 };
};

#endif // !SETTINGSDIALOG_H