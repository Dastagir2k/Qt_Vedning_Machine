/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QLabel *Title_2;
    QLabel *label_16;
    QLabel *label_19;
    QPushButton *AddCoke_2;
    QLabel *label_13;
    QPushButton *AddPepsi_2;
    QLabel *label_17;
    QLabel *label_15;
    QLabel *label_14;
    QPushButton *AddLays_2;
    QLabel *label_20;
    QLabel *label_18;
    QPushButton *AddDiaryMilk_2;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *AddHideSeek_2;
    QPushButton *ViewCartbtn;
    QWidget *page_5;
    QLabel *Title_3;
    QListWidget *listWidget;
    QLabel *label_21;
    QLabel *TotalPriceCart;
    QPushButton *Paybtn;
    QPushButton *BackToHomebtn;
    QWidget *page_6;
    QLabel *Title_4;
    QLabel *label_22;
    QLabel *TotalPay;
    QLabel *label_24;
    QLabel *label_25;
    QTextEdit *Name;
    QTextEdit *CardNumber;
    QStackedWidget *stackedWidget_2;
    QWidget *page_13;
    QLabel *Title_10;
    QLabel *label_41;
    QLabel *label_42;
    QPushButton *AddCoke_4;
    QLabel *label_43;
    QPushButton *AddPepsi_4;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QPushButton *AddLays_4;
    QLabel *label_47;
    QLabel *label_48;
    QPushButton *AddDiaryMilk_4;
    QLabel *label_49;
    QLabel *label_50;
    QPushButton *AddHideSeek_4;
    QPushButton *ViewCartbtn_3;
    QWidget *page_14;
    QLabel *Title_11;
    QListWidget *listWidget_3;
    QLabel *label_51;
    QLabel *TotalPriceCart_3;
    QPushButton *Paybtn_3;
    QPushButton *BackToHomebtn_3;
    QWidget *page_15;
    QLabel *Title_12;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QWidget *page_16;
    QLabel *Title_13;
    QWidget *page_17;
    QPushButton *cnfrmbtn;
    QPushButton *Paybtn_5;
    QWidget *page_7;
    QLabel *Title_5;
    QPushButton *Paybtn_10;
    QWidget *page_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(255, 132, 24);\n"
"font-size:larger;\n"
"}\n"
"QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-family:bold;\n"
"padding:5px;\n"
"border:3px solid black;\n"
"}\n"
"\n"
"QTextEdit{\n"
"background-color:white;\n"
"color:black;\n"
"border:3px solid black;\n"
"}\n"
"\n"
"QListWidget{\n"
"font-size:30px;\n"
"font-family:semi-bold;\n"
"color:black;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 601));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        Title_2 = new QLabel(page_3);
        Title_2->setObjectName("Title_2");
        Title_2->setGeometry(QRect(160, 0, 461, 81));
        Title_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(170, 110, 91, 51));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(350, 120, 111, 41));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddCoke_2 = new QPushButton(page_3);
        AddCoke_2->setObjectName("AddCoke_2");
        AddCoke_2->setGeometry(QRect(470, 130, 83, 29));
        AddCoke_2->setStyleSheet(QString::fromUtf8(""));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(170, 190, 91, 51));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        AddPepsi_2 = new QPushButton(page_3);
        AddPepsi_2->setObjectName("AddPepsi_2");
        AddPepsi_2->setGeometry(QRect(470, 210, 83, 29));
        label_17 = new QLabel(page_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(350, 200, 111, 41));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(170, 270, 91, 51));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(350, 280, 111, 41));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddLays_2 = new QPushButton(page_3);
        AddLays_2->setObjectName("AddLays_2");
        AddLays_2->setGeometry(QRect(470, 290, 83, 29));
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(160, 350, 141, 51));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(350, 360, 111, 41));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddDiaryMilk_2 = new QPushButton(page_3);
        AddDiaryMilk_2->setObjectName("AddDiaryMilk_2");
        AddDiaryMilk_2->setGeometry(QRect(470, 370, 83, 29));
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(150, 430, 171, 51));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(350, 440, 111, 41));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddHideSeek_2 = new QPushButton(page_3);
        AddHideSeek_2->setObjectName("AddHideSeek_2");
        AddHideSeek_2->setGeometry(QRect(470, 450, 83, 29));
        ViewCartbtn = new QPushButton(page_3);
        ViewCartbtn->setObjectName("ViewCartbtn");
        ViewCartbtn->setGeometry(QRect(290, 520, 141, 51));
        ViewCartbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        Title_3 = new QLabel(page_5);
        Title_3->setObjectName("Title_3");
        Title_3->setGeometry(QRect(270, 10, 461, 81));
        Title_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        listWidget = new QListWidget(page_5);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(230, 120, 351, 271));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color:white;\n"
