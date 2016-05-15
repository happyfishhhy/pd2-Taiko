#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include <time.h>
#include <QKeyEvent>
#include <cstdlib>
#include <QMediaPlayer>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    score=0;
    ui->setupUi(this);
    ui->bg_pic1->setPixmap(QPixmap(":/image/bg.jpg"));
    ui->bg_pic1->setMinimumHeight(768);
    ui->bg_pic1->setMinimumWidth(1024);
    ui->bg_pic2->setPixmap(QPixmap(":/image/bg_p2.jpg"));
    ui->bg_pic2->setMinimumHeight(768);
    ui->bg_pic2->setMinimumWidth(1024);
    ui->gameover->setPixmap(QPixmap(":/image/gameover.jpg"));
    ui->gameover->setMinimumHeight(530);
    ui->gameover->setMinimumWidth(710);
    ui->gameover->setGeometry(175,150,710,530);
    ui->bg_pic2->hide();
    ui->bg_pic1->show();
    ui->timer->hide();
    ui->Timeleft->hide();
    ui->Showscore->hide();
    ui->Score->hide();
    ui->ps1->hide();
    ui->ps2->hide();
    ui->PERFECT->hide();
    ui->GOOD->hide();
    ui->COMBO->hide();
    ui->showcombo->hide();
    ui->gameover->hide();
    ui->Yourscore->hide();
    ui->Finalscore->hide();
    ui->EXIT_2->setMinimumWidth(200);
    ui->EXIT_2->setMinimumHeight(100);
    ui->EXIT_2->setGeometry(200,550,200,100);
    ui->EXIT_2->hide();
    ui->RESTART->setMinimumWidth(200);
    ui->RESTART->setMinimumHeight(100);
    ui->RESTART->setGeometry(650,550,200,100);
    ui->RESTART->hide();


    ui->Car->setPixmap(QPixmap(":/image/car.png"));
    ui->Car->setMinimumHeight(254);
    ui->Car->setMinimumWidth(410);
    ui->Car->setGeometry(50,250,362,116);
    ui->Car->hide();

    ui->PERFECT->setPixmap(QPixmap(":/image/perfect.jpg"));
    ui->GOOD->setPixmap(QPixmap(":/image/good.jpg"));


    srand(time(NULL));
    for (int i=0;i<15;i++)
    {
        tire1[i]=(rand()%15000)+1100;
        tire2[i]=(rand()%15000)+1100;
    }
    ui->tire_1_1->setPixmap(QPixmap(":/image/tire1.png"));
    ui->tire_1_1->setGeometry(tire1[0],10,100,100);
    ui->tire_1_2->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_2->setGeometry(tire1[1],10,100,100);
    ui->tire_1_3->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_3->setGeometry(tire1[2],10,100,100);
    ui->tire_1_4->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_4->setGeometry(tire1[3],10,100,100);
    ui->tire_1_5->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_5->setGeometry(tire1[4],10,100,100);
    ui->tire_1_6->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_6->setGeometry(tire1[5],10,100,100);
    ui->tire_1_7->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_7->setGeometry(tire1[6],10,100,100);
    ui->tire_1_8->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_8->setGeometry(tire1[7],10,100,100);
    ui->tire_1_9->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_9->setGeometry(tire1[8],10,100,100);
    ui->tire_1_10->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_10->setGeometry(tire1[9],10,100,100);
    ui->tire_1_11->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_11->setGeometry(tire1[10],10,100,100);
    ui->tire_1_12->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_12->setGeometry(tire1[11],10,100,100);
    ui->tire_1_13->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_13->setGeometry(tire1[12],10,100,100);
    ui->tire_1_14->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_14->setGeometry(tire1[13],10,100,100);
    ui->tire_1_15->setPixmap(QPixmap(":/image/tire1.png"));ui->tire_1_15->setGeometry(tire1[14],10,100,100);

    ui->tire_2_1->setPixmap(QPixmap(":/image/tire2.png"));
    ui->tire_2_1->setGeometry(tire2[0],10,100,100);
    ui->tire_2_2->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_2->setGeometry(tire2[1],10,100,100);
    ui->tire_2_3->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_3->setGeometry(tire2[2],10,100,100);
    ui->tire_2_4->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_4->setGeometry(tire2[3],10,100,100);
    ui->tire_2_5->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_5->setGeometry(tire2[4],10,100,100);
    ui->tire_2_6->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_6->setGeometry(tire2[5],10,100,100);
    ui->tire_2_7->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_7->setGeometry(tire2[6],10,100,100);
    ui->tire_2_8->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_8->setGeometry(tire2[7],10,100,100);
    ui->tire_2_9->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_9->setGeometry(tire2[8],10,100,100);
    ui->tire_2_10->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_10->setGeometry(tire2[9],10,100,100);
    ui->tire_2_11->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_11->setGeometry(tire2[10],10,100,100);
    ui->tire_2_12->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_12->setGeometry(tire2[11],10,100,100);
    ui->tire_2_13->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_13->setGeometry(tire2[12],10,100,100);
    ui->tire_2_14->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_14->setGeometry(tire2[13],10,100,100);
    ui->tire_2_15->setPixmap(QPixmap(":/image/tire2.png"));ui->tire_2_15->setGeometry(tire2[14],10,100,100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//當START或RESAART按下後
void MainWindow::on_START_clicked()
{
    QSound::play(":/sound/song.wav");

    ui->bg_pic1->hide();
    ui->bg_pic2->show();
    ui->Car->show();
    ui->START->hide();
    ui->EXIT->hide();
    ui->Timeleft->show();
    ui->timer->show();
    ui->Showscore->show();
    ui->Score->show();
    ui->gameover->hide();
    ui->EXIT_2->hide();
    ui->RESTART->hide();
    ui->Yourscore->hide();
    ui->Finalscore->hide();
    ui->ps1->show();
    ui->ps2->show();

    if(MARK==1)
    {
        disconnect(timer,SIGNAL(timeout()),this,SLOT(Time()));
        disconnect(time_call,SIGNAL(timeout()),this,SLOT(time_x()));
        score=0;
        ui->Score->setText(QString::number(score));
        init_pos();
        position();
        MARK=0;
    }

        t=30.0;
        timer=new QTimer(this);
        timer->setInterval(100);
        connect(timer,SIGNAL(timeout()),this,SLOT(Time()));
        timer->start();
        time_call=new QTimer(this);
        time_call->setInterval(10);
        connect(time_call,SIGNAL(timeout()),this,SLOT(time_x()));
        time_call->start();
        connect(ui->EXIT_2 ,SIGNAL(clicked(bool)),this,SLOT(close()));
        connect(ui->RESTART ,SIGNAL(clicked(bool)),this,SLOT(on_START_clicked()));
        MARK=1;

}

void MainWindow::on_EXIT_clicked()
{
    close();
}

//計算時間的function
void MainWindow::Time()
{
    if(t<31 &&t>=0 )
    {
        t=t-0.1;
        ui->timer->setText(QString::number(t));
        qDebug()<<t;
    }
    if(t<0 && t >-5)
    {
        ui->ps1->hide();
        ui->ps2->hide();
        ui->timer->setText(QString::number(0));
        ui->gameover->show();
        finalscore=score;
        ui->Finalscore->setText(QString::number(finalscore));
        ui->Yourscore->show();
        ui->Finalscore->show();
        ui->EXIT_2->show();
        ui->RESTART->show();
        //MARK=1;
        disconnect(time_call,SIGNAL(timeout()),this,SLOT(time_x()));
        disconnect(timer,SIGNAL(timeout()),this,SLOT(Time()));
        combo=0;
    }
}

//設置輪胎位置
void MainWindow::position()
{    
    ui->tire_1_1->setGeometry(tire1[0],340,100,100);
    ui->tire_1_2->setGeometry(tire1[1],340,100,100);
    ui->tire_1_3->setGeometry(tire1[2],340,100,100);
    ui->tire_1_4->setGeometry(tire1[3],340,100,100);
    ui->tire_1_5->setGeometry(tire1[4],340,100,100);
    ui->tire_1_6->setGeometry(tire1[5],340,100,100);
    ui->tire_1_7->setGeometry(tire1[6],340,100,100);
    ui->tire_1_8->setGeometry(tire1[7],340,100,100);
    ui->tire_1_9->setGeometry(tire1[8],340,100,100);
    ui->tire_1_10->setGeometry(tire1[9],340,100,100);
    ui->tire_1_11->setGeometry(tire1[10],340,100,100);
    ui->tire_1_12->setGeometry(tire1[11],340,100,100);
    ui->tire_1_13->setGeometry(tire1[12],340,100,100);
    ui->tire_1_14->setGeometry(tire1[13],340,100,100);
    ui->tire_1_15->setGeometry(tire1[14],340,100,100);

    ui->tire_2_2->setGeometry(tire2[1],340,100,100);
    ui->tire_2_3->setGeometry(tire2[2],340,100,100);
    ui->tire_2_4->setGeometry(tire2[3],340,100,100);
    ui->tire_2_5->setGeometry(tire2[4],340,100,100);
    ui->tire_2_6->setGeometry(tire2[5],340,100,100);
    ui->tire_2_7->setGeometry(tire2[6],340,100,100);
    ui->tire_2_8->setGeometry(tire2[7],340,100,100);
    ui->tire_2_9->setGeometry(tire2[8],340,100,100);
    ui->tire_2_10->setGeometry(tire2[9],340,100,100);
    ui->tire_2_11->setGeometry(tire2[10],340,100,100);
    ui->tire_2_12->setGeometry(tire2[11],340,100,100);
    ui->tire_2_13->setGeometry(tire2[12],340,100,100);
    ui->tire_2_14->setGeometry(tire2[13],340,100,100);
    ui->tire_2_15->setGeometry(tire2[14],340,100,100);

}

//輪胎向左移
void MainWindow::time_x()
{
    if(t<31 &&t>=0)
    {
        position();
        while(C>9)
        {
            C=0;
            for(int A=0;A<15;A++)
            {
                for(int B=0;B<15;B++)
                {
                    if(tire1[A]-tire1[B]<101 || tire1[A]-tire1[B]<101)
                    {
                        tire1[A]=tire1[A]+100;
                    }
                    if(tire2[A]-tire1[B]<101 || tire2[A]-tire2[B]<101)
                    {
                        tire2[A]=tire2[A]+100;
                    }
                }
            }
            C++;
        }
        Remake();
        for(int k=0;k<15;k++)
        {
            if(tire1[k]<55 && tire1[k]>0)
            {
                combo=0;
            }
            if(tire2[k]<55 && tire2[k]>0)
            {
                combo=0;
            }
        }
        for(int i=0;i<15;i++)
        {
            tire1[i]=tire1[i]-5;
            tire2[i]=tire2[i]-5;
        }

    }
}

void MainWindow::init_pos()
{
    for (int i=0;i<15;i++)
    {
        tire1[i]=(rand()%15000)+1100;
        tire2[i]=(rand()%15000)+1100;
    }
}

//按下按鍵後消掉輪胎
void MainWindow::keyPressEvent(QKeyEvent *press)
{
    if(press->key()==Qt::Key_B)
    {
        QSound::play(":/sound/dong.wav");
        for(int j=0;j<15;j++)
        {
            if(tire1[j]<=115 && tire1[j]>=85)
            {
                score=score+2;
                tire1[j]=(rand()%15000)+1100;
                ui->PERFECT->show();
                combo++;
                test++;
                break;
            }

            if(tire1[j]<=130 && tire1[j]>115)
            {
                score++;
                tire1[j]=(rand()%15000)+1100;
                ui->GOOD->show();
                combo++;
                test++;
                break;
            }
            if(tire1[j]<=85 && tire1[j]>55)
            {
                score++;
                tire1[j]=(rand()%15000)+1100;
                ui->GOOD->show();
                combo++;
                test++;
                break;
            }
            if(test==0)
            {
                if(tire1[j]<55)
                {
                    combo=0;
                }
            }
        }
        ui->Score->setText(QString::number(score));
        ui->COMBO->setText(QString::number(combo));
        if(combo!=0)
        {
             ui->COMBO->show();
             ui->showcombo->show();
        }
        test=0;
    }
    if(press->key()==Qt::Key_W)
    {
       QSound::play(":/sound/ka.wav");
       for(int j=0;j<15;j++)
       {
           if(tire2[j]<=115&&tire2[j]>=85)
           {
               score=score+2;
               tire2[j]=(rand()%15000)+1100;
               ui->PERFECT->show();
               combo++;
               test++;
               break;
           }
           if(tire2[j]<=130 && tire2[j]>115)
           {
               score++;
               tire2[j]=(rand()%15000)+1100;
               ui->GOOD->show();
               combo++;
               test++;
               break;
           }
           if(tire2[j]<=85 && tire2[j]>55)
           {
               score++;
               tire2[j]=(rand()%15000)+1100;
               ui->GOOD->show();
               combo++;
               test++;
               break;
           }
           if(test==0)
           {
               if(tire1[j]<55)
               {
                   combo=0;
               }
           }
       }
       ui->Score->setText(QString::number(score));
       ui->COMBO->setText(QString::number(combo));
       if(combo!=0)
       {
            ui->COMBO->show();
            ui->showcombo->show();
       }
       test=0;
    }
}

//當輪胎離開螢幕時重設
void MainWindow::Remake()
{
    for(int i=0;i<15;i++)
    {
        if(tire1[i]<=-100)
        {
            tire1[i]=(rand()%15000)+1100;
        }
        if(tire2[i]<=-100)
        {
            tire2[i]=(rand()%15000)+1100;
        }
    }
}

//放開按鍵後的執行效果
void MainWindow::keyReleaseEvent(QKeyEvent *)
{
    ui->PERFECT->hide();
    ui->GOOD->hide();
    ui->COMBO->hide();
    ui->showcombo->hide();
}

