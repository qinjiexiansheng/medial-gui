#include "idleform.h"
#include "global.h"
#include <QPixmap>

IdleForm::IdleForm(QWidget *parent) : QWidget(parent)
{

    setFixedSize(WIDE,HEIGHT);

  //  setStyleSheet("QWidget{background-color:rgb(0, 255, 0);}");
    this->setStyleSheet("background-color:black;");//设置背景颜色有问题

    mCapsule    = new QLabel(this);
    QPixmap  pixCapsule = QPixmap("D:/qt/test8/resource/id.png");
    pixCapsule.scaled(60,41);
    mCapsule->setPixmap(pixCapsule);
    mCapsule->setGeometry(5,50,60,41);

    mName       = new QLabel(this);
    QPixmap  pixName = QPixmap("D:/qt/test8/resource/name.png");
    pixName.scaled(60,41);
    mName->setPixmap(pixName);
    mName->setGeometry(5,100,60,41);

    mPatientID  = new QLabel(this);
    QPixmap  pixPatientID = QPixmap("D:/qt/test8/resource/sex.png");
    pixPatientID.scaled(60,41);
    mPatientID->setPixmap(pixPatientID);
    mPatientID->setGeometry(5,150,60,41);

    mSexAge     = new QLabel(this);
    QPixmap  pixSexAge = QPixmap("D:/qt/test8/resource/capsule.png");
    pixSexAge.scaled(60,41);
    mSexAge->setPixmap(pixSexAge);
    mSexAge->setGeometry(5,200,60,41);


//    mCapsuleTex     = new QLabel(this);
//    mNameTex        = new QLabel(this);
//    mPatientIDTex   = new QLabel(this);
//    mSexAgeTex      = new QLabel(this);

}

void IdleForm::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter p(this);
    p.setPen(Qt::NoPen);
    p.setBrush(Qt::black);
    p.drawRect(rect());
}
