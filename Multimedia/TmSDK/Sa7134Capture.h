#ifndef VC404_CAPTURE_SAA7134
#define VC404_CAPTURE_SAA7134

#ifdef SAA7134CAPTURE_EXPORTS
#define SAA7134CAPTURE_API __declspec(dllexport)
#else
#define SAA7134CAPTURE_API __declspec(dllimport)
#endif

static const ULONG BrightnessDefault = 0x80;
static const ULONG ContrastDefault   = 0x46;//0x44;
static const ULONG SaturationDefault = 0x44;//0x3C;
static const ULONG HueDefault        = 0x00;
static const ULONG SharpnessDefault  = 0x01;

#define MIN_VAMP_BRIGHTNESS_UNITS    0
#define MAX_VAMP_BRIGHTNESS_UNITS  255

#define MIN_VAMP_CONTRAST_UNITS   -128 
#define MAX_VAMP_CONTRAST_UNITS    127 

#define MIN_VAMP_HUE_UNITS        -128
#define MAX_VAMP_HUE_UNITS         127

#define MIN_VAMP_SATURATION_UNITS -128 
#define MAX_VAMP_SATURATION_UNITS  127

#define MIN_VAMP_SHARPNESS_UNITS    -8
#define MAX_VAMP_SHARPNESS_UNITS     7

///////////////////////////////////////////////////////////
//ע�⣺VCö������Ϊ32λ��4�ֽڣ������ö������Ϊ4�ֽڡ�
//      C++ builderö������Ϊ8λ��1�ֽڣ�Ҫ�ض��壬���磺
//typedef int COLORCONTROL;
//COLORCONTROL BRIGHTNESS  = 0;
//COLORCONTROL CONTRAST    = 1;
//COLORCONTROL SATURATION  = 2;
//COLORCONTROL HUE		   = 3;
//COLORCONTROL SHARPNESS   = 4;

//��������VC��enum��ULONG��LONG��BOOL��DWORD ��Ϊ32λ��4�ֽڣ�
//����ʹ�õ���VC�����׼��
/////////////////////////////////////////////////////////////

typedef enum {		            //@enum Decoder control types
    BRIGHTNESS = 0,                 //@emem control for brightness
    CONTRAST   = 1,                   //@emem control for contrast
    SATURATION = 2,                 //@emem control for saturation
    HUE		   = 3,                        //@emem control for hue
    SHARPNESS  = 4                  //@emem control for sharpness
}COLORCONTROL;

typedef enum {		            //@enum Decoder control types
       XVID_CBR_MODE = 0,
	   XVID_VBR_MODE = 1//,
}COMPRESSMODE;

typedef enum{               
    COLOR_DECODER = 0, //������(������ƵԤ������Ƶ����)
    COLOR_PREVIEW = 1, //��ƵԤ��          
    COLOR_CAPTURE = 2  //��Ƶ����   
}COLORDEVICETYPE;


typedef enum{
    VID_CAPTURE_EVENT   = 0,
	AUD_CAPTURE_EVENT1  = 1,
	AUD_CAPTURE_EVENT2  = 2,
	IO_ALERT_EVENT		= 3,
	MOTION_DETECT		= 4,
	VID_PREVIEW_EVENT	= 5
}EVENTTYPE;

typedef enum enColorFormat
{
    UYVY    = 0,                //@emem BO_1234 - YUV422        
    YUY2    = 1,                //@emem BO_2143 - YUV422 
    Y41P    = 2,                //@emem BO_1234 - YUV411
    Y8      = 3,                //@emem BO_1234 - Y8
    YV12    = 4,                //@emem BO_1234 - YUV420 planar
    YU12    = 5,                //@emem BO_1234 - YVU420 planar
    YVU9    = 6,                //@emem BO_1234 - YUV9(indeo) planar
    RGB565  = 7,                //@emem BO_1234 - RGB565 
    RGB888  = 8,                //@emem BO_1234 - RGB24
    RGB888a = 9,                //@emem BO_1234 - aRGB32  
    RGBa555 = 10,               //@emem BO_1234 - RGBa555 
    RGB55a5 = 11                //@emem BO_1234 - RGB55a5  
} COLOR_FORMAT;

