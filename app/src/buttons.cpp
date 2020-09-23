#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::on_m_dir_button_clicked() {
    QString directory = QFileDialog::getExistingDirectory(this,
                                                          "Browse dir",
                                                          m_cur_dir);
    std::string dir = directory.toStdString();

    if (!directory.isEmpty()) {
        m_ui->m_dir_l->setText(directory);
        setPathAndGetFiles(dir);
    }
}

void MainWindow::on_m_save_clicked() {
    if (m_file_path.size() <= 0) {
        QMessageBox::warning(this, "File error",
                             "Can't save changes!\n Please select a file");
        return;
    }

    TagLib::FileRef ref(m_file_path.toStdString().c_str());

    if (!ref.isNull()) {
        if (m_ui->m_line_year->text().size() > 0 &&
            !m_ui->m_line_year->text().toUInt()) {
            QMessageBox::warning(this, "", "\nYear must contain only digits");
            return;
        }
        if (m_ui->m_line_track->text().size() > 0 &&
            !m_ui->m_line_track->text().toUInt()) {
            QMessageBox::warning(this, "", "\nTrack must contain only digits");
            return;
        }
        ref.tag()->setTitle(m_ui->m_line_title->text().toStdString());
        ref.tag()->setArtist(m_ui->m_line_artist->text().toStdString());
        ref.tag()->setAlbum(m_ui->m_line_album->text().toStdString());
        ref.tag()->setGenre(m_ui->m_line_genre->text().toStdString());
        ref.tag()->setYear(m_ui->m_line_year->text().toUInt());
        ref.tag()->setTrack(m_ui->m_line_track->text().toUInt());
        ref.tag()->setComment(m_ui->m_line_comment->text().toStdString());
        ref.save();
        QMessageBox::information(this, "", "\nIncoming changes saved!");
    }
}
