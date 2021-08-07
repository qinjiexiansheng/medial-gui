#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include "idleform.h"
#include "rtdisplayform.h"
#include "testmodeform.h"
#include "shutdnform.h"
#include "inputkey.h"

class MainForm : public QWidget
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = 0);
    ~MainForm();

private:
    QWidget *mWinTitle;
    QWidget *mWinMain;
    QLabel *mLabel;
    QLabel *mDateTime;
    QLabel *sdCard;
    QLabel *mBatteryTex;
    QLabel *mBattery;

    //FORM
    IdleForm *mIdleForm;
    RtDisplayForm *mRtDisplayForm;
    testmodeform  *mTestModeForm;
    ShutDnForm *mShutDnForm;

    inputKey mInputKey;
};

#endif // WIDGET_H
