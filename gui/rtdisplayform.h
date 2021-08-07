#ifndef RTDISPLAYFORM_H
#define RTDISPLAYFORM_H

#include <QWidget>
#include "global.h"

class RtDisplayForm : public QWidget
{
    Q_OBJECT
public:
    explicit RtDisplayForm(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    int m_frame_rate;

signals:

public slots:
};

#endif // RTDISPLAYFORM_H
