#include "testmodeform.h"
#include <QPainter>
#include <QPixmap>

testmodeform::testmodeform(QWidget *parent) : QWidget(parent)
{
    setFixedSize(WIDE, HEIGHT);

    R_Version = new QLabel(this);
    R_Version->setGeometry(20,20,260,41);

    C_Version = new QLabel(this);
    C_Version->setGeometry(20,70,260,41);

    No_Of_Devices = new QLabel(this);
    No_Of_Devices->setGeometry(20,120,260,41);

    Type = new QLabel(this);
    Type->setGeometry(20,170,260,41);
}


void testmodeform::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.setPen(Qt::NoPen);
    p.setBrush(Qt::black);
    p.drawRect(rect());

    p.setPen(Qt::red);
    p.drawText(QPoint(20, 20), "66666");



}
