#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pbTimer.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QTimer *pbtimerpnt2 = new QTimer(this);
    //pbtimerpnt2 = new QTimer(this);
    connect(pbtimerpnt2, SIGNAL(timeout()), this, SLOT(pbTimerSlot_2()));
    pbtimerpnt2->start(500);
    pbTimer obj_pbTimer; //create an instance of MyWidget class


}

MainWindow::~MainWindow()
{
    // branch para prueba
    // branch branch branch branch
    delete ui;
}



// Funcion para tomar foto, empieza un contador decremental
void MainWindow::on_pushButton_clicked(){
    int cntDecremental = 5;
    QString contadorDecremental = QString::number(cntDecremental);

   // QString lbl_contadorDecremental = label_2.text();

    ui->label_2->setText(contadorDecremental);

   //temp.apend( " validated" );
   // label->setText( temp );
    qDebug() << "Timer22222...";

    //pbTimer obj_pbTimer; //create an instance of MyWidget class
  //  obj_pbTimer.pbTimer();
    //connect(pbTimer, SIGNAL(clicked(bool)), SLOT(pbTimer()));


}


void MainWindow::pbTimerSlot_2()
{
//  int cntDecremental = 9;
// QString contadorDecremental = QString::number(cntDecremental);
//ui->label_2->setText(contadorDecremental);
//pbTimer::pbTimer;

    //obj.verifica(); // run the member function;
    qDebug() << "Timer...";
}

