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
    LNode(QString dt, LNode *nt);       //构造函数
    ~LNode();                           //析构函数
    void setValueRect(QGraphicsRectItem* vRect);
    void setPointerRect(QGraphicsRectItem* pRect);
    void setTextRect(QGraphicsTextItem* vText);
    void setArrowVector(std::vector<MyArrowItem*> aVector);
    void setNodeStatus(QBrush brush);
    void removeAll(QGraphicsScene *scene);

protected:
    QString data;       //节点数据域
    LNode * next;       //节点指针域

    //节点图形项
    QGraphicsRectItem * valueRect, *pointerRect;
    QGraphicsTextItem * valueText, *pointerText;
    std::vector<MyArrowItem*> arrowVector;

public:
    friend class LinkList;
    friend class CLinkList;
};

#endif // LNODE_H
