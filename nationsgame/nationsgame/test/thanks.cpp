#include "thanks.h"
#include "ui_thanks.h"
#include "mainwindow.h"

Thanks::Thanks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thanks)
{
    ui->setupUi(this);
}

Thanks::~Thanks()
{
    delete ui;
}

void Thanks::DisplayScore(int score){

    QString str = "Your Score Is : ";
    str.append(QString("%1").arg(score));
    ui->Score->setText(str);
}

void Thanks::on_Back_clicked()
{
    MainWindow* w = new MainWindow();
    w->show();
}
