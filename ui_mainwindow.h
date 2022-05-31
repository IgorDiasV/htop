/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *button_kill;
    QPushButton *button_stop;
    QPushButton *button_cont;
    QLineEdit *input_PID;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *input_prioridade;
    QLineEdit *input_cpu;
    QLabel *label_4;
    QLineEdit *input_filtro;
    QPushButton *button_cpu;
    QPushButton *button_prioridade;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(105, 20, 601, 192));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 300, 121, 31));
        button_kill = new QPushButton(centralwidget);
        button_kill->setObjectName(QString::fromUtf8("button_kill"));
        button_kill->setGeometry(QRect(290, 270, 89, 25));
        button_stop = new QPushButton(centralwidget);
        button_stop->setObjectName(QString::fromUtf8("button_stop"));
        button_stop->setGeometry(QRect(290, 310, 89, 25));
        button_cont = new QPushButton(centralwidget);
        button_cont->setObjectName(QString::fromUtf8("button_cont"));
        button_cont->setGeometry(QRect(290, 350, 89, 25));
        input_PID = new QLineEdit(centralwidget);
        input_PID->setObjectName(QString::fromUtf8("input_PID"));
        input_PID->setGeometry(QRect(170, 310, 113, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 400, 121, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 450, 121, 31));
        input_prioridade = new QLineEdit(centralwidget);
        input_prioridade->setObjectName(QString::fromUtf8("input_prioridade"));
        input_prioridade->setGeometry(QRect(160, 410, 113, 25));
        input_cpu = new QLineEdit(centralwidget);
        input_cpu->setObjectName(QString::fromUtf8("input_cpu"));
        input_cpu->setGeometry(QRect(160, 450, 113, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 300, 121, 31));
        input_filtro = new QLineEdit(centralwidget);
        input_filtro->setObjectName(QString::fromUtf8("input_filtro"));
        input_filtro->setGeometry(QRect(520, 300, 113, 25));
        button_cpu = new QPushButton(centralwidget);
        button_cpu->setObjectName(QString::fromUtf8("button_cpu"));
        button_cpu->setGeometry(QRect(290, 450, 89, 25));
        button_prioridade = new QPushButton(centralwidget);
        button_prioridade->setObjectName(QString::fromUtf8("button_prioridade"));
        button_prioridade->setGeometry(QRect(290, 410, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">are de texto </p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PID do Processo", nullptr));
        button_kill->setText(QCoreApplication::translate("MainWindow", "Kill", nullptr));
        button_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        button_cont->setText(QCoreApplication::translate("MainWindow", "Cont", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Prioridade", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Filtro", nullptr));
        button_cpu->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        button_prioridade->setText(QCoreApplication::translate("MainWindow", "Prioridade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
