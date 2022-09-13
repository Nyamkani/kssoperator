#include "mainframe.h"


//----------------------------------------------------------------Const, Deconst.
mainframe::mainframe()
{




}

mainframe::~mainframe()
{


}


//----------------------------------------------------------------initalize

int mainframe::mainwindow_initialize()
{
    int argc =0;
    char **argv = nullptr;
    QApplication a(argc, argv);

    /*Translation function*/
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "kssoperator_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    if(main_window_ == nullptr) main_window_  = new MainWindow();
    main_window_->show();
    return a.exec();
}



void mainframe::initalize()
{
    mainwindow_initialize();
}
