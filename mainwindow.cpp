#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    elementy.append(ui->spinBox->value());
}


void MainWindow::on_pushButton_2_clicked()
{
    int n = elementy.length();
    for(int i=0;i<n;i++)
            for(int j=1;j<n-i;j++) //pętla wewnętrzna
            if(elementy[j-1]>elementy[j]){
                //zamiana miejscami
                int temp = elementy[j-1];
                elementy[j-1] = elementy[j];
                elementy[j] = temp;
            };
}

