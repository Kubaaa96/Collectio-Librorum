#ifndef ADDBOOKPHOTOTAB_H
#define ADDBOOKPHOTOTAB_H

#include "AddTab.h"
#include <QPushButton>

class AddBookPhotoTab : public AddTab
{
    Q_OBJECT
public:
    explicit AddBookPhotoTab(QWidget* parent = nullptr);
    ~AddBookPhotoTab();
private:
    void initGui();
    void initLayouts();

    QPushButton* m_addPhotoPushButton;
    QLabel* m_bookPhoto;

    void initSingleRow(QBoxLayout* layout, QLabel* label, QLabel* loadedLabel);

    void connecting();
};

#endif //!ADDBOOKPHOTOTAB_H