"color:black;\n"
"}"));
        label_21 = new QLabel(page_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(240, 430, 91, 51));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        TotalPriceCart = new QLabel(page_5);
        TotalPriceCart->setObjectName("TotalPriceCart");
        TotalPriceCart->setGeometry(QRect(410, 430, 91, 51));
        TotalPriceCart->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        Paybtn = new QPushButton(page_5);
        Paybtn->setObjectName("Paybtn");
        Paybtn->setGeometry(QRect(530, 520, 141, 51));
        Paybtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        BackToHomebtn = new QPushButton(page_5);
        BackToHomebtn->setObjectName("BackToHomebtn");
        BackToHomebtn->setGeometry(QRect(170, 520, 141, 51));
        BackToHomebtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        Title_4 = new QLabel(page_6);
        Title_4->setObjectName("Title_4");
        Title_4->setGeometry(QRect(290, 0, 461, 81));
        Title_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        label_22 = new QLabel(page_6);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(180, 120, 91, 51));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        TotalPay = new QLabel(page_6);
        TotalPay->setObjectName("TotalPay");
        TotalPay->setGeometry(QRect(400, 130, 91, 51));
        TotalPay->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_24 = new QLabel(page_6);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(180, 250, 91, 51));
        label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_25 = new QLabel(page_6);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(180, 370, 191, 51));
        label_25->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        Name = new QTextEdit(page_6);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(400, 260, 211, 41));
        CardNumber = new QTextEdit(page_6);
        CardNumber->setObjectName("CardNumber");
        CardNumber->setGeometry(QRect(410, 370, 211, 41));
        stackedWidget_2 = new QStackedWidget(page_6);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(600, 540, 801, 601));
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        Title_10 = new QLabel(page_13);
        Title_10->setObjectName("Title_10");
        Title_10->setGeometry(QRect(160, 0, 461, 81));
        Title_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        label_41 = new QLabel(page_13);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(170, 110, 91, 51));
        label_41->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_42 = new QLabel(page_13);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(350, 120, 111, 41));
        label_42->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddCoke_4 = new QPushButton(page_13);
        AddCoke_4->setObjectName("AddCoke_4");
        AddCoke_4->setGeometry(QRect(470, 130, 83, 29));
        AddCoke_4->setStyleSheet(QString::fromUtf8(""));
        label_43 = new QLabel(page_13);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(170, 190, 91, 51));
        label_43->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        AddPepsi_4 = new QPushButton(page_13);
        AddPepsi_4->setObjectName("AddPepsi_4");
        AddPepsi_4->setGeometry(QRect(470, 210, 83, 29));
        label_44 = new QLabel(page_13);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(350, 200, 111, 41));
        label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        label_45 = new QLabel(page_13);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(170, 270, 91, 51));
        label_45->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_46 = new QLabel(page_13);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(350, 280, 111, 41));
        label_46->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddLays_4 = new QPushButton(page_13);
        AddLays_4->setObjectName("AddLays_4");
        AddLays_4->setGeometry(QRect(470, 290, 83, 29));
        label_47 = new QLabel(page_13);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(160, 350, 141, 51));
        label_47->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_48 = new QLabel(page_13);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(350, 360, 111, 41));
        label_48->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddDiaryMilk_4 = new QPushButton(page_13);
        AddDiaryMilk_4->setObjectName("AddDiaryMilk_4");
        AddDiaryMilk_4->setGeometry(QRect(470, 370, 83, 29));
        label_49 = new QLabel(page_13);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(150, 430, 171, 51));
        label_49->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_50 = new QLabel(page_13);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(350, 440, 111, 41));
        label_50->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"color:black;\n"
"}"));
        AddHideSeek_4 = new QPushButton(page_13);
        AddHideSeek_4->setObjectName("AddHideSeek_4");
        AddHideSeek_4->setGeometry(QRect(470, 450, 83, 29));
        ViewCartbtn_3 = new QPushButton(page_13);
        ViewCartbtn_3->setObjectName("ViewCartbtn_3");
        ViewCartbtn_3->setGeometry(QRect(290, 520, 141, 51));
        ViewCartbtn_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget_2->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName("page_14");
        Title_11 = new QLabel(page_14);
        Title_11->setObjectName("Title_11");
        Title_11->setGeometry(QRect(270, 10, 461, 81));
        Title_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        listWidget_3 = new QListWidget(page_14);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(230, 120, 351, 271));
        listWidget_3->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"background-color:white;\n"
