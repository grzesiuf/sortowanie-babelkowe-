#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
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
    QString elementySTR = "";
    QString el;
    int n = elementy.length();
    elementy.append(ui->spinBox->value());
    ui->spinBox->clear();
    for(int i = 0;i<n;i++){
        el = QString::number(elementy[i]);
        elementySTR += el + " ";
    }
    ui->label->setText(elementySTR);
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
QString elementySTR = "";
QString el;
for(int i = 0;i<n;i++){
    el = QString::number(elementy[i]);
    elementySTR += el + " ";
}
QMessageBox msg(this);
msg.setText(elementySTR);
msg.setStandardButtons(QMessageBox::Ok);
msg.setWindowTitle("Sortowanie");
msg.exec();
}

