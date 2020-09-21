#pragma once

#include <QMainWindow>
#include <QDir>
#include <QFileInfo>
#include <QDebug>
#include <QFileDialog>
#include <QFileSystemWatcher>
#include <QListWidget>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <unistd.h>
#include <taglib/tag.h>
#include <taglib/fileref.h>

enum class Filter { TITLE, ARTIST, ALBUM, GENRE, ASC, DESC };

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(std::string path, QWidget *parent = nullptr);
    ~MainWindow();
    void setPathAndGetFiles(std::string &path);
    void printFiles();
    QList<QFileInfo> getDirFiles();
    void setMyLabels();


private slots:

    void on_m_save_clicked();

    void on_m_folderList_itemDoubleClicked(QListWidgetItem *item);

    void on_m_light_theme_triggered();

    void on_m_dark_theme_triggered();

    void on_m_by_asc_triggered();

    void on_m_by_desc_triggered();
    
    void on_m_by_title_triggered();

    void on_m_by_artist_triggered();
    
    void on_m_by_album_triggered();
    
    void on_m_by_genre_triggered();

private:
    Ui::MainWindow *m_ui;
    QString m_cur_dir;
    QString m_file_path;
    QFile *m_file;
    QList<QFileInfo> m_files_from_dir;
    void changeFilter(Filter f);
};
