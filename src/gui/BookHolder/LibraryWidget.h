#ifndef LIBRARYWIDGET_H
#define LIBRARYWIDGET_H

#include <QWidget>

class LibraryWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LibraryWidget(QWidget* parent = nullptr);
    virtual ~LibraryWidget() override;

private:
};

#endif //!LIBRARYWIDGET_H