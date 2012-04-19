// ***************************************************************
//  TH_ErrorDef.h   version:  4.0     date: 2010.4.12
//  -------------------------------------------------------------
//  �廪��ѧ����ͼ����Ϣ�����о��ҡ���Ȩ���С�
//  -------------------------------------------------------------
//  Center for Intelligent Image and Document Information Processing
//  -------------------------------------------------------------
//  Copyright (C) 2007 - All Rights Reserved
// ***************************************************************
//   Author: Zhou Jian
// ***************************************************************
//		Revision history:
//			2010.4.12: v4.0, ����SDK�ĳ�����Ϣ
// ***************************************************************

#if !defined(__TH_ERRORDEF_INCLUDE_H__)
#define __TH_ERRORDEF_INCLUDE_H__

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

// The errors that may occur during the use of the SDK
#define		TH_ERR_NONE								0		//û�д���
#define		TH_ERR_GENERIC							1		//һ�����û��ר�ŵ���˼
#define		TH_ERR_NODOG			               -1		//û���ҵ����ܹ�
#define		TH_ERR_DOGERROR						   -2		//�򿪼��ܹ�����
#define		TH_ERR_READDOG						   -3		//��ȡ���ܹ�����
#define		TH_ERR_INVALIDDOG					   -4		//���ǺϷ��ļ��ܹ�
#define		TH_ERR_DOGUSERERROR					   -5		//��ȡ���ܹ��û�����  
#define		TH_ERR_INVALIDUSER	                   -6		//���ǺϷ��ļ��ܹ��û�
#define		TH_ERR_MOUDLEERROR	                   -7		//��ȡģ����Ȩ����
#define     TH_ERR_INVALIDMOUDLE	               -8		//ģ��û�кϷ���Ȩ
#define     TH_ERR_DATABASEFULL					   -9		//�������������޷������
#define		TH_ERR_DOGTIMEOUT					   -10		//��Ȩ�ѹ���

#define     TH_ERR_INVALIDCALL					   -99		//�Ƿ�����
#define     TH_ERR_EXCEPTION					   -100		//�쳣
#define     TH_ERR_CANCELENROLL		                9		//ȡ�����β���
#define     TH_ERR_THREADLIMIT						20		//�����߳��������涨����

#define		TH_ERR_MEMORYALLOC						2		//�ڴ�������
#define		TH_ERR_DATACRC							3		//�����ļ�CRCУ�����
#define		TH_ERR_GETMODULEPATH					4		//�޷��õ�dll����·��
#define		TH_ERR_FILEIO							5		//�ļ�I/O����
#define		TH_ERR_MODENOTMATCH						6		//����ģʽ���ʼ��ģʽ��ƥ��
#define		TH_ERR_INVALIDFORMAT					7		//��֧�ֵ�ͼ���ʽ
#define		TH_ERR_INVALIDWIDTH						8		//ͼ���ȱ�����8��������


#ifdef __cplusplus
}	// extern "C"
#endif

#endif // !defined(__TH_ERRORDEF_INCLUDE_H__)