typedef enum
{
	CAP_NULL_STREAM		= 0,	//������Ч
	CAP_ORIGIN_STREAM	= 1,	/*ԭʼ���ص�*/
	CAP_MPEG4_STREAM	= 2,	/*Mpeg4��*/
	CAP_MPEG4_XVID_STREAM	= 3,
	CAP_ORIGIN_MPEG4_STREAM	= 4,
	CAP_ORIGIN_XVID_STREAM	= 5,	
	CAP_WMV9_STREAM	= 6,
	CAP_ORIGIN_WMV9_STREAM	= 7	
}CAPMODEL;

typedef enum
{
	MPEG4_AVIFILE_ONLY = 0,			//��ΪMPEG�ļ�
	MPEG4_CALLBACK_ONLY = 1,		//MPEG���ݻص�
	MPEG4_AVIFILE_CALLBACK = 2		//��ΪMPEG�ļ����ص�
}MP4MODEL;

typedef enum  
{          //@enum Field frequency
    FIELD_FREQ_50HZ = 0,        //@emem source is 50 Hz (PAL)
    FIELD_FREQ_60HZ = 1,        //@emem source is 60 Hz (NTSC)
    FIELD_FREQ_0HZ  = 2,         //@emem source is 0 Hz   (NO SIGNL)
	FIELD_FREQ_50HZ_NULL = 3,
	FIELD_FREQ_60HZ_NULL = 4
}eFieldFrequency;

typedef enum 
{			        //��ƽ�ȼ�
    HIGH_VOLTAGE = 0,			//�ߵ�ƽ
    LOW_VOLTAGE = 1				//�͵�ƽ
}eVOLTAGELEVEL;

typedef enum
{		          
    NOT_DISPLAY = 0,          
    PCI_VIEDOMEMORY   = 1,              //VGA��OVERLAY��ʾģʽ  
    PCI_MEMORY_VIDEOMEMORY = 2,         //PCI_E��OVERLAY��ʾģʽ
	PCI_OFFSCREEN_VIDEOMEMORY = 3       //OFFSCREEN������ʾģʽ
}DISPLAYTRANSTYPE;

typedef enum
{
	VideoStandard_None = 0x00000000,
	VideoStandard_NTSC_M = 0x00000001, 
	VideoStandard_NTSC_M_J = 0x00000002, 
	VideoStandard_NTSC_433 = 0x00000004,
	VideoStandard_PAL_B = 0x00000010,
	VideoStandard_PAL_D = 0x00000020,
	VideoStandard_PAL_H = 0x00000080,
	VideoStandard_PAL_I = 0x00000100,
	VideoStandard_PAL_M = 0x00000200,
	VideoStandard_PAL_N = 0x00000400,
	VideoStandard_PAL_60 = 0x00000800,
	VideoStandard_SECAM_B = 0x00001000,
	VideoStandard_SECAM_D = 0x00002000,
	VideoStandard_SECAM_G = 0x00004000,
	VideoStandard_SECAM_H = 0x00008000,
	VideoStandard_SECAM_K = 0x00010000,
	VideoStandard_SECAM_K1 = 0x00020000,
	VideoStandard_SECAM_L = 0x00040000,
	VideoStandard_SECAM_L1 = 0x00080000,
}
VideoStandard;

typedef struct
{
	LONG		cfHeight;		//�ַ��߶�
	LONG		cfWidth;		//�ַ����
	LONG		cfWeight;		//�ַ���ϸ
	LONG		cfSpacing;		//�ַ����
	BOOL		cfItalic;		//б��
	BOOL		cfUnderline;	//�»���
	BOOL		cfStrikeOut;	//ɾ����
	BOOL		bTransparent;   //͸��
	COLORREF	cfBkColor;		//����ɫ 
	COLORREF	cfTextColor;	//ǰ��ɫ
	TCHAR		cfFaceName[32];	//������

}OSDPARAM;

//error define area

