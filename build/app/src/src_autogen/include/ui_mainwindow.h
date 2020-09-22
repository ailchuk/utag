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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_light_theme;
    QAction *m_dark_theme;
    QAction *m_by_title;
    QAction *m_by_artist;
    QAction *m_by_album;
    QAction *m_by_genre;
    QAction *m_by_asc;
    QAction *m_by_desc;
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
    QLineEdit *m_line_title;
    QLineEdit *m_line_artist;
    QLineEdit *m_line_album;
    QLineEdit *m_line_genre;
    QLineEdit *m_line_year;
    QLineEdit *m_line_track;
    QLineEdit *m_line_comment;
    QPushButton *m_dir_button;
    QLabel *m_dir_l;
    QMenuBar *menuBar;
    QMenu *Appearance;
    QMenu *Sort_By;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(811, 453);
        MainWindow->setMinimumSize(QSize(0, 415));
        m_light_theme = new QAction(MainWindow);
        m_light_theme->setObjectName(QString::fromUtf8("m_light_theme"));
        m_light_theme->setCheckable(true);
        m_light_theme->setChecked(true);
        m_light_theme->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        m_light_theme->setFont(font);
        m_dark_theme = new QAction(MainWindow);
        m_dark_theme->setObjectName(QString::fromUtf8("m_dark_theme"));
        m_dark_theme->setCheckable(true);
        m_by_title = new QAction(MainWindow);
        m_by_title->setObjectName(QString::fromUtf8("m_by_title"));
        m_by_title->setCheckable(true);
        m_by_title->setChecked(false);
        m_by_artist = new QAction(MainWindow);
        m_by_artist->setObjectName(QString::fromUtf8("m_by_artist"));
        m_by_artist->setCheckable(true);
        m_by_album = new QAction(MainWindow);
        m_by_album->setObjectName(QString::fromUtf8("m_by_album"));
        m_by_album->setCheckable(true);
        m_by_genre = new QAction(MainWindow);
        m_by_genre->setObjectName(QString::fromUtf8("m_by_genre"));
        m_by_genre->setCheckable(true);
        m_by_genre->setEnabled(true);
        m_by_asc = new QAction(MainWindow);
        m_by_asc->setObjectName(QString::fromUtf8("m_by_asc"));
        m_by_asc->setCheckable(true);
        m_by_asc->setChecked(true);
        m_by_desc = new QAction(MainWindow);
        m_by_desc->setObjectName(QString::fromUtf8("m_by_desc"));
        m_by_desc->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m_save = new QPushButton(centralwidget);
        m_save->setObjectName(QString::fromUtf8("m_save"));
        m_save->setGeometry(QRect(14, 374, 451, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        m_save->setFont(font1);
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
        m_folderList->setGeometry(QRect(480, 0, 321, 416));
        m_title_l = new QLabel(centralwidget);
        m_title_l->setObjectName(QString::fromUtf8("m_title_l"));
        m_title_l->setGeometry(QRect(14, 70, 75, 30));
        QFont font2;
        font2.setPointSize(13);
        m_title_l->setFont(font2);
        m_album_l = new QLabel(centralwidget);
        m_album_l->setObjectName(QString::fromUtf8("m_album_l"));
        m_album_l->setGeometry(QRect(14, 150, 75, 30));
        m_album_l->setFont(font2);
        m_artist_l = new QLabel(centralwidget);
        m_artist_l->setObjectName(QString::fromUtf8("m_artist_l"));
        m_artist_l->setGeometry(QRect(14, 110, 75, 30));
        m_artist_l->setFont(font2);
        m_genre_l = new QLabel(centralwidget);
        m_genre_l->setObjectName(QString::fromUtf8("m_genre_l"));
        m_genre_l->setGeometry(QRect(14, 190, 75, 30));
        m_genre_l->setFont(font2);
        m_year_l = new QLabel(centralwidget);
        m_year_l->setObjectName(QString::fromUtf8("m_year_l"));
        m_year_l->setGeometry(QRect(14, 230, 75, 30));
        m_year_l->setFont(font2);
        m_track_l = new QLabel(centralwidget);
        m_track_l->setObjectName(QString::fromUtf8("m_track_l"));
        m_track_l->setGeometry(QRect(14, 270, 75, 30));
        m_track_l->setFont(font2);
        m_comment_l = new QLabel(centralwidget);
        m_comment_l->setObjectName(QString::fromUtf8("m_comment_l"));
        m_comment_l->setGeometry(QRect(14, 310, 75, 30));
        m_comment_l->setFont(font2);
        m_line_title = new QLineEdit(centralwidget);
        m_line_title->setObjectName(QString::fromUtf8("m_line_title"));
        m_line_title->setGeometry(QRect(100, 70, 365, 25));
        m_line_artist = new QLineEdit(centralwidget);
        m_line_artist->setObjectName(QString::fromUtf8("m_line_artist"));
        m_line_artist->setGeometry(QRect(100, 110, 365, 25));
        m_line_album = new QLineEdit(centralwidget);
        m_line_album->setObjectName(QString::fromUtf8("m_line_album"));
        m_line_album->setGeometry(QRect(100, 150, 365, 25));
        m_line_genre = new QLineEdit(centralwidget);
        m_line_genre->setObjectName(QString::fromUtf8("m_line_genre"));
        m_line_genre->setGeometry(QRect(100, 190, 365, 25));
        m_line_year = new QLineEdit(centralwidget);
        m_line_year->setObjectName(QString::fromUtf8("m_line_year"));
        m_line_year->setGeometry(QRect(100, 230, 365, 25));
        m_line_track = new QLineEdit(centralwidget);
        m_line_track->setObjectName(QString::fromUtf8("m_line_track"));
        m_line_track->setGeometry(QRect(100, 270, 365, 25));
        m_line_comment = new QLineEdit(centralwidget);
        m_line_comment->setObjectName(QString::fromUtf8("m_line_comment"));
        m_line_comment->setGeometry(QRect(100, 310, 365, 25));
        m_dir_button = new QPushButton(centralwidget);
        m_dir_button->setObjectName(QString::fromUtf8("m_dir_button"));
        m_dir_button->setGeometry(QRect(379, 20, 81, 30));
        m_dir_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        m_dir_l = new QLabel(centralwidget);
        m_dir_l->setObjectName(QString::fromUtf8("m_dir_l"));
        m_dir_l->setGeometry(QRect(10, 20, 361, 30));
        m_dir_l->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 25));
        Appearance = new QMenu(menuBar);
        Appearance->setObjectName(QString::fromUtf8("Appearance"));
        Sort_By = new QMenu(menuBar);
        Sort_By->setObjectName(QString::fromUtf8("Sort_By"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(Appearance->menuAction());
        menuBar->addAction(Sort_By->menuAction());
        Appearance->addAction(m_light_theme);
        Appearance->addAction(m_dark_theme);
        Sort_By->addAction(m_by_title);
        Sort_By->addAction(m_by_artist);
        Sort_By->addAction(m_by_album);
        Sort_By->addAction(m_by_genre);
        Sort_By->addAction(m_by_asc);
        Sort_By->addAction(m_by_desc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "utag", nullptr));
        m_light_theme->setText(QCoreApplication::translate("MainWindow", "Light theme", nullptr));
        m_dark_theme->setText(QCoreApplication::translate("MainWindow", "Dark theme", nullptr));
        m_by_title->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        m_by_artist->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        m_by_album->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        m_by_genre->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        m_by_asc->setText(QCoreApplication::translate("MainWindow", "Ascending", nullptr));
        m_by_desc->setText(QCoreApplication::translate("MainWindow", "Descending", nullptr));
        m_save->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        m_title_l->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        m_album_l->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        m_artist_l->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        m_genre_l->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        m_year_l->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        m_track_l->setText(QCoreApplication::translate("MainWindow", "Track", nullptr));
        m_comment_l->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        m_dir_button->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        m_dir_l->setText(QString());
        Appearance->setTitle(QCoreApplication::translate("MainWindow", "Appearance", nullptr));
        Sort_By->setTitle(QCoreApplication::translate("MainWindow", "Sort by", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
