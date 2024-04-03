#ifndef SAFHE4_H
#define SAFHE4_H

#include <QMainWindow>

namespace Ui {
class safhe4;
}

class safhe4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit safhe4(QWidget *parent = nullptr);
    ~safhe4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::safhe4 *ui;
};

#endif // SAFHE4_H
