#ifndef SAFHE3_H
#define SAFHE3_H

#include <QMainWindow>

namespace Ui {
class safhe3;
}

class safhe3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit safhe3(QWidget *parent = nullptr);
    ~safhe3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::safhe3 *ui;
};

#endif // SAFHE3_H
