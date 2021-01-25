#ifndef ADDBOOKISBNTAB_H
#define ADDBOOKISBNTAB_H

#include <QWidget>
#include "AddTab.h"

class AddBookISBNTab : public AddTab
{
    Q_OBJECT
public:

    explicit AddBookISBNTab(QWidget* parent = nullptr);

private:
    void initGui();

};
#endif //!ADDBOOKISBNTAB_H