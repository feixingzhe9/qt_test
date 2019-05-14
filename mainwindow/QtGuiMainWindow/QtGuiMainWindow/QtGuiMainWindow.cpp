#include "QtGuiMainWindow.h"

#include <string>
#include <QDateTime>

QtGuiMainWindow::QtGuiMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	timer = new QTimer;
	timer->setInterval(1000);
	timer->start();
	this->initUI();
	this->initMenuBar();
	this->initToolBar();
	this->init_groupbox_1();
	this->init_groupbox_2();
	this->init_groupbox_3();
	this->init_groupbox_4();
	this->init_grid_layout();

	setLayout(main_layout);
	this->initSignalSlots();
	setWindowTitle("MainWindow test");
}

QtGuiMainWindow::~QtGuiMainWindow()
{

}


void QtGuiMainWindow::on_chkBoxUnder(bool checked)
{
	static int cnt = 0;
	cnt++;
	QFont font = txtEdit->font();
	font.setUnderline(checked);
	txtEdit->setFont(font);
	emit send_click_under_cnt(cnt);
}

void QtGuiMainWindow::click_under_cnt_proc(int cnt)
{
	char c[50] = { 0 };
	QString	qstr;
	sprintf(c, "click UNDER check box cnt: %d", cnt);
	qstr = QString::fromStdString(c);
	txtEdit->setPlainText(qstr);
	qDebug("%s", c);
}

void QtGuiMainWindow::on_chkBoxBold(bool checked)
{
	QFont font = txtEdit->font();
	font.setBold(checked);
	txtEdit->setFont(font);
}

void QtGuiMainWindow::on_chkBoxItalic(bool checked)
{
	QFont font = txtEdit->font();
	font.setItalic(checked);
	txtEdit->setFont(font);
}


void QtGuiMainWindow::on_rBtnRed(bool clicked)
{
	if (this->rBtnRed->isChecked())
	{
		txtEdit->setPlainText("select Red");
		qDebug("select red");
	}
	else
	{
		txtEdit->setPlainText("cancel Red");
		qDebug("cancel red");
	}
}


void QtGuiMainWindow::on_rBtnBlue(bool clicked)
{
	if (this->rBtnBlue->isChecked())
	{
		txtEdit->setPlainText("select blue");
		qDebug("select blue");
	}
	else
	{
		txtEdit->setPlainText("cancel blue");
		qDebug("cancel blue");
	}
}

void QtGuiMainWindow::on_rBtnBlack(bool clicked)
{
	if (this->rBtnBlack->isChecked())
	{
		txtEdit->setPlainText("select black");
		qDebug("select black");
	}
	else
	{
		txtEdit->setPlainText("cancel black");
		qDebug("cancel black");
	}
}


void QtGuiMainWindow::on_TimerOut(void)
{
	QDateTime datatime = QDateTime::currentDateTime();
	//lcd->display(datatime.toString("yyyy-MM-dd HH:mm:ss.zzz"));
	lcd->display(datatime.toString("yyyy-MM-dd HH:mm:ss"));
	//qDebug("timer out");
}


void QtGuiMainWindow::slot_action_multi_1(void)
{
	txtEdit->setPlainText("multi_1 trigged");
	qDebug("multi_1 trigged");
}

void QtGuiMainWindow::slot_action_new_1(void)
{
	txtEdit->setPlainText("new_1 trigged");
	qDebug("new_1 trigged");
}


void QtGuiMainWindow::slot_toolbutton_1_open(void)
{
	txtEdit->setPlainText("tool button 1 trigged");
	qDebug("tool button 1 trigged");
	//process_open = new QProcess
	//open_dialog = new QDialog("open file");

	open_dialog = new MOpenDialog;
	open_dialog->show();
}



