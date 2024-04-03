#ifndef SAFHE2_H
#define SAFHE2_H

#include <QMainWindow>

namespace Ui {
class safhe2;
}

class safhe2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit safhe2(QWidget *parent = nullptr);
    ~safhe2();

private slots:
    void on_pushButton2_clicked();

    void on_pushButton1_clicked();

    void on_pushButton3_clicked();

private:
    Ui::safhe2 *ui;
};

#endif // SAFHE2_H
