#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiTestProject.h"

class QtGuiTestProject : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiTestProject(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiTestProjectClass ui;
	QString get_text_for_mask;
	QString get_text_for_path;
	void get_dir(QString,QString);
	void check_box();
public slots:
	QString set_line_edit_mask();
	QString set_line_edit_path();
    
};
