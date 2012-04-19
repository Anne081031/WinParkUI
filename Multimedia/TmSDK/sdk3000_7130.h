// sdk3000_7130.h : main header file for the SDK3000_7130 DLL
//

#if !defined(AFX_SDK3000_7130_H__37FDA63D_0A84_4797_9E52_320E37C41382__INCLUDED_)
#define AFX_SDK3000_7130_H__37FDA63D_0A84_4797_9E52_320E37C41382__INCLUDED_


static const ULONG BrightnessDefault = 0x80;
static const ULONG ContrastDefault   = 0x44;
static const ULONG SaturationDefault = 0x40;
static const ULONG HueDefault        = 0x00;
static const ULONG SharpnessDefault  = 0x00;

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

//ͼ���ʽ
typedef enum
{
	IMAGE_BMP = 1,	//BMP�ļ���ʽ			
	IMAGE_JPG = 2   //JPG�ļ���ʽ
}enImageType;

//������ƵԴ�˿�
typedef enum
{               
    VIDEO_IN_1 = 0, //AV��ƵԴ1
    VIDEO_IN_2 = 1, //AV��ƵԴ2          
    VIDEO_IN_3 = 2, //AV��ƵԴ3
	VIDEO_IN_4 = 3, //AV��ƵԴ4
	SVIDEO_IN  = 4  //SVIDEO��ƵԴ
}VIDEOSOURCE;

//��Ƶ��������
typedef enum tagVideoProcAmpProperty
{	
	VideoProcAmp_Brightness				= 0,
	VideoProcAmp_Contrast				= VideoProcAmp_Brightness + 1,
	VideoProcAmp_Hue					= VideoProcAmp_Contrast + 1,
	VideoProcAmp_Saturation				= VideoProcAmp_Hue + 1,
	VideoProcAmp_Sharpness				= VideoProcAmp_Saturation + 1,
	VideoProcAmp_Gamma					= VideoProcAmp_Sharpness + 1,
	VideoProcAmp_ColorEnable			= VideoProcAmp_Gamma + 1,
	VideoProcAmp_WhiteBalance			= VideoProcAmp_ColorEnable + 1,
	VideoProcAmp_BacklightCompensation	= VideoProcAmp_WhiteBalance + 1,
	VideoProcAmp_Gain					= VideoProcAmp_BacklightCompensation + 1
}VideoProcAmpProperty;

//��Ƶ����
typedef enum
{
	VideoProperty_Brightness				= VideoProcAmp_Brightness,		//����
	VideoProperty_Contrast					= VideoProcAmp_Contrast,		//�Աȶ�
	VideoProperty_Hue						= VideoProcAmp_Hue,				//ɫ��
	VideoProperty_Saturation				= VideoProcAmp_Saturation,		//���Ͷ�
	VideoProperty_Gamma						= VideoProcAmp_Gamma,			//GammaУ��
	VideoProperty_ColorEnable				= VideoProcAmp_ColorEnable,
	VideoProperty_WhiteBalance				= VideoProcAmp_WhiteBalance,	//��ƽ��
	VideoProperty_BacklightCompensation		= VideoProcAmp_BacklightCompensation,
	VideoProperty_Sharpness					= VideoProcAmp_Sharpness,
	VideoProperty_Gain						= VideoProcAmp_Gain,
} VideoProperty;

//SDK3000����ҳ
typedef enum
{
	PropertyDlg_VideoCaptureFilter = 0,//SDK3000��Ƶ�豸����ҳ 
	PropertyDlg_VideoCapturePin,	   //SDK3000��Ƶ�豸�����������ҳ
	PropertyDlg_VideoCrossbar,		   //Video Crossbar����ҳ
	PropertyDlg_DeinterlaceFilter,		//Deinterlace�豸����ҳ
	PropertyDlg_DeinterlaceCapturePin,	//Deinterlace�豸������������ҳ
	PropertyDlg_DeinterlacePreviewPin	//Deinterlace�豸Ԥ����������ҳ
} PropertyDialog;

