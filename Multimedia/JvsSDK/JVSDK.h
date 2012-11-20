/*////////////////////////////////////////////////////////////////////////////////
// JVSDK.h
// JVSDK ��̬���ӿ�ĵ���ͷ�ļ���Ӧ�ó���Ӧ������ͷ�ļ�
// ������ά���ͿƼ����޹�˾
// 2010��02��26��������
// JVSDK�����ɼ����ĳ�ʼ����Ԥ����ѹ�����������õȹ��ܣ�Ϊ�ϲ�Ӧ�ó����ṩ���ο���
// ��SDK����C���룬��C++��ʹ��ʱ��Ҫextern "C"{}
//////////////////////////////////////////////////////////////////////////////////*/

#ifndef		_JVSDK_H
#define		_JVSDK_H

#define JVSDK_API extern "C" __declspec(dllexport)

typedef void  (*CALLBACK_ENC_DATA)(int nChannel, PUCHAR pData, UINT nBuffLen, int nFrameType, BOOL bMov);
typedef void  (*CALLBACK_RAW_DATA)(int nChannel, PUCHAR pRawBuffer, DWORD dwVideo, DWORD dwHD1);

//SDK֪ͨ��Ϣ��
#define	JVS_WM_BITMAP_OK	0x01		//ץͼ���
#define JVS_WM_COPYRIGHT	0x02		//ͨ����Ȩ��֤

//֡����
#define JVS_TYPE_P			0x00		
#define JVS_TYPE_IDR		0x01
#define JVS_TYPE_AUD		0x02
#define JVS_TYPE_SKIP		0x03
#define JVS_TYPE_D			0x04


typedef struct _JVS_FILE_HEADER
{
	DWORD	dwFLAGS;			//��ά¼���ļ�ͷ��־�ֶ�
	DWORD	dwFrameWidth;		//֡��
	DWORD	dwFrameHeight;		//֡��
	DWORD	dwTotalFrames;		//��֡��
	DWORD	dwVideoFormat;		//Դ��Ƶ��ʽ��0��ʾPAL��1��ʾNTSC
	DWORD	bThrowFrame;		//�Ƿ��֡��0��ʾ����֡��1��ʾ��֡��������ģʽ��
	DWORD	dwReserved1;		//�����ֶ�
	DWORD	dwReserved2;		//�����ֶ�
} JVS_FILE_HEADER, *PJVS_FILE_HEADER;

typedef struct _JVS_CARD_INFO
{
	DWORD	dwCardType;		//������
	DWORD	dwGroup;		//�����
	DWORD	dwSerialNum;	//���к�
	DWORD	dwDateTime;		//��������
	DWORD	dwGUID[4];		//GUID����16�ֽ�
} JVS_CARD_INFO, *PJVS_CARD_INFO;


/////////////////////////////��ʼ�����ͷ�SDK��Դ////////////////////////////////////
JVSDK_API	int		__stdcall	JVS_InitSDK();
JVSDK_API	void	__stdcall	JVS_ReleaseSDK();

////////////////////////////////��ͨ��ǰ���ۺ�����////////////////////////////////
//ע��ѹ�����ݴ���Ļص�����
JVSDK_API	void	__stdcall	JVS_SetCallBack(CALLBACK_ENC_DATA cbEncData, CALLBACK_RAW_DATA cbRawData);
//��������Ƶ�ź�ʱSDK�����ͼƬ
JVSDK_API	void	__stdcall	JVS_SetNoSignalFile(char * szBmpCIF);
//ע��SDK֪ͨ�¼�
JVSDK_API	void	__stdcall	JVS_RegisterNotify(HWND hWnd, DWORD dwNotifyMsg);


//////////////////////////////////����ر�ͨ��/////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_OpenChannel(int nChannel);		//��ͨ������0ͨ����ʼ
JVSDK_API	void	__stdcall	JVS_CloseChannel(int nChannel);		//�ر�ͨ������0ͨ����ʼ


