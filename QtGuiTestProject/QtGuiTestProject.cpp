#include "QtGuiTestProject.h"
#include <qdir.h>
#include <qdebug.h>
#include <iostream>


QtGuiTestProject::QtGuiTestProject(QWidget *parent)
	: QMainWindow(parent), get_text_for_path("C:/Users/Dolba/source/repos/QtGuiTestProject/dir"), get_text_for_mask("*txt")
{
	ui.setupUi(this);
	ui.lineEdit_mask->text();
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(set_line_edit_mask()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(set_line_edit_path()));
//	set_line_edit_mask();
	
}

void QtGuiTestProject::get_dir(QString m, QString p)
{
	check_box();
	QDir dir(p);
	QFileInfoList dirContent = dir.entryInfoList(QStringList()<< m);
	dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
	dir.setSorting(QDir::Name);
	for (int i =0;i < dirContent.size();++i)
	{
		QFileInfo fileInfo = dirContent.at(i);
		QString a = fileInfo.fileName();
		ui.listWidget->addItem(a);
		
	}
	
}

QString QtGuiTestProject::set_line_edit_mask()
{
	get_text_for_mask = ui.lineEdit_mask->text();
	get_dir(get_text_for_mask, get_text_for_path);
	return get_text_for_mask;
}

QString QtGuiTestProject::set_line_edit_path()
{
	get_text_for_path = ui.lineEdit_path->text();
	get_dir(get_text_for_mask, get_text_for_path);
	return get_text_for_path;
}

void QtGuiTestProject::check_box()
{
	if(ui.checkBox->checkState())
	{
		ui.listWidget->clear();
	}
}