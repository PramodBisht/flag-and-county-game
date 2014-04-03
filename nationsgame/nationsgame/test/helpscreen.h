#ifndef HELPSCREEN_H
#define HELPSCREEN_H

#include <QWidget>

namespace Ui {
    class HelpScreen;
}

class HelpScreen : public QWidget
{
    Q_OBJECT

public:
    explicit HelpScreen(QWidget *parent = 0);
    ~HelpScreen();

private slots:
    void on_HelpButton_clicked();

    void on_Back_clicked();

private:
    Ui::HelpScreen *ui;
};

#endif // HELPSCREEN_H
