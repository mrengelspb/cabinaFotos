#include "pbTimer.h"
#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

pbTimer::pbTimer(){
       pbtimerpnt = new QTimer(this);
       connect(pbtimerpnt, SIGNAL(timeout()), this, SLOT(pbTimerSlot_1()));
       pbtimerpnt->start(500);


}

void pbTimer::pbTimerSlot_1()
{
  //  int cntDecremental = 9;
   // QString contadorDecremental = QString::number(cntDecremental);
    //ui->label_2->setText(contadorDecremental);

    qDebug() << "Timer2...";
}
