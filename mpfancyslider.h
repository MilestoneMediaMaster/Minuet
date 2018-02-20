#ifndef MPFANCYSLIDER_H
#define MPFANCYSLIDER_H

#include <math.h>
#include <QObject>
#include <QWidget>
#include <QSlider>
#include <QPainter>
#include <QMouseEvent>

class MPFancySlider : public QSlider
{
    Q_OBJECT
public:
    MPFancySlider(QWidget *parent = NULL);

private:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    bool _dragging = false;
    int half_height;
};

#endif // MPFANCYSLIDER_H
