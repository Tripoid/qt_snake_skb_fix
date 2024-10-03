#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    gameWindow = new QWidget();
    gameWindow->autoFillBackground();
    QBoxLayout* mainLayout = new QBoxLayout(QBoxLayout::BottomToTop);
    gameField = new GameField();
    QPalette pal;
    pal.setBrush(gameWindow->backgroundRole(), QBrush(QPixmap(":/res/wood.jpg")));
    gameWindow->setPalette(pal);
    gameWindow->setAutoFillBackground(true);

    pal.setBrush(gameWindow->backgroundRole(), QBrush(QPixmap(":/res/gamefield.png")));
    gameField->setPalette(pal);
    gameField->setAutoFillBackground(true);
    mainLayout->addWidget(gameField, 2);


    gameWindow->setLayout(mainLayout);
    setCentralWidget(gameWindow);
}

MainWindow::~MainWindow() {}
