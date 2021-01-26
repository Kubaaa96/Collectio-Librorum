#ifndef ADDBOOKISBNTAB_H
#define ADDBOOKISBNTAB_H

#include <QWidget>
#include <QPushButton>
#include "AddTab.h"

class AddBookISBNTab : public AddTab
{
    Q_OBJECT
public:

    explicit AddBookISBNTab(QWidget* parent = nullptr);
    ~AddBookISBNTab();
private slots:
    void editTitle();

private:
    void initGui();
    void initLayouts();

    QHBoxLayout* m_isbnHLayout;
    QLabel* m_isbnLabel;
    QLineEdit* m_isbnLineEdit;
    QPushButton* m_loadISBNPushButton;

    void initSingleRow(QBoxLayout* layout, QLabel* nameOflabel, QLabel* loadedLabel, QLineEdit* lineEdit, QToolButton* toolButton);

    void connecting();

};
#endif //!ADDBOOKISBNTAB_H