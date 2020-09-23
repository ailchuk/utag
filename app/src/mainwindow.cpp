#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(std::string path, QWidget *parent)
    : QMainWindow(parent), m_ui(new Ui::MainWindow) {
    setFixedSize(800, 415);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint |
                   Qt::CustomizeWindowHint);
    m_ui->setupUi(this);
    setPathAndGetFiles(path);
    on_m_light_theme_triggered();
}

MainWindow::~MainWindow() {
    delete m_ui;
}


void MainWindow::setPathAndGetFiles(std::string path) {
    m_cur_dir = QString::fromStdString(path);
    QDir dir(m_cur_dir);

    if (!dir.exists() || !dir.isReadable()) {
        QMessageBox::warning(this, "Error dir", 
                              "Can't read or access directory!");
        on_m_dir_button_clicked();
        return ;
    }
    m_ui->m_dir_l->setText(dir.absolutePath());
    m_files_from_dir = getDirFiles(dir);
    printFiles();
}

void MainWindow::setMyLabels() {
    TagLib::FileRef ref(m_file_path.toStdString().c_str());
    auto year = QString::number(ref.tag()->year());
    auto track = QString::number(ref.tag()->track());

    m_ui->m_line_title->setText(
        QString::fromStdString(ref.tag()->title().toCString()));
    m_ui->m_line_artist->setText(
        QString::fromStdString(ref.tag()->artist().toCString()));
    m_ui->m_line_album->setText(
        QString::fromStdString(ref.tag()->album().toCString()));
    m_ui->m_line_genre->setText(
        QString::fromStdString(ref.tag()->genre().toCString()));
    m_ui->m_line_year->setText(year == "0" ? "" : year);
    m_ui->m_line_track->setText(track == "0" ? "" : track);
    m_ui->m_line_comment->setText(
        QString::fromStdString(ref.tag()->comment().toCString()));
}
