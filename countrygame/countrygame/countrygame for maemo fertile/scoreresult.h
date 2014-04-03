#ifndef SCORERESULT_H
#define SCORERESULT_H

#include <QWidget>

namespace Ui {
    class ScoreResult;
}

class ScoreResult : public QWidget
{
    Q_OBJECT

public:
    explicit ScoreResult(QWidget *parent = 0);
    ~ScoreResult();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ScoreResult *ui;
};

#endif // SCORERESULT_H
