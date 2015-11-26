#include "superplayerwindow.h"
#include "ui_superplayerwindow.h"

SuperPlayerWindow::SuperPlayerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuperPlayerWindow)
{
    ui->setupUi(this);
}

SuperPlayerWindow::~SuperPlayerWindow()
{
    delete ui;
}
