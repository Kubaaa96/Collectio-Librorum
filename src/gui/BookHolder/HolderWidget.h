#ifndef HOLDERWIDGET_H
#define HOLDERWIDGET_H

#include <QScrollArea>

class HolderWidget : public QScrollArea
{
    Q_OBJECT
public:
    explicit HolderWidget(QWidget* parent = nullptr);
    virtual ~HolderWidget() override;
private:

};
#endif //!HOLDERWIDGET_H