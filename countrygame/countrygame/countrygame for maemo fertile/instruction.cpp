#include "instruction.h"
#include "ui_instruction.h"
#include "mainwindow.h"

instruction::instruction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::instruction)
{
    ui->setupUi(this);
}

instruction::~instruction()
{
    delete ui;
}

void instruction::on_pushButton_clicked()
{
    MainWindow *mw=new MainWindow();
    mw->show();
}
