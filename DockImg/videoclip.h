#ifndef VIDEOCLIP_H
#define VIDEOCLIP_H
#include <QString>
#include <QPoint>

class videoClip
{
public:
    videoClip(QString str, int start, int stop);

    QString filepath;
    QPoint  interval;
};

#endif // VIDEOCLIP_H
