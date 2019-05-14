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
#include <qboxlayout.h>
#include <qprocess.h>
#include <qdialog.h>
#include <qprogressbar.h>
#include <qgroupbox.h>
#include <mopen_dialog.h>

class QtGuiMainWindow : public QMainWindow
{
	Q_OBJECT

private:
	Ui::QtGuiMainWindowClass ui;
	QWidget *widget;

	//菜单栏相关
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

	//工具栏相关
	QToolBar *toolbar;
	QActionGroup *tool_group;
	QList<QAction*> toolbar_list;
	QAction *tool_1;
	QAction *tool_2;

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

	QProgressBar *progressbar;
	//QProcess *process_open;
	MOpenDialog *open_dialog;


	QGroupBox *group_box_1;
	QGroupBox *group_box_2;
	QGroupBox *group_box_3;
	QGroupBox *group_box_4;
	

	//layout
	QVBoxLayout *main_layout_left;

	QGridLayout *main_grid_layout;

	QHBoxLayout *main_layout;

	void initUI(void);
	void initMenuBar(void);
	void initToolBar(void);
	void initSignalSlots(void);
	void initProgressBar(void);
	void init_groupbox_1(void);
	void init_groupbox_2(void);
	void init_groupbox_3(void);
	void init_groupbox_4(void);
	void init_grid_layout(void);
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
	void slot_toolbutton_1_open(void);
	
	signals:
	void send_click_under_cnt(int);

public:
	QtGuiMainWindow(QWidget *parent = Q_NULLPTR);
	~QtGuiMainWindow();

};
