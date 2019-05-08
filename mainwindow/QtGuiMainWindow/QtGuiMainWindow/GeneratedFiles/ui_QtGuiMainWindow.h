/********************************************************************************
** Form generated from reading UI file 'QtGuiMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIMAINWINDOW_H
#define UI_QTGUIMAINWINDOW_H

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

class Ui_QtGuiMainWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiMainWindowClass)
    {
        if (QtGuiMainWindowClass->objectName().isEmpty())
            QtGuiMainWindowClass->setObjectName(QStringLiteral("QtGuiMainWindowClass"));
        QtGuiMainWindowClass->resize(600, 400);
        menuBar = new QMenuBar(QtGuiMainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiMainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiMainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiMainWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiMainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiMainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiMainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiMainWindowClass->setStatusBar(statusBar);

        retranslateUi(QtGuiMainWindowClass);

        QMetaObject::connectSlotsByName(QtGuiMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiMainWindowClass)
    {
        QtGuiMainWindowClass->setWindowTitle(QApplication::translate("QtGuiMainWindowClass", "QtGuiMainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiMainWindowClass: public Ui_QtGuiMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIMAINWINDOW_H
