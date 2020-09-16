/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *m_save;
    QListWidget *m_folderList;
    QGraphicsView *m_logo;
    QWidget *layoutWidget;
    QHBoxLayout *m_layout_all;
    QVBoxLayout *m_layout_label;
    QLabel *m_artist;
    QLabel *m_title;
    QLabel *m_album;
    QLabel *m_year;
    QVBoxLayout *m_layout_line;
    QLineEdit *m_artist_line;
    QLineEdit *m_title_line;
    QLineEdit *m_album_line;
    QLineEdit *m_year_line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_save = new QPushButton(centralwidget);
        m_save->setObjectName(QString::fromUtf8("m_save"));
        m_save->setGeometry(QRect(10, 566, 441, 25));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        m_save->setFont(font);
        m_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        m_folderList = new QListWidget(centralwidget);
        m_folderList->setObjectName(QString::fromUtf8("m_folderList"));
        m_folderList->setGeometry(QRect(465, 10, 321, 581));
        m_logo = new QGraphicsView(centralwidget);
        m_logo->setObjectName(QString::fromUtf8("m_logo"));
        m_logo->setGeometry(QRect(60, 20, 361, 231));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 270, 441, 247));
        m_layout_all = new QHBoxLayout(layoutWidget);
        m_layout_all->setObjectName(QString::fromUtf8("m_layout_all"));
        m_layout_all->setContentsMargins(0, 0, 0, 0);
        m_layout_label = new QVBoxLayout();
        m_layout_label->setObjectName(QString::fromUtf8("m_layout_label"));
        m_artist = new QLabel(layoutWidget);
        m_artist->setObjectName(QString::fromUtf8("m_artist"));
        QFont font1;
        font1.setPointSize(12);
        m_artist->setFont(font1);

        m_layout_label->addWidget(m_artist);

        m_title = new QLabel(layoutWidget);
        m_title->setObjectName(QString::fromUtf8("m_title"));
        m_title->setFont(font1);

        m_layout_label->addWidget(m_title);

        m_album = new QLabel(layoutWidget);
        m_album->setObjectName(QString::fromUtf8("m_album"));
        m_album->setFont(font1);

        m_layout_label->addWidget(m_album);

        m_year = new QLabel(layoutWidget);
        m_year->setObjectName(QString::fromUtf8("m_year"));
        m_year->setFont(font1);

        m_layout_label->addWidget(m_year);


        m_layout_all->addLayout(m_layout_label);

        m_layout_line = new QVBoxLayout();
        m_layout_line->setObjectName(QString::fromUtf8("m_layout_line"));
        m_artist_line = new QLineEdit(layoutWidget);
        m_artist_line->setObjectName(QString::fromUtf8("m_artist_line"));

        m_layout_line->addWidget(m_artist_line);

        m_title_line = new QLineEdit(layoutWidget);
        m_title_line->setObjectName(QString::fromUtf8("m_title_line"));

        m_layout_line->addWidget(m_title_line);

        m_album_line = new QLineEdit(layoutWidget);
        m_album_line->setObjectName(QString::fromUtf8("m_album_line"));

        m_layout_line->addWidget(m_album_line);

        m_year_line = new QLineEdit(layoutWidget);
        m_year_line->setObjectName(QString::fromUtf8("m_year_line"));

        m_layout_line->addWidget(m_year_line);


        m_layout_all->addLayout(m_layout_line);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_save->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        m_artist->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        m_title->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        m_album->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        m_year->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
