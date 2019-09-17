#include "QtGuiTestProject.h"
#include <qdir.h>
#include <qdebug.h>
#include <qfiledialog.h>
#include <iostream>
#include <qstringlistmodel.h>

QtGuiTestProject::QtGuiTestProject(QWidget *parent)
	: QMainWindow(parent), get_text_for_path("C:/"), get_text_for_mask("*.txt")
{
	ui.setupUi(this);
	ui.lineEdit_mask->setText("*.txt");
	ui.lineEdit_path->setText("C:/");
	save_f.setDirectory("C:/");
	connect(ui.pushButton_find, SIGNAL(clicked()), this, SLOT(find()));
	connect(ui.pushButton_open_file, SIGNAL(clicked()), this, SLOT(open_file()));
	connect(ui.pushButton_save, SIGNAL(clicked()), this, SLOT(save_file()));
	connect(ui.pushButton_read, SIGNAL(clicked()), this, SLOT(read()));
	connect(ui.pushButton_modify, SIGNAL(clicked()), this, SLOT(modify()));
}

void QtGuiTestProject::get_dir()
{
//	check_box();
	ui.listWidget->clear();
	QDir dir(get_text_for_path);
	qDebug() << get_text_for_path;
	qDebug() << get_text_for_mask;
	QFileInfoList dirContent = dir.entryInfoList(QStringList()<< get_text_for_mask);
	dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
	dir.setSorting(QDir::Name);
	for (int i =0;i < dirContent.size();++i)
	{
		QFileInfo fileInfo = dirContent.at(i);
		QString a = fileInfo.absoluteFilePath();
		ui.listWidget->addItem(a);
		
	}
	
}

/*
void QtGuiTestProject::check_box()
{
	if(ui.checkBox->checkState())
	{
		ui.listWidget->clear();
	}
}*/

void QtGuiTestProject::find()
{
	get_text_for_mask = ui.lineEdit_mask->text();
	get_text_for_path = ui.lineEdit_path->text();
	get_dir();
}

void QtGuiTestProject::open_file()
{
	allLines = new QStringList();
	allLines->clear();

	QFileDialog open_file;
	QString name_file = open_file.getOpenFileName();
	ui.listWidget->clear();
	ui.listWidget->addItem(name_file);

	QFile file(name_file);
	
	if (!file.open(QIODevice::ReadOnly))
	{
		qDebug() << "open file failed";
	}
	data_l = file.readAll();
	const char* line_c = data_l.data();
	line_str = QString(QString::fromLocal8Bit(line_c));
	allLines->append(line_str);
}

void QtGuiTestProject::save_file()
{	
	QString dir = save_f.getSaveFileName();
	QFile file(dir);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		QTextStream stream(&file);
		stream << data_l;
	}
	file.close();
}

void QtGuiTestProject::read() 
{   	
	QStringListModel* linesModel = new QStringListModel(*allLines, NULL);
	linesModel->setStringList(*allLines);
	ui.listView->setModel(linesModel);
}

void QtGuiTestProject::modify()
{
    QString get_text = ui.lineEdit_modify->text();	
	for (int i = 0; i < line_str.size(); ++i)
	{
		if (get_text == line_str[i])
		{
			line_str.remove(get_text);
			//qDebug() << get_text;
		}
	}
	qDebug() << line_str;

}