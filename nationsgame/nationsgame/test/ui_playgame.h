/********************************************************************************
** Form generated from reading UI file 'playgame.ui'
**
** Created: Mon 18. Jul 10:46:15 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYGAME_H
#define UI_PLAYGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayGame
{
public:
    QWidget *play_game;
    QPushButton *Answer;
    QPushButton *Pass;
    QLabel *label;
    QSplitter *splitter;
    QRadioButton *A;
    QRadioButton *B;
    QRadioButton *C;
    QRadioButton *D;

    void setupUi(QWidget *PlayGame)
    {
        if (PlayGame->objectName().isEmpty())
            PlayGame->setObjectName(QString::fromUtf8("PlayGame"));
        PlayGame->resize(744, 484);
        play_game = new QWidget(PlayGame);
        play_game->setObjectName(QString::fromUtf8("play_game"));
        play_game->setGeometry(QRect(70, 20, 601, 411));
        Answer = new QPushButton(play_game);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setGeometry(QRect(120, 360, 75, 23));
        Pass = new QPushButton(play_game);
        Pass->setObjectName(QString::fromUtf8("Pass"));
        Pass->setGeometry(QRect(370, 360, 75, 23));
        label = new QLabel(play_game);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 461, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        splitter = new QSplitter(play_game);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(190, 200, 161, 131));
        splitter->setOrientation(Qt::Vertical);
        A = new QRadioButton(splitter);
        A->setObjectName(QString::fromUtf8("A"));
        splitter->addWidget(A);
        B = new QRadioButton(splitter);
        B->setObjectName(QString::fromUtf8("B"));
        splitter->addWidget(B);
        C = new QRadioButton(splitter);
        C->setObjectName(QString::fromUtf8("C"));
        splitter->addWidget(C);
        D = new QRadioButton(splitter);
        D->setObjectName(QString::fromUtf8("D"));
        splitter->addWidget(D);

        retranslateUi(PlayGame);
        QObject::connect(Answer, SIGNAL(clicked()), PlayGame, SLOT(close()));
        QObject::connect(Pass, SIGNAL(clicked()), PlayGame, SLOT(close()));

        QMetaObject::connectSlotsByName(PlayGame);
    } // setupUi

    void retranslateUi(QWidget *PlayGame)
    {
        PlayGame->setWindowTitle(QApplication::translate("PlayGame", "Nations", 0, QApplication::UnicodeUTF8));
        Answer->setText(QApplication::translate("PlayGame", "Answer", 0, QApplication::UnicodeUTF8));
        Pass->setText(QApplication::translate("PlayGame", "PASS!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PlayGame", "Identify The Flag Of The Country??", 0, QApplication::UnicodeUTF8));
        A->setText(QApplication::translate("PlayGame", "RadioButton", 0, QApplication::UnicodeUTF8));
        B->setText(QApplication::translate("PlayGame", "RadioButton", 0, QApplication::UnicodeUTF8));
        C->setText(QApplication::translate("PlayGame", "RadioButton", 0, QApplication::UnicodeUTF8));
        D->setText(QApplication::translate("PlayGame", "RadioButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlayGame: public Ui_PlayGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYGAME_H
