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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_modify;
    QPushButton *pushButton_modify;
    QLineEdit *lineEdit_timer;
    QPushButton *pushButton_timer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiTestProjectClass)
    {
        if (QtGuiTestProjectClass->objectName().isEmpty())
            QtGuiTestProjectClass->setObjectName(QStringLiteral("QtGuiTestProjectClass"));
        QtGuiTestProjectClass->resize(577, 442);
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
        pushButton_open_file->setGeometry(QRect(30, 20, 93, 28));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(130, 20, 93, 28));
        pushButton_read = new QPushButton(centralWidget);
        pushButton_read->setObjectName(QStringLiteral("pushButton_read"));
        pushButton_read->setGeometry(QRect(140, 270, 121, 28));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(280, 320, 271, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 20, 221, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 310, 221, 65));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_modify = new QLineEdit(widget);
        lineEdit_modify->setObjectName(QStringLiteral("lineEdit_modify"));

        gridLayout->addWidget(lineEdit_modify, 0, 0, 1, 1);

        pushButton_modify = new QPushButton(widget);
        pushButton_modify->setObjectName(QStringLiteral("pushButton_modify"));

        gridLayout->addWidget(pushButton_modify, 0, 1, 1, 1);

        lineEdit_timer = new QLineEdit(widget);
        lineEdit_timer->setObjectName(QStringLiteral("lineEdit_timer"));

        gridLayout->addWidget(lineEdit_timer, 1, 0, 1, 1);

        pushButton_timer = new QPushButton(widget);
        pushButton_timer->setObjectName(QStringLiteral("pushButton_timer"));

        gridLayout->addWidget(pushButton_timer, 1, 1, 1, 1);

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
        pushButton_find->setText(QApplication::translate("QtGuiTestProjectClass", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton_open_file->setText(QApplication::translate("QtGuiTestProjectClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_save->setText(QApplication::translate("QtGuiTestProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_read->setText(QApplication::translate("QtGuiTestProjectClass", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        checkBox_2->setText(QApplication::translate("QtGuiTestProjectClass", " \320\276\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\276\320\277\321\200\320\276\321\201 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label->setText(QApplication::translate("QtGuiTestProjectClass", "\320\222\321\205\320\276\320\264\320\275\320\276\320\271 \321\204\320\260\320\271\320\273 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));
        pushButton_modify->setText(QApplication::translate("QtGuiTestProjectClass", "\320\234\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_timer->setText(QApplication::translate("QtGuiTestProjectClass", "\320\242\320\260\320\271\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTestProjectClass: public Ui_QtGuiTestProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITESTPROJECT_H