"color:black;\n"
"}"));
        label_51 = new QLabel(page_14);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(240, 430, 91, 51));
        label_51->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        TotalPriceCart_3 = new QLabel(page_14);
        TotalPriceCart_3->setObjectName("TotalPriceCart_3");
        TotalPriceCart_3->setGeometry(QRect(410, 430, 91, 51));
        TotalPriceCart_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        Paybtn_3 = new QPushButton(page_14);
        Paybtn_3->setObjectName("Paybtn_3");
        Paybtn_3->setGeometry(QRect(530, 520, 141, 51));
        Paybtn_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        BackToHomebtn_3 = new QPushButton(page_14);
        BackToHomebtn_3->setObjectName("BackToHomebtn_3");
        BackToHomebtn_3->setGeometry(QRect(170, 520, 141, 51));
        BackToHomebtn_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget_2->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName("page_15");
        Title_12 = new QLabel(page_15);
        Title_12->setObjectName("Title_12");
        Title_12->setGeometry(QRect(290, 0, 461, 81));
        Title_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        label_52 = new QLabel(page_15);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(180, 120, 91, 51));
        label_52->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_53 = new QLabel(page_15);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(400, 130, 91, 51));
        label_53->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_54 = new QLabel(page_15);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(180, 250, 91, 51));
        label_54->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        label_55 = new QLabel(page_15);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(180, 370, 191, 51));
        label_55->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:black;\n"
"}\n"
""));
        textEdit_5 = new QTextEdit(page_15);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(400, 260, 211, 41));
        textEdit_6 = new QTextEdit(page_15);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(410, 370, 211, 41));
        stackedWidget_2->addWidget(page_15);
        page_16 = new QWidget();
        page_16->setObjectName("page_16");
        Title_13 = new QLabel(page_16);
        Title_13->setObjectName("Title_13");
        Title_13->setGeometry(QRect(260, 230, 461, 81));
        Title_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        stackedWidget_2->addWidget(page_16);
        page_17 = new QWidget();
        page_17->setObjectName("page_17");
        stackedWidget_2->addWidget(page_17);
        cnfrmbtn = new QPushButton(page_6);
        cnfrmbtn->setObjectName("cnfrmbtn");
        cnfrmbtn->setGeometry(QRect(530, 480, 141, 51));
        cnfrmbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        Paybtn_5 = new QPushButton(page_6);
        Paybtn_5->setObjectName("Paybtn_5");
        Paybtn_5->setGeometry(QRect(210, 480, 141, 51));
        Paybtn_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        Title_5 = new QLabel(page_7);
        Title_5->setObjectName("Title_5");
        Title_5->setGeometry(QRect(260, 230, 461, 81));
        Title_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:45px;\n"
"color:black;\n"
"}"));
        Paybtn_10 = new QPushButton(page_7);
        Paybtn_10->setObjectName("Paybtn_10");
        Paybtn_10->setGeometry(QRect(300, 350, 141, 51));
        Paybtn_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"color:black;\n"
"font-size:25px;\n"
"border:5px solid black;\n"
"}"));
        stackedWidget->addWidget(page_7);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title_2->setText(QCoreApplication::translate("MainWindow", "VendingMachineStore", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Coke", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        AddCoke_2->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Pepsi", nullptr));
        AddPepsi_2->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Lays", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        AddLays_2->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Diary Milk", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        AddDiaryMilk_2->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Hide&Seek", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        AddHideSeek_2->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        ViewCartbtn->setText(QCoreApplication::translate("MainWindow", "View Cart", nullptr));
        Title_3->setText(QCoreApplication::translate("MainWindow", "View in Cart", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        TotalPriceCart->setText(QString());
        Paybtn->setText(QCoreApplication::translate("MainWindow", "Pay", nullptr));
        BackToHomebtn->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Title_4->setText(QCoreApplication::translate("MainWindow", "Payment", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        TotalPay->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Card Number", nullptr));
        Title_10->setText(QCoreApplication::translate("MainWindow", "VendingMachineStore", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Coke", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        AddCoke_4->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Pepsi", nullptr));
        AddPepsi_4->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Lays", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        AddLays_4->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Diary Milk", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        AddDiaryMilk_4->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Hide & Seek", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        AddHideSeek_4->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        ViewCartbtn_3->setText(QCoreApplication::translate("MainWindow", "View Cart", nullptr));
        Title_11->setText(QCoreApplication::translate("MainWindow", "View in Cart", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        TotalPriceCart_3->setText(QString());
        Paybtn_3->setText(QCoreApplication::translate("MainWindow", "Pay", nullptr));
        BackToHomebtn_3->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Title_12->setText(QCoreApplication::translate("MainWindow", "Payment", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Card Number", nullptr));
        Title_13->setText(QCoreApplication::translate("MainWindow", "Thank you !", nullptr));
        cnfrmbtn->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        Paybtn_5->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        Title_5->setText(QCoreApplication::translate("MainWindow", "Thank you !", nullptr));
        Paybtn_10->setText(QCoreApplication::translate("MainWindow", "New !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