void QtGuiMainWindow::initMenuBar(void)
{
	mb = menuBar();
	file_menu = new QMenu("File(&F)");
	new_action = new QAction("new", this);
	new_action_1 = new QAction("new 1", this);
	new_action_2 = new QAction("new 2", this);

	//基于 file_menu 的multi 创建二级菜单multi_1和multi_2
	multi = file_menu->addMenu("multi");
	multi_1 = new QAction("multi_1", this);
	multi_2 = new QAction("multi_2", this);
	multi_2->setCheckable(true);
	multi_2->setChecked(false);
	multi_2->triggered(true);
	multi->addAction(multi_1);
	multi->addAction(multi_2);

	file_menu->addAction(new_action);
	file_menu->addAction(new_action_1);
	file_menu->addAction(new_action_2);
	

	help_menu = new QMenu("help(&H)");
	about_action = new QAction("about", this);
	help_menu->addAction(about_action);

	mb->addMenu(file_menu);
	mb->addMenu(help_menu);
}

void QtGuiMainWindow::initToolBar(void)
{
	toolbar = new QToolBar;
	tool_group = new QActionGroup(this);
	tool_1 = new QAction("open(&o)");
	tool_2 = new QAction("tool_2(&t)");
	tool_1->setIcon(QIcon("Resources\\open.png"));
	toolbar_list.append(tool_1);
	toolbar_list.append(tool_2);
	tool_group->addAction(tool_1);
	tool_group->addAction(tool_2);
	toolbar->addActions(toolbar_list);
	addToolBar(toolbar);

	connect(tool_1, SIGNAL(triggered()), this, SLOT(slot_toolbutton_1_open()));
}

void QtGuiMainWindow::initProgressBar(void)
{
	
}

void QtGuiMainWindow::init_groupbox_1(void)
{
	group_box_1 = new QGroupBox(tr("group test"));
	QRadioButton *group_box_radio_button_1 = new QRadioButton("button 1");
	QRadioButton *group_box_radio_button_2 = new QRadioButton("button 2");
	QRadioButton *group_box_radio_button_3 = new QRadioButton("button 3");
	QRadioButton *group_box_radio_button_4 = new QRadioButton("button 4");
	QRadioButton *group_box_radio_button_5 = new QRadioButton("button 5");
	QVBoxLayout *v_layout;
	v_layout = new QVBoxLayout;
	v_layout->addWidget(group_box_radio_button_1);
	v_layout->addWidget(group_box_radio_button_2);
	v_layout->addWidget(group_box_radio_button_3);
	v_layout->addWidget(group_box_radio_button_4);
	v_layout->addWidget(group_box_radio_button_5);
	group_box_1->setLayout(v_layout);
	//main_layout->addLayout(main_layout_left);
	main_layout->addWidget(group_box_1);
}


void QtGuiMainWindow::init_groupbox_2(void)
{
	group_box_2 = new QGroupBox(tr("group test"));
	QRadioButton *group_box_radio_button_1 = new QRadioButton("button 1");
	QRadioButton *group_box_radio_button_2 = new QRadioButton("button 2");
	QRadioButton *group_box_radio_button_3 = new QRadioButton("button 3");
	QRadioButton *group_box_radio_button_4 = new QRadioButton("button 4");
	QRadioButton *group_box_radio_button_5 = new QRadioButton("button 5");
	QVBoxLayout *v_layout;
	v_layout = new QVBoxLayout;
	v_layout->addWidget(group_box_radio_button_1);
	v_layout->addWidget(group_box_radio_button_2);
	v_layout->addWidget(group_box_radio_button_3);
	v_layout->addWidget(group_box_radio_button_4);
	v_layout->addWidget(group_box_radio_button_5);
	group_box_2->setLayout(v_layout);
	//main_layout->addLayout(main_layout_left);
	main_layout->addWidget(group_box_2);
}


void QtGuiMainWindow::init_groupbox_3(void)
{
	group_box_3 = new QGroupBox(tr("group test"));
	QRadioButton *group_box_radio_button_1 = new QRadioButton("button 1");
	QRadioButton *group_box_radio_button_2 = new QRadioButton("button 2");
	QRadioButton *group_box_radio_button_3 = new QRadioButton("button 3");
	QRadioButton *group_box_radio_button_4 = new QRadioButton("button 4");
	QRadioButton *group_box_radio_button_5 = new QRadioButton("button 5");
	QVBoxLayout *v_layout;
	v_layout = new QVBoxLayout;
	v_layout->addWidget(group_box_radio_button_1);
	v_layout->addWidget(group_box_radio_button_2);
	v_layout->addWidget(group_box_radio_button_3);
	v_layout->addWidget(group_box_radio_button_4);
	v_layout->addWidget(group_box_radio_button_5);
	group_box_3->setLayout(v_layout);
	//main_layout->addLayout(main_layout_left);
	main_layout->addWidget(group_box_3);
}



