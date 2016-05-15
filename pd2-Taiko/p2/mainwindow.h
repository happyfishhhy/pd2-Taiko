#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QtCore>
#include <QMediaPlayer>
#include <QSound>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QTimer *timer;
    QTimer *time_call;

    QTimer *restarttime;
    QTimer *time_call_2;

    double t=30;
    int C=0;
    int tire1[15];
    int tire2[15];
    int score=0;
    int finalscore;
    int MARK=0;
    int combo=0;
    int test=0;

    void Remake();

    ~MainWindow();

private slots:

    void Time();

    void on_START_clicked();

    void on_EXIT_clicked();

    void time_x();
    void init_pos();
    void position();
    void keyPressEvent(QKeyEvent *press);
    void keyReleaseEvent(QKeyEvent *);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
