#include "helpscreen.h"
#include "ui_helpscreen.h"
#include<QPixmap>
#include"mainwindow.h"
#include"graphics.cpp"

HelpScreen::HelpScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpScreen)
{
    ui->setupUi(this);
}

HelpScreen::~HelpScreen()
{
    delete ui;
}

void HelpScreen::on_HelpButton_clicked()
{
    DrawingView* view1 =new DrawingView;
    QWidget* w2 = ui->Widget;
    w2->setWindowTitle("Countries Available");

    QVBoxLayout* layer = new QVBoxLayout();

    DrawingScene* scene = new DrawingScene(view1);
    view1->setScene(scene);

    QStringList x = getImage();
    for(int i=0; i<x.size();++i){
        QString loc= "C:\\images\\nations\\";
        loc.append(x.at(i));
        QGraphicsPixmapItem *pixmap = setImage(loc);
        scene->addBoxedItem(pixmap,x.at(i));
    }

    QPushButton* back = ui->Back;

    layer->addWidget(view1);
    layer->addWidget(back);
    w2->setLayout(layer);
    w2->show();
}

void HelpScreen::on_Back_clicked()
{
    ui->Widget->close();
    MainWindow* w = new MainWindow();
    w->show();
}
