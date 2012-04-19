#include "wintone.h"

#define ASSERT_VEHICLE( FunName ) qDebug( ) << FunName << " " << ( bRet ? "Success" : "Failed" ) << endl
#define OUTPUT_STRING( strInfo ) qDebug( ) << strInfo << endl;

CWinTone::CWinTone( )
{
    SetKeyName( lstKeys );
    SetDefault( lstDefault );
    GetParameters( );

    OUTPUT_STRING( "CWinTone::CWinTone( )" );
}

CWinTone::~CWinTone( )
{
}

void CWinTone::SetDefault( QStringList& lstData )
{
    lstData << "80"
            << "400"
            << "川"
            << "1"
            << "7"
            << "5"
            << "5"
            << "1"
            << "1"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "0"
            << "25"
            << "2"
            << "80"
            << "150"
            << "0"
            << "703"
            << "0"
            << "575"
            << "1"
            << "0"
            << "0"
            << "1"
            << "1"
            << "1"
            << "1";

    OUTPUT_STRING( "CWinTone::SetDefault( )" );
}

void CWinTone::SetKeyName(QStringList &lstKey)
{
    lstKey << "PlateMin"
           << "PlateMax"
           << "PlateProvince"
           << "PlateMaxOutput"
           << "PlateVideoPosThreshold"
           << "PlateVideoRegThreshold"
           << "PlateImagePosThreshold"
           << "PlateImageRegThreshold"
           << "PlateOnlyOnceOutput"
           << "PlateInterleaveSample"
           << "PlateInputEntranceImage"
           << "PlateRegDualYellowCard"
           << "PlateRegIndividuationCard"
           << "PlateRegMilitaryCard"
           << "PlateRegDualMilitaryCard"
           << "PlateRegFarmCard"
           << "PlateNightMode"
           << "PlateAreaLeft"
           << "PlateAreaRight"
           << "PlateAreaUp"
           << "PlateAreaDown"
           << "PlateDetectionDelay"
           << "PlateFrameRate"
           << "PlateGrade"
           << "PlateConfidence"
           << "PlateRecognizationTime"
           << "PlateDetectionLeft"
           << "PlateDetectionRight"
           << "PlateDetectionUp"
           << "PlateDetectionDown"
           << "PlateStart"
           << "PlateBlacklist"
           << "PlatePrecision"
           << "PlateLeft"
           << "PlateRight"
           << "PlateUp"
           << "PlateDown";

    OUTPUT_STRING( "CWinTone::SetKeyName( )" );
}

void CWinTone::GetParameters( )
{
    QString strSect = QString( "WintonePlate/WintonePlate%1/%2" );
    QString strWay[ ] = { "CameraDirection/OneWay", "CameraDirection/TwoWay",
                          "CameraDirection/ThreeWay", "CameraDirection/FourWay" };

    for ( int nIndex = 0; nIndex < PLATE_WAY; nIndex++ ) {
        QString strIndex = QString::number( nIndex );

        for ( int nItem = 0; nItem < lstKeys.count( ); nItem++ ) {
            QString& strKey = lstKeys[ nItem ];
            QString strVaule = pSettings->value( strSect.arg( strIndex, strKey ), lstDefault[nItem ] ).toString( );
            mapParameters[ nIndex ].insert( strKey, strVaule );

            if ( 32 < nItem && "0" != strVaule ) {
                vecDirection[ nIndex ].append( nItem - 32 );
            }
            qDebug( ) << strIndex << " : " << strSect.arg( strIndex, strKey ) << " = " << strVaule << endl;
        }

        //if ( 0 >= vecDirection[ nIndex ].count( ) ) {
        //   vecDirection[ nIndex ].append( 0 ); // Don't refer direction
        //}

        nCameraDirection[ nIndex ] = pSettings->value( strWay[ nIndex ], 0 ).toInt( );
    }

    OUTPUT_STRING( "CWinTone::GetParameters( )" );
}