void QtGuiMainWindow::init_groupbox_4(void)
{
	group_box_4 = new QGroupBox(tr("group test"));
	QRadioButton *group_box_radio_button_1 = new QRadioButton("button 1");
	QRadioButton *group_box_radio_button_2 = new QRadioButton("button 2");
	QRadioButton *group_box_radio_button_3 = new QRadioButton("button 3");
	QRadioButton *group_box_radio_button_4 = new QRadioButton("button 4");
	QRadioButton *group_box_radio_button_5 = new QRadioButton("button 5");
	QVBoxLayout *v_layout;
	v_layout = new QVBoxLayout;
	v_layout->addWidget(group_box_radio_button_1);
	v_layout->addWidget(group_box_radio_button_2);
	v_layout->addWidget(group_box_radio_button_3);
	v_layout->addWidget(group_box_radio_button_4);
	v_layout->addWidget(group_box_radio_button_5);
	group_box_4->setLayout(v_layout);
	//main_layout->addLayout(main_layout_left);
	main_layout->addWidget(group_box_4);
}


void QtGuiMainWindow::init_grid_layout(void)
{
	main_grid_layout = new QGridLayout;
	main_grid_layout->addWidget(group_box_1, 0, 0);
	main_grid_layout->addWidget(group_box_2, 0, 1);
	main_grid_layout->addWidget(group_box_3, 1, 0);
	main_grid_layout->addWidget(group_box_4, 1, 1);

	main_layout->addLayout(main_grid_layout);
}

