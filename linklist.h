#ifndef LINKLIST_H
#define LINKLIST_H

#include <QWidget>
#include <QFile>
#include <QTextBrowser>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QIntValidator>

#include "lnode.h"

namespace Ui {
class LinkList;
}

class LinkList : public QWidget
{
    Q_OBJECT

public:
    explicit LinkList(QWidget *parent = 0);			//构造函数
    ~LinkList();									//析构函数

private slots:
    void on_pushButtonInit_clicked();					//槽函数：点击创建

    void on_pushButtonClear_clicked();                  //槽函数：点击清空

    void on_pushButtonInsert_clicked();					//槽函数：点击插入

    void on_pushButtonRandomInsert5_clicked();			//随机插入五个节点到链表末尾

    void on_pushButtonDelete_clicked();					//槽函数：点击删除

    void on_pushButtonLocate_clicked();					//槽函数：点击查找

    void on_horizontalSlider_valueChanged(int value);	//调整演示的速度快慢

protected:
    Ui::LinkList *ui;               //UI指针
    QGraphicsScene *scene;          //视图场景指针
    QGraphicsTextItem *headLabel;   //链表符号指针
    MyArrowItem *headArrow;         //符号箭头指针
    LNode *head;                    //头结点指针
    int countNode;                  //节点个数计数（不包括头结点）
    int sleepTime;                  //演示延时时间（ms）

    void initTextBrowser();			//初始设置文本显示区
    void initUI();					//初始UI控件
    void initSceneView();			//初始化视图框架
    void adjustController();		//操作之后调整右侧输入和显示控件

    void initLinkList();						//创建链表初始化
    void insertLNode(int pos, QString elem);	//插入节点到链表
    void deleteLNode(int pos, QString &elem);	//删除链表节点
    bool locateLNode(int &pos,QString elem);	//查找链表节点
    void destroySelf();							//释放申请的内存空间

    QPoint getLNodePos(int nodeNumber);						//计算节点的Scene坐标
    void addLNodeGraphicsItem(LNode *pl, QPoint coord);		//添加节点的GraphicsItem
    void adjustLNodeArrow(LNode *pLNode, int nodeNumber);	//调整节点的箭头
    void adjustLNodePos(LNode *pLNode, QPoint coord);		//调整节点Scene坐标
    void setLinkListNormalBrush();							//设置链表所有节点显示模式

private:
    //静态常数据，类似于宏
    const static QBrush normalBursh, visitedBrush, markBrush;
    const static QFont headLabelFont, dataFont;
    const static QIntValidator dataValidator;

#define MAX_SLIDER 20            //速度调节器的最大倍数值
#define MAX_SLEEP_TIME 1000     //演示最大延时ms

#define SCENE_MAX_W 550         //视图场景最大宽度pix
#define SCENE_MAX_H 390         //视图场景最大高度pix

#define VALUE_RECT_W    75      //节点域矩形框宽度pix
#define POINTER_RECT_W  25      //指针域矩形宽度pix
#define RECT_H      30          //节点域指针域矩形高度pix
#define SPACING     10          //上下间隔pix

#define ARROW_LEN   (25+POINTER_RECT_W/2)                   //一般箭头长度
#define ARROW_H_OFFSET    (VALUE_RECT_W+POINTER_RECT_W/2)   //箭头距离节点图形起始坐标水平偏移
#define ARROW_V_OFFSET    (SPACING+RECT_H/2)                //箭头距离节点图形起始坐标垂直偏移

#define NODE_W (VALUE_RECT_W+POINTER_RECT_W+25)             //每个节点占用宽度
#define NODE_H (RECT_H+SPACING+SPACING)                     //每个节点占用高度
};

#endif // LINKLIST_H
