#ifndef ENTERTHEDATAINDB_H
#define ENTERTHEDATAINDB_H

#include <QWidget>


namespace Ui {
    class enterthedataindb;
}

class enterthedataindb : public QWidget
{
    Q_OBJECT

public:
    explicit enterthedataindb(QWidget *parent = 0);
    bool createStudentTable();
    void insertStudent(int did, QString dnameofcountry, QString dcapital1,QString dcapital2,QString dcapital3,QString dcapital4,QString drightcapital);

    ~enterthedataindb();

private slots:
    void on_pushButton_clicked();

    void on_submittodb_clicked();

private:
    Ui::enterthedataindb *ui;
};

#endif // ENTERTHEDATAINDB_H
