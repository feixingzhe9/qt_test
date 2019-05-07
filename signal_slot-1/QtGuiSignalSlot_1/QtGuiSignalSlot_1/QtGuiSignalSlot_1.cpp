#include "QtGuiSignalSlot_1.h"
#include <qboxlayout.h>
#include <string>

QtGuiSignalSlot_1::QtGuiSignalSlot_1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->initUI();
	this->initSignalSlots();
	setWindowTitle("form created mannually");
}


void QtGuiSignalSlot_1::on_chkBoxUnder(bool checked)
{
	static int cnt = 0;
	cnt++;
	QFont font = txtEdit->font();
	font.setUnderline(checked);
	txtEdit->setFont(font);
	emit send_click_under_cnt(cnt);
}

void QtGuiSignalSlot_1::click_under_cnt_proc(int cnt)
{
	char c[50] = { 0 };
	QString	qstr;
	sprintf(c, "click UNDER check box cnt: %d", cnt);
	qstr = QString::fromStdString(c);
	txtEdit->setPlainText(qstr);
	qDebug("%s", c);
}

void QtGuiSignalSlot_1::on_chkBoxBold(bool checked)
{
	QFont font = txtEdit->font();
	font.setBold(checked);
	txtEdit->setFont(font);
}

void QtGuiSignalSlot_1::on_chkBoxItalic(bool checked)
{
	QFont font = txtEdit->font();
	font.setItalic(checked);
	txtEdit->setFont(font);
}


void QtGuiSignalSlot_1::on_rBtnRed(bool clicked)
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


void QtGuiSignalSlot_1::on_rBtnBlue(bool clicked)
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

void QtGuiSignalSlot_1::on_rBtnBlack(bool clicked)
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

void QtGuiSignalSlot_1::initUI(void)
{
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
	btnCancel = new QPushButton(tr("Cancel"));
	btnClose = new QPushButton(tr("Close"));

	QHBoxLayout *HLay3 = new QHBoxLayout;
	HLay3->addStretch();
	HLay3->addWidget(btnOK);
	HLay3->addWidget(btnCancel);
	HLay3->addStretch();
	HLay3->addWidget(btnClose);
	//创建文本框,并设置初始字体
	txtEdit = new QPlainTextEdit;
	txtEdit->setPlainText("Hello world\n\nIt is my demo");
	QFont font = txtEdit->font(); //获取字体
	font.setPointSize(20);//修改字体大小
	txtEdit->setFont(font);//设置字体

	//创建垂直布局，并设置为主布局
	QVBoxLayout *VLay = new QVBoxLayout;
	VLay->addLayout(HLayout);
	VLay->addLayout(HLayout2);
	VLay->addWidget(txtEdit);
	VLay->addLayout(HLay3);
	setLayout(VLay);
}

void QtGuiSignalSlot_1::initSignalSlots(void)
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
}