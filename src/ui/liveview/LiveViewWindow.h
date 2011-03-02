#ifndef LIVEVIEWWINDOW_H
#define LIVEVIEWWINDOW_H

#include <QWidget>
#include "core/DVRCamera.h"

class LiveViewArea;
class QComboBox;

class LiveViewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LiveViewWindow(QWidget *parent = 0);

    static LiveViewWindow *openWindow(QWidget *parent, const DVRCamera &camera = DVRCamera());

    LiveViewArea *view() const { return m_liveView; }

public slots:
    void showSingleCamera(const DVRCamera &camera);
    void saveLayout();

private slots:
    void savedLayoutChanged(int index);
    void showLayoutMenu(const QPoint &pos, int index = -1);

private:
    LiveViewArea * const m_liveView;
    QComboBox * const m_savedLayouts;
    int m_lastLayoutIndex;
};

#endif // LIVEVIEWWINDOW_H