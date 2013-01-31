#include "Header/mylabel.h"
#include <QDebug>

CMyLabel::CMyLabel( int nIndexFps, const QRect& rect, bool bIPC, QWidget *parent) :
    QLabel(parent)
{
    bIPCVideo = bIPC;
    bSwitch = true;
    recRawSize = rect;
    pMulti = NULL;
    hChannel = INVALID_HANDLE;
    nIndex = nIndexFps;

    pParent = qobject_cast< QWidget* >( parent );

    setFrameShape( Panel );
    setFrameShadow( Sunken );
    setLineWidth( 4 );

    recWholeSize = QRect( 48, 203, 871, 659 );

    QString strStyle = "background-image:url(none);\r\nbackground-color: rgb(255, 255, 255);";
    setStyleSheet( strStyle );
    setScaledContents( true );
    setGeometry( rect );
}

void CMyLabel::SetParams( HANDLE hChannelHk, CMultimedia* pMultiHk )
{
    hChannel = hChannelHk;
    pMulti = pMultiHk;
}

void CMyLabel::mouseDoubleClickEvent( QMouseEvent * )
{
    if ( !bIPCVideo && ( INVALID_HANDLE == hChannel || NULL == pMulti ) ) {
        return;
    }

    emit HideCtrl( nIndex, !bSwitch );

    HWND hVidWnd = winId( );

    if ( bSwitch ) {
        BOOL bRet = ::BringWindowToTop( hVidWnd );
        bRet = FALSE;
    }

    QRect rec = bSwitch ? recWholeSize : recRawSize;
    setGeometry( rec );

    rec.setX( 0 ); // Video Area in the whole client area.
    rec.setY( 0 );
    if ( !bSwitch ) {
        rec.setWidth( recRawSize.width( ) );
        rec.setHeight( recRawSize.height( ) );
    }

    if ( !bIPCVideo ) {
        pMulti->StopVideo( hChannel );
        pMulti->PlayVideo( hChannel, hVidWnd, rec, nIndex );
    }

    bSwitch = !bSwitch;
}
