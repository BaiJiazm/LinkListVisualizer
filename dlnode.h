#ifndef DLNode_H
#define DLNode_H


#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QBrush>

#include "myarrowitem.h"

class DLinkList;

class DLNode
{
public:
    DLNode(QString dt, DLNode *nt);
    ~DLNode();

    void setNodeStatus(QBrush brush);
    void removeAll(QGraphicsScene *scene);

protected:
    QString data;
    DLNode * next, *prior;
    QGraphicsRectItem * valueRect, *pointerRect, *prePointerRect;
    QGraphicsTextItem * valueText, *pointerText, *prePointerText;
    std::vector<MyArrowItem*> arrowVector, preArrowVector;

public:
    friend class DLinkList;
};

#endif // DLNode_H
