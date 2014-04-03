#include "enterthedataindb.h"
#include "ui_enterthedataindb.h"
#include "mainwindow.h"
#include<QDebug>
#include<QString>
#include<QtSql>
#include<QSqlDatabase>
#include<QSqlQuery>

enterthedataindb::enterthedataindb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::enterthedataindb)
{
    ui->setupUi(this);
}

enterthedataindb::~enterthedataindb()
{
    delete ui;
}

void enterthedataindb::on_pushButton_clicked()
{
    MainWindow *mw=new MainWindow();
            mw->show();
}
void enterthedataindb::insertStudent(int did, QString dnameofcountry, QString dcapital1,QString dcapital2,QString dcapital3,QString dcapital4,QString drightcapital)
{

   QSqlDatabase db;
    bool ret = false;
    bool ret1 = false;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\my13.db.sqlite");
db.open();

    if (db.isOpen())
    {
        QSqlQuery query;

      query.prepare("insert into student (did,dnameofcountry,dcapital1,dcapital2,dcapital3,dcapital4,drightcapital)""VALUES(?,?,?,?,?,?,?)");
        query.addBindValue(did);
        query.addBindValue(dnameofcountry);
        query.addBindValue(dcapital1);
        query.addBindValue(dcapital2);
        query.addBindValue(dcapital3);
        query.addBindValue(dcapital4);
        query.addBindValue(drightcapital);
        ret=query.exec();
        qDebug()<<"inserting value"<<ret;
        qDebug()<<did<<dnameofcountry<<dcapital1<<dcapital2<<dcapital3<<dcapital4<<drightcapital;




    }

    db.close();



}



bool enterthedataindb::createStudentTable()
{
QSqlDatabase db;
    db  =  QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\my13.db.sqlite");
    bool ret = false;
    db.open();

    if (db.isOpen())
    {
        QSqlQuery query;
        ret = query.prepare("create table student" "(did INTEGER," "dnameofcountry VARCHAR(30)," "dcapital1 VARCHAR(30)," "dcapital2 VARCHAR(30)," "dcapital3 VARCHAR(30)," "dcapital4 VARCHAR(30)," "drightcapital VARCHAR(30))");
        if(ret){
            qDebug()<<"TABLE IS CREATED";
        }

        if(!query.exec())
 {qDebug()<<query.lastError();
 }
        qDebug()<< "creating table "<<ret;


    }
    qDebug()<< "creating table "<<ret;
   return ret;
    db.close();


}


void enterthedataindb::on_submittodb_clicked()
{bool ok;
    int did=ui->id->text().toInt(&ok,10);
    QString dnameofcountry=ui->nameofcountry->text();
    QString dcapital1=ui->capital1->text();
    QString dcapital2=ui->capital2->text();
    QString dcapital3=ui->capital3->text();
    QString dcapital4=ui->capital4->text();
      QString dcapital5=ui->rightcapital->text();
     this->createStudentTable();
    this->insertStudent(did,dnameofcountry,dcapital1,dcapital2,dcapital3,dcapital4,dcapital5);
    this->hide();
}
