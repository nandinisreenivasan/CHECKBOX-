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
        stream<<"Bold is Checked!\n";
        QFont font("",16,QFont::Bold);
        ui->label->setFont(font);
}
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Italics is checked!\n";
        QFont font("",16,QFont::StyleItalic);
        ui->label->setFont(font);
}
}


void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_2->isChecked())
        {
            stream<<"Centre is Selected!\n";
            ui->label->setText("<font color='maroon'>Change Me!</font>");
}
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton->isChecked())
        {
            stream<<"Left is Selected!\n";
            ui->label->setText("<font color='orange'>Change Me!</font>");
}
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_3->isChecked())
        {
            stream<<"Right is Selected!\n";
            ui->label->setText("<font color='pink'>Change Me!</font>");
}
}
