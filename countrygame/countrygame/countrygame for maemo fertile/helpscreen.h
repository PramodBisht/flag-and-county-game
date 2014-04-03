#ifndef HELPSCREEN_H
#define HELPSCREEN_H

#include <QWidget>

namespace Ui {
    class helpscreen;
}

class helpscreen : public QWidget
{
    Q_OBJECT

public:
    explicit helpscreen(QWidget *parent = 0);
    ~helpscreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::helpscreen *ui;
};

#endif // HELPSCREEN_H
