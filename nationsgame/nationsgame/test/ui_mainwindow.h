/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 18. Jul 11:01:57 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QLabel *label_2;
    QLabel *label;
    QPushButton *Play;
    QPushButton *Help;
    QPushButton *Quit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(635, 466);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mainWidget = new QWidget(centralWidget);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        welcomeLabel = new QLabel(mainWidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setEnabled(true);
        QFont font;
        font.setPointSize(14);
        welcomeLabel->setFont(font);

        verticalLayout->addWidget(welcomeLabel);

        label_2 = new QLabel(mainWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label = new QLabel(mainWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        Play = new QPushButton(mainWidget);
        Play->setObjectName(QString::fromUtf8("Play"));

        verticalLayout->addWidget(Play);

        Help = new QPushButton(mainWidget);
        Help->setObjectName(QString::fromUtf8("Help"));

        verticalLayout->addWidget(Help);

        Quit = new QPushButton(mainWidget);
        Quit->setObjectName(QString::fromUtf8("Quit"));

        verticalLayout->addWidget(Quit);


        horizontalLayout->addWidget(mainWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 635, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(Quit, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(Help, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(Play, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Nations", 0, QApplication::UnicodeUTF8));
        welcomeLabel->setText(QApplication::translate("MainWindow", "Welcome To The Flag Game ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Press Play Game to get Started", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "To Get An Idea Of the Countries Press Help", 0, QApplication::UnicodeUTF8));
        Play->setText(QApplication::translate("MainWindow", "Play Game", 0, QApplication::UnicodeUTF8));
        Help->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        Quit->setText(QApplication::translate("MainWindow", "Quit Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
