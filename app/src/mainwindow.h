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
#include <taglib/tag.h>
#include <taglib/fileref.h>

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
    void showDir();
    void setMyLabels();


private slots:

    void on_m_save_clicked();

    void on_m_folderList_itemDoubleClicked(QListWidgetItem *item);

    void on_m_dark_b_clicked();

    void on_m_light_b_clicked();

private:
    Ui::MainWindow *m_ui;
    QString m_path;
    QFile *m_file;
    QString m_file_path;

};
