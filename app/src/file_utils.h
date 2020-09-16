#pragma once

#include <QWidget>
#include <QFile>

QString ReadThirty(QFile *file, int readloc);
QString Year(QFile *file, int readloc);
QString CheckHeader(QFile *file, int readloc);
