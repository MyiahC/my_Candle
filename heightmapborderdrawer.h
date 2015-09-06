// This file is a part of "grblControl" application.
// Copyright 2015 Hayrullin Denis Ravilevich

#ifndef HEIGHTMAPBORDERDRAWER_H
#define HEIGHTMAPBORDERDRAWER_H

#include <QObject>
#include "gldrawable.h"

class HeightMapBorderDrawer : public GLDrawable
{
    Q_OBJECT
public:
    HeightMapBorderDrawer(QObject *parent = 0);
    void draw();

    QRectF borderRect() const;
    void setBorderRect(const QRectF &borderRect);

    int getLinesCount();

private:
    QRectF m_borderRect;
};

#endif // HEIGHTMAPBORDERDRAWER_H