//////////////////////////////////���ͨ�����ۺ�����////////////////////////////////
//������Ƶ����ֱ���ģʽ
JVSDK_API	void	__stdcall	JVS_SetVideoPixelMode(int nChannel, DWORD dwPixelMode, DWORD dwVideoFormat);
//��������
JVSDK_API	void	__stdcall	JVS_StartCapture(int nChannel);


//////////////////////////////////////////Ԥ��////////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_InitPreview();
JVSDK_API	void	__stdcall	JVS_ReleasePreview();
JVSDK_API	BOOL	__stdcall	JVS_SetVideoPreview(int nChannel, HWND hWnd, RECT * rt, BOOL bPreview);
JVSDK_API	BOOL	__stdcall	JVS_SetAudioPreview(int nChannel, HWND hWnd, BOOL bPreview);


////////////////////////////////////////ѹ��//////////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_InitCompress();
JVSDK_API	void	__stdcall	JVS_ReleaseCompress();
JVSDK_API	BOOL	__stdcall	JVS_StartCompress ( int nChannel );	//��ʼѹ��
JVSDK_API	void	__stdcall	JVS_StopCompress( int nChannel, BOOL bWaitForStop );
//����ѹ��ģʽ
JVSDK_API	void	__stdcall	JVS_SetQualityMode(int nChannel, DWORD dwQualityMode, DWORD dwMBPH);
JVSDK_API	void	__stdcall	JVS_SetKeyFramePeriod(int nChannel, DWORD dwKeyFramePeriod);
JVSDK_API	void	__stdcall	JVS_InsertKeyFrame(int nChannel);
JVSDK_API	BOOL	__stdcall	JVS_SetAudioCompress(int nChannel, BOOL bCompress);
//��ȡѹ���ļ�ͷ����
JVSDK_API	BOOL	__stdcall	JVS_GetHeaderData(int nChannel, PJVS_FILE_HEADER pheaderData);


////////////////////////////////////////ץͼ//////////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_GetBitmapSize(int nChannel, DWORD * dwWidth, DWORD * dwHeight);
JVSDK_API	BOOL	__stdcall	JVS_GetBitmap(int nChannel, PUCHAR pBuffer);
JVSDK_API	BOOL	__stdcall	JVS_GetBitmapToFile(int nChannel, PUCHAR pCapBmpFile);


///////////////////////////////////////�ƶ����//////////////////////////////////////
JVSDK_API	void	__stdcall	JVS_SetMovDetect(int nChannel, int nScenecutGrade, int nScenecutThreshold, int nScenecutCoeff, int nRectNumber, RECT * pScenecutRect);


//////////////////////////////////////��Ƶ����////////////////////////////////////////
JVSDK_API	void	__stdcall	JVS_SetOSD(int nChannel, DWORD dwOsdMode, PUCHAR pText, BOOL bEnable);
JVSDK_API	void	__stdcall	JVS_SetVideoPara(int nChannel, int nBrightness, int nContrast, int nSatuation, int nHue);
JVSDK_API	void	__stdcall	JVS_EnablePreviewHD1(int nChannel, BOOL bEnableD1);
JVSDK_API	void	__stdcall	JVS_EnableLowConfig(int nChannel, BOOL bLowCfg);
JVSDK_API	void	__stdcall	JVS_EnableVideoClean(int nChannel, BOOL bVideoClean);

//������Ƶ�ڵ�����
JVSDK_API	void	__stdcall	JVS_SetVideoMask(int nChannel, BOOL bEnableMask, int nMaskX, int nMaskY, int nWidth, int nHeight);
JVSDK_API	void	__stdcall	JVS_SetVideoCrop(int nChannel, DWORD dwPixelCroped);


///////////////////////////////////////��Ƶ����///////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_SetVolume(int nChannel, DWORD dwVolume);


///////////////////////////////////////�忨��Ϣ///////////////////////////////////////
JVSDK_API	BOOL	__stdcall	JVS_GetCardInfo(int nChannel, PJVS_CARD_INFO pCardInfo);




#endif