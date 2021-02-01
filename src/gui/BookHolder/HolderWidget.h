#ifndef HOLDERWIDGET_H
#define HOLDERWIDGET_H

#include <QWidget>

class HolderWidget : public QWidget
{
    Q_OBJECT
public:
    explicit HolderWidget(QWidget* parent = nullptr);
    virtual ~HolderWidget() override;
private:

};
#endif //!HOLDERWIDGET_H