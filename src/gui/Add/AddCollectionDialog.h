#ifndef ADDCOLLECTIONDIALOG_H
#define ADDCOLLECTIONDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class AddCollectionDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddCollectionDialog(QWidget* parent = nullptr);
    ~AddCollectionDialog() override;
private:
    void initGui();
    void initLayouts();

    QVBoxLayout* m_mainVLayout;

    QHBoxLayout* m_nameHLayout;
    QLabel* m_nameLabel;
    QLineEdit* m_nameLineEdit;

    QHBoxLayout* m_buttonsHLayout;
    QPushButton* m_addPushButton;
    QPushButton* m_cancelPushButton;

    QSize m_currentSize{ 450, 500 };
    QSize m_minimumSize{ 400, 400 };
    QSize m_maximumSize{ 500, 700 };
};

#endif //!ADDCOLLECTIONDIALOG_H