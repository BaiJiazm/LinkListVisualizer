#ifndef MYARROWITEM_H
#define MYARROWITEM_H

#include <QGraphicsItem>

//自定义箭头，用于Graphics画图架构
class MyArrowItem : public QGraphicsItem
{
    QRectF mboundingRect;
    QLine line1,line2,line3;
    int direction;
    int arrowSize;

public:
    explicit MyArrowItem (int length, int dir=1, int size=1) ;
    ~MyArrowItem();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget=0) Q_DECL_OVERRIDE ;

    QRectF boundingRect() const Q_DECL_OVERRIDE ;

#define SIZE1_WEIGHT 6
#define SIZE1_HEIGHT 3
};

#endif // MYARROWITEM_H
