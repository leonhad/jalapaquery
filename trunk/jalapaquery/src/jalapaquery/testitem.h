#ifndef TESTITEM_H
#define TESTITEM_H

#include <QGraphicsItem>

class TestItem : public QGraphicsItem
{
public:
    TestItem();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    //void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    //void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    //QList<QGraphicsItem *> childItems () const;
    //QRectF childrenBoundingRect () const;

private:
    bool m_drag;
};

#endif // TESTITEM_H