bool CWinTone::Initialize( uint nChannel )
{
    bool bRet  = false;
    bRet = LPR_InitEx( ++nChannel );
    ASSERT_VEHICLE( "LPR_InitEx" );
    QStringList lstParam;
    lstParam << QString::number( --nChannel );
    bRet = RecognizedPlateType( lstParam );

    OUTPUT_STRING( "CWinTone::Initialize( )" );
    return bRet;
}

bool CWinTone::Uninitialize( uint nChannel )
{
    bool bRet = true;
    LPR_UninitEx( ++nChannel );
    OUTPUT_STRING( "CWinTone::Uninitialize( )" );
    return bRet;
}

bool CWinTone::RecognizedPlateType( QStringList& lstType )
{
    bool bRet = false;
    if ( 1 != lstType.count( ) ) {
        return bRet;
    }

    int nChannel   = lstType[ 0 ].toInt( );
    BOOL bYellow   = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 11 ] ).toInt( ) );
    BOOL bIndivi   = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 12 ] ).toInt( ) );
    BOOL bArmPol   = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 13 ] ).toInt( ) );
    BOOL bArmy2    = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 14 ] ).toInt( ) );
    BOOL bTractor  = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 15 ] ).toInt( ) );

    bRet = LPR_SetPlateType( bYellow, bIndivi, bArmPol, bArmy2, bTractor, ++nChannel );
    ASSERT_VEHICLE( "LPR_SetPlateType" );
    OUTPUT_STRING( "CWinTone::RecognizedPlateType( )" );

    return bRet;
}

bool CWinTone::RecognizedImageFormat( QStringList& lstFormat /* ImageFormat, Channel */ )
{
    bool bRet = false;

    if ( 2 != lstFormat.count( ) ) {
        return bRet;
    }

    //QString strSect = "RecognizeMode/%1";
    //int nMode = pSettings->value( strSect.arg( "Current" ), 0 ).toInt( );
    BOOL bMoving = FALSE;//( 1 == nMode ) ? TRUE : FALSE;
    bRegVideo = bMoving;
    BOOL bFlip = FALSE;

    int nColor = lstFormat[ 0 ].toInt( );  //ImageFormatRGB
    BOOL bCompress = FALSE;

    int nChannel   = lstFormat[ 1 ].toInt( );
    int nMinWidth = mapParameters[ nChannel ].value( lstKeys[ 0 ] ).toInt( );
    int nMaxWidth = mapParameters[ nChannel ].value( lstKeys[ 1 ] ).toInt( );

    BOOL bAlign = TRUE;

    BOOL bInput  = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 10 ] ).toInt( ) );
    BOOL bOutput = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 8 ] ).toInt( ) );

    bRet = LPR_SetImageFormat( bMoving, bFlip, nColor, bCompress, nMinWidth,
                               nMaxWidth, bAlign, bInput, bOutput, ++nChannel );
    //bRet = LPR_SetImageFormat(TRUE,TRUE,ImageFormatBGR,TRUE,80,400,TRUE,FALSE,TRUE,1);
    ASSERT_VEHICLE( "LPR_SetImageFormat" );
    OUTPUT_STRING( "CWinTone::RecognizedImageFormat( )" );

    return bRet;
}

bool CWinTone::RecognizedSpecialParameters( QStringList& lstParam )
{
    bool bRet = false;

    if ( 1 != lstParam.count( ) ) {
        return bRet;
    }

    int nChannel   = lstParam[ 0 ].toInt( );
    BOOL bNight         = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 16 ] ).toInt( ) );
    int nPlateThr       = ( 1 == mapParameters[ nChannel ].value( lstKeys[ bRegVideo ? 4 : 6 ] ).toInt( ) );
    int nRecogThr       = ( 1 == mapParameters[ nChannel ].value( lstKeys[ bRegVideo ? 5 : 7 ] ).toInt( ) );
    int nPlatesNum      = ( 1 == mapParameters[ nChannel ].value( lstKeys[ 3 ] ).toInt( ) );
    QString strProvince = mapParameters[ nChannel ].value( lstKeys[ 2 ] );
    LPSTR pProvince     = strProvince.toUtf8( ).data( );

    bRet = LPR_SetSpecialParameters( bNight, nPlateThr, nRecogThr, nPlatesNum,
                                     pProvince, ++nChannel );
    ASSERT_VEHICLE( "LPR_SetSpecialParameters" );
    OUTPUT_STRING( "CWinTone::RecognizedSpecialParameters( )" );

    return bRet;
}

