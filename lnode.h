#ifndef LNODE_H
#define LNODE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QBrush>

#include "myarrowitem.h"

class LinkList;
class CLinkList;

class LNode
{
public:
    LNode(QString dt, LNode *nt);
    ~LNode();
    void setValueRect(QGraphicsRectItem* vRect);
    void setPointerRect(QGraphicsRectItem* pRect);
    void setTextRect(QGraphicsTextItem* vText);
    void setArrowVector(std::vector<MyArrowItem*> aVector);
    void setNodeStatus(QBrush brush);
    void removeAll(QGraphicsScene *scene);

protected:
    QString data;
    LNode * next;
    QGraphicsRectItem * valueRect, *pointerRect;
    QGraphicsTextItem * valueText, *pointerText;
    std::vector<MyArrowItem*> arrowVector;

public:
    friend class LinkList;
    friend class CLinkList;
};

#endif // LNODE_H
