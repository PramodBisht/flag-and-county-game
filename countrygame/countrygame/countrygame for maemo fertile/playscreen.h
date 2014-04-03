#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include <QWidget>
#include "enterthedataindb.h"
#include <QtSql>


namespace Ui {
    class playscreen;
}

class PersonData
    {
    public:
        int     did;
        QString dnameofcountry;
        QString dcapital1;
         QString dcapital2;
          QString dcapital3;
           QString dcapital4;
            QString drightcapital;

    };
class playscreen : public QWidget
{
    Q_OBJECT

public:
    explicit playscreen(QWidget *parent = 0);
    ~playscreen();
    void radionames(QString str1,QString str2, QString str3,QString str4);
    void countrynames(QString str5);
    bool openDB();
    QString retg(int id);
    QString getPerson(int id, PersonData* person);
  //  QString getg(QString g);
 //   static int score;
    //pramod
private slots:




    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

    private:

     QSqlDatabase db;
    Ui::playscreen *ui;
};

#endif // PLAYSCREEN_H
