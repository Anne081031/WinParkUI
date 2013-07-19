#include "qdigitalcamerathread.h"

//网络摄像机线程，完成图片抓取，视频流截取

QDigitalCameraThread::QDigitalCameraThread(QObject *parent) :
    QThread(parent)
{
}

