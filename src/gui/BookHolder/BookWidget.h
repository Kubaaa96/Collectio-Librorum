#ifndef BOOKWIDGET_H
#define BOOKWIDGET_H

#include <QWidget>

class BookWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BookWidget(QWidget* parent = nullptr);
    virtual ~BookWidget() override;
    
private:
};

#endif //!BOOKWIDGET_H