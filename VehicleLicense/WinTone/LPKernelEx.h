
#ifndef __LPRINTERFACE__
#define __LPRINTERFACE__

//������ɫ
#define LC_UNKNOWN  0  //δ֪
#define LC_BLUE     1  //��ɫ
#define LC_YELLOW   2  //��ɫ 
#define LC_WHITE    3  //��ɫ
#define LC_BLACK    4  //��ɫ
#define LC_GREEN    5  //��ɫ
	
//��������
#define LT_UNKNOWN  0   //δ֪����
#define LT_BLUE     1   //����С����
#define LT_BLACK    2   //����С����
#define LT_YELLOW   3   //���Ż���
#define LT_YELLOW2  4   //˫�Ż��ƣ���β�ƣ�ũ�ó���
#define LT_POLICE   5   //��������
#define LT_ARMPOL   6   //�侯����
#define LT_INDIVI   7   //���Ի�����
#define LT_ARMY     8   //���ž�����
#define LT_ARMY2    9   //˫�ž�����
#define LT_EMBASSY  10  //ʹ�ݳ���
#define LT_HONGKONG 11  //��۳���
#define LT_TRACTOR  12  //ũ�ó���
	
//�˶�����
#define DIRECTION_LEFT	1  //��
#define DIRECTION_RIGHT	2  //��
#define DIRECTION_UP	3  //��
#define DIRECTION_DOWN	4  //��

//ͼ���ʽ
#define ImageFormatRGB		0
#define ImageFormatBGR		1
#define ImageFormatYUV422	2
#define ImageFormatYUV420	3

//������ɫ
#define LGRAY_DARK	0	//��
#define LGRAY_LIGHT	1	//ǳ

#define LCOLOUR_WHITE	0	//��	
#define LCOLOUR_SILVER	1	//��(��)
#define LCOLOUR_YELLOW	2	//��
#define LCOLOUR_PINK	3	//��
#define LCOLOUR_RED		4	//��
#define LCOLOUR_GREEN	5	//��
#define LCOLOUR_BLUE	6	//��
#define LCOLOUR_BROWN	7	//�� 
#define LCOLOUR_BLACK	8	//��
	
typedef struct TH_RECT
{
	int left;
	int top;
	int right;
	int bottom;
}TH_RECT;

typedef struct TH_PlateResult 
{
	char license[16];   // ���ƺ���
	char color[8];      // ������ɫ
	int nColor;			// ������ɫ���
	int nType;			// ��������
	int nConfidence;	// ���ƿ��Ŷ�
	int nBright;		// ��������
	int nDirection;		// �˶�����0 unknown, 1 left, 2 right, 3 up , 4 down	
	TH_RECT rcLocation; //����λ��
	int nTime;          //ʶ������ʱ��
	unsigned char nCarBright;		//��������
	unsigned char nCarColor;		//������ɫ
	char reserved[100];				// ����
}TH_PlateResult;