#define		ERR_SUCCESS					0			//no error,success
#define		ERR_NODEVICEFOUND			1			//no device found in system
#define		ERR_UNSUPPORTFUNC			2			//unsupport func tempro?
#define		ERR_ALLOCRESOURCE			3			//alloc resource error
#define		ERR_INITDIRECTDRAW			4			//Init Directdraw error
#define		ERR_INITDIRECTSOUND			5			//Init Directdraw error
#define		ERR_NOT_10MOONSDEV			6			//it is not device of 10Moons 

/////////////////////////////////////////////////////////////////////////////////////////////////
//VC4000/VC8000/VC404P���к���
/////////////////////////////////////////////////////////////////////////////////////////////////

//��̬���ص���
//���VCAEnableMotionDetect ����nPersistTime = ��1;��ص��˶�����ͼ��ȡ������ʼ��ֹͣ���ص���bMove����Ч��
//���VCAEnableMotionDetect ����nPersistTime != ��1;��ص���ʼ��ֹͣ�˶����;ȡ���ص��˶�����ͼ��pbuff��dwSize����Ч��
typedef void (CALLBACK *PrcCbMotionDetect)( DWORD dwCard, BOOL bMove, BYTE *pbuff, DWORD dwSize, LPVOID lpContext );
//��Ƶ����ԭʼ���ݻص�
typedef void (CALLBACK *PrcVidCapCallBack)( DWORD dwCard, BYTE *pbuff, DWORD dwSize );
//��Ƶѹ�����ݻص�
typedef void (CALLBACK *PrcVidMpegCallBack)( DWORD dwCard, BYTE *pbuff, DWORD dwSize, BOOL isKeyFrm );
//��Ƶ����ԭʼ���ݻص�
//��Ƶ��ԭʼ��С16 Bit PCM��ʽ,8080 BYTE,2������32000Hz
typedef void (CALLBACK *PrcAudCapCallBack)( DWORD dwCard, BYTE *pbuff,DWORD dwSize );
//��ƵMPEGѹ�����ݻص�
typedef void (CALLBACK *PrcAudMpegCallBack)( DWORD dwCard, BYTE *pbuff,DWORD dwSize );
//IO�����ص�
typedef void (CALLBACK *PrcIoAlertCallBack)( DWORD dwCard );
//��ƵMpeg����ص� ,pPorcess ����ΪTRUE ��ʾ��ǰ֡ѹ��������ΪFALSE ��ʾ������ǰ֡
typedef void (CALLBACK *PrcVidMpegPorCallBack)( DWORD dwCard, BOOL* pPorcess );
//��ƵMpeg����ص�,pPorcess ����ΪTRUE ��ʾ����Ƶ��ѹ��������ΪFALSE ��ʾ������ǰ��Ƶ����
typedef void (CALLBACK *PrcAudMpegPorCallBack)( DWORD dwCard, BOOL* pPorcess );
//��ƵԤ�������Դ�����Ļص�
typedef void (CALLBACK *PrcVidPreViewCallBack)(DWORD dwCard, BYTE *pbuff, DWORD dwMemWidth, DWORD dwWidth, DWORD dwHeight);
//ע����Ƶ����ԭʼ���ݻص�
BOOL  WINAPI VCARegVidCapCallBack( DWORD dwCard, PrcVidCapCallBack ppCall );
//ע����Ƶѹ�����ݻص�
BOOL  WINAPI VCARegVidMpegCallBack( DWORD dwCard, PrcVidMpegCallBack ppCall );
//ע����ƵԤ�����ص�
BOOL  WINAPI VCARegVidPreViewCallBack(DWORD dwCard, PrcVidPreViewCallBack ppCall);
//���ô������
void  WINAPI VCASetLastError( DWORD dwError );
//�õ��������
DWORD WINAPI VCAGetLastError();
//��ʼ��SDK,hWndMain:overlay���ھ����overlay���ھ��ǰ�����·��ʾС���ڵĴ󴰿ڡ�overlay���ڱ�����һ������·��ʾС���ڱ�����������ڲ���
//bInitVidDev:�Ƿ��ʼ����Ƶ�豸����Ԥ��������Ƶ����ʾ��ֻ����Ƶ¼�����Ƶ����ʱ��������ΪFALSE.
//bInitAudDev:�Ƿ��ʼ����Ƶ�豸�����������ţ�������Ƶ����Ҫ���ţ�ֻ����Ƶ¼�����Ƶ����ʱ����û�а�װ��������������ΪFALSE.
BOOL  WINAPI VCAInitSdk( HWND hWndMain, DISPLAYTRANSTYPE eDispTransType = PCI_VIEDOMEMORY, BOOL bInitAudDev = FALSE  );
//�ͷ�SDK��Դ
void  WINAPI VCAUnInitSdk();
//�õ��豸����
LONG  WINAPI VCAGetDevNum();
//���豸,hPreviewWndΪ��ƵԤ�����ڵľ�����ô��ڱ���ɫ�û���������ΪRGB(255,0,255)
BOOL  WINAPI VCAOpenDevice( DWORD dwCard,HWND hPreviewWnd );
//�ر��豸
BOOL  WINAPI VCACloseDevice( DWORD dwCard );
//��ʼ��ƵԤ��
BOOL  WINAPI VCAStartVideoPreview( DWORD dwCard );
//ֹͣ��ƵԤ��
BOOL  WINAPI VCAStopVideoPreview( DWORD dwCard );
//������ƵԤ��������ı�����ʾ����ʱ�����á�
BOOL  WINAPI VCAUpdateVideoPreview( DWORD dwCard, HWND hPreviewWnd );
//����overlay���ڣ���overlay���ھ���ı��ߴ磬λ�øı�ʱ���ã�overlay���ھ��ǰ�����·��ʾС���ڵĴ󴰿ڡ�overlay���ڱ�����һ������·��ʾС���ڱ�����������ڲ���
BOOL  WINAPI VCAUpdateOverlayWnd(HWND hOverlayWnd);
//������ƵԤ���ߴ�, dwWidth��dwHeight���Ϊ2�ı�����
BOOL  WINAPI VCASetVidPreviewSize( DWORD dwCard, DWORD dwWidth, DWORD dwHeight );
//�õ���ƵԤ���ߴ�
BOOL  WINAPI VCAGetVidPreviewSize( DWORD dwCard, DWORD &dwWidth, DWORD &dwHeight );
//�ü�Ԥ�����ı�,ֻ��OFFSCREEN������ʾģʽ��Ч
BOOL  WINAPI VCAClipVidPreview(DWORD dwCard, int nLeft, int nTop, int nRight, int nBottom);
BOOL  WINAPI VCAStartVideoPreviewEx( DWORD dwCard, HWND hPreviewWnd);


