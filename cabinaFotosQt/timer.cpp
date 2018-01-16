#include "timer.h"
#include <QDebug>

Timer::timer()
{
    // create a timer
       timerpnt = new QTimer(this);

       // setup signal and slot
       connect(timerpnt, SIGNAL(timeout()), this, SLOT(timerSlot_1()));

       // msec
       timerpnt->start(1000);
//http://www.bogotobogo.com/Qt/Qt5_QTimer.php
}

void Timer::timerSlot_1()
{
    qDebug() << "Timer...";
}
