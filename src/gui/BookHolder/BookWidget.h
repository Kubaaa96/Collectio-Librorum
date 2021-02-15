#ifndef BOOKWIDGET_H
#define BOOKWIDGET_H

#include <QWidget>
#include <QPainter>

class BookWidget : public QWidget
{
    Q_OBJECT
public:
    enum class Orientation
    {
        Vertical,
        Horizontal,
        Front
    };

    explicit BookWidget(QWidget* parent = nullptr);
    virtual ~BookWidget() override;

private:
    Orientation m_orientation = Orientation::Vertical;
    // Book
};

#endif //!BOOKWIDGET_H