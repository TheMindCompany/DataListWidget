#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    QWidget *mainW = new QWidget;
    setCentralWidget(mainW);

    windowFields();
    mainW->setLayout(hCard);
}

MainWindow::~MainWindow(){}

void MainWindow::windowFields(void){
    createWindowFields();
    arrangeWindowFields();
}

void MainWindow::createWindowFields(void){
    sqlModel = new TrackerSql;
    cardList = new List(sqlModel, this);
}

void MainWindow::arrangeWindowFields(void){
    hCard = new QHBoxLayout;
    hCard->addWidget(cardList);
}
