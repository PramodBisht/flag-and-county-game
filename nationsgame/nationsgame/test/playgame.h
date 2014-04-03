#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QWidget>
#include <QtSql>
#include <QtGui>
#include "playfiles.cpp"

namespace Ui {
    class PlayGame;
}

class PlayGame : public QWidget
{
    Q_OBJECT

public:
    explicit PlayGame(QWidget *parent = 0);
    void setRadioText(QString id1,QString id2,QString id3, QString id4);
    bool openDB(); // Opening Connection To Database
    void createQuestion(); // Creating the question table
    void selectQuestion(); // Selecting all the rows of the table question
    QString selectQuestionById(int id); // Returns the answer along with it calls the setRadioText
                                        // that sets the radio button text to the options that are
                                        // retrieved from the database
    int randomize(int Min,int Max );
    QGraphicsPixmapItem* setImage(QString loc);
    DrawingView1* addPixmap(QString answer); // Drawing image on the widget
    int incrementCount(); //Return the incremented value of the count
    QWidget* setUp();  // Setting UP the main screen of the question screen
    void setUpNext(); // Written So That You can generate the next screen
    void checkAnswer(QString answer); // Checking the user response with the answer given
    void showW2();
    ~PlayGame();

private slots:
    void on_Answer_clicked();

    void on_Pass_clicked();

private:
    int id;
    QWidget* w2;
    QVBoxLayout* layout;
    int count; // control variable that controls the number of questions
    int score;
    QString answer;
    QGraphicsView* view; // Variable that is responsible for loading images
    Ui::PlayGame *ui;
    QSqlDatabase db; //DB connection variable
};

#endif // PLAYGAME_H
