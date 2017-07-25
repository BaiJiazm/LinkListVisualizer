#ifndef UIDEFINE_H
#define UIDEFINE_H

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

#endif // UIDEFINE_H
