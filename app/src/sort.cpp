#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::on_m_by_filename_triggered() {
    if (m_ui->m_by_asc->isChecked()) {
        on_m_by_asc_triggered();
    } else {
        on_m_by_desc_triggered();
    }
    for (int i = 0; i < m_ui->m_folderList->count() - 1; ++i) {
        for (int j = 0; j < m_ui->m_folderList->count() - i - 1; j++) {
            if (m_ui->m_folderList->item(j)->data(Qt::UserRole).toString() >
                m_ui->m_folderList->item(j + 1)->data(Qt::UserRole).toString()) {
                m_ui->m_folderList->model()->moveRow(QModelIndex(), j + 1, QModelIndex(), j);
            }
        }
    }
    m_ui->m_folderList->update();
    m_ui->m_by_filename->setChecked(true);
    m_ui->m_by_title->setChecked(false);
}

void MainWindow::on_m_by_title_triggered() {
    if (m_ui->m_by_asc->isChecked()) {
        on_m_by_asc_triggered();
    } else {
        on_m_by_desc_triggered();
    }
    if (m_ui->m_by_title->isChecked()) {
        for (int i = 0; i < m_ui->m_folderList->count() - 1; ++i) {
            for (int j = 0; j < m_ui->m_folderList->count() - i - 1; j++) {
                TagLib::FileRef lhs(m_ui->m_folderList->item(j)->data(Qt::UserRole).toString().toStdString().c_str());
                TagLib::FileRef rhs(m_ui->m_folderList->item(j + 1)->data(Qt::UserRole).toString().toStdString().c_str());

                if (lhs.tag()->title().toCString() > rhs.tag()->title().toCString()) {
                    m_ui->m_folderList->model()->moveRow(QModelIndex(), j + 1, QModelIndex(), j);
                }
                qDebug() << lhs.tag()->title().toCString();
            }
        }
        m_ui->m_folderList->update();
    }
    m_ui->m_by_filename->setChecked(false);
    m_ui->m_by_title->setChecked(true);
}

void MainWindow::on_m_by_artist_triggered() {
    for (int i = 0; i < m_ui->m_folderList->count() - 1; ++i) {
        TagLib::FileRef lhs(m_ui->m_folderList->item(i)->data(Qt::UserRole).toString().toStdString().c_str());
        TagLib::FileRef rhs(m_ui->m_folderList->item(i + 1)->data(Qt::UserRole).toString().toStdString().c_str());

        if (!lhs.isNull() && !rhs.isNull())
            if (lhs.tag()->artist() < rhs.tag()->artist())
                m_ui->m_folderList->model()->moveRow(QModelIndex(), i + 1, QModelIndex(), i);
    }
    m_ui->m_folderList->update();
}

void MainWindow::on_m_by_album_triggered() {
    for (int i = 0; i < m_ui->m_folderList->count() - 1; ++i) {
        TagLib::FileRef lhs(m_ui->m_folderList->item(i)->data(Qt::UserRole).toString().toStdString().c_str());
        TagLib::FileRef rhs(m_ui->m_folderList->item(i + 1)->data(Qt::UserRole).toString().toStdString().c_str());

        if (!lhs.isNull() && !rhs.isNull())
            if (lhs.tag()->album() < rhs.tag()->album())
                m_ui->m_folderList->model()->moveRow(QModelIndex(), i, QModelIndex(), i + 1);
    }
    m_ui->m_folderList->update();
}

void MainWindow::on_m_by_genre_triggered() {
}

void MainWindow::on_m_by_desc_triggered() {
    if (m_ui->m_by_desc->isChecked()) {
        m_ui->m_folderList->sortItems(Qt::DescendingOrder);
        m_ui->m_folderList->update();
        m_ui->m_by_asc->setChecked(false);
    }
    m_ui->m_by_desc->setChecked(true);
}

void MainWindow::on_m_by_asc_triggered() {
    if (m_ui->m_by_asc->isChecked()) {
        m_ui->m_folderList->sortItems(Qt::AscendingOrder);
        m_ui->m_folderList->update();
        m_ui->m_by_desc->setChecked(false);
    }
    m_ui->m_by_asc->setChecked(true);
}

