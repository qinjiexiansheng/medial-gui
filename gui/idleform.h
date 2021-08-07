#ifndef IDLEFORM_H
#define IDLEFORM_H

#include <QWidget>
#include <QLabel>
#include <QPainter>

class IdleForm : public QWidget
{
    Q_OBJECT
public:
    explicit IdleForm(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QLabel *mCapsule;
    QLabel *mName;
    QLabel *mPatientID;
    QLabel *mSexAge;

    QLabel *mCapsuleTex;
    QLabel *mNameTex;
    QLabel *mPatientIDTex;
    QLabel *mSexAgeTex;

signals:

public slots:
};

#endif // IDLEFORM_H
