#include "mytag.h"

Tag::Tag(QString fname)
{
    file = new QFile(fname);
    file->open(QIODevice::ReadWrite | QIODevice::Text);
    filename = fname;

    if (file) {
//        if (CheckHeader(file, file->size() - 128) == "tag") {
            read();
//        }
//        else
//            qDebug() << "File not tagged!";
    }
}

Tag::~Tag() {
    file->close();
}

QString Tag::getArtist() {
    return artist;
}

QString Tag::getTitle() {
    return title;
}

QString Tag::getAlbum() {
    return album;
}

QString Tag::getYear() {
    return year;
}

void Tag::setArtist(QString str) {
    artist = str;
    file->seek(file->size() - 95);
    file->write(str.toStdString().c_str(), 30);
}

void Tag::setTitle(QString str) {
    title = str;
    file->seek(file->size() - 125);
    file->write(str.toStdString().c_str(), 30);
}

void Tag::setAlbum(QString str) {
    album = str;
    file->seek(file->size() - 65);
    file->write(str.toStdString().c_str(), 30);
}

void Tag::setYear(QString str) {
    year = str;
    file->seek(file->size() - 35);
    file->write(str.toStdString().c_str(), 4);
}


void Tag::read() {
    int readloc = file->size() - 125;

    title = ReadThirty(file, readloc);
    readloc+=30;
    artist = ReadThirty(file, readloc);
    readloc+=30;
    album = ReadThirty(file, readloc);
    readloc+=30;
    year = Year(file, readloc);
}
