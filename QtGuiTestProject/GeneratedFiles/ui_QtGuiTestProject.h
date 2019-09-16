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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiTestProjectClass
{
public:
    QWidget *centralWidget;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *lineEdit_mask;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_path;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiTestProjectClass)
    {
        if (QtGuiTestProjectClass->objectName().isEmpty())
            QtGuiTestProjectClass->setObjectName(QStringLiteral("QtGuiTestProjectClass"));
        QtGuiTestProjectClass->resize(600, 400);
        centralWidget = new QWidget(QtGuiTestProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(50, 80, 321, 28));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter->addWidget(label_2);
        lineEdit_mask = new QLineEdit(splitter);
        lineEdit_mask->setObjectName(QStringLiteral("lineEdit_mask"));
        splitter->addWidget(lineEdit_mask);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(130, 130, 256, 192));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(390, 80, 111, 20));
        lineEdit_path = new QLineEdit(centralWidget);
        lineEdit_path->setObjectName(QStringLiteral("lineEdit_path"));
        lineEdit_path->setGeometry(QRect(130, 41, 141, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 81, 20));
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
        label_2->setText(QApplication::translate("QtGuiTestProjectClass", "\320\222\320\262\320\276\320\264 \320\234\320\260\321\201\320\272\320\270", nullptr));
        pushButton->setText(QApplication::translate("QtGuiTestProjectClass", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214", nullptr));
        checkBox->setText(QApplication::translate("QtGuiTestProjectClass", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\262\321\205\320\276\320\264", nullptr));
        label->setText(QApplication::translate("QtGuiTestProjectClass", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", nullptr));
        menuFile->setTitle(QApplication::translate("QtGuiTestProjectClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiTestProjectClass: public Ui_QtGuiTestProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUITESTPROJECT_H
