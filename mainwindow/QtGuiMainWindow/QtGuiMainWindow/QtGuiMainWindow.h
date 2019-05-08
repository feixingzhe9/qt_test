#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiMainWindow.h"
#include <qcheckbox.h>
#include <qradiobutton.h>
#include <qpushbutton.h>
#include <qplaintextedit.h>
#include <qspinbox.h>
#include <qslider.h>
#include <qlcdnumber.h>
#include <qtimer.h>

class QtGuiMainWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::QtGuiMainWindowClass ui;
	QWidget *widget;

	QMenuBar *mb;
	QMenu *file_menu;
	//QMenu *file_menu_1;
	QAction *new_action;
	QAction *new_action_1;
	QAction *new_action_2;

	QMenu *multi;
	QAction *multi_1;
	QAction *multi_2;

	QMenu *help_menu;
	QAction *about_action;

	QCheckBox *chkBoxUnder;
	QCheckBox *chkBoxItalic;
	QCheckBox *chkBoxBold;

	QRadioButton *rBtnBlack;
	QRadioButton *rBtnRed;
	QRadioButton *rBtnBlue;

	QPlainTextEdit *txtEdit;

	QPushButton *btnOK;
	QPushButton *btnCancel;
	QPushButton *btnClose;

	QLCDNumber *lcd;
	QTimer *timer;
	QSpinBox *spinBox;
	QSlider *slider;


	void initUI(void);
	void initMenuBar(void);
	void initSignalSlots(void);
	//void setTextFontColor(void);

private slots:
	void on_chkBoxUnder(bool checked);
	void on_chkBoxItalic(bool checked);
	void on_chkBoxBold(bool checked);

	void click_under_cnt_proc(int);

	void on_rBtnRed(bool toggled);
	void on_rBtnBlue(bool toggled);
	void on_rBtnBlack(bool toggled);
	void on_TimerOut();

	void slot_action_new_1(void);
	void slot_action_multi_1(void);
	
	signals:
	void send_click_under_cnt(int);

public:
	QtGuiMainWindow(QWidget *parent = Q_NULLPTR);
	//~QtGuiSignalSlot_1();

};
