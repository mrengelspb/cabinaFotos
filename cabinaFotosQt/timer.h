#ifndef TIMER_H
#define TIMER_H

#include <QTimer>

class Timer: public QObject{
public:
    timer();
    QTimer *timerpnt;

public slots:
    void timerSlot_1();
};

#endif // TIMER_H
