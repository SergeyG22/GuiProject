#include "QtGuiTestProject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"russian");
	QApplication a(argc, argv);
	QtGuiTestProject w;
	w.show();
	return a.exec();
}
