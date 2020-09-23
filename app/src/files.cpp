#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::printFiles() {
    int i = 0;

    m_ui->m_folderList->clear();
    for (const auto& file : m_files_from_dir) {
        m_ui->m_folderList->addItem(file.fileName());
        m_ui->m_folderList->item(i)->setForeground(Qt::black);
        m_ui->m_folderList->item(i)->setData(Qt::UserRole,
                                             file.absoluteFilePath());
        ++i;
    }
}

QList<QFileInfo> MainWindow::getDirFiles(QDir& dir) {
    dir.setNameFilters(QStringList() << "*.mp3"
                                     << "*.ogg"
                                     << "*.wav"
                                     << "*.flac");
    QList<QFileInfo> list = dir.entryInfoList(QDir::Files |
                                              QDir::Hidden |
                                              QDir::NoSymLinks);
    return list;
}

void MainWindow::on_m_folderList_itemDoubleClicked(QListWidgetItem* item) {
    QVariant data = item->data(Qt::UserRole);
    m_file_path = data.toString();
    std::ifstream file(m_file_path.toStdString().c_str());
    if (!file) {
        QMessageBox::warning(this, "", "\nCan't read/open file");
        setPathAndGetFiles(m_cur_dir.toStdString());
        return;
    }
    m_file = new QFile(m_file_path);
    m_file->open(QIODevice::ReadWrite | QIODevice::Text);

    if (!m_file->isReadable() || !m_file->isWritable()) {
        QMessageBox::warning(this, "File error",
                             m_file->fileName().prepend("Can't read/write: "));
        m_file->close();
        return;
    } else if (m_file) {
        setMyLabels();
    }
    m_file->close();
}