#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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



}
