#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
#include<QDebug>
#include<QFile>
#include"matrixcal.h"


struct imgpoint
{
    double x;
    double y;
};
struct ctlpoint
{
    double X;
    double Y;
    double Z;
};
struct inner
{
    double xo;
    double yo;
    double f;
};
struct outer
{
    double Xs;
    double Ys;
    double Zs;
    double phi;
    double omega;
    double kappa;
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionIntroduction_triggered()
{
    QMessageBox::information(NULL, "Introduction", "<b>Pay Attention</b>", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

}

void MainWindow::on_actionResection_triggered()
{
    QString path;
    //path=ui->lineEdit->text();
    //qDebug()<<path;
    path="D:\\resection.txt";
    QFile data(path);
    data.open(QFile::ReadOnly);
    QTextStream in(&data);
    imgpoint fourIMGPoints[4];
    ctlpoint fourCTLPoints[4];
    for(int i=0 ; i < 4 ; i++)
    {
        in>>fourIMGPoints[i].x;
        in>>fourIMGPoints[i].y;
        in>>fourCTLPoints[i].X;
        in>>fourCTLPoints[i].Y;
        in>>fourCTLPoints[i].Z;
        //QMessageBox::information(NULL,QString().setNum(fourPoints[i].x),QString().setNum(fourPoints[i].y));
    }


}
