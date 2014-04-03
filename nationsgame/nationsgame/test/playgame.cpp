#include "playgame.h"
#include "ui_playgame.h"
#include "thanks.h"
#include<QtGui>

PlayGame::PlayGame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayGame)
{
    openDB();
    id=randomize(1,62);
    count=1;
    score = 0;
    ui->setupUi(this);
    w2 = setUp();
    showW2();
    //setRadioText("India","China","Bangladesh","Bhutan");
}

void PlayGame::showW2(){
    w2->update();
    w2->show();
}

void PlayGame::checkAnswer(QString answer){
    if(ui->A->isChecked())
    {
        if(ui->A->text() == answer){
            score = score + 3;
        }else{
            score = score - 1;
        }
    }else
    {
        if(ui->B->isChecked())
        {
            if(ui->B->text()==answer)
            {
                score = score + 3;
            }else
            {
                score = score - 1;
            }
        }else
        {
            if(ui->C->isChecked())
            {
                if(ui->C->text()==answer)
                {
                    score = score + 3;
                }else
                {
                    score = score - 1;
                }
            }else
            {
                if(ui->D->isChecked())
                {
                    if(ui->D->text()==answer){
                        score = score + 3;
                    }else{
                        score = score - 1;
                    }
                }
            }
        }
    }
    qDebug()<<"Score is : " << score;
}

QWidget* PlayGame::setUp(){
    answer = selectQuestionById(id);
    qDebug()<<"Answer = " << answer;
    QGraphicsView* view = addPixmap(answer);
    QWidget *w2 = ui->play_game;
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(ui->label);
    layout->addWidget(view);
    layout->addWidget(ui->A);
    layout->addWidget(ui->B);
    layout->addWidget(ui->C);
    layout->addWidget(ui->D);
    layout->addWidget(ui->Answer);
    layout->addWidget(ui->Pass);
    w2->setLayout(layout);
    //w2->show();
    return w2;
}

bool PlayGame::openDB(){
    bool ret = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./questionDatabase.sqlite");
    if(!db.open()){
        qDebug()<<"Failed To Connect";
        qFatal("Connection Failed");
    }
    qDebug("Connected");
    ret = true;
    return ret;

}

void PlayGame::setUpNext(){
    answer = selectQuestionById(11);
    qDebug()<<"Answer = " << answer;
    view = addPixmap(answer);
    //w2->show();
}

void PlayGame::createQuestion(){
    QSqlQuery qry;
    qry.prepare("CREATE TABLE IF NOT EXISTS question (id INTEGER PRIMARY KEY, optionA VARCHAR(30), optionB VARCHAR(30), optionC VARCHAR(30), optionD VARCHAR(30), answer VARCHAR(30))");
    if(!qry.exec())
        qDebug()<<qry.lastError();
    else
        qDebug("Table Created");
    db.close();
}

void PlayGame::setRadioText(QString id1,QString id2,QString id3, QString id4){

    ui->A->setText(id1);
    ui->B->setText(id2);
    ui->C->setText(id3);
    ui->D->setText(id4);
}

void PlayGame::selectQuestion(){
    QSqlQuery qry;
    qry.prepare("Select * from question");
    if(!qry.exec())
        qDebug()<<qry.lastError();
    else
    {
        qDebug("Data Selected");
        QSqlRecord rec = qry.record();
        int cols = rec.count();
        qDebug()<<cols;
        for(int i=0; i<cols; ++i){
            qDebug()<<QString("Column %1:%2").arg(i).arg(rec.fieldName(i));

            for (int j=0; qry.next();++j){
                for(int c=0;c<cols;++c){
                    qDebug()<< QString("Rows: %1,%2,%3").arg(j).arg(rec.fieldName(c)).arg(qry.value(c).toString());
                }
            }
        }
    }
    db.close();
}

