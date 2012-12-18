#ifndef QCAMERAEVENT_H
#define QCAMERAEVENT_H

#include <QEvent>

class QCameraEvent : public QEvent
{
public:
    typedef enum __CameraEventType {
        CameraVideoRecognize = User,
        CameraFileRecognize
    } CameraEventType;

public:
    explicit QCameraEvent( Type evtType );
    
};

#endif // QCAMERAEVENT_H
