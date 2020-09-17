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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *m_save;
    QListWidget *m_folderList;
    QLabel *m_title_l;
    QLabel *m_album_l;
    QLabel *m_artist_l;
    QLabel *m_genre_l;
    QLabel *m_year_l;
    QLabel *m_track_l;
    QLabel *m_comment_l;
    QLabel *m_path_to_file_l;
    QLineEdit *m_line_title;
    QLineEdit *m_line_artist;
    QLineEdit *m_line_album;
    QLineEdit *m_line_genre;
    QLineEdit *m_line_year;
    QLineEdit *m_line_track;
    QLineEdit *m_line_comment;
    QLabel *m_full_path_to_file_l;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 415);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_save = new QPushButton(centralwidget);
        m_save->setObjectName(QString::fromUtf8("m_save"));
        m_save->setGeometry(QRect(14, 375, 451, 30));
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
        m_folderList->setGeometry(QRect(475, 5, 321, 405));
        m_title_l = new QLabel(centralwidget);
        m_title_l->setObjectName(QString::fromUtf8("m_title_l"));
        m_title_l->setGeometry(QRect(14, 90, 75, 30));
        QFont font1;
        font1.setPointSize(10);
        m_title_l->setFont(font1);
        m_album_l = new QLabel(centralwidget);
        m_album_l->setObjectName(QString::fromUtf8("m_album_l"));
        m_album_l->setGeometry(QRect(14, 170, 75, 30));
        m_album_l->setFont(font1);
        m_artist_l = new QLabel(centralwidget);
        m_artist_l->setObjectName(QString::fromUtf8("m_artist_l"));
        m_artist_l->setGeometry(QRect(14, 130, 75, 30));
        m_artist_l->setFont(font1);
        m_genre_l = new QLabel(centralwidget);
        m_genre_l->setObjectName(QString::fromUtf8("m_genre_l"));
        m_genre_l->setGeometry(QRect(14, 210, 75, 30));
        m_genre_l->setFont(font1);
        m_year_l = new QLabel(centralwidget);
        m_year_l->setObjectName(QString::fromUtf8("m_year_l"));
        m_year_l->setGeometry(QRect(14, 250, 75, 30));
        m_year_l->setFont(font1);
        m_track_l = new QLabel(centralwidget);
        m_track_l->setObjectName(QString::fromUtf8("m_track_l"));
        m_track_l->setGeometry(QRect(14, 290, 75, 30));
        m_track_l->setFont(font1);
        m_comment_l = new QLabel(centralwidget);
        m_comment_l->setObjectName(QString::fromUtf8("m_comment_l"));
        m_comment_l->setGeometry(QRect(14, 330, 75, 30));
        m_comment_l->setFont(font1);
        m_path_to_file_l = new QLabel(centralwidget);
        m_path_to_file_l->setObjectName(QString::fromUtf8("m_path_to_file_l"));
        m_path_to_file_l->setGeometry(QRect(10, 30, 91, 30));
        m_path_to_file_l->setFont(font1);
        m_line_title = new QLineEdit(centralwidget);
        m_line_title->setObjectName(QString::fromUtf8("m_line_title"));
        m_line_title->setGeometry(QRect(100, 90, 365, 25));
        m_line_artist = new QLineEdit(centralwidget);
        m_line_artist->setObjectName(QString::fromUtf8("m_line_artist"));
        m_line_artist->setGeometry(QRect(100, 130, 365, 25));
        m_line_album = new QLineEdit(centralwidget);
        m_line_album->setObjectName(QString::fromUtf8("m_line_album"));
        m_line_album->setGeometry(QRect(100, 170, 365, 25));
        m_line_genre = new QLineEdit(centralwidget);
        m_line_genre->setObjectName(QString::fromUtf8("m_line_genre"));
        m_line_genre->setGeometry(QRect(100, 210, 365, 25));
        m_line_year = new QLineEdit(centralwidget);
        m_line_year->setObjectName(QString::fromUtf8("m_line_year"));
        m_line_year->setGeometry(QRect(100, 250, 365, 25));
        m_line_track = new QLineEdit(centralwidget);
        m_line_track->setObjectName(QString::fromUtf8("m_line_track"));
        m_line_track->setGeometry(QRect(100, 290, 365, 25));
        m_line_comment = new QLineEdit(centralwidget);
        m_line_comment->setObjectName(QString::fromUtf8("m_line_comment"));
        m_line_comment->setGeometry(QRect(100, 330, 365, 25));
        m_full_path_to_file_l = new QLabel(centralwidget);
        m_full_path_to_file_l->setObjectName(QString::fromUtf8("m_full_path_to_file_l"));
        m_full_path_to_file_l->setGeometry(QRect(110, 30, 351, 30));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(false);
        m_full_path_to_file_l->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_save->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        m_title_l->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        m_album_l->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        m_artist_l->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        m_genre_l->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        m_year_l->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        m_track_l->setText(QCoreApplication::translate("MainWindow", "Track", nullptr));
        m_comment_l->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        m_path_to_file_l->setText(QCoreApplication::translate("MainWindow", "Path to file", nullptr));
        m_full_path_to_file_l->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
