// ***************************************************************
//  TH_PlateID.h   version:  4.0     date: 2010.4.12
//  -------------------------------------------------------------
//  �廪��ѧ����ͼ����Ϣ�����о��ҡ���Ȩ���С�
//  -------------------------------------------------------------
//  Center for Intelligent Image and Document Information Processing
//  -------------------------------------------------------------
//  Copyright (C) 2007 - All Rights Reserved
// ***************************************************************
//   Author: Liu CS, Zhou J
// ***************************************************************
//		Revision history:
//			2010.4.12: v4.0, TH_PlateID����ʶ��SDK�Ľӿ�
// ***************************************************************

#ifndef __TH_PLATEID_H_INCLUDE__
#define __TH_PLATEID_H_INCLUDE__

#if !defined(WIN32) && !defined(__stdcall)
#define __stdcall
#endif

#include "TH_ErrorDef.h"

#ifdef __cplusplus
extern "C" {
#endif


//������ɫ
#define LC_UNKNOWN  0
#define LC_BLUE   1
#define LC_YELLOW 2
#define LC_WHITE  3
#define LC_BLACK  4
#define LC_GREEN  5
	
//��������
#define LT_UNKNOWN  0   //δ֪����
#define LT_BLUE     1   //����С����
#define LT_BLACK    2   //����С����
#define LT_YELLOW   3   //���Ż���
#define LT_YELLOW2  4   //˫�Ż��ƣ���β�ƣ�ũ�ó���
#define LT_POLICE   5   //��������
#define LT_ARMPOL   6   //�侯����
#define LT_INDIVI   7   //���Ի�����
#define LT_ARMY     8   //���ž���
#define LT_ARMY2    9   //˫�ž���
#define LT_EMBASSY  10  //ʹ����
#define LT_HONGKONG 11  //�����
#define LT_TRACTOR  12  //������

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

//�˶�����
#define DIRECTION_LEFT	1
#define DIRECTION_RIGHT	2
#define DIRECTION_UP	3
#define DIRECTION_DOWN	4
	
//ͼ���ʽ
#define ImageFormatRGB		0
#define ImageFormatBGR		1
#define ImageFormatYUV422	 2
#define ImageFormatYUV420COMPASS 3

#define PARAM_INDIVIDUAL_ON          0
#define PARAM_INDIVIDUAL_OFF         1
#define PARAM_TWOROWYELLOW_ON	     2
#define PARAM_TWOROWYELLOW_OFF	     3
#define PARAM_ARMPOLICE_ON           4
#define PARAM_ARMPOLICE_OFF          5
#define PARAM_TWOROWARMY_ON          6
#define PARAM_TWOROWARMY_OFF         7
#define PARAM_TRACTOR_ON			 8
#define PARAM_TRACTOR_OFF			 9


#define RECOG_STAGE_ALL			0		// �޴���
#define RECOG_STAGE_FINDPLATE	1		// û���ҵ�����
#define RECOG_STAGE_PLATESCORE_ZERO	2	// ��������ֵ(0��)
#define RECOG_STAGE_PLATESCORE_LOW	3	// ��������ֵ(������)
#define RECOG_STAGE_RECOGSCORE_ZERO	4	// ����ʶ�����(0��)
#define RECOG_STAGE_RECOGSCORE_LOW	5	// ����ʶ�����(������)

	
typedef struct TH_RECT
{
	int left;
	int top;
	int right;
	int bottom;
}TH_RECT;

typedef struct TH_PlateIDCfg
{
	int nMinPlateWidth;			// ������С���ƿ�ȣ�������Ϊ��λ
	int nMaxPlateWidth;			// ��������ƿ�ȣ�������Ϊ��λ
	
	int nMaxImageWidth;		// ���ͼ����
	int nMaxImageHeight;	// ���ͼ��߶�

	unsigned char bVertCompress;			// �Ƿ�ֱ����ѹ��1����ʶ��
	unsigned char bIsFieldImage;			// �Ƿ��ǳ�ͼ��
	unsigned char bOutputSingleFrame;	// �Ƿ���Ƶͼ����ͬһ�����Ķ��ͼ��ֻ���һ�ν��		
	unsigned char bMovingImage;			// ʶ���˶�or��ֹͼ��

	unsigned char bIsNight;
	unsigned char nImageFormat;

	unsigned char * pFastMemory;	// DSP�ȵ�Ƭ���ڴ棬��ʱ�����������ʹ����Щ�ڴ�
	int nFastMemorySize;			// �����ڴ�Ĵ�С

	unsigned char *pMemory;			// ��ͨ�ڴ�ĵ�ַ���ڽ����ڴ���������ڴ�й©������
	int nMemorySize;				// ��ͨ�ڴ�Ĵ�С

	int (*DMA_DataCopy)(void *dst, void *src,int nSize);
	int (*Check_DMA_Finished)();

	int nLastError;			// ���ڴ��ݴ�����Ϣ
							// 0: �޴���
							// 1: FindPlate(û���ҵ�����)
							// 2: ��������ֵ(0��)
							// 3: ��������ֵ(������)
							// 4: ����ʶ�����(0��)
	                        // 5: ����ʶ�����(������)
	int nErrorModelSN;		// �����ģ����

	char reserved[120];
}TH_PlateIDCfg;

// ȱʡ����ʶ��SDK����
const TH_PlateIDCfg c_defConfig = {80, 200, /* Min and Max Plate Width */ 
	720, 576, /* Max Image Width and Height*/ 
	0, /*vert compress*/ 1, /* Field Image? */1, /* output single*/  0/*Moving */,
	0 /* Night? */ , ImageFormatBGR, 
	NULL, 0, 
	NULL,0, 
	NULL, NULL,
	0,0};

typedef struct TH_PlateIDResult 
{
	char license[16];
	char color[8];
	int nColor;			// ������ɫ
	int nType;			// ��������
	int nConfidence;	// ���ƿ��Ŷ�
	int nBright;		// ��������
	int nDirection;		//�����˶�����0 unknown, 1 left, 2 right, 3 up , 4 down
	
	TH_RECT rcLocation;
	const unsigned char *pbyBits;	/* ��ʶ������Ӧ��ͼƬ�Ļ�����, ֻ�е� bOutputSingleFrame = true ʱ����ָ�����Ч��
									�´�ʶ��󣬸û��������ݱ����ǡ����ó��������ͷŸû�������
									��������С���ڴ��ݽ�����ͼƬ���ݵĳ���*/
	int nTime;
	unsigned char nCarBright;		//��������
	unsigned char nCarColor;		//������ɫ
	char reserved[100];				// ����
}TH_PlateIDResult;


/************************************************************************/
/* TH_InitPlateIDSDK: ��ʼ������ʶ��SDK����ʹ�ø�SDK�Ĺ���ǰ			*/
/*			�����ҽ������һ�θú���									*/
/*		Parameters:														*/
/*			pPlateConfig[in]: ����ʶ��SDK������							*/
/*		Return Value: int(ERR_Code)										*/
/************************************************************************/
int __stdcall TH_InitPlateIDSDK(TH_PlateIDCfg *pPlateConfig);

/************************************************************************/
/* TH_UninitPlateIDSDK: �ͷų���ʶ��SDK����ʹ�ø�SDK�Ĺ��ܺ�			*/
/*			�����ҽ������һ�θú��������ͷ��ڴ档						*/
/*		Return Value: int(ERR_Code)										*/
/************************************************************************/
int __stdcall TH_UninitPlateIDSDK(TH_PlateIDCfg *pPlateCfg);

/************************************************************************/
/* TH_RecogStillImage2: ʶ���ڴ��г���ͼ��(���ʶ�𵽵Ķ�����)	*/
/*		Parameters:														*/
/*			pbyBits[in]: ָ���ڴ�ͼ�����ݵ�ָ�룬3���ֽڱ�ʾ1������		*/
/*			nWidth[in]: ͼ��Ŀ��										*/
/*			nHeight[in]: ͼ��ĸ߶�										*/
/*			pResult[out]: ����ʶ��������, ���÷�����pResult[nResultNum]�ڴ�*/
/*			nResultNum[in,out]: in ����ѡ���Ƹ�����out ʶ����ĳ��Ƹ���*/
/*			prcRange[in]: ָ��ʶ��Χ									*/
/*		Return Value: int(ERR_Code)										*/
/************************************************************************/
int __stdcall TH_RecogImage(const unsigned char *pbyBits, int nWidth, int nHeight, TH_PlateIDResult *pResult,
	int *nResultNum, const TH_RECT *prcRange, TH_PlateIDCfg *pPlateConfig);

int __stdcall TH_EvaluateCarColor(const unsigned char *pbyBits, int nWidth, int nHeight, TH_PlateIDResult *pResult,
	int *nResultNum, const TH_RECT *prcRange, TH_PlateIDCfg *pPlateConfig);

int __stdcall TH_SetImageFormat( unsigned char cImageFormat, unsigned char bVertFlip, unsigned char bDwordAligned, TH_PlateIDCfg *pPlateConfig );

/************************************************************************/
/* TH_SetDayNightMode: ����ҹ��ģʽ										*/
/*		Parameters:														*/
/*			bIsNight[in]: true:����; false:����							*/
/*		Return Value: int(ERR_Code)										*/
/************************************************************************/
int __stdcall TH_SetDayNightMode( unsigned char bIsNight, TH_PlateIDCfg *pPlateConfig);


int __stdcall TH_SetEnlargeMode( unsigned char bEnlarge , TH_PlateIDCfg *pPlateCfg);

int __stdcall TH_SetEnabledPlateFormat(unsigned int dFormat, TH_PlateIDCfg *pPlateConfig);

int __stdcall TH_SetProvinceOrder( char* szProvince, TH_PlateIDCfg *pPlateConfig);

/************************************************************************/
/* TH_SetRecogThreshold: ����ʶ����ֵ									*/
/*		Parameters:														*/
/*			nPlateLocate_Th[in]: 0 - 9		--   7: Ĭ����ֵ			*/
/*					nOCR_Th[in]: 0 - 9		--   5: Ĭ����ֵ			*/
/*				0: ����ɵ���ֵ											*/
/*				9:���ϸ����ֵ											*/
/*		Return Value: int(ERR_Code)										*/
/************************************************************************/
int __stdcall TH_SetRecogThreshold( unsigned char nPlateLocate_Th, unsigned char nOCR_Th, TH_PlateIDCfg *pPlateCfg);

//��鹤����������С��ʣ���ڴ棬������ָ���������Ҫ���Ӹ����ĳ�ʼ�ڴ�
int __stdcall TH_CheckMinFreeMemory( int *pnMinFreeSRAM, int *pnMinFreeSDRAM, TH_PlateIDCfg *pPlateCfg);

/************************************************************************/
/* ����: ��ȡ�汾��														*/
/*		Parameters����													*/
/*		����ֵ: �ַ��� ��ʽ�����汾��.���汾��.�޶���.�����			*/
/*				�����ͷŸ�ָ�롣										*/
/************************************************************************/
const char * __stdcall TH_GetVersion();

int __stdcall TH_SetContrast( unsigned char nContrast, TH_PlateIDCfg *pPlateCfg ); // ������ָ�� nContrast[in]: 0 - 9
																				 // ��ģ��ʱ��Ϊ1;������ʱ9��Ϊ;
                                                                                 // �Զ�̽����Ϊ0;Ĭ��ֵ9
/************************************************************************/
/* TH_SetAutoSlopeRectifyMode: �����Ƿ��Զ���бУ��(��֧��RGB888,ͼƬ��ʽ)*/
/*		Parameters:														*/
/*			bIsAutoSlope[in]: true:�Զ���бУ��; false:���Զ���бУ��	*/
/*          nSlopeDetectRange:  0 - 16 ��								*/
/*		Return Value: int(ERR_Code)										*/
/*		֧�ָ�ʽ: ImageFormatBGR, ImageFormatRGB						*/
/************************************************************************/
int __stdcall TH_SetAutoSlopeRectifyMode( unsigned char bIsAutoSlope, unsigned char nSlopeDetectRange, TH_PlateIDCfg *pPlateConfig);


#ifdef __cplusplus
}
#endif

#endif	//	__TH_PLATEID_H_INCLUDE__
