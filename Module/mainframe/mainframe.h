#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QMainWindow>
#include <QApplication>
#include <QLocale>
#include <QTranslator>

//mainwindow
#include "Module/mainwindow/mainwindow.h"


struct frame_data
{




};




class mainframe
{
    public:
    //----------------------------------------------------------------Const, Deconst.
        mainframe();
        ~mainframe();

    //----------------------------------------------------------------Private value
    private:
        MainWindow* main_window_ = nullptr;
;
    public:
       int mainwindow_initialize();
       void initalize();


};
#endif // MAINFRAME_H
