#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    move(screen()->geometry().center() - frameGeometry().center());

    /*timer init(100ms)*/
    ui_change_timer = new QTimer(parent);
    connect(ui_change_timer, SIGNAL(timeout()), this, SLOT(Drive()));
    ui_change_timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//queue
void MainWindow::QueueSaveRequest(int cmd){this->ui_change_queue.emplace_back(cmd);}
void MainWindow::QueueDeleteRequest(){this->ui_change_queue.erase(ui_change_queue.begin());}



void MainWindow::Ui1Open()
{
    ui1_ = new ui1();
    ui1_->show();
}

void MainWindow::Ui2Open()
{
    ui2_ = new ui2();
    ui2_->show();
}



void MainWindow::ChangeUi()
{
    int queueNo = ui_change_queue.front();
    switch(queueNo)
    {
        case mainUi: break;
        case Ui1: Ui1Open(); break;
        case Ui2: Ui2Open(); break;
        case Ui3: break;
        case Ui4: break;
    }
}




void MainWindow::Drive()
{
    //qDebug() <<"Timer Called" << QDateTime::currentDateTime();
    if(!ui_change_queue.empty())
    {
        //do change ui
        ChangeUi();
        QueueDeleteRequest();
    }
    ui_change_timer->start(100);
}

void MainWindow::on_ui1_clicked(){QueueSaveRequest(Ui1);}


void MainWindow::on_ui2_clicked(){QueueSaveRequest(Ui2);}

