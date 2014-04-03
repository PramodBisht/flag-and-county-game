#include "helpscreen.h"
#include "ui_helpscreen.h"
#include "mainwindow.h"
helpscreen::helpscreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::helpscreen)
{
    ui->setupUi(this);
}

helpscreen::~helpscreen()
{
    delete ui;
}

void helpscreen::on_pushButton_clicked()
{MainWindow *m=new MainWindow();
    m->show();

}
