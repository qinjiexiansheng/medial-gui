#ifndef INPUTKEY_H
#define INPUTKEY_H

#include <QObject>
#include <QThread>

class inputKey : public QObject
{
    Q_OBJECT
public:
    explicit inputKey(QObject *parent = nullptr);
    void start();
    void exit();
    void terminate();
    
private:
    QThread m_thread;
    int mButtonsFd;
    int mKeyValue;
    int count;
    //struct input_event mEvKey;

signals:

public slots:
    void tmain();
};

#endif // INPUTKEY_H
