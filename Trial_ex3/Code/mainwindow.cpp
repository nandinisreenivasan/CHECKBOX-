#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

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


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Biriyani is ordered!\n";
}
    else{
        stream<<"Biriyani is not ordered!\n";
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
        {
            stream<<"Lasagne is ordered!\n";
}
        else{
            stream<<"Lasagne is not ordered!\n";
        }
}

void MainWindow::on_checkBox_3_clicked()
{
                QTextStream stream(stdout);
                if(ui->checkBox_3->isChecked())
        {
            stream<<"Shawarma is ordered!\n";
}
        else{
            stream<<"Shawarma is not ordered!\n";
        }
}
