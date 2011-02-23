#include "testitem.h"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>

TestItem::TestItem() : QGraphicsItem()
{
        m_drag = false;
        setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
    }

    QRectF TestItem::boundingRect() const
{
    return QRectF(0, 0, 100, 100);
}

void TestItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
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
