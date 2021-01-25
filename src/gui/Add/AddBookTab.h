#ifndef ADDBOOKTAB_H
#define ADDBOOKTAB_H

#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "AddTab.h"

class AddBookTab : public AddTab
{
    Q_OBJECT
public:
    explicit AddBookTab(QWidget* parent = nullptr);
private:
    void initGui();

    void initLayouts();

    void initTitle();


    void initAuthors();


    void initPublisher();


    void initDate();


    void initVersion();


    void initGenre();


    void initISBN();


    void initLanguage();


    // Notes

    void initPages();


    // State

    std::size_t m_stretchFactorOfLabel{ 1 };
    std::size_t m_stretchFactorOfLineEdit{ 3 };

    void initSingleRow(QBoxLayout* layout, QLabel* label, QLineEdit* lineEdit);
};

#endif //!ADDBOOKTAB_H