#ifndef TESTMODEFORM_H
#define TESTMODEFORM_H

#include <QWidget>
#include <QLabel>
#include <global.h>

class testmodeform : public QWidget
{
    Q_OBJECT
public:
    explicit testmodeform(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QLabel *R_Version;
    QLabel *C_Version;
    QLabel *Type;
    QLabel *No_Of_Devices;

signals:

public slots:
};

#endif // TESTMODEFORM_H
