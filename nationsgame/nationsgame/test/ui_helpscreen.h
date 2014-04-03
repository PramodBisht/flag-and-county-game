/********************************************************************************
** Form generated from reading UI file 'helpscreen.ui'
**
** Created: Tue Jul 19 06:17:10 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPSCREEN_H
#define UI_HELPSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpScreen
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Widget;
    QPushButton *HelpButton;
    QPushButton *Back;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *HelpScreen)
    {
        if (HelpScreen->objectName().isEmpty())
            HelpScreen->setObjectName(QString::fromUtf8("HelpScreen"));
        HelpScreen->resize(751, 492);
        verticalLayout = new QVBoxLayout(HelpScreen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Widget = new QWidget(HelpScreen);
        Widget->setObjectName(QString::fromUtf8("Widget"));
        HelpButton = new QPushButton(Widget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setGeometry(QRect(130, 30, 411, 51));
        Back = new QPushButton(Widget);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(130, 340, 411, 51));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(130, 100, 411, 221));

        verticalLayout->addWidget(Widget);


        retranslateUi(HelpScreen);
        QObject::connect(Back, SIGNAL(clicked()), HelpScreen, SLOT(close()));

        QMetaObject::connectSlotsByName(HelpScreen);
    } // setupUi

    void retranslateUi(QWidget *HelpScreen)
    {
        HelpScreen->setWindowTitle(QApplication::translate("HelpScreen", "Nations", 0, QApplication::UnicodeUTF8));
        HelpButton->setText(QApplication::translate("HelpScreen", "Click here to get flags of the countries", 0, QApplication::UnicodeUTF8));
        Back->setText(QApplication::translate("HelpScreen", "Back To Main Screen", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("HelpScreen", "1. A set of random 20 questions will be selected from the database.\n"
"2. For Every Correct answer there are 3 points and for an incorrect answer there is 1 mark. However there are no points for a PASS.\n"
"3. This application is in its beta phase so there is no time limit.\n"
"4. If you want to get a glimpse of the flags of the countries then press the above button\n"
"5. To go back to the main screen press the button below", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpScreen: public Ui_HelpScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPSCREEN_H
