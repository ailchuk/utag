#pragma once

#include "file_utils.h"
#include "mainwindow.h"

class Tag
{
public:
    Tag(QString fname);
    ~Tag();
    QString getArtist();
    QString getTitle();
    QString getAlbum();
    QString getYear();
    void setArtist(QString str);
    void setTitle(QString str);
    void setAlbum(QString str);
    void setYear(QString str);

private:
    QFile *file;
    QString filename;
    QString artist;
    QString title;
    QString album;
    QString year;
    QString comment;
    void read();
};
