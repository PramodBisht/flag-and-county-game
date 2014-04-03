#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <QWidget>

namespace Ui {
    class instruction;
}

class instruction : public QWidget
{
    Q_OBJECT

public:
    explicit instruction(QWidget *parent = 0);
    ~instruction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::instruction *ui;
};

#endif // INSTRUCTION_H
