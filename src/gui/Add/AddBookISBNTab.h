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
    void editAuthors();
    void editPublisher();
    void editDate();
    void editVersion();
    void editGenre();
    void editISBN();
    void editLanguage();
    void editPages();

private:
    void initGui();
    void initLayouts();

    QHBoxLayout* m_isbnHLayout;
    QLabel* m_isbnLabel;
    QLineEdit* m_isbnLineEdit;
    QPushButton* m_loadISBNPushButton;

    void changeVisibilityOfLoadedLabelAndLineEdit(QLabel* loadedLabel, QLineEdit* lineEdit);

    void initSingleRow(QBoxLayout* layout, QLabel* nameOflabel, QLabel* loadedLabel, QLineEdit* lineEdit, QToolButton* toolButton);

    void connecting();

    std::size_t m_stretchFactorOfLabel{ 1 };
    std::size_t m_stretchFactorOfLineEditLoadedLabel{ 3 };

};
#endif //!ADDBOOKISBNTAB_H