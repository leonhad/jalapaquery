#include "testitem.h"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>

TestItem::TestItem() : QGraphicsItem()
{
    m_drag = false;
    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);


}
/*
QList<QGraphicsItem *> TestItem::childItems () const
{
    QList<QGraphicsItem *> list;

    QGraphicsTextItem *text = new QGraphicsTextItem;
    text->setPos(50, 50);
    text->setPlainText("long text test");
    //cout << text->boundingRect().width() << endl;


    list.append(text);

    return list;
}
*/
QRectF TestItem::boundingRect() const
{
    return QRectF(0, 0, 100, 100);
}

//QRectF TestItem::childrenBoundingRect () const
//{
//    return QRectF(0, 0, 100, 100);
//}

void TestItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //QGraphicsTextItem *text = new QGraphicsTextItem;
    //text->setPos(50, 50);
    //text->setPlainText("long text test");

    painter->drawText(QRectF(0,0,20, 20), Qt::AlignLeft, "Very long text string test");

    painter->drawRoundedRect(boundingRect(), 5, 5);
}
/*
void TestItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    m_drag = true;
}

void TestItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    //event->b
}

void TestItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    m_drag = false;
}
*/
