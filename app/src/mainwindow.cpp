#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow)
{
    this->setFixedSize(800, 600);
    m_ui->setupUi(this);
    connect(m_ui->m_folderList, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
            this,SLOT(on_m_folderList_itemDoubleClicked(QListWidgetItem*)));
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::setPath(std::string path)
{
    m_path = QString::fromStdString(path);
}

void MainWindow::showDir()
{
    QDir dir(m_path);
    QVariant fileDataPath(m_path);

    dir.setNameFilters(QStringList() << "*.mp3");
    dir.setSorting(QDir::Size | QDir::Reversed);
    QFileInfoList list = dir.entryInfoList(QDir::Files | QDir::Hidden | QDir::NoSymLinks);

    for (int i = 0; i < list.size(); ++i) {
            m_ui->m_folderList->addItem(list.at(i).fileName());
            m_ui->m_folderList->item(i)->setForeground(Qt::black);
            m_ui->m_folderList->item(i)->setData(Qt::UserRole, list.at(i).absoluteFilePath());
    }

}

void MainWindow::setTitles(Tag &tags)
{
    m_ui->m_title_line->setText(tags.getTitle());
    m_ui->m_artist_line->setText(tags.getArtist());
    m_ui->m_album_line->setText(tags.getAlbum());
    m_ui->m_year_line->setText(tags.getYear());
}

void MainWindow::on_m_save_clicked()
{

}

void MainWindow::on_m_folderList_itemDoubleClicked(QListWidgetItem *item)
{
    QVariant data = item->data(Qt::UserRole);
    QString fullFilePath = data.toString();
    Tag tags(fullFilePath);
    setTitles(tags);

}