bool CWinTone::RecognizeFile( QString& strFilePath, TH_PlateResult* pResult, int& nPlateNumber, int nChannel )
{
    // BMP JPG TIF Format
    bool bRet = false;
    TH_RECT rect = { 0 };
    rect.left = mapParameters[ nChannel ].value( lstKeys[ 17 ] ).toInt( );
    rect.top = mapParameters[ nChannel ].value( lstKeys[ 19 ] ).toInt( );
    rect.right = mapParameters[ nChannel ].value( lstKeys[ 18 ] ).toInt( );
    rect.bottom = mapParameters[ nChannel ].value( lstKeys[ 20 ] ).toInt( );

    nPlateNumber =  0;

    QByteArray byFile = pCodec->fromUnicode( strFilePath );
    char* pFile = byFile.data( );
    QString strPlatePath = "";
    CCommonFunction::GetPath( strPlatePath, CommonDataType::PathPlate );
    QByteArray byPath = pCodec->fromUnicode( strPlatePath );
    char* pPath = byPath.data( );

    bRet = LPR_FileEx( pFile, pPath, pResult, nPlateNumber, &rect, ++nChannel );
    ASSERT_VEHICLE( "LPR_FileEx" );
    OUTPUT_STRING( "CWinTone::RecognizeFile( )" );

    return bRet;
}

bool CWinTone::RecognizeVideo( quint8* pImgData, int nWidth, int nHeight,
                               TH_PlateResult* pResult, int& nPlateNumber, int nChannel )
{
    bool bRet = false;

    if ( NULL == pImgData || bStoping ) {
        return bRet;
    }

    TH_RECT rect = { 0 };
    rect.left = mapParameters[ nChannel ].value( lstKeys[ 17 ] ).toInt( );
    rect.top = mapParameters[ nChannel ].value( lstKeys[ 19 ] ).toInt( );
    rect.right = mapParameters[ nChannel ].value( lstKeys[ 18 ] ).toInt( );
    rect.bottom = mapParameters[ nChannel ].value( lstKeys[ 20 ] ).toInt( );

    // 没有加密狗崩溃
    bRet = LPR_RGB888Ex( pImgData, nWidth, nHeight, pResult, nPlateNumber, &rect, ++nChannel );
    ASSERT_VEHICLE( "LPR_RGB888Ex" );
    bRet = PlateFilter( pResult, nPlateNumber, --nChannel );
    ASSERT_VEHICLE( "PlateFilter" );
    OUTPUT_STRING( "CWinTone::RecognizeVideo( )" );

    return bRet;
}

int CWinTone::CalculateDirection( TH_RECT& recDirect, int& nChannel )
{
    static int nFirst[ PLATE_WAY ] = { 0 };
    int nDelta = 0;

    qDebug( ) << "nFirst[ nChannel ]1 : " << QString::number( nFirst[ nChannel ] ) << endl;
    switch ( nCameraDirection[ nChannel ] ) {
    case DIRECTION_LEFT :
    case DIRECTION_RIGHT :
        nDelta = recDirect.left - nFirst[ nChannel ];
        nFirst[ nChannel ] = recDirect.left;

        nDelta = ( nDelta < 0 ) ? DIRECTION_LEFT : DIRECTION_RIGHT;
        break;

    case DIRECTION_UP :
    case DIRECTION_DOWN :
        nDelta = recDirect.top - nFirst[ nChannel ];
        nFirst[ nChannel ] = recDirect.top;

        nDelta = ( nDelta < 0 ) ? DIRECTION_UP : DIRECTION_DOWN;
        break;
    }

    qDebug( ) << "nFirst[ nChannel ]2 : " << QString::number( nFirst[ nChannel ] ) << endl;

    return nDelta;
}

