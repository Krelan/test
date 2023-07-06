#include "testwindow.h"
#include "ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestWindow)
{
    ui->setupUi(this);
}

TestWindow::~TestWindow()
{
    delete ui;
}


void TestWindow::on_pushButton_clicked()
{
    ui->label->setText("Ой!");
}

