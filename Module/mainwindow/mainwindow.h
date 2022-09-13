#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QScreen>

#include "Module/mainwindow/ui1/ui1.h"
#include "Module/mainwindow/ui2/ui2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum ui_number
{
    mainUi = 0,
    Ui1,
    Ui2,
    Ui3,
    Ui4,
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

    //main window
    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
    private:
        Ui::MainWindow *ui;
        ui1 *ui1_;
        ui2 *ui2_;



    //timer
    private:
        QTimer *ui_change_timer;
    private slots:
        void Drive();

    //event slots
    private slots:
        void on_ui1_clicked();
        void on_ui2_clicked();

    //queue
    private:
        std::vector<int> ui_change_queue;
        void QueueSaveRequest(int cmd);
        void QueueDeleteRequest();

   //ui
   void Ui1Open();
   void Ui2Open();
   void ChangeUi();


};
#endif // MAINWINDOW_H
