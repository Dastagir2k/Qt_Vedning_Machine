#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <string>
#include <QString>
#include <fstream>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Vending_Machine_C++");

    // Manually connect signals to slots
    connect(ui->ViewCartbtn, &QPushButton::clicked, this, &MainWindow::viewCartClicked);
    connect(ui->BackToHomebtn, &QPushButton::clicked, this, &MainWindow::backToHomeClicked);
    connect(ui->Paybtn, &QPushButton::clicked, this, &MainWindow::payClicked);
    connect(ui->cnfrmbtn, &QPushButton::clicked, this, &MainWindow::confirmClicked);
    connect(ui->Paybtn_5, &QPushButton::clicked, this, &MainWindow::payBtn5Clicked);
    connect(ui->Paybtn_10, &QPushButton::clicked, this, &MainWindow::payBtn10Clicked);
    connect(ui->AddCoke_2, &QPushButton::clicked, this, &MainWindow::addCokeClicked);
    connect(ui->AddPepsi_2, &QPushButton::clicked, this, &MainWindow::addPepsiClicked);
    connect(ui->AddLays_2, &QPushButton::clicked, this, &MainWindow::addLaysClicked);
    connect(ui->AddDiaryMilk_2, &QPushButton::clicked, this, &MainWindow::addDiaryMilkClicked);
    connect(ui->AddHideSeek_2, &QPushButton::clicked, this, &MainWindow::addHideSeekClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

struct itemPrize
{
    int itemPrize;
    string itemName;
};

// Global Variables
vector<itemPrize> v;
int total = 0;

// Add to cart button
void MainWindow::viewCartClicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    string str;
    total = 0; // Reset total before calculating
    ui->listWidget->clear(); // Clear previous items
    for (int i = 0; i < v.size(); i++) {
        str = v[i].itemName + "\t\t" + to_string(v[i].itemPrize);
        total += v[i].itemPrize;
        ui->listWidget->addItem(str.c_str());
    }
    QString totalText = QString::number(total);
    ui->TotalPriceCart->setText(totalText);
}

void MainWindow::backToHomeClicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::payClicked()
{
    qDebug() << "Pay button clicked"; // Debugging output
    ui->stackedWidget->setCurrentIndex(2);

    QString textdata = QString::number(total);
    ui->TotalPay->setText(textdata);
}

struct receiptInfo {
    int receiptId;
    QString customername, cardNum;
};

void MainWindow::confirmClicked()
{
    qDebug() << "Confirm button clicked"; // Debugging output
    ofstream OutputFile;
    receiptInfo ri;

    // Generate receipt ID
    ri.receiptId = rand() % (1000000000 - 1000000 + 1) + 1000000;

    // Get customer name and card number
    ri.customername = ui->Name->toPlainText();
    ri.cardNum = ui->CardNumber->toPlainText();

    // Debugging outputs
    qDebug() << "Customer Name: " << ri.customername;
    qDebug() << "Card Number: " << ri.cardNum;
    qDebug() << "Receipt ID: " << ri.receiptId;

    // Open the file
    OutputFile.open("SalesData.txt", ios::app);
    if (OutputFile) {
        OutputFile << "Receipt Number " << ri.receiptId << "\n";
        OutputFile << " Customer Name " << ri.customername.toStdString() << "\n";
        OutputFile << " Card Number " << ri.cardNum.toStdString() << "\n";
        OutputFile << "------------------------------" << "\n";
        OutputFile << " Item\t\tPrice" << "\n";
        for (int i = 0; i < v.size(); i++) {
            OutputFile << v[i].itemName << "\t\t" << v[i].itemPrize << "\n";
        }
        OutputFile << " Total " << total << "\n";
        OutputFile.close();
    } else {
        qDebug() << "Error opening file";
    }

    // Switch to the next page
    ui->stackedWidget->setCurrentIndex(3);
    qDebug() << "Switched to page index 3"; // Debugging output
}


// This btn is new btn when user  click new it will display new window
void MainWindow::payBtn5Clicked()
{
    v.clear();
    total=0;
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::payBtn10Clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::addCokeClicked()
{
    itemPrize ip;
    ip.itemName = "Coke";
    ip.itemPrize = 50;
    v.push_back(ip);
}

void MainWindow::addPepsiClicked()
{
    itemPrize ip;
    ip.itemName = "Pepsi";
    ip.itemPrize = 50;
    v.push_back(ip);
}

void MainWindow::addLaysClicked()
{
    itemPrize ip;
    ip.itemName = "Lays";
    ip.itemPrize = 20;
    v.push_back(ip);
}

void MainWindow::addDiaryMilkClicked()
{
    itemPrize ip;
    ip.itemName = "Diary Milk";
    ip.itemPrize = 25;
    v.push_back(ip);
}

void MainWindow::addHideSeekClicked()
{
    itemPrize ip;
    ip.itemName = "Hide&Seek";
    ip.itemPrize = 30;
    v.push_back(ip);
}
