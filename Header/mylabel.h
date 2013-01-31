#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include <QRect>
#include "Multimedia/multimedia.h"

class CMyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit CMyLabel( int nIndexFps, const QRect& rect, bool bIPC, QWidget *parent = 0 );

    void SetParams( HANDLE hChannelHk, CMultimedia* pMultiHk );

protected:
     void  mouseDoubleClickEvent ( QMouseEvent *  );

private:
     bool bSwitch;
     QRect recRawSize;
     QRect recWholeSize;
     QWidget* pParent;
     HANDLE hChannel;
     CMultimedia* pMulti;
     bool bIPCVideo;
     int nIndex;

signals:
     void HideCtrl( int nIndex, bool bVisible );

public slots:

};

#endif // MYLABEL_H