//��Ƶ����״̬
typedef enum{
	STATE_STOP	= 0,
	STATE_RUN,
	STATE_PAUSE
}GRAPH_STATE;

//��Ƶ��ʽ
//VideoSubType_YUY2��ʽ֧��SDK3000���й��ܡ�
//��Ƶ��ʽ��VideoSubType_YUY2�⣬ֻ��֧����Ƶԭʼ�ص���ʽ��
typedef enum
{
	VideoSubType_None	= -1,
	VideoSubType_RGB555 = 0,
	VideoSubType_RGB24,
	VideoSubType_YUY2,
	VideoSubType_RGB8,
	VideoSubType_RGB32
} VideoSubType;

//��Ƶ��ʽ
typedef enum
{
	VideoStandard_None		= 0x00000000,
	VideoStandard_NTSC_M	= 0x00000001, 
	VideoStandard_NTSC_M_J	= 0x00000002,  
	VideoStandard_NTSC_433	= 0x00000004,
	VideoStandard_PAL_B		= 0x00000010,
	VideoStandard_PAL_D		= 0x00000020,
	VideoStandard_PAL_H		= 0x00000080,
	VideoStandard_PAL_I		= 0x00000100,
	VideoStandard_PAL_M		= 0x00000200,
	VideoStandard_PAL_N		= 0x00000400,
	VideoStandard_PAL_60	= 0x00000800,
	VideoStandard_SECAM_B	= 0x00001000,
	VideoStandard_SECAM_D	= 0x00002000,
	VideoStandard_SECAM_G	= 0x00004000,
	VideoStandard_SECAM_H	= 0x00008000,
	VideoStandard_SECAM_K	= 0x00010000,
	VideoStandard_SECAM_K1	= 0x00020000,
	VideoStandard_SECAM_L	= 0x00040000,
	VideoStandard_SECAM_L1	= 0x00080000,
} VideoStandard;

//������
typedef enum
{
	Even_Field = 0, //ż��
	Odd_Field,		//�泡
	Odd_Even_Field, //�泡��ż��
	Interlaced_Field//���ϳ�
}VideoFieldType;

//��Ƶ���Ӳ���
typedef struct
{
	LONG		cfHeight;		//�ַ��߶�
	LONG		cfWidth;		//�ַ����
	LONG		cfWeight;		//�ַ���ϸ
	LONG		cfSpacing;		//�ַ����
	BOOL		cfItalic;		//б��
	BOOL		cfUnderline;	//�»���
	BOOL		cfStrikeOut;	//ɾ����
	COLORREF	cfBkColor;		//����ɫ 
	COLORREF	cfTextColor;	//ǰ��ɫ
	TCHAR		cfFaceName[32];	//������
}OSDPARAM;

//��Ƶ���Է�Χ
typedef struct 
{
	long nValue;		//��ǰֵ
	long nMin;			//��Сֵ
	long nMax;			//���ֵ
	long nStepDelta;	//��С����ֵ
	long nDefault;		//Ĭ��ֵ
	long nCapsFlags;	//���
} VIDEOPROPERTYRANGE;

//��Ƶ����Ϣ
typedef struct
{
	VideoSubType		subtype;        //��Ƶ��ʽ
	RECT				rcSource;       //��ƵԴ��Χ
	RECT				rcTarget;		//Ŀ����Ƶ��Χ
	DWORD				dwBitRate;      //������
	DWORD				dwBitErrorRate; //���ش�����
	LONGLONG			AvgTimePerFrame;//֡��
	BITMAPINFOHEADER	bmiHeader;		//���ߡ���ɫλ�ʵ�
} VIDEOSTREAMINFO;

//��ƵԴ����Ƶ��
typedef enum  
{          //@enum Field frequency
    FIELD_FREQ_50HZ = 0,        //@emem source is 50 Hz (PAL)
    FIELD_FREQ_60HZ = 1,        //@emem source is 60 Hz (NTSC)
    FIELD_FREQ_0HZ  = 2         //@emem source is 0 Hz   (NO SIGNL)
}eFieldFrequency;


