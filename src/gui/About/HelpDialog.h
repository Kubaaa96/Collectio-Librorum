#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>


class HelpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelpDialog(QWidget* parent = nullptr);
    ~HelpDialog() override;

private:
    void initGui();
    QSize m_minimumDialogSize{ 500, 600 };
    QSize m_initialDialogSize{ 600, 700 };
    QVBoxLayout* m_mainLayout;
    QLabel* m_logoLabel;
    QString m_helpString;
    QLabel* m_helpLabel;
};

#endif // !HELPDIALOG_H