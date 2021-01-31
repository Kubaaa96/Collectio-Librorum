#ifndef ADDLIBRARYDIALOG_H
#define ADDLIBRARYDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class AddLibraryDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddLibraryDialog(QWidget* parent = nullptr);
    ~AddLibraryDialog() override;
private:
    void initGui();
    void initLayouts();

    QVBoxLayout* m_mainLayout;

    QHBoxLayout* m_libraryNameHLayout;
    QLabel* m_libraryNameLabel;
    QLineEdit* m_libraryNameLineEdit;
    
    QTextEdit* m_descriptionTextEdit;
        
    QHBoxLayout* m_buttonsHLayout;
    QPushButton* m_addLibraryButton;
    QPushButton* m_cancelLibraryButton;

    QSize m_currentSize{ 450, 500 };
    QSize m_minimumSize{ 400, 400 };
    QSize m_maximumSize{ 500, 700 };
};

#endif //!ADDLIBRARYDIALOG_H