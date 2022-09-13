#include "ui2.h"
#include "ui_ui2.h"

ui2::ui2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui2)
{
    ui->setupUi(this);
}

ui2::~ui2()
{
    delete ui;
}
