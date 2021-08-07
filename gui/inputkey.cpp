#include "inputkey.h"

inputKey::inputKey(QObject *parent) : QObject(parent)
{
    moveToThread(&m_thread);
    connect(&m_thread, SIGNAL(start()), this, SLOT(tmain()));
}

void inputKey::tmain()
{
#if 0
    mButtonsFd = open("/dev/input/event0");
    if(mButtonsFd<0){
        qWarning("open device buttons failed ");
        exit(1);
     }
    while(1)
    {
        count = read(mButtonsFd, &mEvKey, sizeof(struct input_event));
        for(int i=0; i<count/sizeof(struct input_event);i++ )
            if(mEvKey.type == EV_KEY){
                if(mEvKey.value){
                   if(mEvKey[i].code == KEY_POWER)
                   {

                   }else{

                   }
                }else{

                }
                printf("type:%d,code:%d,value:%d\n", ev_key.type, ev_key.code, ev_key.value);
            }
    }

    close(mButtonsFd);
#endif
    return;

}

void inputKey::start()
{
    m_thread.start();
}

void inputKey::exit()
{

}

void inputKey::terminate()
{
    m_thread.terminate();
}
