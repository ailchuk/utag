#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileInfo>
#include <QDebug>
#include <QFileDialog>
#include <QFileSystemWatcher>
#include <QListWidget>
#include "mytag.h"

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
    void setTitles(Tag& tags);


private slots:

    void on_m_save_clicked();

    void on_m_folderList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *m_ui;
    QString m_path;
};
#endif // MAINWINDOW_H