void QtGuiMainWindow::initUI(void)
{
	widget = new QWidget(this);
	setCentralWidget(widget);

	//创建 under bold italic 3个checkbox ，并水平布局
	chkBoxBold = new QCheckBox(tr("Bold"));
	chkBoxItalic = new QCheckBox(tr("Italic"));
	chkBoxUnder = new QCheckBox(tr("Under"));

	QHBoxLayout *HLayout = new QHBoxLayout;
	HLayout->addWidget(chkBoxBold);
	HLayout->addWidget(chkBoxItalic);
	HLayout->addWidget(chkBoxUnder);

	//创建 black， red， blue 3个radiobutton ,并水平布局
	rBtnBlack = new QRadioButton(tr("black"));
	rBtnBlue = new QRadioButton(tr("blue"));
	rBtnRed = new QRadioButton(tr("red"));

	QHBoxLayout *HLayout2 = new QHBoxLayout;
	HLayout2->addWidget(rBtnBlack);
	HLayout2->addWidget(rBtnBlue);
	HLayout2->addWidget(rBtnRed);

	//创建确定, 取消, 退出3 个 PushButton, 并水平布局
	btnOK = new QPushButton(tr("OK"));
	btnOK->setStyleSheet("background-color: rgb(32, 81, 202); color: white");
	btnCancel = new QPushButton(this);
	btnCancel->setStyleSheet("QPushButton{border-image: url(Resources/pushbutton_cancel.png);}"
							"QPushButton:hover{border-image: url(Resources/pushbutton_cancel_hover.png);}"
							"QPushButton:pressed{border-image:url(Resources/pushbutton_cancel_clicked.png);}"
							"QPushButton{border:none;}");
	//QIcon cancel_icon = QIcon("Resources/pushbutton_cancel.png");
	//btnCancel->setIcon(cancel_icon);
	//btnCancel->setText("cancel");
	btnCancel->setFlat(false);
	//btnCancel->sizeHint(48,48);
	//btnCancel->setStyleSheet("border: none;");


	btnClose = new QPushButton(tr("Close"));
	btnClose->setFont(QFont("Times", 16, QFont::Bold));
	//btnCancel->resize(200, 500);

	QHBoxLayout *HLay3 = new QHBoxLayout;
	HLay3->addStretch();
	HLay3->addWidget(btnOK);
	HLay3->addStretch();
	HLay3->addWidget(btnCancel);
	HLay3->addStretch();
	HLay3->addWidget(btnClose);
	HLay3->addStretch();
	//创建文本框,并设置初始字体
	txtEdit = new QPlainTextEdit;
	txtEdit->setPlainText("Hello world\n\nIt is my demo");
	QFont font = txtEdit->font(); //获取字体
	font.setPointSize(20);//修改字体大小
	txtEdit->setFont(font);//设置字体

	//LCD
	lcd = new QLCDNumber;
	lcd->setMode(QLCDNumber::Dec);
	lcd->setDigitCount(25);
	lcd->setStyleSheet("border: 1px solid green; color: red; background: black;");
	lcd->display("66");

	QHBoxLayout *LCDLayout = new QHBoxLayout;
	LCDLayout->addWidget(lcd);

	//slider 和 spinbox
	slider = new QSlider;
	spinBox = new QSpinBox;
	spinBox->setRange(0, 100);
	slider->setRange(0, 100);
	slider->setTickInterval(5);
	slider->setTickPosition(QSlider::TicksAbove);
	slider->setOrientation(Qt::Horizontal);	//水平方向


	//progress bar
	progressbar = new QProgressBar(this);
	progressbar->setOrientation(Qt::Horizontal);	//水平方向
	progressbar->setMinimum(0);
	progressbar->setMaximum(100);
	progressbar->setValue(0);

	QHBoxLayout *HLaySlider = new QHBoxLayout;
	HLaySlider->addWidget(spinBox);
	HLaySlider->addStretch();
	HLaySlider->addWidget(slider);



	//创建垂直布局，为左侧主布局
	main_layout_left = new QVBoxLayout;

	main_layout_left->addLayout(LCDLayout);
	main_layout_left->addLayout(HLayout);
	main_layout_left->addLayout(HLayout2);
	main_layout_left->addWidget(txtEdit);
	main_layout_left->addLayout(HLaySlider);
	main_layout_left->addWidget(progressbar);
	main_layout_left->addLayout(HLay3);

	main_grid_layout = new QGridLayout(this);

	main_layout = new QHBoxLayout(widget);
	main_layout->addLayout(main_layout_left);

}

void QtGuiMainWindow::initSignalSlots(void)
{
	//connect(rBtnBlue, SIGNAL(cliched(bool)), this, SLOT(setTextFontColor()));
	connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxUnder(bool)));
	connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxItalic(bool)));
	connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxBold(bool)));

	connect(this, SIGNAL(send_click_under_cnt(int)), this, SLOT(click_under_cnt_proc(int)));

	connect(rBtnRed, SIGNAL(toggled(bool)), this, SLOT(on_rBtnRed(bool)));
	connect(rBtnBlue, SIGNAL(clicked(bool)), this, SLOT(on_rBtnBlue(bool)));
	connect(rBtnBlack, SIGNAL(toggled(bool)), this, SLOT(on_rBtnBlack(bool)));

	connect(btnOK, SIGNAL(clicked()), this, SLOT(accept()));
	connect(btnCancel, SIGNAL(clicked()), this, SLOT(reject()));
	connect(btnClose, SIGNAL(clicked()), this, SLOT(close()));

	connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
	connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

	connect(timer, SIGNAL(timeout()), this, SLOT(on_TimerOut()));
	connect(multi_1, SIGNAL(triggered()), this, SLOT(slot_action_multi_1()));
	connect(new_action_1, SIGNAL(triggered()), this, SLOT(slot_action_new_1()));
	connect(spinBox, SIGNAL(valueChanged(int)), progressbar, SLOT(setValue(int)));
	connect(slider, SIGNAL(valueChanged(int)), progressbar, SLOT(setValue(int)));
}
