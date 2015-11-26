#ifndef SUPERPLAYERWINDOW_H
#define SUPERPLAYERWINDOW_H

#include <QMainWindow>

namespace Ui {
class SuperPlayerWindow;
}

class SuperPlayerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuperPlayerWindow(QWidget *parent = 0);
    ~SuperPlayerWindow();

private:
    Ui::SuperPlayerWindow *ui;
};

#endif // SUPERPLAYERWINDOW_H
