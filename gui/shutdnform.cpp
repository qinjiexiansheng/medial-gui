#include "shutdnform.h"
#include <QPainter>

ShutDnForm::ShutDnForm(QWidget *parent) : QWidget(parent)
{

}

void ShutDnForm::paintEvent(QPaintEvent *event)
{
    QPainter Painter(this);

    Painter.setPen(Qt::NoPen);
    Painter.setBrush(Qt::black);
    Painter.drawRect(rect());

    QPixmap image("D:/qt/test8/resource/shutdown.png");
    Painter.drawPixmap(60,180,image);

}
