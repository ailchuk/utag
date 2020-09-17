#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow)
{
    setFixedSize(800, 415);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint | Qt::CustomizeWindowHint);
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

void MainWindow::setMyLabels()
{
    TagLib::FileRef ref(m_file_path.toStdString().c_str());
    auto year = QString::number(ref.tag()->year());
    auto track = QString::number(ref.tag()->track());

    m_ref = &ref;
    m_ui->m_full_path_to_file_l->setText(m_file_path);
    m_ui->m_line_title->setText(QString::fromStdString(ref.tag()->title().toCString()));
    m_ui->m_line_artist->setText(QString::fromStdString(ref.tag()->artist().toCString()));
    m_ui->m_line_album->setText(QString::fromStdString(ref.tag()->album().toCString()));
    m_ui->m_line_genre->setText(QString::fromStdString(ref.tag()->genre().toCString()));
    m_ui->m_line_year->setText(year == "0" ? " " : year);
    m_ui->m_line_track->setText(track == "0" ? " " : track);
    m_ui->m_line_comment->setText(QString::fromStdString(ref.tag()->comment().toCString()));
}

void MainWindow::on_m_save_clicked()
{
    // m_ref->tag()->setTitle(m_ui->m_line_title->text().toStdString());
    // m_ref->save();
    // m_file->close();

}

void MainWindow::on_m_folderList_itemDoubleClicked(QListWidgetItem *item)
{
    QVariant data = item->data(Qt::UserRole);
    m_file_path = data.toString();
    // MyTag tags(fullFilePath);
    // setTitles(tags);
    m_file = new QFile(m_file_path);
    m_file->open(QIODevice::ReadWrite | QIODevice::Text);

    if (m_file) {
        setMyLabels();
    }
}
