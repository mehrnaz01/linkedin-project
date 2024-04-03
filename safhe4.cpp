#include "safhe4.h"
#include "ui_safhe4.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

safhe4::safhe4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::safhe4)
{
    ui->setupUi(this);
    setMaximumSize(517,439);
    setMinimumSize(517,439);
}

safhe4::~safhe4()
{
    delete ui;
}

void safhe4::on_pushButton_clicked()
{
    QSqlQuery s;
    QString c1,c2,c3,c4;
    c1=ui->dateEdit->text();
    c2=ui->lineEdit_2->text();
    c3=ui->lineEdit_3->text();
    c4=ui->lineEdit_4->text();
    s.exec("INSERT INTO daneshjo(birth,shoghl,sherkat,uni)VALUES('"+c1+"','"+c2+"','"+c3+"','"+c4+"')");
}

