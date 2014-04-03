#include "playscreen.h"
#include "ui_playscreen.h"
#include <QDebug>
#include "scoreresult.h"

int id;
int static count=1;
 static int score;
playscreen::playscreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playscreen)
{
    ui->setupUi(this);
  //  openDB();
    int h,m,s;
    QTime midday(0,0,0);
    qsrand(midday.secsTo(QTime::currentTime()));
    h=(qrand() % 24);
    m=(qrand() % 60);
    s=(qrand() % 60);
    QTime midnight(h,m,s);
    qsrand(midnight.secsTo(QTime::currentTime()));

    id=(qrand() % 92);
    qDebug()<<"retrieving id is "<<id;
    if(id!=0)
    {PersonData* y=new PersonData();
    getPerson(id,y);
}}

playscreen::~playscreen()
{
    delete ui;
}
void playscreen::radionames(QString str1,QString str2,QString str3,QString str4)
{
    ui->A->setText(str1);
    ui->B->setText(str2);
    ui->C->setText(str3);
    ui->D->setText(str4);
}
void playscreen::countrynames(QString str5)
{
   ui->label_2->setText(str5);
}

bool playscreen::openDB()
{
    qDebug()<<"database is about to connect";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\my13.db.sqlite");
    // Open databasee
    if(!db.open()){
      qDebug()<<db.lastError();
        qFatal( "Failed to connect." );
    }else
    {
    qDebug()<<"connected";
    }return db.open();
}
QString g;
QString playscreen::getPerson(int id,PersonData* person)
{  openDB();
    bool ret=false;
    QSqlQuery query;
        query.exec(QString("select * from student where did = %1").arg(id));
        QSqlRecord rec = query.record();
        int cols=rec.count();
        qDebug()<<cols;
        if (query.next())
    {
        person->did = query.value(0).toInt();
        person->dnameofcountry = query.value(1).toString();
        person->dcapital1 = query.value(2).toString();
        person->dcapital2 = query.value(3).toString();
        person->dcapital3 = query.value(4).toString();
        person->dcapital4 = query.value(5).toString();
        person->drightcapital = query.value(6).toString();
       ret = true;

        QString a= QString::number(person->did);
        QString b= QString::QString(person->dnameofcountry);
        QString c= QString::QString(person->dcapital1);
        QString d= QString::QString(person->dcapital2);
        QString e= QString::QString(person->dcapital3);
        QString f= QString::QString(person->dcapital4);
          g= QString::QString(person->drightcapital);
        countrynames(b);
        radionames(c,d,e,f);


        db.close();
        return g;
    }

}
QString playscreen::retg(int id)
{
    openDB();
    QString drightcapital;
    QSqlQuery query;
        query.exec(QString("select * from student where did = %1").arg(id));
        if (query.next())
        {
            drightcapital = query.value(6).toString();
            qDebug()<<"pramod"<<drightcapital;
        return drightcapital;
        }
}


void playscreen::on_pushButton_clicked()
{

 QString rightans=playscreen::retg(id);
    static int a=0;
    static int b=0;


       QString aans,bans,cans,dans;
       if(ui->A->isChecked())
       {
         aans=ui->A->text();
         qDebug()<<aans;
        if(aans==rightans)
        {
             a++;
             score=5*a-2*b;
             QString str=QString::number(score);
             ui->label_3->setText(str);
          //  ui->label_3->
             qDebug()<<"RIGHT ANSWER";
             qDebug()<<a;
         }
        else
{
             b++;
             score=5*a-2*b;
             QString str=QString::number(score);
             ui->label_3->setText(str);
       }
       }
       else
       if(ui->B->isChecked())
       {
           bans=ui->B->text();
           qDebug()<<bans;
           if(bans==rightans)
           {
               a++;
               score=5*a-2*b;
               qDebug()<<"RIGHT ANSWER";
               QString str=QString::number(score);
               ui->label_3->setText(str);;
               qDebug()<<a;
           }
else
           {
               b++;
               score=5*a-2*b;
               QString str=QString::number(score);
               ui->label_3->setText(str);
           }
       }
       else
       if(ui->C->isChecked())
       {
           cans=ui->C->text();
           qDebug()<<cans;
           if(cans==rightans)
           {
               a++;
               score=5*a-2*b;
               qDebug()<<"RIGHT ANSWER";
               QString str=QString::number(score);
               ui->label_3->setText(str);
               qDebug()<<a;
           }
else
           {
               b++;
               score=5*a-2*b;
               QString str=QString::number(score);
               ui->label_3->setText(str);
           }
       }
       else
       if(ui->D->isChecked())
       {
           dans=ui->D->text();
           qDebug()<<dans;
           if(dans==rightans)
           {
               a++;
               score=5*a-2*b;
               qDebug()<<"RIGHT ANSWER";
               QString str=QString::number(score);
               ui->label_3->setText(str);
               qDebug()<<a;
           }
else
           {
               b++;
               score=5*a-2*b;
               QString str=QString::number(score);
               ui->label_3->setText(str);
           }
       }
       count++;
       qDebug()<<"question no is"<<count;
       if(count==21)
       {
           playscreen *py=new playscreen();
           py->close();

           ScoreResult *sr=new ScoreResult();
           sr->show();


       }
       int h,m,s;
       QTime midday(0,0,0);
       qsrand(midday.secsTo(QTime::currentTime()));
       h=(qrand() % 24);
       m=(qrand() % 60);
       s=(qrand() % 60);
       QTime midnight(h,m,s);
       qsrand(midnight.secsTo(QTime::currentTime()));

       id=(qrand() % 92);
       qDebug()<<"retrieving id is "<<id;
       //id=int(rid);
       if(id!=0){
       PersonData* l=new PersonData();
               getPerson(id,l);
}}



void playscreen::on_pushButton_2_clicked()
{   count++;
    qDebug()<<"question no is"<<count;
    id++;
    qDebug()<<id;
    if(count==21)
    {
        //QObject::connect(pushbutton,SIGNAL(clicked()),&playscreen,SLOT(quit()));

        ScoreResult *sr=new ScoreResult();
        sr->show();
    }
    PersonData* y=new PersonData();
    getPerson(id,y);

}

