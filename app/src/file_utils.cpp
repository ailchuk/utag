#include "file_utils.h"

QString ReadThirty(QFile *file, int readloc)
{
    //Used to read Title, Artist, Album, Comment
    //Each is 30 bytes long
    char magic[30];
    file->seek(readloc);
    file->read(magic, 30);
    QString str(magic);
    return str;
}

QString Year(QFile *file, int readloc)
{
    //Reads Year Of Track...4bytes long
    char magic[4];
    file->seek(readloc);
    file->read(magic, 4);
    QString str(magic);
    return str;
}

QString CheckHeader(QFile *file, int readloc)
{
    //Checks for ID3v1 Tag Header 4bytes long...
    //currently only supports v1
    //v1+ coming later
    char magic[4];
    file->seek(readloc);
    file->read(magic, 4);
    QString str(magic);
    QString mag = str.mid(0, 3);
    return mag;
}
