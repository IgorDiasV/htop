#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->retry_btn,SIGNAL(clicked(bool)),this,SLOT(reniciar()));
    connect(ui->button_stop,SIGNAL(clicked(bool)),this,SLOT(stop()));
    connect(ui->button_kill,SIGNAL(clicked(bool)),this,SLOT(kill()));
    connect(ui->button_cont,SIGNAL(clicked(bool)),this,SLOT(cont()));
    //connect(ui->input_filtro,SIGNAL(textChanged(Qstring)),this,SLOT(cont()));
    connect(ui->input_filtro, &QLineEdit::textChanged, this, &MainWindow::filtro); // na forma antiga nao funciona
    connect(ui->input_cpu, &QLineEdit::textChanged, this, &MainWindow::cpu);
    connect(ui->input_prioridade, &QLineEdit::textChanged, this, &MainWindow::prioridade);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stop()
{
    QString PID =ui->input_PID->text();
   // system(qPrintable(PID));
   // qDebug()<<PID<<endl;
    qDebug() <<"ENTROU NO STOP"<<endl;
}

void MainWindow::kill()
{
    QString PID =ui->input_PID->text();
    qDebug() <<"ENTROU NO KILL"<<endl;
}
void MainWindow::cont()
{
    QString PID =ui->input_PID->text();
    qDebug() <<"ENTROU NO CONT"<<endl;
}
void MainWindow::filtro()
{
    QString value =ui->input_filtro->text();
    qDebug() <<value<<endl;
}
void MainWindow::prioridade()
{
    QString value =ui->input_prioridade->text();
    qDebug() <<value<<endl;

}
void MainWindow::cpu()
{
    QString value =ui->input_cpu->text();
    qDebug() <<value<<endl;
}

