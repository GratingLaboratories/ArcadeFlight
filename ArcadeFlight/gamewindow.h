#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_gamewindow.h"

class GameWindow : public QMainWindow
{
	Q_OBJECT

public:
	GameWindow(QWidget *parent = 0);
	~GameWindow();

private:
	Ui::GameWindowClass ui;
};

#endif // GAMEWINDOW_H
