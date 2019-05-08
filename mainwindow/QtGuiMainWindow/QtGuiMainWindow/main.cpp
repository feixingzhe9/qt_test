#include "QtGuiMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiMainWindow w;
	w.show();
	return a.exec();
}
