#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>

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
    QVBoxLayout* m_mainLayout;
    QPixmap m_logo;
    QLabel* m_logoLabel;
    QString m_aboutString;
    QLabel* m_aboutLabel;
    
};

#endif // !ABOUTDIALOG_H