#include "mainform.h"
#include <QPixmap>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QStackedWidget>
#include "global.h"
#include <QStackedWidget>
#include <QThread>

MainForm::MainForm(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(100,100,WIDE,HEIGHT);

    QStackedWidget  *formStack =  new QStackedWidget(this);
    QVBoxLayout *vLayout = new QVBoxLayout;

    mWinTitle = new QWidget(this);
    mWinTitle->setMinimumSize(WIDE, 40);

    mWinMain = new QWidget(this);
    mWinMain->setMinimumSize(WIDE,HEIGHT);

    //Form
    mIdleForm = new IdleForm(this);
    mRtDisplayForm = new RtDisplayForm(this);
    mTestModeForm = new testmodeform(this);
    mShutDnForm = new ShutDnForm(this);


    mLabel = new QLabel(mWinTitle);
    mLabel->setStyleSheet("QLabel{background-color:rgb(0, 255, 0);}");
    mLabel->setGeometry(0,36,WIDE,2);

    mDateTime = new QLabel("11:58",mWinTitle);
    mDateTime->setGeometry(20,5,71,31);

    sdCard = new QLabel(mWinTitle) ;
    QPixmap pixSdCard = QPixmap("D:/qt/test8/resource/NOTFCard.png");//这样表达为什么不行(":resource/NOTFCard.png");
    pixSdCard.scaled(31,31);
    sdCard->setPixmap(pixSdCard);
    sdCard->setGeometry(180,5,31,31);

    mBatteryTex = new QLabel("99%",mWinTitle);
    mBatteryTex->setGeometry(255,5,31,31);

    mBattery = new QLabel(mWinTitle);
    QPixmap pixBattery = QPixmap("D:/qt/test8/resource/battery_full.png");
    pixBattery.scaled(31,31);
    mBattery->setPixmap(pixBattery);
    mBattery->setGeometry(285,5,31,31);

    formStack->addWidget(mWinMain);
    formStack->addWidget(mIdleForm);
    formStack->addWidget(mRtDisplayForm);
    formStack->addWidget(mTestModeForm);
    formStack->addWidget(mShutDnForm);


    vLayout->addWidget(mWinTitle);
    vLayout->addWidget(formStack); //要把QStackedWidget添加进布局器

    this->setLayout(vLayout);

    formStack->setCurrentIndex(1);

    //开始按键检测
   // mInputKey = new inputKey();
   // mInputKey->start();

}

MainForm::~MainForm()
{

}
