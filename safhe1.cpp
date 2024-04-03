#include "safhe1.h"
#include "ui_safhe1.h"
#include "safhe2.h"
safhe1::safhe1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::safhe1)
{
    ui->setupUi(this);
setMaximumSize(517,439);
setMinimumSize(517,439);
}

safhe1::~safhe1()
{
    delete ui;
}

void safhe1::on_pushButton_clicked()
{
    safhe2 *w2=new safhe2;
    w2->show();
}