//����������ݵ���Ӧ�Ļ�����
BOOL  WINAPI VCASaveBitsToBuf( DWORD dwCard, PVOID pDestBuf, DWORD& dwWidth, DWORD& dwHeight );
//�������ΪJPEG�ļ�
BOOL  WINAPI VCASaveAsJpegFile( DWORD dwCard, LPCTSTR lpFileName, DWORD dwQuality = 100 );
//�������ΪBMP�ļ�
BOOL  WINAPI VCASaveAsBmpFile( DWORD dwCard, LPCTSTR lpFileName );
//��ʼ��Ƶ����
BOOL  WINAPI VCAStartVideoCapture( DWORD		dwCard,
								   CAPMODEL	    enCapMode,
								   MP4MODEL		enMp4Mode,
								   LPCTSTR		lpFileName );
//ֹͣ��Ƶ����
BOOL  WINAPI VCAStopVideoCapture( DWORD dwCard );
//������Ƶ����ߴ�, dwWidth��dwHeight���Ϊ16�ı��������򣬶�̬���Ϊ16*16һ�����С�飬��⽫�᲻׼ȷ��
BOOL  WINAPI VCASetVidCapSize( DWORD dwCard, DWORD dwWidth, DWORD dwHeight );
//�õ���Ƶ����ߴ�
BOOL  WINAPI VCAGetVidCapSize( DWORD dwCard, DWORD &dwWidth, DWORD &dwHeight );
//���ò���������ɫ��ʽ,����VCAOpenDevice֮ǰ����
BOOL WINAPI VCASetVidCapColorFormat(DWORD dwCard, COLOR_FORMAT cfColor);

