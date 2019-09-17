#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiTestProject.h"
#include <qfiledialog.h>
class QtGuiTestProject : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiTestProject(QWidget *parent = Q_NULLPTR);
	QFileDialog save_f;
	QStringList* allLines;
	QString line_str;
	QByteArray data_l;
private:
	Ui::QtGuiTestProjectClass ui;
	QString get_text_for_mask;
	QString get_text_for_path;
	void get_dir();
//	void check_box();
public slots:
	//QString set_line_edit_mask();
	//QString set_line_edit_path();
	void find();
	void open_file();
	void save_file();
	void read();
	void modify();
};
