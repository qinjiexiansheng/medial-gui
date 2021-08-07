#include "rtdisplayform.h"

RtDisplayForm::RtDisplayForm(QWidget *parent) : QWidget(parent)
{
    m_frame_rate = 0;
    setFixedSize(WIDE,HEIGHT);

}

void RtDisplayForm::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawText(QPoint(5,300), "tx: " );//+ QString::number(tx_power_actual[m_tx_power]));
    painter.drawText(QPoint(5,320), "timeText");
    painter.drawText(QPoint(250,320), "rssi: ");// + QString::number(m_capsule_signal));

    if (m_frame_rate == 50) //50 = 0.5fps
        painter.drawText(QPoint(255,18), "f:" );//+ QString::number(0.5, 'f', 1) + "," + QString::number(m_real_frame_rate/3.0, 'f', 1));
    else
        painter.drawText(QPoint(255,18), "f: ");// + QString::number(m_frame_rate) + "," + QString::number(m_real_frame_rate/3.0, 'f', 1));

    painter.drawText(QPoint(5,18), "dev-no: " );//+ QString::number(m_rf_device_no));


   // QPixmap image(fileName);

//    p->drawPixmap(0, 0, image.scaled (320,320,Qt::KeepAspectRatio));

}