/*������Ƶ����֡�ʣ�bFrameRateReduction����Ϊ����������	
	PAL��ʾ֡����ʾ֡��ʼ��Ϊ25��NTSC��ʾ֡��ʼ��Ϊ30
	PAL����֡�����Ϊ25��NTSC����֡�����Ϊ30*/	
BOOL  WINAPI VCASetVidCapFrameRate( DWORD dwCard, DWORD dwFrameRate, BOOL bFrameRateReduction = FALSE );

//����MPEGѹ����λ��,��Χ:56bps ~ 10Mbps; ��λKbps
BOOL  WINAPI VCASetBitRate( DWORD dwCard, DWORD dwBitRate);
//����MPEGѹ���Ĺؼ�֡�����������ڵ���֡��
BOOL  WINAPI VCASetKeyFrmInterval( DWORD dwCard, DWORD dwKeyFrmInterval);
//����MPEG4_XVIDѹ�������� dwQuantizer: 1 ~ 31 (1Ϊ��С���ȣ�ѹ���������); dwMotionPrecision: 0 ~ 6 (0��С�˶�����)
BOOL  WINAPI VCASetXVIDQuality( DWORD dwCard, DWORD dwQuantizer, DWORD dwMotionPrecision);
//����MPEG4_XVIDѹ��ģʽ
BOOL  WINAPI VCASetXVIDCompressMode( DWORD dwCard, COMPRESSMODE enCompessMode );

//���ö�̬��⣬��Ƶ����ֹͣʱ������Ч��VCASetVidCapSize �����ò��� dwWidth��dwHeight���Ϊ16�ı��������򣬶�̬�����16*16һ�����С�飬��⽫�᲻׼ȷ��
BOOL  WINAPI VCAEnableMotionDetect( DWORD			  dwCard,				   
								    BOOL			  bEnaDetect,		  //�Ƿ�����̬���
								    BYTE			  *pAreaMap,          //�˶�����ͼ
								    LONG			  nSizeOfMap,		  //pAreaMap�ߴ�,��BYTEΪ��λ
								    LONG			  nPersistTime,       //�������nPersistTime�벻������Ϊֹͣ 1-30s ,���nPersistTime = ��1;��ص��˶�����ͼ��ȡ������ʼ��ֹͣ���ص���
								    INT			      nFrameRateReduce,	  // zdp add ���Ͳ����Ƚϱ���
									LPVOID			  lpContext,		  //���������
								    PrcCbMotionDetect OnObjectMove );     //�˶�/ֹͣ�ص�����

//������Ƶɫ��
BOOL  WINAPI VCASetVidDeviceColor( DWORD dwCard, COLORCONTROL enCtlType, DWORD dwValue );
//��ȡ��Ƶɫ��
BOOL  WINAPI VCAGetVidDeviceColor( DWORD dwCard, COLORCONTROL enCtlType, DWORD & dwValue);

