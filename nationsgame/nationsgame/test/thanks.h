#ifndef THANKS_H
#define THANKS_H

#include <QWidget>

namespace Ui {
    class Thanks;
}

class Thanks : public QWidget
{
    Q_OBJECT

public:
    explicit Thanks(QWidget *parent = 0);
    void DisplayScore(int score);
    ~Thanks();

private slots:
    void on_Back_clicked();

private:
    Ui::Thanks *ui;
};

#endif // THANKS_H
