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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QCheckBox *checkBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_path;
    QLineEdit *lineEdit_mask;
    QLabel *label_2;
    QPushButton *pushButton_find;
    QListView *listView;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_open_file;
    QPushButton *pushButton_save;
    QPushButton *pushButton_modify;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiTestProjectClass)
    {
        if (QtGuiTestProjectClass->objectName().isEmpty())
            QtGuiTestProjectClass->setObjectName(QStringLiteral("QtGuiTestProjectClass"));
        QtGuiTestProjectClass->resize(600, 478);
        centralWidget = new QWidget(QtGuiTestProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 120, 256, 192));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(410, 320, 111, 20));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 261, 65));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_path = new QLineEdit(layoutWidget);
        lineEdit_path->setObjectName(QStringLiteral("lineEdit_path"));

        gridLayout->addWidget(lineEdit_path, 0, 1, 1, 2);

        lineEdit_mask = new QLineEdit(layoutWidget);
        lineEdit_mask->setObjectName(QStringLiteral("lineEdit_mask"));

        gridLayout->addWidget(lineEdit_mask, 1, 1, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_find = new QPushButton(centralWidget);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(50, 320, 101, 28));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(330, 120, 256, 192));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 50, 161, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(370, 80, 181, 22));
        pushButton_open_file = new QPushButton(centralWidget);
        pushButton_open_file->setObjectName(QStringLiteral("pushButton_open_file"));
        pushButton_open_file->setGeometry(QRect(40, 10, 93, 28));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(140, 10, 93, 28));
        pushButton_modify = new QPushButton(centralWidget);
        pushButton_modify->setObjectName(QStringLiteral("pushButton_modify"));
        pushButton_modify->setGeometry(QRect(160, 320, 121, 28));
        QtGuiTestProjectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiTestProjectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        QtGuiTestProjectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiTestProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiTestProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiTestProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiTestProjectClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addSeparator();

        retranslateUi(QtGuiTestProjectClass);

        QMetaObject::connectSlotsByName(QtGuiTestProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiTestProjectClass)
    {
        QtGuiTestProjectClass->setWindowTitle(QApplication::translate("QtGuiTestProjectClass", "QtGuiTestProject", nullptr));
        checkBox->setText(QApplication::translate("QtGuiTestProjectClass", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\262\321\205\320\276\320\264", nullptr));
        label->setText(QApplication::translate("QtGuiTestProjectClass", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", nullptr));
        label_2->setText(QApplication::translate("QtGuiTestProjectClass", " \320\234\320\260\321\201\320\272\320\260 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButton_find->setText(QApplication::translate("QtGuiTestProjectClass", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_3->setText(QApplication::translate("QtGuiTestProjectClass", "\320\237\321\203\321\202\321\214 \320\272 \320\262\321\213\321\205\320\276\320\264\320\275\321\213\320\274 \321\204\320\260\320\271\320\273\320\260\320\274", nullptr));
        pushButton_open_file->setText(QApplication::translate("QtGuiTestProjectClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_save->setText(QApplication::translate("QtGuiTestProjectClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_modify->setText(QApplication::translate("QtGuiTestProjectClass", "\320\234\320\276\320\264\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        menuFile->setTitle(QApplication::translate("QtGuiTestProjectClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTestProjectClass: public Ui_QtGuiTestProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITESTPROJECT_H