//�õ���ƵԴ����Ƶ��( 0HZ / 50HZ / 60HZ )��Ӧ( ���ź� / PAL�� / NTSC�� ), �ο�ö�ٱ���eFieldFrequency
BOOL  WINAPI VCAGetVidFieldFrq( DWORD dwCard, eFieldFrequency &eVidSourceFieldRate );
//������ƵԴ����Ƶ��( 0HZ / 50HZ / 60HZ )��Ӧ( ���ź� / PAL�� / NTSC�� ), �ο�ö�ٱ���eFieldFrequency
BOOL  WINAPI VCASetVidFieldFrq( DWORD dwCard, eFieldFrequency eVidSourceFieldRate );
//��ͣ������ͣ��Ƶ�������Ƶ����,�����ڿ��ٸı�����Ƶ�������ͺ��ļ��л���������Ƶ������Ļ����
BOOL  WINAPI VCAPauseCapture( DWORD dwCard );
//������Ƶ�����ı�����
BOOL  WINAPI VCASetVidCapTextOSD( DWORD dwCard, BOOL bEnableOSD, TCHAR*	tcText, POINT& ptTopLeft, OSDPARAM* pOSDParm );
//������Ƶ����ʱ�䡢���ڵ��ӣ���VCASetVidCapDateTimeOSDPARAM()�������ú������Ч
BOOL  WINAPI VCASetVidCapDateTimeOSD( DWORD dwCard, BOOL bEnableOSD, POINT& ptTopLeft);
//������Ƶ������Ļ����
BOOL  WINAPI VCASetVidCapDateTimeOSDParam( OSDPARAM* pOSDParm );
//�����Ƶ¼��������Ļ����(�˽ӿ�ֻ��OFFSCREEN������ʾģʽ�²�����)
BOOL  WINAPI VCASetVidCapType(DWORD dwCard, BOOL bEnableOSD, TCHAR* tcText, POINT& ptTopLeft, OSDPARAM* pOSDParm);
//������ƵMpeg����ص�
BOOL  WINAPI VCAEnableVidMpegProcess( DWORD dwCard, BOOL bEnPorcess, PrcVidMpegPorCallBack ppCall );
BOOL  WINAPI VCAGetDeviceID( DWORD dwCard, DWORD& dwDeviceID );
//�õ��豸оƬID
//��ʼ����Ƶ�豸������Ƶ����ʾ��ֻ����Ƶ¼�����Ƶ����ʱ����ͨ��VCAInitSdk()�����Ѿ���ʼ����ɿ��Բ���ʼ����
BOOL  WINAPI VCAInitVidDev( DISPLAYTRANSTYPE eDispTransType = PCI_VIEDOMEMORY);
//��E2C
BOOL  WINAPI VCAIsE2C( DWORD dwCard, BOOL& bIsE2C );
//��E2C
BOOL  WINAPI VCAGetE2C( DWORD dwCard, int iSubAddr, BYTE& ucData );
//дE2C
BOOL  WINAPI VCASetE2C( DWORD dwCard, int iSubAddr, BYTE ucData );
//����ͻ���Ϣ pKey:����Ϊ16 �ֽ�,�û�����Keyֵ;bSuccess:��ʾ��֤�Ƿ�ͨ�� ��
BOOL  WINAPI VCACheckValidate( BYTE* pKey, BOOL& bSuccess );

BOOL WINAPI VCAGetFileLength(DWORD dwCard, DWORD & FileLength);
//��֤�����
BOOL WINAPI VCAVerifyRand(BYTE * pRand, int nReserve);
//�봫��RGB24��BMP�ļ���
BOOL WINAPI VCASetCoMsgBmp(char * chFileName);

/////////////////////////////////////////////////////////////////////////////////////////////////
//VC404P��Ƶ������
/////////////////////////////////////////////////////////////////////////////////////////////////
//��ʼ����Ƶ�豸���Ƿ��ʼ����Ƶ�豸�����������ţ�������Ƶ����Ҫ���ţ�ֻ����Ƶ¼�����Ƶ����ʱ����û�а�װ������ͨ��VCAInitSdk()�����Ѿ���ʼ����ɿ��Բ���ʼ����
//dwAudFreq:��Ƶ����Ƶ��,Ĭ��Ϊ32K,����Щ������ΪĳЩԭ���ϴ�����ƵƵ�ʿ��ܸ��ڻ����32K,���Ը���ʵ��������������������
BOOL WINAPI VCAInitAudDev( DWORD dwAudFreq = 32000 );
//ע����Ƶ����ԭʼ���ݻص�
BOOL  WINAPI VCARegAudCapCallBack( DWORD dwCard, PrcAudCapCallBack ppCall );
//ע����ƵMPEGѹ�����ݻص�
BOOL  WINAPI VCARegAudMpegCallBack( DWORD dwCard, PrcAudMpegCallBack ppCall );
//��ʼ��Ƶ���������Ƶ����ʽΪMPEG4,��Ƶ����MPEG4��ʽ��ʼʱ��������Ч
BOOL  WINAPI VCAStartAudioCapture( DWORD		dwCard, 
								   CAPMODEL	    enCapMode,
								   MP4MODEL	    enMp4Mode );

