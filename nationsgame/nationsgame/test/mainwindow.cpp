#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helpscreen.h"
#include"playgame.h"

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


void MainWindow::on_Help_clicked()
{
    HelpScreen* h=new HelpScreen();
    h->show();
}


void MainWindow::on_Play_clicked()
{
    PlayGame* p = new PlayGame();
    p->show();
}
