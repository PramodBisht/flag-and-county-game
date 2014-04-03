#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helpscreen.h"
#include "playscreen.h"
#include "enterthedataindb.h"
#include "instruction.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    helpscreen *h=new helpscreen();
    h->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    playscreen *play=new playscreen();
    play->show();
//     playscreen::openDB();
//    PersonData* y=new PersonData();
//    playscreen::getPerson(1,y);
}



void MainWindow::on_pushButton_4_clicked()
{
    enterthedataindb *dsbc=new enterthedataindb();
    dsbc->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    instruction *in=new instruction();
    in->show();
}
