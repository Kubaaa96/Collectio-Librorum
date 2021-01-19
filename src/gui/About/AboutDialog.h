#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget* parent = nullptr);
    ~AboutDialog() override;

private:
    void initGui();
    QSize m_minimumDialogSize{ 500, 600 };
    QSize m_initialDialogSize{ 600, 700 };
};

#endif // !ABOUTDIALOG_H