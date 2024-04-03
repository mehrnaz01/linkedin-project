#include "safhe3.h"
#include "ui_safhe3.h"
#include "QMessageBox"
#include "safhe4.h"

int t;
safhe3::safhe3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::safhe3)
{
    ui->setupUi(this);
    setMaximumSize(517,439);
    setMinimumSize(517,439);
}

safhe3::~safhe3()
{
    delete ui;
}

void safhe3::on_pushButton_clicked()
{
    t=rand()%5;
    switch (t) {
    case 0:
         QMessageBox::information(this,"کد تایید","3782","ok");
        break;
    case 1:
         QMessageBox::information(this,"کد تایید","9043","ok");
        break;
    case 2:
         QMessageBox::information(this,"کد تایید","0254","ok");
        break;
    case 3:
         QMessageBox::information(this,"کد تایید","1287","ok");
        break;
    case 4:
         QMessageBox::information(this,"کد تایید","9812","ok");
        break;
    }
}


void safhe3::on_pushButton_2_clicked()
{
    if(t==0)
    {
        if(ui->lineEdit->text()=="3782")
        {
            safhe4 *w4=new safhe4;
            w4->show();
        }
        else
        {
            QMessageBox::warning(this,"اخطار","لطفا کد تایید را به درستی وارد کنید","تایید");
        }
    }
    else if(t==1)
    {
        if(ui->lineEdit->text()=="9043")
        {
            safhe4 *w4=new safhe4;
            w4->show();
        }
        else
        {
           QMessageBox::warning(this,"اخطار","لطفا کد تایید را به درستی وارد کنید","تایید");
        }
    }
    else if(t==2)
    {
        if(ui->lineEdit->text()=="0254")
        {
            safhe4 *w4=new safhe4;
            w4->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد تایید را به درستی وارد کنید","تایید");
        }
    }
    else if(t==3)
    {
        if(ui->lineEdit->text()=="1287")
        {
            safhe4 *w4=new safhe4;
            w4->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد تایید را به درستی وارد کنید","تایید");
        }
    }
    else if(t==4)
    {
        if(ui->lineEdit->text()=="9812")
        {
            safhe4 *w4=new safhe4;
            w4->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد تایید را به درستی وارد کنید","تایید");
        }
    }
}

