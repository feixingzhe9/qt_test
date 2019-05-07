#pragma once

#include <QtWidgets/QDialog>
#include <QtWidgets/qmainwindow.h>
#include "ui_QtGuiSignalSlot_1.h"
#include <qcheckbox.h>
#include <qradiobutton.h>
#include <qpushbutton.h>
#include <qplaintextedit.h>
#include <qspinbox.h>
#include <qslider.h>

class QtGuiSignalSlot_1 : public QDialog
{
	Q_OBJECT

private:
	Ui::QtGuiSignalSlot_1Class ui;
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

	QSpinBox *spinBox;
	QSlider *slider;


	void initUI(void);
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
	
	signals:
	void send_click_under_cnt(int);

public:
	QtGuiSignalSlot_1(QWidget *parent = Q_NULLPTR);
	//~QtGuiSignalSlot_1();

};
