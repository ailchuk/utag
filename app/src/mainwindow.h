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
#include <sys/types.h>
#include <sys/stat.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPath(std::string path);
    void setMyLabels();
    void printFiles();


private slots:

    void on_m_save_clicked();

    void on_m_folderList_itemDoubleClicked(QListWidgetItem *item);

    void on_m_light_theme_triggered();

    void on_m_dark_theme_triggered();

    void on_m_by_asc_triggered();

    void on_m_by_desc_triggered();

    void on_m_by_filename_triggered();
    
    void on_m_by_title_triggered();

    void on_m_by_artist_triggered();
    
    void on_m_by_album_triggered();
    
    void on_m_by_genre_triggered();



private:
    Ui::MainWindow *m_ui;
    QString m_path;
    QFile *m_file;
    QString m_file_path;
};
