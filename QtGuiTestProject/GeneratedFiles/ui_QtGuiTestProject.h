/********************************************************************************
** Form generated from reading UI file 'QtGuiTestProject.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUITESTPROJECT_H
#define UI_QTGUITESTPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTestProjectClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QPushButton *pushButton_find;
    QListView *listView;
    QPushButton *pushButton_open_file;
    QPushButton *pushButton_save;
    QPushButton *pushButton_read;
    QCheckBox *checkBox_2;
    QLabel *label;
    QLineEdit *lineEdit_modify;
    QPushButton *pushButton_modify;
    QLineEdit *lineEdit_timer;
    QPushButton *pushButton_timer;
    QPushButton *pushButton_delete;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiTestProjectClass)
    {
        if (QtGuiTestProjectClass->objectName().isEmpty())
            QtGuiTestProjectClass->setObjectName(QStringLiteral("QtGuiTestProjectClass"));
        QtGuiTestProjectClass->resize(577, 450);
        centralWidget = new QWidget(QtGuiTestProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 256, 192));
        pushButton_find = new QPushButton(centralWidget);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(30, 270, 101, 28));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(300, 60, 256, 192));
        pushButton_open_file = new QPushButton(centralWidget);
        pushButton_open_file->setObjectName(QStringLiteral("pushButton_open_file"));
        pushButton_open_file->setGeometry(QRect(10, 20, 93, 28));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(110, 20, 93, 28));
        pushButton_read = new QPushButton(centralWidget);
        pushButton_read->setObjectName(QStringLiteral("pushButton_read"));
        pushButton_read->setGeometry(QRect(140, 270, 121, 28));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(290, 330, 271, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 20, 221, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit_modify = new QLineEdit(centralWidget);
        lineEdit_modify->setObjectName(QStringLiteral("lineEdit_modify"));
        lineEdit_modify->setGeometry(QRect(42, 314, 31, 22));
        pushButton_modify = new QPushButton(centralWidget);
        pushButton_modify->setObjectName(QStringLiteral("pushButton_modify"));
        pushButton_modify->setGeometry(QRect(80, 311, 161, 28));
        lineEdit_timer = new QLineEdit(centralWidget);
        lineEdit_timer->setObjectName(QStringLiteral("lineEdit_timer"));
        lineEdit_timer->setGeometry(QRect(42, 349, 31, 22));
        pushButton_timer = new QPushButton(centralWidget);
        pushButton_timer->setObjectName(QStringLiteral("pushButton_timer"));
        pushButton_timer->setGeometry(QRect(80, 346, 161, 28));
        pushButton_delete = new QPushButton(centralWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(210, 20, 111, 28));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 380, 111, 16));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(300, 270, 256, 61));
        QtGuiTestProjectClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QtGuiTestProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiTestProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiTestProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiTestProjectClass->setStatusBar(statusBar);

        retranslateUi(QtGuiTestProjectClass);

        QMetaObject::connectSlotsByName(QtGuiTestProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTestProjectClass)
    {
        QtGuiTestProjectClass->setWindowTitle(QApplication::translate("QtGuiTestProjectClass", "QtGuiTestProject", nullptr));
        pushButton_find->setText(QApplication::translate("QtGuiTestProjectClass", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\205\320\276\320\264", nullptr));
        pushButton_open_file->setText(QApplication::translate("QtGuiTestProjectClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_save->setText(QApplication::translate("QtGuiTestProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_read->setText(QApplication::translate("QtGuiTestProjectClass", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        checkBox_2->setText(QApplication::translate("QtGuiTestProjectClass", " \320\276\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\276\320\277\321\200\320\276\321\201 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label->setText(QApplication::translate("QtGuiTestProjectClass", "\320\222\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\260\320\271\320\273 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));
        pushButton_modify->setText(QApplication::translate("QtGuiTestProjectClass", "\320\234\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_timer->setText(QApplication::translate("QtGuiTestProjectClass", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\271\320\274\320\265\321\200", nullptr));
        pushButton_delete->setText(QApplication::translate("QtGuiTestProjectClass", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        label_2->setText(QApplication::translate("QtGuiTestProjectClass", "\320\242\320\260\320\271\320\274\320\265\321\200 \320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205", nullptr));
        textBrowser->setHtml(QApplication::translate("QtGuiTestProjectClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\201\321\207\320\270\321\202\321\213\320\262\320\260\320\265\321\202 \321\202\320\265\320\272\321\201\321\202 \320\270 \321\203\320\264\320\260\320\273\321\217\320\265\321\202 \320\262 \320\275\320\265\320\274 \321\201\320\270\320\274\320\262\320\276\320\273\321\213 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\213\320\265 \320\262 \320\263\321\200\320\260\321\204\321\203 &quot;\320\234\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262"
                        "\320\260\321\202\321\214 \321\204\320\260\320\271\320\273&quot;.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTestProjectClass: public Ui_QtGuiTestProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITESTPROJECT_H
