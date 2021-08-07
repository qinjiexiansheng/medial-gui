#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QPainter>

#define WIDE 320
#define HEIGHT 480-40

class global : public QObject
{
    Q_OBJECT
public:
    explicit global(QObject *parent = nullptr);

signals:

public slots:
};

#endif // GLOBAL_H
