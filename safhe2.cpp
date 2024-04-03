#include "safhe2.h"
#include "ui_safhe2.h"
#include "safhe3.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QMessageBox"

int r;
safhe2::safhe2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::safhe2)
{
    ui->setupUi(this);
    setMaximumSize(517,439);
    setMinimumSize(517,439);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\daneshjo.db");
    database.open();

    ui->pushButton3->hide();
    ui->label3->hide();
    ui->lineEdit3->hide();
    ui->labelc->hide();
}

safhe2::~safhe2()
{
    delete ui;
}

void safhe2::on_pushButton2_clicked()
{
    ui->pushButton2->hide();
    ui->textBrowser1->hide();
    ui->pushButton1->hide();
    ui->pushButton3->show();
    ui->label3->show();
    ui->lineEdit3->show();
    ui->labelc->show();

  r=rand()%5;

  switch (r) {
  case 0:
      ui->labelc->setText("gf73S");
      break;
  case 1:
      ui->labelc->setText("HG65d");
      break;
  case 2:
      ui->labelc->setText("J65s");
      break;
  case 3:
      ui->labelc->setText("KQ98xd");
      break;
  case 4:
      ui->labelc->setText("Afj4B");
      break;
  }

}


void safhe2::on_pushButton1_clicked()
{
    safhe3 *w3=new safhe3;
    w3->show();
}


void safhe2::on_pushButton3_clicked()
{
    QSqlQuery q;
    QString s1,s2;
    s1=ui->lineEdit1->text();
    s2=ui->lineEdit2->text();
    q.exec("INSERT INTO daneshjo(name,pass)VALUES('"+s1+"','"+s2+"')");

    if(r==0)
    {
        if(ui->lineEdit3->text()=="gf73S")
        {
            safhe3 *w3=new safhe3;
            w3->show();
        }
        else
        {
            QMessageBox::warning(this,"اخطار","لطفا کد امنیتی را به درستی وارد کنید","تایید");
        }
    }
    else if(r==1)
    {
        if(ui->lineEdit3->text()=="HG65d")
        {
            safhe3 *w3=new safhe3;
            w3->show();
        }
        else
        {
           QMessageBox::warning(this,"اخطار","لطفا کد امنیتی را به درستی وارد کنید","تایید");
        }
    }
    else if(r==2)
    {
        if(ui->lineEdit3->text()=="J65s")
        {
            safhe3 *w3=new safhe3;
            w3->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد امنیتی را به درستی وارد کنید","تایید");
        }
    }
    else if(r==3)
    {
        if(ui->lineEdit3->text()=="KQ98xd")
        {
            safhe3 *w3=new safhe3;
            w3->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد امنیتی را به درستی وارد کنید","تایید");
        }
    }
    else if(r==4)
    {
        if(ui->lineEdit3->text()=="Afj4B")
        {
            safhe3 *w3=new safhe3;
            w3->show();
        }
        else
        {
             QMessageBox::warning(this,"اخطار","لطفا کد امنیتی را به درستی وارد کنید","تایید");
        }
    }

}




