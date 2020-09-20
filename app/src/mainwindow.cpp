#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_ui(new Ui::MainWindow)
{
    setFixedSize(800, 415);
    setWindowFlags(Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint | 
                   Qt::CustomizeWindowHint);
    m_ui->setupUi(this);
    connect(m_ui->m_folderList, SIGNAL(itemDoubleClicked(QListWidgetItem*)),
            this,SLOT(on_m_folderList_itemDoubleClicked(QListWidgetItem*)));
    on_m_light_theme_triggered();
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::setPath(std::string path)
{
    struct stat info;

    if (stat(path.c_str(), &info ) != 0 ) {
        QMessageBox::critical(this,
                              "Error opening dir", "Can't access directory!");
    }
    else if(!(info.st_mode & S_IFDIR)) { 
        QMessageBox::critical(this,
                              "Error opening dir", "It is not a directory!");
    }
    else
        m_path = QString::fromStdString(path);
    
    printFiles();
    on_m_by_filename_triggered();
}

void MainWindow::setMyLabels()
{
    TagLib::FileRef ref(m_file_path.toStdString().c_str());
    auto year = QString::number(ref.tag()->year());
    auto track = QString::number(ref.tag()->track());
    size_t slash = m_file_path.toStdString().find_last_of("/");
    std::string dirPath = (slash != std::string::npos) ? 
        m_file_path.toStdString().substr(0, slash) : m_file_path.toStdString();

    m_ui->m_full_path_to_file_l->setText(QString::fromStdString(dirPath));
    m_ui->m_line_title->setText(
        QString::fromStdString(ref.tag()->title().toCString()));
    m_ui->m_line_artist->setText(
        QString::fromStdString(ref.tag()->artist().toCString()));
    m_ui->m_line_album->setText(
        QString::fromStdString(ref.tag()->album().toCString()));
    m_ui->m_line_genre->setText(
        QString::fromStdString(ref.tag()->genre().toCString()));
    m_ui->m_line_year->setText(year == "0" ? " " : year);
    m_ui->m_line_track->setText(track == "0" ? " " : track);
    m_ui->m_line_comment->setText(
        QString::fromStdString(ref.tag()->comment().toCString()));
}

void MainWindow::on_m_save_clicked()
{
    if (m_file_path.size() <= 0) {
        QMessageBox::warning(this, 
            "File error", "Can't save changes!\n Please select a file");
        return;
    }

    TagLib::FileRef ref(m_file_path.toStdString().c_str());

    if (!ref.isNull()) {
        ref.tag()->setTitle(m_ui->m_line_title->text().toStdString());
        ref.tag()->setArtist(m_ui->m_line_artist->text().toStdString());
        ref.tag()->setAlbum(m_ui->m_line_album->text().toStdString());
        ref.tag()->setGenre(m_ui->m_line_genre->text().toStdString());
        ref.tag()->setYear(m_ui->m_line_year->text().toInt());
        ref.tag()->setTrack(m_ui->m_line_track->text().toInt());
        ref.tag()->setComment(m_ui->m_line_comment->text().toStdString());
        ref.save();
    }
}

void MainWindow::on_m_folderList_itemDoubleClicked(QListWidgetItem *item)
{
    QVariant data = item->data(Qt::UserRole);
    m_file_path = data.toString();
    m_file = new QFile(m_file_path);
    m_file->open(QIODevice::ReadWrite | QIODevice::Text);

    if (m_file) {
        setMyLabels();
    } else {
        QMessageBox::critical(this, "Error opening file", "Can't open file!");
    }
    m_file->close();
}
