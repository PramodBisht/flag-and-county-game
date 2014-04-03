#include "scoreresult.h"
#include "ui_scoreresult.h"
#include "playscreen.h"
#include "mainwindow.h"


ScoreResult::ScoreResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScoreResult)
{
    ui->setupUi(this);
    //int a=playscreen::score;
  //  ui->label_2->setText(QString::QString(a));
}

ScoreResult::~ScoreResult()
{
    delete ui;
}

void ScoreResult::on_pushButton_clicked()
{
    MainWindow *mw=new MainWindow();
    mw->show();

}
