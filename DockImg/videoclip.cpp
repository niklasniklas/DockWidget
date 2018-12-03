#include "videoclip.h"

videoClip::videoClip(QString str, int start, int stop)
{
    filepath = str;
    interval.setX(start);
    interval.setY(stop);
}
