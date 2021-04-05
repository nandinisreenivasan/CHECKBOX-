#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
    QMessageBox::information(this,"Nandinisree","Age is above 18");
    }
    if(ui->radioButton_2->isChecked())
    {
    QMessageBox::information(this,"Nandinisree","Age is below 18");
    }

  }

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
    {
    QMessageBox::information(this,"Nandinisree","Likes Music");
    }
    if(ui->checkBox_2->isChecked())
    {
    QMessageBox::information(this,"Nandinisree","Likes Dancing");
    }
    if(ui->checkBox_3->isChecked())
    {
    QMessageBox::information(this,"Nandinisree","Plays Sports");
    }
}
