#ifndef ADDLIBRARYDIALOG_H
#define ADDLIBRARYDIALOG_H

#include <QDialog>

class AddLibraryDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddLibraryDialog(QWidget* parent = nullptr);
    ~AddLibraryDialog() override;
private:
};

#endif //!ADDLIBRARYDIALOG_H