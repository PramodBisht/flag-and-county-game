/********************************************************************************
** Form generated from reading UI file 'thanks.ui'
**
** Created: Mon 18. Jul 10:46:15 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THANKS_H
#define UI_THANKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Thanks
{
public:
    QSplitter *splitter;
    QLabel *label;
    QLabel *Score;
    QPushButton *Back;

    void setupUi(QWidget *Thanks)
    {
        if (Thanks->objectName().isEmpty())
            Thanks->setObjectName(QString::fromUtf8("Thanks"));
        Thanks->resize(657, 474);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Thanks->setFont(font);
        splitter = new QSplitter(Thanks);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(100, 70, 451, 381));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        Score = new QLabel(splitter);
        Score->setObjectName(QString::fromUtf8("Score"));
        splitter->addWidget(Score);
        Back = new QPushButton(splitter);
        Back->setObjectName(QString::fromUtf8("Back"));
        splitter->addWidget(Back);

        retranslateUi(Thanks);
        QObject::connect(Back, SIGNAL(clicked()), Thanks, SLOT(close()));

        QMetaObject::connectSlotsByName(Thanks);
    } // setupUi

    void retranslateUi(QWidget *Thanks)
    {
        Thanks->setWindowTitle(QApplication::translate("Thanks", "Nations", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Thanks", "Thanks For Playing The Game: ", 0, QApplication::UnicodeUTF8));
        Score->setText(QApplication::translate("Thanks", "TextLabel", 0, QApplication::UnicodeUTF8));
        Back->setText(QApplication::translate("Thanks", "PLAYAGAIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Thanks: public Ui_Thanks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THANKS_H
