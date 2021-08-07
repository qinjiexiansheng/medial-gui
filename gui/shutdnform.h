#ifndef SHUTDNFORM_H
#define SHUTDNFORM_H

#include <QWidget>

class ShutDnForm : public QWidget
{
    Q_OBJECT
public:
    explicit ShutDnForm(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:
};

#endif // SHUTDNFORM_H