QString PlayGame::selectQuestionById(int id){
    QSqlQuery qry;
    QString answer;
    qry.prepare(QString("Select * from question where id= %1").arg(id));
    if(!qry.exec())
        qDebug()<<qry.lastError();
    else
    {
        qDebug("Data Selected");
        QSqlRecord rec = qry.record();
        int cols = rec.count();
        qDebug()<<cols;
        while(qry.next()){
            QString id1 = qry.value(1).toString();
            QString id2 = qry.value(2).toString();
            QString id3 = qry.value(3).toString();
            QString id4 = qry.value(4).toString();
            answer = qry.value(5).toString();
            qDebug()<<id1<<id2<<id3<<id4<<answer;
            setRadioText(id1,id2,id3,id4);
        }
    }
    return answer;
}

QGraphicsPixmapItem* PlayGame::setImage(QString loc){
    QPixmap pixmap(loc);
    QSizeF size = pixmap.size();
    QSizeF scale = QSizeF(100.0 / size.width(), 100.0 / size.height());
    QGraphicsPixmapItem *pixmapItem = new QGraphicsPixmapItem(QPixmap(loc));
    pixmapItem->scale(scale.width(), scale.height());
    return pixmapItem;

}

DrawingView1* PlayGame::addPixmap(QString answer){
    DrawingView1 *view =new DrawingView1;
    DrawingScene1 *scene = new DrawingScene1(view);
    view->setScene(scene);
    QString loc= "C:\\images\\nations\\";
    //loc.append("India.gif");
    loc.append(answer);
    qDebug()<<loc;
    QGraphicsPixmapItem *pixmap = setImage(loc);
    scene->addBoxedItem(pixmap,"");
    return view;
}

int PlayGame::incrementCount(){

    count+=1;
    return count;
}

PlayGame::~PlayGame()
{
    delete ui;
}

int PlayGame::randomize(int Min, int Max)
{
    qsrand(QTime::currentTime().msec());

    if (Min > Max)
    {
        int Temp = Min;
        Min = Max;
        Max = Temp;
    }
    return ((rand()%(Max-Min+1))+Min);
}

int incrementId(int id){
    id +=1;
    return id;
}

void PlayGame::on_Answer_clicked()
{
    Thanks* t = new Thanks();
    checkAnswer(answer); // Check the Answer
    id = randomize(1,62);
    count = incrementCount(); // Increment the control variable
    qDebug()<<"Value of Count is Less Than Five And Currently It is :" << count;
    if(count > 10){
        t->show();
        t->DisplayScore(score);
    }else{

    QWidget* w = new QWidget();
    QVBoxLayout* lay = new QVBoxLayout;

    answer = selectQuestionById(id);
    view = addPixmap(answer);
    lay->addWidget(ui->label);
    lay->addWidget(view);
    lay->addWidget(ui->A);
    lay->addWidget(ui->B);
    lay->addWidget(ui->C);
    lay->addWidget(ui->D);
    lay->addWidget(ui->Answer);
    lay->addWidget(ui->Pass);
    w->setLayout(lay);
    w->setWindowTitle("Nations");
    w->show();
    QPushButton* btn = ui->Answer;
    QObject::connect(btn,SIGNAL(clicked()),w,SLOT(close()));
    }
}

void PlayGame::on_Pass_clicked()
{
    id = randomize(1,62);
    Thanks* t = new Thanks();

    count = incrementCount(); // Increment the control variable
    qDebug()<<"Value of Count is Less Than Five And Currently It is :" << count;
    if(count > 10){
        t->show();
        t->DisplayScore(score);
    }else{
    QWidget* w = new QWidget();
    QVBoxLayout* lay = new QVBoxLayout;

    answer = selectQuestionById(id);
    view = addPixmap(answer);
    lay->addWidget(ui->label);
    lay->addWidget(view);
    lay->addWidget(ui->A);
    lay->addWidget(ui->B);
    lay->addWidget(ui->C);
    lay->addWidget(ui->D);
    lay->addWidget(ui->Answer);
    lay->addWidget(ui->Pass);
    w->setLayout(lay);
    w->setWindowTitle("Nations");
    w->show();
    QPushButton* btn = ui->Pass;
    QObject::connect(btn,SIGNAL(clicked()),w,SLOT(close()));
    }
}
