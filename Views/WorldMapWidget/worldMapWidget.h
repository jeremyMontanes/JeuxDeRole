#ifndef WORLDMAPWIDGET_H
#define WORLDMAPWIDGET_H

#include <QWidget>
#include <QVBoxLayout>

class WorldMapWidget : public QWidget
{
    Q_OBJECT

private:

    QVBoxLayout *m_pLayoutWorldMapWidget;

public:
    explicit WorldMapWidget(QWidget *parent = 0);

signals:

public slots:
};

#endif // WORLDMAPWIDGET_H