//��̬���ص�
typedef void (CALLBACK *PrcCbMotionDetect)( long lnCardID, BOOL bMove, LPVOID lpContext );
//����ԭʼ���ص�
typedef void (CALLBACK *PrcCapSourceStream)( long lnCardID, long pBuf, long lnWidth, long lnHeight, long lnBiCount );
//IO�����ص�
typedef void (CALLBACK *PrcIoAlertCallBack)( long lnCardID );
typedef void (CALLBACK *PrcPicMessage)( long lnCardID, long pBuf, long lnWidth, long lnHeight);
//��ʼ��SDK
HRESULT WINAPI VCAInitSdk();
//�ͷ�SDK��Դ
void WINAPI VCAUnInitSdk();
//�õ�SDK3000�豸����
HRESULT WINAPI VCAGetDevNum(int *pDevNum);
//�����豸
HRESULT	WINAPI VCAConnectDevice(int nCards, BOOL bOverlay, HWND hParentWnd, SIZE& szVidSize, VIDEOSOURCE enVideoSource, int nFrameRate = 25, VideoSubType enVideoSubType = VideoSubType_YUY2);
//�Ͽ��豸
HRESULT WINAPI VCADisConnectDevice(int nCards);
//���ò����ļ���
HRESULT	WINAPI VCASetCaptureFile(int nCards, LPCTSTR szFileName);
//��ʼ����
HRESULT	WINAPI VCAStartCapture(int nCards);
//ֹͣ����
HRESULT	WINAPI VCAStopCapture(int nCards);
//�Ƿ����ڲ���
HRESULT	WINAPI VCAIsCapturing(int nCards, BOOL* bIsCapturing);
//������Ƶ����ʾ�����е�����
HRESULT WINAPI VCASetWindowPos(int nCards, RECT rc);
//���ö�̬���
HRESULT WINAPI VCAEnableMotionDetect(int nCards, BOOL bEnaDetect, BYTE *pAreaMap, LONG nSizeOfMap, LONG nPersistTime, LPVOID lpContext, PrcCbMotionDetect OnObjectMove);
//ץͼ
HRESULT WINAPI VCACapturePicture(int nCards, LPCTSTR szFileName, enImageType enImgType, RECT* rcImg, long nQuality, long nCapCount, BOOL bCapFast );
//�л���ƵԴ
HRESULT WINAPI VCASwitchVideoSource(int nCards, VIDEOSOURCE enVideoSource, BOOL bFast = TRUE );
//������Ƶ����
HRESULT WINAPI VCASetVideoPropertyValue(int nCards, VideoProperty eVideoProperty, long value);
//�õ���Ƶ����
HRESULT WINAPI VCAGetVideoPropertyValue(int nCards, VideoProperty eVideoProperty, VIDEOPROPERTYRANGE* pVPR);
//IO���
HRESULT WINAPI VCAIOAlertOut(int nCards, BOOL bHighLevel);
//��ʼ��IO����
HRESULT WINAPI VCAInitIOAlertIn(int nCards, PrcIoAlertCallBack ppCall);
//��ʼ�ȴ�IO����
HRESULT WINAPI VCAStartIOAlertIn(int nCards, BOOL bHigh);
//ֹͣ�ȴ�IO����
HRESULT WINAPI VCAStopIOAlertIn(int nCards);
//�����ı�����
HRESULT WINAPI VCASetTextOSD(int nCards, BOOL bEnableOSD, TCHAR* pText, POINT ptTopLeft, BOOL bTransparent, OSDPARAM* pOSD,  HWND nWndMain);
//����ʱ�����
HRESULT WINAPI VCASetDateTimeOSD(int nCards, BOOL bEnableOSD, POINT ptTopLeft, BOOL bTransparent, OSDPARAM* pOSD,  HWND nWndMain);
//��ʾ����ҳ�Ի���
HRESULT WINAPI VCADisplayPropertyDialogs(int nCards, PropertyDialog id, HWND hParentWnd, LPCTSTR szCaption);
//������Ƶ��
HRESULT WINAPI VCARun(int nCards);
//��ͣ��Ƶ��
HRESULT WINAPI VCAPause(int nCards);
//ֹͣ��Ƶ��
HRESULT WINAPI VCAStop(int nCards);
//�õ���Ƶ��״��
HRESULT WINAPI VCAGetStreamStatus(int nCards, GRAPH_STATE* pStatus);
//������Ƶ֡��
HRESULT WINAPI VCASetFrameRate(int nCards, int nFrameRate);
//�õ���Ƶ��Ϣ
HRESULT WINAPI VCAGetVideoInfo(int nCards, VIDEOSTREAMINFO * pVSI);
//������Ƶ��Ϣ
HRESULT WINAPI VCASetVideoInfo(int nCards, VIDEOSTREAMINFO * pVSI);
//������Ƶ��СΪȫ��
HRESULT WINAPI VCASetFullScreen(int nCards, BOOL bFullSrc);
//�Ƿ���ƵΪȫ��ģʽ
HRESULT WINAPI VCAIsFullSrcMode(int nCards, BOOL* pFullSrc);
//�õ���Ƶ��ʽ
HRESULT WINAPI VCAGetVideoStandard(int nCards, VideoStandard* pVideoStandard, long* pAvailable);
//������Ƶ��ʽ
HRESULT WINAPI VCASetVideoStandard(int nCards, VideoStandard vs);
//ö����Ƶѹ����ʽ
HRESULT WINAPI VCAEnumVideoCompressor(int nCards, char* arrCompDevName,int * pCompDevCount);
//�õ���Ƶ��ǰѹ����ʽ
HRESULT WINAPI VCAGetCurrentVideoCompressor(int nCards, LPSTR pCompDevName);
//ö����Ƶ��ǰѹ����ʽ
HRESULT WINAPI VCASetCurrentVideoCompressor(int nCards, LPCTSTR pCompDevName);
//������Ƶԭʼ�ص���ʽ
HRESULT WINAPI VCAEnableCapSourceStream(int nCards, BOOL bCapStream, VideoFieldType enVideoFieldType, PrcCapSourceStream pCapStream);
//
HRESULT WINAPI VCAEnablePicMessage(int nCards, BOOL bPicMessage, PrcPicMessage pPicMessage);
//��E2C
HRESULT WINAPI VCAReadE2C(int nCards, int iSubAddr, BYTE* pucData);
//дE2C
HRESULT WINAPI VCAWriteE2C(int nCards, int iSubAddr, BYTE ucData);
//�õ���ƵԴ����Ƶ��( 0HZ / 50HZ / 60HZ )��Ӧ( ���ź� / PAL�� / NTSC�� ), �ο�ö�ٱ���eFieldFrequency
HRESULT WINAPI VCAGetVideoFieldFrq(int nCards, eFieldFrequency* pFieldFrequency);
//ö����Ƶ�豸
HRESULT WINAPI VCAEnumAudioCaptureDev(int nCards, char* arrAudDevName,int * pAudDevCount);
//ͨ����Ƶ�豸��������Ƶ�ɼ�,һ����Ƶ�豸(����)����һ·��, strAudDevName Ϊ"",��ʾȡ����Ƶ�ɼ�
HRESULT WINAPI VCASetCurrentAudioCompressorName(int nCards, LPCTSTR strAudDevName);
//ͨ����Ƶ�豸���������Ƶ�ɼ�,һ����Ƶ�豸(����)����һ·��, nCurrentAudDevice Ϊ-1,��ʾȡ����Ƶ�ɼ�
HRESULT WINAPI VCASetCurrentAudioCompressorNum(int nCards, int nCurrentAudDevice);
/////////////////////////////////////////////////////////////////////////////

//	����ͼ�����ݵ�������
HRESULT WINAPI VCACopyToClipBoard(int nCards);
//	����Ƿ�Overlay��ʽ��ʾ
HRESULT	WINAPI VCAIsOverlay(int nCards, BOOL* bIsOverlay);


#endif // !defined(AFX_SDK3000_7130_H__37FDA63D_0A84_4797_9E52_320E37C41382__INCLUDED_)
