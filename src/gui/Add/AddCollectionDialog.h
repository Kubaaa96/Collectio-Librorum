#ifndef ADDCOLLECTIONDIALOG_H
#define ADDCOLLECTIONDIALOG_H

#include <QDialog>

class AddCollectionDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddCollectionDialog(QWidget* parent = nullptr);
    ~AddCollectionDialog() override;
private:

};

#endif //!ADDCOLLECTIONDIALOG_H