#ifdef __cplusplus
extern "C" {
#endif

/**************************************
LPR_SetImageFormat����ͼ���ʽ�������ڵ���LPR_InitEx֮ǰ����
������bMovingImage[in]            ʶ���˶���ֹͼ��
	  bFlipVertical[in]           �Ƿ����µߵ�ͼ���ʶ��
	  nColorOrder[in]             ͼ���ʽ
	  bVertCompress[in]           �Ƿ�ֱ����ѹ��һ��ʶ��
	  nMinPlateWidth[in]          ��С���ƿ��
	  nMaxPlateWidth[in]          ����ƿ��
	  bDwordAligned[in]           �Ƿ����ֽڶ���
	  bInputHalfHeightImage[in]   �Ƿ����볡ͼ��
	  bOutputSingleFrame[in]      �Ƿ�ֻ���һ��ʶ���� 	
	  nChannel[in]                ͨ����
***************************************/
BOOL WINAPI LPR_SetImageFormat(BOOL bMovingImage,		
		BOOL bFlipVertical, 
		int nColorOrder,
		BOOL bVertCompress, 
		int nMinPlateWidth, 
		int nMaxPlateWidth, 
		BOOL bDwordAligned,
		BOOL bInputHalfHeightImage,    												   
		BOOL bOutputSingleFrame,	
		int nChannel=1);

/**************************************
LPR_SetPlateType����ʶ�������͡������ڵ���LPR_InitEx֮������
������bYellow2[in]                �Ƿ�ʶ��˫�����
      bIndivi[in]                 �Ƿ�ʶ����Ի�����
      bArmPol[in]                 �Ƿ�ʶ�����
      bArmy2[in]                  �Ƿ�ʶ��˫�����
      bTractor[in]                �Ƿ�ʶ��ũ�ó��� 
	  nChannel[in]                ͨ����
***************************************/
BOOL WINAPI LPR_SetPlateType(BOOL bYellow2, BOOL bIndivi, BOOL bArmPol, BOOL bArmy2, BOOL bTractor, int nChannel=1);

/**************************************
LPR_SetSpecialParameters����ҹ��ģʽ��ʶ����ֵ��ʡ��Ĭ��ֵ��ʶ���Ƹ����������ڵ���LPR_InitEx֮������
������bNight[in]                  �Ƿ���ҹ��ģʽ
	  nImageplateThr[in]          ���ƶ�λ��ֵ
	  nImageRecogThr[in]          ����ʶ����ֵ
	  nPlatesNum[in]              ���ʶ��ĳ��Ƹ���
	  LocalProvince[in]           Ĭ��ʡ��	  	
	  nChannel[in]                ͨ����
***************************************/
BOOL WINAPI LPR_SetSpecialParameters(BOOL bNight,		
		int nImageplateThr, 
		int nImageRecogThr,
		int nPlatesNum,
		char *LocalProvince,
		int nChannel=1);

/**************************************
LPR_InitEx��ʼ�����Ŀ�
������nChannel[in] ͨ����
***************************************/
BOOL WINAPI LPR_InitEx(int  nChannel=1);

/**************************************
LPR_UninitExж�غ��Ŀ�
������nChannel[in] ͨ����
***************************************/
void WINAPI LPR_UninitEx(int  nChannel=1);

/**************************************
LPR_RGB888Exʶ��������Ƶ�����ڴ�ͼƬ
������pImg[in]       ָ���ڴ���ͼ���ָ�룬��ʽΪRGB888,YUV420,YUV422����ʽ��LPR_SetImageFormat������ָ��
      nWidth[in]     ͼ��Ŀ�ȣ�������Ϊ��λ
	  nHeight[in]    ͼ��ĸ߶ȣ�������Ϊ��λ 
	  pResult[in]    ʶ�����ṹ��
	  nRecogNum[out] ʵ��ʶ�𵽵ĳ��Ƹ���
	  prcRange[in]   ����ʶ��ķ�Χ����Ϊ(0,0,0,0)����ͼƬ��ʶ��������Ϊ��λ
      nChannel[in]   ͨ����
***************************************/
BOOL WINAPI LPR_RGB888Ex(unsigned char *pImg, int nWidth, int  nHeight, TH_PlateResult* pResult, int &nRecogNum, TH_RECT *prcRange, int  nChannel=1);

/**************************************
LPR_GetImageBufʶ��������Ƶ��ʱ��ȡʶ�𵽳��Ƶ�֡�ڴ�
������pImageBuf[in,out]   ����һ��BYTE����ָ�룬����Ҫ�����ڴ棻���ͼ���ָ��
      nWidth[out]         ͼ��Ŀ�ȣ�������Ϊ��λ
	  nHeight[out]        ͼ��ĸ߶ȣ�������Ϊ��λ
	  nSize[out]          ͼ��Ĵ�С�����ֽ�Ϊ��λ
	  nChannel[in]       ͨ����
˵������LPR_SetImageFormat�Ĳ���bOutputSingleFrame��ΪTRUE���ҵ��ú���LPR_RGB888Exʶ��������Ƶ��ʱ��
      �ô˺�����ȡʶ�𵽳��Ƶ�֡�ڴ档
***************************************/
BOOL WINAPI LPR_GetImageBuf(unsigned char *&pImageBuf, int &nWidth, int &nHeight, int &nSize, int  nChannel=1);

/**************************************
LPR_FileExʶ��ͼƬ�ļ�
������lpszFileName[in]     ͼ���·��
      lpszPlateFile[in]    ���Ƶı���·������������泵��ͼƬ�˲�����NULL
	  pResult[in]          ʶ�����ṹ��
	  RecogNum[out]        ʵ��ʶ�𵽵ĳ��Ƹ���
	  prcRange[in]         ����ʶ��ķ�Χ����Ϊ(0,0,0,0)����ͼƬ��ʶ��������Ϊ��λ
      nChannel[in]         ͨ����
***************************************/
BOOL WINAPI LPR_FileEx(char* lpszFileName, char *lpszPlateFile, TH_PlateResult* pResult, int &nRecogNum, TH_RECT *prcRange,int nChannel=1);

#ifdef __cplusplus
}	// extern "C"
#endif

#endif


