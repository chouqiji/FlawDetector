#include "fdmain.h"
#include "ui_fdmain.h"

fdmain::fdmain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fdmain)
{
    ui->setupUi(this);
}

fdmain::~fdmain()
{
    delete ui;
}