//������Ƶ���������,��dwCard >= 100 ʱ��Ϊ��������ʼ��Ƶ����ʱ��Ч
BOOL  WINAPI VCASetAudioCardOutOn( DWORD dwCard );
//ֹͣ��Ƶ���������Ƶ����ʽΪMPEG4,��Ƶ����MPEG4��ʽ��ʼʱ��������Ч
BOOL  WINAPI VCAStopAudioCapture( DWORD dwCard );
//������ƵMpeg����ص�
BOOL  WINAPI VCAEnableAudMpegProcess( DWORD dwCard, BOOL bEnPorcess, PrcAudMpegPorCallBack ppCall );
/////////////////////////////////////////////////////////////////////////////////////////////////
//VC404P IO������
/////////////////////////////////////////////////////////////////////////////////////////////////
//ע��IO�����ص�
BOOL  WINAPI VCARegIoAlertCallBack( DWORD dwCard, PrcIoAlertCallBack ppCall );
//����IO���뱨����ǰ��ƽ
BOOL  WINAPI VCASetIOAlertLevelIn( DWORD dwCard, eVOLTAGELEVEL enCurrentLevel );
//��ʼIO���뱨����enSpringLevelΪ������ƽ
BOOL  WINAPI VCAStartIOAlertIn( DWORD dwCard, eVOLTAGELEVEL enSpringLevel );
//ֹͣIO���뱨��
BOOL  WINAPI VCAStopIOAlertIn( DWORD dwCard );
//IO�������
BOOL  WINAPI VCAIOAlertOut( DWORD dwCard, eVOLTAGELEVEL enLevel );

////////////////////////////////////////////////////////////////////////////////////////////////
//VC404P ¼����,
////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************************************************
//add 20101214 ����ż��ͨ��(0,2,4,6...)���������ص�,����ͨ��(1,3,5,7...)��Ԥ�����ص�
//�����Ľӿڲ�Ӱ��ɽӿڵ�ʹ��
//���豸,ֻ����ص����йص���Դ(����IO����)
BOOL  WINAPI VCAOpenDeviceEx( DWORD dwCard,HWND hPreviewWnd, BOOL bCaptureStream=TRUE);
//�ر��豸,ֻ�򿪹ر���ص����йص���Դ(����IO����)
BOOL  WINAPI VCACloseDeviceEx( DWORD dwCard);
//����Ԥ��������ɫ��ʽ
BOOL WINAPI VCASetVidPrevColorFormat(DWORD dwCard, COLOR_FORMAT cfColor);
//����Ԥ������֡��
BOOL  WINAPI VCASetVidPrevFrameRate( DWORD dwCard, DWORD dwFrameRate);
//��Ԥ����
int   WINAPI VCAStartVidPreviewEx( DWORD dwCard );
//�ر�Ԥ����
int   WINAPI VCAStopVidPreviewEx( DWORD dwCard );
//add end
//**************************************************************************
//����Ƶ��
int   WINAPI VCAStartVideoCaptureEx( DWORD dwCard );
//�ر���Ƶ��
int   WINAPI VCAStopVideoCaptureEx( DWORD dwCard );
//����Ƶ��
int   WINAPI VCAStartAudioCaptureEx( DWORD dwCard);
//�ر���Ƶ��
int   WINAPI VCAStopAudioCaptureEx( DWORD dwCard);
//����Ƶ��(����ԭʼ��Ƶ��) add 20100930
int   WINAPI VCAStartOriginAudioCaptureEx( DWORD dwCard);
//
//����������
int   WINAPI VCACreateEnCodec(DWORD dwCard, CAPMODEL enCapMode);
//ֹͣ������
int   WINAPI VCACloseEnCodec(DWORD dwCard);
//���õ�ǰ֡�Ƿ�Ϊ�ؼ�֡
int   WINAPI VCASetCurFrame(DWORD dwCard, BOOL bIsKeyFrame);
//����AVI�ļ�
int   WINAPI VCACreateAVIFile(DWORD dwCard, char * pFileName);
//дAVI�ļ�,nFrameType=0 �ؼ�֡��nFrameType=1 �ǹؼ�֡��nFrameType=5��6 ��Ƶ֡
int   WINAPI VCAWriteFrameToAVIFile(DWORD dwCard, char * lpData, long lSize, int nFrameType);
//�ر�AVI�ļ�
int   WINAPI VCACloseAVIFile(DWORD dwCard);

#endif
