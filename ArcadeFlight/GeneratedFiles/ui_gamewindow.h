/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameWindowClass)
    {
        if (GameWindowClass->objectName().isEmpty())
            GameWindowClass->setObjectName(QStringLiteral("GameWindowClass"));
        GameWindowClass->resize(600, 400);
        menuBar = new QMenuBar(GameWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GameWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GameWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GameWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GameWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameWindowClass->setStatusBar(statusBar);

        retranslateUi(GameWindowClass);

        QMetaObject::connectSlotsByName(GameWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindowClass)
    {
        GameWindowClass->setWindowTitle(QApplication::translate("GameWindowClass", "GameWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindowClass: public Ui_GameWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
