#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamefield.h"
#include <QMainWindow>
#include <QBoxLayout>
#include <QWidget>
#include <QLabel>


class GameField;
class HelpField;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWidget *gameWindow;
    QBoxLayout *mainLayout;
    GameField *gameField;

};
#endif // MAINWINDOW_H
