#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::on_m_by_title_triggered() {
    sort_by(Filter::TITLE);
    printFiles();
    changeFilter(Filter::TITLE);
}

void MainWindow::on_m_by_artist_triggered() {
    sort_by(Filter::ARTIST);
    printFiles();
    changeFilter(Filter::ARTIST);
}

void MainWindow::on_m_by_album_triggered() {
    sort_by(Filter::ALBUM);
    printFiles();
    changeFilter(Filter::ALBUM);
}

void MainWindow::on_m_by_genre_triggered() {
    sort_by(Filter::GENRE);
    printFiles();
    changeFilter(Filter::GENRE);
}

void MainWindow::on_m_by_desc_triggered() {
    if (m_ui->m_by_desc->isChecked()) {
        m_ui->m_folderList->sortItems(Qt::DescendingOrder);
        m_ui->m_folderList->update();
    } else if (m_ui->m_by_title->isChecked()) {
        on_m_by_title_triggered();
    }
    changeFilter(Filter::DESC);
}

void MainWindow::on_m_by_asc_triggered() {
    if (m_ui->m_by_asc->isChecked()) {
        m_ui->m_folderList->sortItems(Qt::AscendingOrder);
        m_ui->m_folderList->update();
    }
    changeFilter(Filter::ASC);
}

void MainWindow::changeFilter(Filter f) {
    m_ui->m_by_title->setChecked(f == Filter::TITLE ? true : false);
    m_ui->m_by_artist->setChecked(f == Filter::ARTIST ? true : false);
    m_ui->m_by_album->setChecked(f == Filter::ALBUM ? true : false);
    m_ui->m_by_genre->setChecked(f == Filter::GENRE ? true : false);
    m_ui->m_by_asc->setChecked(f == Filter::ASC ? true : false);
    m_ui->m_by_desc->setChecked(f == Filter::DESC ? true : false);
}

void MainWindow::sort_by(Filter f) {
  std::sort(m_files_from_dir.rbegin(), m_files_from_dir.rend(),
            [f](auto a, auto b) {
              TagLib::FileRef lhs(a.absoluteFilePath().toStdString().c_str());
              TagLib::FileRef rhs(b.absoluteFilePath().toStdString().c_str());

              if (f == Filter::TITLE) {
                return std::string(lhs.tag()->title().toCString()) >
                       std::string(rhs.tag()->title().toCString());
              } else if (f == Filter::ARTIST) {
                return std::string(lhs.tag()->artist().toCString()) >
                       std::string(rhs.tag()->artist().toCString());
              } else if (f == Filter::ALBUM) {
                return std::string(lhs.tag()->album().toCString()) >
                       std::string(rhs.tag()->album().toCString());
              } else if (f == Filter::GENRE) {
                return std::string(lhs.tag()->genre().toCString()) >
                       std::string(rhs.tag()->genre().toCString());
              } 
              return false;
            });
}