bool CWinTone::PlateFilter( TH_PlateResult *pResult, int &nResult, int nChannel )
{
    bool bRet = false;

    if ( NULL == pResult ) {
        return bRet;
    }

    const int nConfidence = mapParameters[ nChannel ].value( lstKeys[ 24 ] ).toInt( );
    const int nTime = mapParameters[ nChannel ].value( lstKeys[ 25 ] ).toInt( );
    //bool bDirection =  ( 0 !=  vecDirection[ nChannel ].count( ) );

    for ( int nIndex = 0; nIndex < nResult; nIndex++ ) {
        //pResult[ nIndex ].nDirection = CalculateDirection( pResult[ nIndex ].rcLocation, nChannel );
        if ( nConfidence <= pResult[ nIndex ].nConfidence &&
             ( 0 == nTime || nTime >= pResult[ nIndex ].nTime ) ) {
            //if ( bDirection && !vecDirection[ nChannel ].contains( pResult[ nIndex ].nDirection ) ) {
             //   continue;
            //}

            strcpy( pResult[ 0 ].license, pResult[ nIndex ].license );
            pResult[ 0 ].nConfidence = pResult[ nIndex ].nConfidence;
            pResult[ 0 ].nTime = pResult[ nIndex ].nTime;
            //qDebug( ) << "Plate Direction : " << pResult[ 0 ].nDirection;
            bRet = true;
            nResult = 1;
            break;
        }
    }

    OUTPUT_STRING( "CWinTone::PlateFilter( )" );

    return bRet;
}

bool CWinTone::GetPlateImgData( quint8*& pImgData, int& nWidth, int& nHeight,
                                int& nSize, int nChannel )
{
    bool bRet = LPR_GetImageBuf( pImgData, nWidth, nHeight, nSize, ++nChannel );
    OUTPUT_STRING( "CWinTone::GetPlateImgData( )" );

    return bRet;
}

void CWinTone::GetPlateType( QString& strType, int nType )
{
    strType= "";

    switch ( nType ) {
    case LT_UNKNOWN :
        strType = "未知车牌";
        break;

    case LT_BLUE :
        strType = "蓝牌小汽车";
        break;

    case LT_BLACK :
        strType = "黑牌小汽车";
        break;

    case LT_YELLOW :
        strType = "单排黄牌";
        break;

    case LT_YELLOW2 :
        strType = "双排黄牌（大车尾牌，农用车）";
        break;

    case LT_POLICE :
        strType = "警车车牌";
        break;

    case LT_ARMPOL :
        strType = "武警车牌";
        break;

    case LT_INDIVI :
        strType = "个性化车牌";
        break;

    case LT_ARMY :
        strType = "单排军车牌";
        break;

    case LT_ARMY2 :
        strType = "双排军车牌";
        break;

    case LT_EMBASSY :
        strType = "使馆车牌";
        break;

    case LT_HONGKONG :
        strType = "香港车牌";
        break;

    case LT_TRACTOR :
        strType = "农用车牌";
        break;
    }
}

void CWinTone::GetPlateMoveDirection( QString& strDirection, int nDirection )
{
    strDirection = "";

    switch ( nDirection ) {
    case DIRECTION_LEFT :
        strDirection = "左";
        break;

    case DIRECTION_RIGHT :
        strDirection = "右";
        break;

    case DIRECTION_UP :
        strDirection = "上";
        break;

    case DIRECTION_DOWN :
        strDirection = "下";
        break;
    default :
        strDirection = "无";
        break;
    }
}

void CWinTone::GetVehicleColor( QString& strColor, int nColor )
{
    strColor = "";

    switch ( nColor ) {
    case LCOLOUR_WHITE :
        strColor = "白";
        break;

    case LCOLOUR_SILVER :
        strColor = "灰(银)";
        break;

    case LCOLOUR_YELLOW :
        strColor = "黄";
        break;

    case LCOLOUR_PINK :
        strColor = "粉";
        break;

    case LCOLOUR_RED :
        strColor = "红";
        break;

    case LCOLOUR_GREEN :
        strColor = "绿";
        break;

    case LCOLOUR_BLUE :
        strColor = "蓝";
        break;

    case LCOLOUR_BROWN :
        strColor = "棕";
        break;

    case LCOLOUR_BLACK :
        strColor = "黑";
        break;
    }
}
