/********************************************************************************
** Form generated from reading UI file 'play.ui'
**
** Created: Tue 12. Jul 16:54:46 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Play
{
public:
    QRadioButton *A;
    QRadioButton *B;
    QRadioButton *C;
    QRadioButton *D;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Answer;
    QPushButton *Pass;

    void setupUi(QWidget *Play)
    {
        if (Play->objectName().isEmpty())
            Play->setObjectName(QString::fromUtf8("Play"));
        Play->resize(747, 469);
        A = new QRadioButton(Play);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(240, 230, 82, 17));
        B = new QRadioButton(Play);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(240, 260, 82, 17));
        C = new QRadioButton(Play);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(240, 290, 82, 17));
        D = new QRadioButton(Play);
        D->setObjectName(QString::fromUtf8("D"));
        D->setGeometry(QRect(240, 320, 82, 17));
        label = new QLabel(Play);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 40, 191, 51));
        widget = new QWidget(Play);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 360, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Answer = new QPushButton(widget);
        Answer->setObjectName(QString::fromUtf8("Answer"));

        horizontalLayout->addWidget(Answer);

        Pass = new QPushButton(widget);
        Pass->setObjectName(QString::fromUtf8("Pass"));

        horizontalLayout->addWidget(Pass);


        retranslateUi(Play);

        QMetaObject::connectSlotsByName(Play);
    } // setupUi

    void retranslateUi(QWidget *Play)
    {
        Play->setWindowTitle(QApplication::translate("Play", "Form", 0, QApplication::UnicodeUTF8));
        A->setText(QApplication::translate("Play", "RadioButton", 0, QApplication::UnicodeUTF8));
        B->setText(QApplication::translate("Play", "RadioButton", 0, QApplication::UnicodeUTF8));
        C->setText(QApplication::translate("Play", "RadioButton", 0, QApplication::UnicodeUTF8));
        D->setText(QApplication::translate("Play", "RadioButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Play", "Identify the Flag of the country?", 0, QApplication::UnicodeUTF8));
        Answer->setText(QApplication::translate("Play", "Answer", 0, QApplication::UnicodeUTF8));
        Pass->setText(QApplication::translate("Play", "PASS!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Play: public Ui_Play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
