#ifndef TIMER_H
#define TIMER_H

#include <QTimer>

class pbTimer: public QObject{
    Q_OBJECT

public:
    pbTimer();
    QTimer *pbtimerpnt;

public slots:
    void pbTimerSlot_1();
};

#endif // TIMER_H
