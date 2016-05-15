/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *EXIT;
    QPushButton *START;
    QLabel *bg_pic1;
    QLabel *bg_pic2;
    QLabel *timer;
    QLabel *tire_1_1;
    QLabel *tire_2_1;
    QLabel *tire_2_2;
    QLabel *tire_2_3;
    QLabel *tire_2_4;
    QLabel *tire_2_5;
    QLabel *tire_2_6;
    QLabel *tire_2_7;
    QLabel *tire_2_8;
    QLabel *tire_2_9;
    QLabel *tire_2_10;
    QLabel *tire_2_11;
    QLabel *tire_2_12;
    QLabel *tire_2_13;
    QLabel *tire_2_14;
    QLabel *tire_2_15;
    QLabel *tire_1_2;
    QLabel *tire_1_3;
    QLabel *tire_1_4;
    QLabel *tire_1_5;
    QLabel *tire_1_6;
    QLabel *tire_1_7;
    QLabel *tire_1_8;
    QLabel *tire_1_9;
    QLabel *tire_1_10;
    QLabel *tire_1_11;
    QLabel *tire_1_12;
    QLabel *tire_1_13;
    QLabel *tire_1_14;
    QLabel *tire_1_15;
    QLabel *Car;
    QLabel *Timeleft;
    QLabel *Showscore;
    QLabel *Score;
    QLabel *PERFECT;
    QLabel *GOOD;
    QLabel *gameover;
    QLabel *Finalscore;
    QLabel *Yourscore;
    QPushButton *EXIT_2;
    QPushButton *RESTART;
    QLabel *COMBO;
    QLabel *showcombo;
    QTextBrowser *ps1;
    QTextBrowser *ps2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setMinimumSize(QSize(1024, 768));
        MainWindow->setMaximumSize(QSize(1024, 768));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        EXIT = new QPushButton(centralWidget);
        EXIT->setObjectName(QStringLiteral("EXIT"));
        EXIT->setGeometry(QRect(140, 620, 151, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        EXIT->setFont(font);
        START = new QPushButton(centralWidget);
        START->setObjectName(QStringLiteral("START"));
        START->setGeometry(QRect(650, 580, 211, 111));
        START->setMinimumSize(QSize(0, 0));
        START->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        START->setFont(font1);
        bg_pic1 = new QLabel(centralWidget);
        bg_pic1->setObjectName(QStringLiteral("bg_pic1"));
        bg_pic1->setGeometry(QRect(0, 0, 851, 461));
        bg_pic2 = new QLabel(centralWidget);
        bg_pic2->setObjectName(QStringLiteral("bg_pic2"));
        bg_pic2->setGeometry(QRect(0, 0, 951, 501));
        timer = new QLabel(centralWidget);
        timer->setObjectName(QStringLiteral("timer"));
        timer->setGeometry(QRect(790, 10, 141, 61));
        timer->setFont(font1);
        tire_1_1 = new QLabel(centralWidget);
        tire_1_1->setObjectName(QStringLiteral("tire_1_1"));
        tire_1_1->setGeometry(QRect(710, 190, 58, 15));
        tire_2_1 = new QLabel(centralWidget);
        tire_2_1->setObjectName(QStringLiteral("tire_2_1"));
        tire_2_1->setGeometry(QRect(540, 70, 58, 15));
        tire_2_2 = new QLabel(centralWidget);
        tire_2_2->setObjectName(QStringLiteral("tire_2_2"));
        tire_2_2->setGeometry(QRect(490, 490, 58, 15));
        tire_2_3 = new QLabel(centralWidget);
        tire_2_3->setObjectName(QStringLiteral("tire_2_3"));
        tire_2_3->setGeometry(QRect(500, 500, 58, 15));
        tire_2_4 = new QLabel(centralWidget);
        tire_2_4->setObjectName(QStringLiteral("tire_2_4"));
        tire_2_4->setGeometry(QRect(510, 510, 58, 15));
        tire_2_5 = new QLabel(centralWidget);
        tire_2_5->setObjectName(QStringLiteral("tire_2_5"));
        tire_2_5->setGeometry(QRect(520, 520, 58, 15));
        tire_2_6 = new QLabel(centralWidget);
        tire_2_6->setObjectName(QStringLiteral("tire_2_6"));
        tire_2_6->setGeometry(QRect(530, 530, 58, 15));
        tire_2_7 = new QLabel(centralWidget);
        tire_2_7->setObjectName(QStringLiteral("tire_2_7"));
        tire_2_7->setGeometry(QRect(540, 540, 58, 15));
        tire_2_8 = new QLabel(centralWidget);
        tire_2_8->setObjectName(QStringLiteral("tire_2_8"));
        tire_2_8->setGeometry(QRect(550, 550, 58, 15));
        tire_2_9 = new QLabel(centralWidget);
        tire_2_9->setObjectName(QStringLiteral("tire_2_9"));
        tire_2_9->setGeometry(QRect(560, 560, 58, 15));
        tire_2_10 = new QLabel(centralWidget);
        tire_2_10->setObjectName(QStringLiteral("tire_2_10"));
        tire_2_10->setGeometry(QRect(570, 570, 58, 15));
        tire_2_11 = new QLabel(centralWidget);
        tire_2_11->setObjectName(QStringLiteral("tire_2_11"));
        tire_2_11->setGeometry(QRect(580, 580, 58, 15));
        tire_2_12 = new QLabel(centralWidget);
        tire_2_12->setObjectName(QStringLiteral("tire_2_12"));
        tire_2_12->setGeometry(QRect(590, 590, 58, 15));
        tire_2_13 = new QLabel(centralWidget);
        tire_2_13->setObjectName(QStringLiteral("tire_2_13"));
        tire_2_13->setGeometry(QRect(610, 610, 58, 15));
        tire_2_14 = new QLabel(centralWidget);
        tire_2_14->setObjectName(QStringLiteral("tire_2_14"));
        tire_2_14->setGeometry(QRect(620, 620, 58, 15));
        tire_2_15 = new QLabel(centralWidget);
        tire_2_15->setObjectName(QStringLiteral("tire_2_15"));
        tire_2_15->setGeometry(QRect(630, 630, 58, 15));
        tire_1_2 = new QLabel(centralWidget);
        tire_1_2->setObjectName(QStringLiteral("tire_1_2"));
        tire_1_2->setGeometry(QRect(910, 170, 58, 15));
        tire_1_3 = new QLabel(centralWidget);
        tire_1_3->setObjectName(QStringLiteral("tire_1_3"));
        tire_1_3->setGeometry(QRect(920, 180, 58, 15));
        tire_1_4 = new QLabel(centralWidget);
        tire_1_4->setObjectName(QStringLiteral("tire_1_4"));
        tire_1_4->setGeometry(QRect(930, 190, 58, 15));
        tire_1_5 = new QLabel(centralWidget);
        tire_1_5->setObjectName(QStringLiteral("tire_1_5"));
        tire_1_5->setGeometry(QRect(940, 200, 58, 15));
        tire_1_6 = new QLabel(centralWidget);
        tire_1_6->setObjectName(QStringLiteral("tire_1_6"));
        tire_1_6->setGeometry(QRect(950, 210, 58, 15));
        tire_1_7 = new QLabel(centralWidget);
        tire_1_7->setObjectName(QStringLiteral("tire_1_7"));
        tire_1_7->setGeometry(QRect(960, 220, 58, 15));
        tire_1_8 = new QLabel(centralWidget);
        tire_1_8->setObjectName(QStringLiteral("tire_1_8"));
        tire_1_8->setGeometry(QRect(640, 640, 58, 15));
        tire_1_9 = new QLabel(centralWidget);
        tire_1_9->setObjectName(QStringLiteral("tire_1_9"));
        tire_1_9->setGeometry(QRect(650, 650, 58, 15));
        tire_1_10 = new QLabel(centralWidget);
        tire_1_10->setObjectName(QStringLiteral("tire_1_10"));
        tire_1_10->setGeometry(QRect(660, 660, 58, 15));
        tire_1_11 = new QLabel(centralWidget);
        tire_1_11->setObjectName(QStringLiteral("tire_1_11"));
        tire_1_11->setGeometry(QRect(670, 670, 58, 15));
        tire_1_12 = new QLabel(centralWidget);
        tire_1_12->setObjectName(QStringLiteral("tire_1_12"));
        tire_1_12->setGeometry(QRect(680, 680, 58, 15));
        tire_1_13 = new QLabel(centralWidget);
        tire_1_13->setObjectName(QStringLiteral("tire_1_13"));
        tire_1_13->setGeometry(QRect(690, 690, 58, 15));
        tire_1_14 = new QLabel(centralWidget);
        tire_1_14->setObjectName(QStringLiteral("tire_1_14"));
        tire_1_14->setGeometry(QRect(700, 700, 58, 15));
        tire_1_15 = new QLabel(centralWidget);
        tire_1_15->setObjectName(QStringLiteral("tire_1_15"));
        tire_1_15->setGeometry(QRect(700, 700, 58, 15));
        Car = new QLabel(centralWidget);
        Car->setObjectName(QStringLiteral("Car"));
        Car->setGeometry(QRect(90, 130, 58, 15));
        Timeleft = new QLabel(centralWidget);
        Timeleft->setObjectName(QStringLiteral("Timeleft"));
        Timeleft->setGeometry(QRect(580, 10, 201, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font2.setBold(true);
        font2.setWeight(75);
        Timeleft->setFont(font2);
        Showscore = new QLabel(centralWidget);
        Showscore->setObjectName(QStringLiteral("Showscore"));
        Showscore->setGeometry(QRect(30, 0, 151, 61));
        Showscore->setFont(font2);
        Score = new QLabel(centralWidget);
        Score->setObjectName(QStringLiteral("Score"));
        Score->setGeometry(QRect(170, 0, 111, 61));
        Score->setFont(font1);
        PERFECT = new QLabel(centralWidget);
        PERFECT->setObjectName(QStringLiteral("PERFECT"));
        PERFECT->setGeometry(QRect(190, 200, 111, 91));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        PERFECT->setFont(font3);
        GOOD = new QLabel(centralWidget);
        GOOD->setObjectName(QStringLiteral("GOOD"));
        GOOD->setGeometry(QRect(310, 200, 121, 91));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        GOOD->setFont(font4);
        gameover = new QLabel(centralWidget);
        gameover->setObjectName(QStringLiteral("gameover"));
        gameover->setGeometry(QRect(100, 130, 821, 521));
        gameover->setMinimumSize(QSize(1, 0));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Adobe \347\271\201\351\273\221\351\253\224 Std B"));
        font5.setPointSize(48);
        font5.setBold(true);
        font5.setWeight(75);
        gameover->setFont(font5);
        Finalscore = new QLabel(centralWidget);
        Finalscore->setObjectName(QStringLiteral("Finalscore"));
        Finalscore->setGeometry(QRect(450, 170, 221, 121));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Finalscore->setPalette(palette);
        Finalscore->setFont(font1);
        Yourscore = new QLabel(centralWidget);
        Yourscore->setObjectName(QStringLiteral("Yourscore"));
        Yourscore->setGeometry(QRect(200, 200, 261, 41));
        Yourscore->setFont(font1);
        EXIT_2 = new QPushButton(centralWidget);
        EXIT_2->setObjectName(QStringLiteral("EXIT_2"));
        EXIT_2->setGeometry(QRect(240, 630, 151, 61));
        EXIT_2->setFont(font1);
        RESTART = new QPushButton(centralWidget);
        RESTART->setObjectName(QStringLiteral("RESTART"));
        RESTART->setGeometry(QRect(462, 627, 191, 51));
        RESTART->setFont(font1);
        COMBO = new QLabel(centralWidget);
        COMBO->setObjectName(QStringLiteral("COMBO"));
        COMBO->setGeometry(QRect(510, 200, 131, 91));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        COMBO->setPalette(palette1);
        COMBO->setFont(font1);
        COMBO->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        showcombo = new QLabel(centralWidget);
        showcombo->setObjectName(QStringLiteral("showcombo"));
        showcombo->setGeometry(QRect(667, 204, 201, 81));
        showcombo->setFont(font1);
        ps1 = new QTextBrowser(centralWidget);
        ps1->setObjectName(QStringLiteral("ps1"));
        ps1->setGeometry(QRect(170, 600, 211, 111));
        ps1->setFont(font1);
        ps2 = new QTextBrowser(centralWidget);
        ps2->setObjectName(QStringLiteral("ps2"));
        ps2->setGeometry(QRect(580, 600, 211, 111));
        ps2->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        bg_pic2->raise();
        ps2->raise();
        ps1->raise();
        bg_pic1->raise();
        EXIT->raise();
        timer->raise();
        START->raise();
        Car->raise();
        tire_1_1->raise();
        tire_1_10->raise();
        tire_1_11->raise();
        tire_1_12->raise();
        tire_1_13->raise();
        tire_1_14->raise();
        tire_1_15->raise();
        tire_1_2->raise();
        tire_1_3->raise();
        tire_1_4->raise();
        tire_1_5->raise();
        tire_1_6->raise();
        tire_1_7->raise();
        tire_1_8->raise();
        tire_1_9->raise();
        tire_2_1->raise();
        tire_2_10->raise();
        tire_2_11->raise();
        tire_2_12->raise();
        tire_2_13->raise();
        tire_2_14->raise();
        tire_2_15->raise();
        tire_2_2->raise();
        tire_2_3->raise();
        tire_2_4->raise();
        tire_2_5->raise();
        tire_2_6->raise();
        tire_2_7->raise();
        tire_2_8->raise();
        tire_2_9->raise();
        Timeleft->raise();
        PERFECT->raise();
        GOOD->raise();
        COMBO->raise();
        showcombo->raise();
        gameover->raise();
        Showscore->raise();
        Score->raise();
        RESTART->raise();
        EXIT_2->raise();
        Finalscore->raise();
        Yourscore->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        EXIT->setText(QApplication::translate("MainWindow", "EXIT", 0));
        START->setText(QApplication::translate("MainWindow", "START", 0));
        bg_pic1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        bg_pic2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        timer->setText(QApplication::translate("MainWindow", "Timer", 0));
        tire_1_1->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_2_1->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_2->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_3->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_4->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_5->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_6->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_7->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_8->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_9->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_10->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_11->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_12->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_13->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_14->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_2_15->setText(QApplication::translate("MainWindow", "tire_2_1", 0));
        tire_1_2->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_3->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_4->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_5->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_6->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_7->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_8->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_9->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_10->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_11->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_12->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_13->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_14->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        tire_1_15->setText(QApplication::translate("MainWindow", "tire_1_1", 0));
        Car->setText(QApplication::translate("MainWindow", "Car", 0));
        Timeleft->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:26pt;\">Time Left :</span></p></body></html>", 0));
        Showscore->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:26pt;\">Score :</span></p></body></html>", 0));
        Score->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0<br/></p></body></html>", 0));
        PERFECT->setText(QString());
        GOOD->setText(QString());
        gameover->setText(QApplication::translate("MainWindow", "Gameover", 0));
        Finalscore->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#00ff00;\">Finalscore</span></p></body></html>", 0));
        Yourscore->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#00ff00;\">Your Score :</span></p></body></html>", 0));
        EXIT_2->setText(QApplication::translate("MainWindow", "EXIT", 0));
        RESTART->setText(QApplication::translate("MainWindow", "RESTART", 0));
        COMBO->setText(QApplication::translate("MainWindow", "combo", 0));
        showcombo->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#00ff00;\">combo \357\274\201</span></p></body></html>", 0));
        ps1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe \347\271\201\351\273\221\351\253\224 Std B'; font-size:26pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PMingLiU'; font-weight:400;\">B :  </span><img src=\":/image/tire1.png\" /></p></body></html>", 0));
        ps2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe \347\271\201\351\273\221\351\253\224 Std B'; font-size:26pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">W : <img src=\":/image/tire2.png\" /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
