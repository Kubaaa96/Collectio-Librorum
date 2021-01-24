#ifndef ADDBOOKDIALOG_H
#define ADDBOOKDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTabWidget>

#include "AddBookTab.h"
#include "AddBookISBNTab.h"
#include "AddBookPhotoTab.h"

class AddBookDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddBookDialog(QWidget* parent = nullptr);
    ~AddBookDialog() override;

private slots:
    void add();
    void cancel();

private:
    void connecting();
    void initGui();

    QVBoxLayout* m_mainVLayout;

    QTabWidget* m_tabWidget;
    AddBookTab* m_addBookTab;
    AddBookISBNTab* m_addBookISBNTab;
    AddBookPhotoTab* m_addBookPhotoTab;

    void initButtons();
    QHBoxLayout* m_buttonsHLayout;
    QPushButton* m_addButton;
    QPushButton* m_cancelButton;
    QSize m_currentSize{ 450, 500 };
    QSize m_minimumSize{ 400, 400 };
    QSize m_maximumSize{ 500, 700 };
    
};

#endif //!ADDBOOKDIALOG_H