#ifndef _HC_NET_SDK_H_
#define _HC_NET_SDK_H_

#ifndef __PLAYRECT_defined
#define __PLAYRECT_defined
typedef struct __PLAYRECT
{
    int x;                               
    int y;                                  
    int uWidth;                            
    int uHeight;                            
}PLAYRECT;
#endif

#if (defined(_WIN32)) //windows
#define NET_DVR_API  extern "C"__declspec(dllimport)
typedef  unsigned __int64 UINT64;
#elif defined(__linux__) || defined(__APPLE__) //linux
typedef     unsigned int    DWORD;
typedef     unsigned short  WORD;
typedef     unsigned short  USHORT;
typedef     int             LONG;
typedef  	unsigned char	BYTE ;
#define     BOOL int
typedef     unsigned int   	UINT;
typedef 	void* 			LPVOID;
typedef 	void* 			HANDLE;
typedef     unsigned int*  LPDWORD; 
typedef  unsigned long long UINT64;

#ifndef    TRUE
#define    TRUE	1
#endif
#ifndef    FALSE
#define	   FALSE 0
#endif
#ifndef    NULL
#define	   NULL 0
#endif

#define __stdcall 
#define CALLBACK  

#define NET_DVR_API extern "C"
typedef unsigned int   COLORKEY;
typedef unsigned int   COLORREF;

#ifndef __HWND_defined
#define __HWND_defined
	#if defined(__linux__)
		typedef unsigned int HWND;
	#else
		typedef void* HWND;
	#endif
#endif

#define NET_DVR_API extern "C"
typedef unsigned int   COLORKEY; 
typedef unsigned int   COLORREF; 

#ifndef __HDC_defined
#define __HDC_defined
    #if defined(__linux__)
    typedef struct __DC
    {
            void*   surface;        //SDL Surface
            HWND    hWnd;           // HDC window handle
    }DC;
    typedef DC* HDC;
    #else
    typedef void* HDC;
    #endif
#endif

typedef struct tagInitInfo
{
	int uWidth; 
	int uHeight; 
}INITINFO; 
#endif

//�궨��
#define MAX_NAMELEN			    16		//DVR���ص�½��
#define MAX_RIGHT			    32		//�豸֧�ֵ�Ȩ�ޣ�1-12��ʾ����Ȩ�ޣ�13-32��ʾԶ��Ȩ�ޣ�
#define NAME_LEN			    32      //�û�������
#define PASSWD_LEN			    16      //���볤��
#define SERIALNO_LEN		    48      //���кų���
#define MACADDR_LEN			    6       //mac��ַ����
#define MAX_ETHERNET		    2       //�豸������̫����
#define MAX_NETWORK_CARD        4       //�豸�������������Ŀ
#define PATHNAME_LEN		    128     //·������
#define MAX_PRESET_V13          16      //Ԥ�õ�

#define MAX_TIMESEGMENT_V30	    8       //9000�豸���ʱ�����
#define MAX_TIMESEGMENT		    4       //8000�豸���ʱ�����

#define MAX_SHELTERNUM			4       //8000�豸����ڵ�������
#define MAX_DAYS				7       //ÿ������
#define PHONENUMBER_LEN			32      //pppoe���ź�����󳤶�

#define MAX_DISKNUM_V30			33		//9000�豸���Ӳ����/* ���33��Ӳ��(����16������SATAӲ�̡�1��eSATAӲ�̺�16��NFS��) */
#define MAX_DISKNUM		        16      //8000�豸���Ӳ����
#define MAX_DISKNUM_V10		    8       //1.2�汾֮ǰ�汾

#define MAX_WINDOW_V30			32      //9000�豸������ʾ��󲥷Ŵ�����
#define MAX_WINDOW				16      //8000�豸���Ӳ����
#define MAX_VGA_V30				4       //9000�豸���ɽ�VGA��
#define MAX_VGA			    	1       //8000�豸���ɽ�VGA��

#define MAX_USERNUM_V30			32      //9000�豸����û���
#define MAX_USERNUM			    16      //8000�豸����û���
#define MAX_EXCEPTIONNUM_V30	32      //9000�豸����쳣������
#define MAX_EXCEPTIONNUM		16      //8000�豸����쳣������
#define MAX_LINK				6       //8000�豸��ͨ�������Ƶ��������

#define MAX_DECPOOLNUM			4       //��·������ÿ������ͨ������ѭ��������
#define MAX_DECNUM				4       //��·��������������ͨ������ʵ��ֻ��һ������������������
#define MAX_TRANSPARENTNUM		2       //��·���������������͸��ͨ����
#define MAX_CYCLE_CHAN			16      //��·�����������Ѳͨ����
#define MAX_CYCLE_CHAN_V30      64      //�����Ѳͨ��������չ��
#define MAX_DIRNAME_LENGTH		80      //���Ŀ¼����
#define MAX_WINDOWS				16      //��󴰿���

#define MAX_STRINGNUM_V30		8		//9000�豸���OSD�ַ�������
#define MAX_STRINGNUM			4       //8000�豸���OSD�ַ�������
#define MAX_STRINGNUM_EX		8       //8000������չ
#define MAX_AUXOUT_V30			16      //9000�豸����������
#define MAX_AUXOUT			    4       //8000�豸����������
#define MAX_HD_GROUP			16      //9000�豸���Ӳ������
#define MAX_NFS_DISK			8       //8000�豸���NFSӲ����

#define IW_ESSID_MAX_SIZE	    32      //WIFI��SSID�ų���
#define IW_ENCODING_TOKEN_MAX	32      //WIFI��������ֽ���
#define MAX_SERIAL_NUM			64	    //���֧�ֵ�͸��ͨ��·��
#define MAX_DDNS_NUMS	        10      //9000�豸������ddns��
#define MAX_DOMAIN_NAME		    64		/* ����������� */
#define MAX_EMAIL_ADDR_LEN	    48      //���email��ַ����
#define MAX_EMAIL_PWD_LEN		32      //���email���볤��

#define MAXPROGRESS		        100     //�ط�ʱ�����ٷ���
#define MAX_SERIALNUM	        2       //8000�豸֧�ֵĴ����� 1-232�� 2-485
#define CARDNUM_LEN		        20      //���ų���
#define MAX_VIDEOOUT_V30        4       //9000�豸����Ƶ�����
#define MAX_VIDEOOUT	        2       //8000�豸����Ƶ�����

#define MAX_PRESET_V30			256		/* 9000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK_V30			256		/* 9000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE_V30			256		/* 9000�豸֧�ֵ���̨Ѳ���� */
#define MAX_PRESET				128		/* 8000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK				128		/* 8000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE				128		/* 8000�豸֧�ֵ���̨Ѳ���� */

#define CRUISE_MAX_PRESET_NUMS	32 	    /* һ��Ѳ������Ѳ���� */

#define MAX_SERIAL_PORT         8       //9000�豸֧��232������
#define MAX_PREVIEW_MODE        8       /* �豸֧�����Ԥ��ģʽ��Ŀ 1����,4����,9����,16����.... */
#define MAX_MATRIXOUT           16      /* ���ģ������������ */
#define LOG_INFO_LEN            11840   /* ��־������Ϣ */
#define DESC_LEN                16      /* ��̨�����ַ������� */
#define PTZ_PROTOCOL_NUM        200     /* 9000���֧�ֵ���̨Э���� */

#define MAX_AUDIO			    1       //8000�����Խ�ͨ����
#define MAX_AUDIO_V30			2       //9000�����Խ�ͨ����
#define MAX_CHANNUM			    16      //8000�豸���ͨ����
#define MAX_ALARMIN			    16      //8000�豸��󱨾�������
#define MAX_ALARMOUT		    4       //8000�豸��󱨾������
//9000 IPC����
#define MAX_ANALOG_CHANNUM      32      //���32��ģ��ͨ��
#define MAX_ANALOG_ALARMOUT     32      //���32·ģ�ⱨ����� 
#define MAX_ANALOG_ALARMIN      32      //���32·ģ�ⱨ������

#define MAX_IP_DEVICE           32      //�����������IP�豸��
#define MAX_IP_DEVICE_V40       64      // �����������IP�豸�� �������64�� IVMS 2000�����豸
#define MAX_IP_CHANNEL          32      //�����������IPͨ����
#define MAX_IP_ALARMIN          128     //����������౨��������
#define MAX_IP_ALARMOUT         64      //����������౨�������

#define MAX_RECORD_FILE_NUM     20      // ÿ��ɾ�����߿�¼������ļ���
//SDK_V31 ATM
#define MAX_ACTION_TYPE	        12	    //�Զ���Э����ӽ�����Ϊ�����Ϊ���� 
#define MAX_ATM_PROTOCOL_NUM    256   //ÿ�����뷽ʽ��Ӧ��ATM���Э����
#define ATM_CUSTOM_PROTO        1025   //�Զ���Э�� ֵΪ1025
#define ATM_PROTOCOL_SORT       4       //ATMЭ����� 
#define ATM_DESC_LEN            32      //ATM�����ַ�������
// SDK_V31 ATM

#define MAX_EVENTID_LEN         64   //�¼�ID����
#define MAX_IPV6_LEN  			64   //IPv6��ַ��󳤶�

/* ���֧�ֵ�ͨ���� ���ģ��������IP֧�� */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160

#define MAX_LANERECT_NUM        5    //�����ʶ��������
#define MAX_FORTIFY_NUM         10   //��󲼷�����
#define MAX_INTERVAL_NUM        4    //���ʱ��������
#define MAX_CHJC_NUM            3    //�����ʡ�ݼ���ַ�����
#define MAX_VL_NUM              5    //���������Ȧ����
#define MAX_DRIVECHAN_NUM       16   //��󳵵���
#define MAX_COIL_NUM            3    //�����Ȧ����
#define MAX_SIGNALLIGHT_NUM     6   //����źŵƸ���

/*******************ȫ�ִ����� begin**********************/	
#define NET_DVR_NOERROR 					0	//û�д���
#define NET_DVR_PASSWORD_ERROR 				1	//�û����������
#define NET_DVR_NOENOUGHPRI 				2	//Ȩ�޲���
#define NET_DVR_NOINIT 						3	//û�г�ʼ��
#define NET_DVR_CHANNEL_ERROR 				4	//ͨ���Ŵ���
#define NET_DVR_OVER_MAXLINK 				5	//���ӵ�DVR�Ŀͻ��˸����������
#define NET_DVR_VERSIONNOMATCH				6	//�汾��ƥ��
#define NET_DVR_NETWORK_FAIL_CONNECT		7	//���ӷ�����ʧ��
#define NET_DVR_NETWORK_SEND_ERROR			8	//�����������ʧ��
#define NET_DVR_NETWORK_RECV_ERROR			9	//�ӷ�������������ʧ��
#define NET_DVR_NETWORK_RECV_TIMEOUT		10	//�ӷ������������ݳ�ʱ
#define NET_DVR_NETWORK_ERRORDATA			11	//���͵���������
#define NET_DVR_ORDER_ERROR					12	//���ô������
#define NET_DVR_OPERNOPERMIT				13	//�޴�Ȩ��
#define NET_DVR_COMMANDTIMEOUT				14	//DVR����ִ�г�ʱ
#define NET_DVR_ERRORSERIALPORT				15	//���ںŴ���
#define NET_DVR_ERRORALARMPORT				16	//�����˿ڴ���
#define NET_DVR_PARAMETER_ERROR 			17  //��������
#define NET_DVR_CHAN_EXCEPTION				18	//������ͨ�����ڴ���״̬
#define NET_DVR_NODISK						19	//û��Ӳ��
#define NET_DVR_ERRORDISKNUM				20	//Ӳ�̺Ŵ���
#define NET_DVR_DISK_FULL					21	//������Ӳ����
#define NET_DVR_DISK_ERROR					22	//������Ӳ�̳���
#define NET_DVR_NOSUPPORT					23	//��������֧��
#define NET_DVR_BUSY						24	//������æ
#define NET_DVR_MODIFY_FAIL					25	//�������޸Ĳ��ɹ�
#define NET_DVR_PASSWORD_FORMAT_ERROR		26	//���������ʽ����ȷ
#define NET_DVR_DISK_FORMATING				27	//Ӳ�����ڸ�ʽ����������������
#define NET_DVR_DVRNORESOURCE				28	//DVR��Դ����
#define	NET_DVR_DVROPRATEFAILED				29  //DVR����ʧ��
#define NET_DVR_OPENHOSTSOUND_FAIL 			30  //��PC����ʧ��
#define NET_DVR_DVRVOICEOPENED 				31  //�����������Խ���ռ��
#define	NET_DVR_TIMEINPUTERROR				32  //ʱ�����벻��ȷ
#define	NET_DVR_NOSPECFILE					33  //�ط�ʱ������û��ָ�����ļ�
#define NET_DVR_CREATEFILE_ERROR			34	//�����ļ�����
#define	NET_DVR_FILEOPENFAIL				35  //���ļ�����
#define	NET_DVR_OPERNOTFINISH				36  //�ϴεĲ�����û�����
#define	NET_DVR_GETPLAYTIMEFAIL				37  //��ȡ��ǰ���ŵ�ʱ�����
#define	NET_DVR_PLAYFAIL					38  //���ų���
#define NET_DVR_FILEFORMAT_ERROR			39  //�ļ���ʽ����ȷ
#define NET_DVR_DIR_ERROR					40	//·������
#define NET_DVR_ALLOC_RESOURCE_ERROR		41  //��Դ�������
#define NET_DVR_AUDIO_MODE_ERROR			42	//����ģʽ����
#define NET_DVR_NOENOUGH_BUF				43	//������̫С
#define NET_DVR_CREATESOCKET_ERROR		 	44	//����SOCKET����
#define NET_DVR_SETSOCKET_ERROR				45	//����SOCKET����
#define NET_DVR_MAX_NUM						46	//�����ﵽ���
#define NET_DVR_USERNOTEXIST				47	//�û�������
#define NET_DVR_WRITEFLASHERROR				48  //дFLASH����
#define NET_DVR_UPGRADEFAIL					49  //DVR����ʧ��
#define NET_DVR_CARDHAVEINIT				50  //���뿨�Ѿ���ʼ����
#define NET_DVR_PLAYERFAILED				51	//���ò��ſ���ĳ������ʧ��
#define NET_DVR_MAX_USERNUM					52  //�豸���û����ﵽ���
#define NET_DVR_GETLOCALIPANDMACFAIL		53  //��ÿͻ��˵�IP��ַ�������ַʧ��
#define NET_DVR_NOENCODEING					54	//��ͨ��û�б���
#define NET_DVR_IPMISMATCH					55	//IP��ַ��ƥ��
#define NET_DVR_MACMISMATCH					56	//MAC��ַ��ƥ��
#define NET_DVR_UPGRADELANGMISMATCH			57	//�����ļ����Բ�ƥ��
#define NET_DVR_MAX_PLAYERPORT				58	//������·���ﵽ���
#define NET_DVR_NOSPACEBACKUP				59	//�����豸��û���㹻�ռ���б���
#define NET_DVR_NODEVICEBACKUP				60	//û���ҵ�ָ���ı����豸
#define NET_DVR_PICTURE_BITS_ERROR			61	//ͼ����λ����������24ɫ
#define NET_DVR_PICTURE_DIMENSION_ERROR		62	//ͼƬ��*���ޣ� ��128*256
#define NET_DVR_PICTURE_SIZ_ERROR			63	//ͼƬ��С���ޣ���100K
#define NET_DVR_LOADPLAYERSDKFAILED			64	//���뵱ǰĿ¼��Player Sdk����
#define NET_DVR_LOADPLAYERSDKPROC_ERROR		65	//�Ҳ���Player Sdk��ĳ���������
#define NET_DVR_LOADDSSDKFAILED				66	//���뵱ǰĿ¼��DSsdk����
#define NET_DVR_LOADDSSDKPROC_ERROR		    67	//�Ҳ���DsSdk��ĳ���������
#define NET_DVR_DSSDK_ERROR					68	//����Ӳ�����DsSdk��ĳ������ʧ��
#define NET_DVR_VOICEMONOPOLIZE				69	//��������ռ
#define NET_DVR_JOINMULTICASTFAILED			70	//����ಥ��ʧ��
#define NET_DVR_CREATEDIR_ERROR				71	//������־�ļ�Ŀ¼ʧ��
#define NET_DVR_BINDSOCKET_ERROR			72	//���׽���ʧ��
#define NET_DVR_SOCKETCLOSE_ERROR			73	//socket�����жϣ��˴���ͨ�������������жϻ�Ŀ�ĵز��ɴ�
#define NET_DVR_USERID_ISUSING			    74	//ע��ʱ�û�ID���ڽ���ĳ����
#define NET_DVR_SOCKETLISTEN_ERROR			75	//����ʧ��
#define NET_DVR_PROGRAM_EXCEPTION			76	//�����쳣
#define NET_DVR_WRITEFILE_FAILED			77	//д�ļ�ʧ��
#define NET_DVR_FORMAT_READONLY				78  //��ֹ��ʽ��ֻ��Ӳ��
#define NET_DVR_WITHSAMEUSERNAME		    79  //�û����ýṹ�д�����ͬ���û���
#define NET_DVR_DEVICETYPE_ERROR            80  /*�������ʱ�豸�ͺŲ�ƥ��*/
#define NET_DVR_LANGUAGE_ERROR              81  /*�������ʱ���Բ�ƥ��*/
#define NET_DVR_PARAVERSION_ERROR           82  /*�������ʱ����汾��ƥ��*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*Ԥ��ʱ���IPͨ��������*/
#define NET_DVR_RTSP_SDK_ERROR				84	/*���ظ���IPCͨѶ��StreamTransClient.dllʧ��*/
#define NET_DVR_CONVERT_SDK_ERROR			85	/*����ת���ʧ��*/
#define NET_DVR_IPC_COUNT_OVERFLOW			86  /*��������ip����ͨ����*/
#define NET_DVR_MAX_ADD_NUM                 87  /*��ӱ�ǩ(һ���ļ�Ƭ��64)�ȸ����ﵽ���*/
#define NET_DVR_PARAMMODE_ERROR             88 //ͼ����ǿ�ǣ�����ģʽ��������Ӳ������ʱ���ͻ��˽����������ʱ����ֵ��
#define NET_DVR_CODESPITTER_OFFLINE			89 //��Ƶ�ۺ�ƽ̨�������������
#define NET_DVR_BACKUP_COPYING				90  //�豸���ڱ���
#define NET_DVR_CHAN_NOTSUPPORT             91  // ͨ����֧�ָò���
#define NET_DVR_CALLINEINVALID              92  // �߶���λ��̫���л򳤶��߲�����б 
#define NET_DVR_CALCANCELCONFLICT           93  // ȡ���궨��ͻ����������˹���ȫ�ֵ�ʵ�ʴ�С�ߴ����
#define NET_DVR_CALPOINTOUTRANGE            94 	// �궨�㳬����Χ 
#define NET_DVR_FILTERRECTINVALID           95  // �ߴ������������Ҫ��
#define NET_DVR_DDNS_DEVOFFLINE             96  //�豸û��ע�ᵽddns��
#define NET_DVR_DDNS_INTER_ERROR            97  //DDNS �������ڲ�����
#define NET_DVR_FUNCTION_NOT_SUPPORT_OS     98 //�˹��ܲ�֧�ָò���ϵͳ
#define NET_DVR_DEC_CHAN_REBIND             99 //����ͨ������ʾ�����������
#define NET_DVR_ALIAS_DUPLICATE				150	//�����ظ�  //2011-08-31 ͨ�������������к��������豸���°汾ddns������


// 2010-5-28
// ���д�����
#define RAID_ERROR_INDEX	                200
#define NET_DVR_NAME_NOT_ONLY               (RAID_ERROR_INDEX + 0)  // �����Ѵ���
#define NET_DVR_OVER_MAX_ARRAY              (RAID_ERROR_INDEX + 1 ) // ���дﵽ����
#define NET_DVR_OVER_MAX_VD                 (RAID_ERROR_INDEX + 2 ) // ������̴ﵽ����
#define NET_DVR_VD_SLOT_EXCEED              (RAID_ERROR_INDEX + 3 ) // ������̲�λ����
#define NET_DVR_PD_STATUS_INVALID           (RAID_ERROR_INDEX + 4 ) // �ؽ����������������״̬����
#define NET_DVR_PD_BE_DEDICATE_SPARE        (RAID_ERROR_INDEX + 5 ) // �ؽ����������������Ϊָ���ȱ�
#define NET_DVR_PD_NOT_FREE                 (RAID_ERROR_INDEX + 6 ) // �ؽ���������������̷ǿ���
#define NET_DVR_CANNOT_MIG2NEWMODE          (RAID_ERROR_INDEX + 7 ) // ���ܴӵ�ǰ����������Ǩ�Ƶ��µ���������
#define NET_DVR_MIG_PAUSE                   (RAID_ERROR_INDEX + 8 ) // Ǩ�Ʋ�������ͣ
#define NET_DVR_MIG_CANCEL                  (RAID_ERROR_INDEX + 9 ) // ����ִ�е�Ǩ�Ʋ�����ȡ��
#define NET_DVR_EXIST_VD                    (RAID_ERROR_INDEX + 10) // �����������ϴ���������̣��޷�ɾ������
#define NET_DVR_TARGET_IN_LD_FUNCTIONAL     (RAID_ERROR_INDEX + 11) // �����������Ϊ���������ɲ����ҹ�������
#define NET_DVR_HD_IS_ASSIGNED_ALREADY      (RAID_ERROR_INDEX + 12) // ָ����������̱�����Ϊ�������
#define NET_DVR_INVALID_HD_COUNT            (RAID_ERROR_INDEX + 13) // �������������ָ����RAID�ȼ���ƥ��
#define NET_DVR_LD_IS_FUNCTIONAL            (RAID_ERROR_INDEX + 14) // �����������޷��ؽ�
#define NET_DVR_BGA_RUNNING                 (RAID_ERROR_INDEX + 15) // ��������ִ�еĺ�̨����
#define NET_DVR_LD_NO_ATAPI                 (RAID_ERROR_INDEX + 16) // �޷���ATAPI�̴����������
#define NET_DVR_MIGRATION_NOT_NEED          (RAID_ERROR_INDEX + 17) // ��������Ǩ��
#define NET_DVR_HD_TYPE_MISMATCH            (RAID_ERROR_INDEX + 18) // ������̲�����ͬ������
#define NET_DVR_NO_LD_IN_DG                 (RAID_ERROR_INDEX + 19) // ��������̣��޷����д������
#define NET_DVR_NO_ROOM_FOR_SPARE           (RAID_ERROR_INDEX + 20) // ���̿ռ��С���޷���ָ��Ϊ�ȱ���
#define NET_DVR_SPARE_IS_IN_MULTI_DG        (RAID_ERROR_INDEX + 21) // �����ѱ�����Ϊĳ�����ȱ���
#define NET_DVR_DG_HAS_MISSING_PD           (RAID_ERROR_INDEX + 22) // ����ȱ����

// x86 64bit nvr���� 2012-02-04
#define NET_DVR_NAME_EMPTY					(RAID_ERROR_INDEX + 23) /*����Ϊ��*/
#define NET_DVR_INPUT_PARAM					(RAID_ERROR_INDEX + 24) /*�����������*/
#define NET_DVR_PD_NOT_AVAILABLE			(RAID_ERROR_INDEX + 25) /*������̲�����*/
#define NET_DVR_ARRAY_NOT_AVAILABLE			(RAID_ERROR_INDEX + 26) /*���в�����*/
#define NET_DVR_PD_COUNT					(RAID_ERROR_INDEX + 27) /*�������������ȷ*/
#define NET_DVR_VD_SMALL					(RAID_ERROR_INDEX + 28) /*�������̫С*/
#define NET_DVR_NO_EXIST					(RAID_ERROR_INDEX + 29) /*������*/
#define NET_DVR_NOT_SUPPORT					(RAID_ERROR_INDEX + 30) /*��֧�ָò���*/
#define NET_DVR_NOT_FUNCTIONAL	 			(RAID_ERROR_INDEX + 31) /*����״̬��������״̬*/
#define NET_DVR_DEV_NODE_NOT_FOUND			(RAID_ERROR_INDEX + 32) /*��������豸�ڵ㲻����*/
#define NET_DVR_SLOT_EXCEED					(RAID_ERROR_INDEX + 33) /*��λ�ﵽ����*/ 
#define NET_DVR_NO_VD_IN_ARRAY				(RAID_ERROR_INDEX + 34) /*�����ϲ������������*/
#define NET_DVR_VD_SLOT_INVALID				(RAID_ERROR_INDEX + 35) /*������̲�λ��Ч*/
#define NET_DVR_PD_NO_ENOUGH_SPACE			(RAID_ERROR_INDEX + 36) /*����������̿ռ䲻��*/
#define NET_DVR_ARRAY_NONFUNCTION			(RAID_ERROR_INDEX + 37) /*ֻ�д�������״̬�����в��ܽ���Ǩ��*/
#define NET_DVR_ARRAY_NO_ENOUGH_SPACE		(RAID_ERROR_INDEX + 38) /*���пռ䲻��*/
#define NET_DVR_STOPPING_SCANNING_ARRAY		(RAID_ERROR_INDEX + 39) /*����ִ�а�ȫ���̻�����ɨ��*/
#define NET_DVR_NOT_SUPPORT_16T             (RAID_ERROR_INDEX + 40) /*��֧�ִ�������16T������*/


// ���ܴ����� 
#define VCA_ERROR_INDEX                     300 // ���ܴ���������
#define NET_DVR_ID_ERROR                    (VCA_ERROR_INDEX + 0)   // ����ID������
#define NET_DVR_POLYGON_ERROR               (VCA_ERROR_INDEX + 1)   // ����β�����Ҫ��
#define NET_DVR_RULE_PARAM_ERROR            (VCA_ERROR_INDEX + 2)   // �������������
#define NET_DVR_RULE_CFG_CONFLICT           (VCA_ERROR_INDEX + 3)   // ������Ϣ��ͻ
#define NET_DVR_CALIBRATE_NOT_READY         (VCA_ERROR_INDEX + 4)   // ��ǰû�б궨��Ϣ
#define NET_DVR_CAMERA_DATA_ERROR           (VCA_ERROR_INDEX + 5)   // ���������������
#define NET_DVR_CALIBRATE_DATA_UNFIT        (VCA_ERROR_INDEX + 6)	// ���Ȳ�����б�������ڱ궨
#define NET_DVR_CALIBRATE_DATA_CONFLICT     (VCA_ERROR_INDEX + 7)	// �궨������Ϊ���е㹲�߻���λ��̫����
#define NET_DVR_CALIBRATE_CALC_FAIL         (VCA_ERROR_INDEX + 8)	// ������궨����ֵ����ʧ��
#define	NET_DVR_CALIBRATE_LINE_OUT_RECT		(VCA_ERROR_INDEX + 9)	// ����������궨�߳�����������Ӿ��ο�
#define NET_DVR_ENTER_RULE_NOT_READY		(VCA_ERROR_INDEX + 10)	// û�����ý�������
#define NET_DVR_AID_RULE_NO_INCLUDE_LANE	(VCA_ERROR_INDEX + 11)	// ��ͨ�¼�������û�а�����������ֵӵ�º����У�
#define NET_DVR_LANE_NOT_READY				(VCA_ERROR_INDEX + 12)	// ��ǰû�����ó���
#define NET_DVR_RULE_INCLUDE_TWO_WAY		(VCA_ERROR_INDEX + 13)	// �¼������а���2�ֲ�ͬ����
#define NET_DVR_LANE_TPS_RULE_CONFLICT      (VCA_ERROR_INDEX + 14)  // ���������ݹ����ͻ
#define NET_DVR_NOT_SUPPORT_EVENT_TYPE      (VCA_ERROR_INDEX + 15)  // ��֧�ֵ��¼�����
#define NET_DVR_LANE_NO_WAY                 (VCA_ERROR_INDEX + 16)  // ����û�з���
#define NET_DVR_SIZE_FILTER_ERROR           (VCA_ERROR_INDEX + 17)  // �ߴ���˿򲻺���
#define NET_DVR_LIB_FFL_NO_FACE             (VCA_ERROR_INDEX + 18) // �����㶨λʱ�����ͼ��û������
#define NET_DVR_LIB_FFL_IMG_TOO_SMALL       (VCA_ERROR_INDEX + 19) // �����㶨λʱ�����ͼ��̫С
#define NET_DVR_LIB_FD_IMG_NO_FACE          (VCA_ERROR_INDEX + 20) // ����ͼ���������ʱ�����ͼ��û������
#define NET_DVR_LIB_FACE_TOO_SMALL          (VCA_ERROR_INDEX + 21) // ��ģʱ����̫С
#define NET_DVR_LIB_FACE_QUALITY_TOO_BAD    (VCA_ERROR_INDEX + 22) // ��ģʱ����ͼ������̫��
#define NET_DVR_KEY_PARAM_ERR               (VCA_ERROR_INDEX + 23) //�߼��������ô���
#define NET_DVR_CALIBRATE_DATA_ERR          (VCA_ERROR_INDEX + 24) //�궨������Ŀ���󣬻�����ֵ���󣬻������㳬����ƽ��
#define NET_DVR_CALIBRATE_DISABLE_FAIL      (VCA_ERROR_INDEX + 25) //�����ù�������ȡ���궨
#define NET_DVR_VCA_LIB_FD_SCALE_OUTRANGE   (VCA_ERROR_INDEX + 26) //�����˿�Ŀ����Сֵ������С���˿�Ŀ�����ֵ��������
#define NET_DVR_LIB_FD_REGION_TOO_LARGE     (VCA_ERROR_INDEX + 27) //��ǰ�������Χ���󡣼�������Ϊͼ���2/3


#define NET_DVR_RTSP_ERROR_NOENOUGHPRI          401  //��Ȩ�ޣ�����������401ʱ��ת�����������
#define NET_DVR_RTSP_ERROR_ALLOC_RESOURCE       402  //������Դʧ��
#define NET_DVR_RTSP_ERROR_PARAMETER            403  //��������
#define NET_DVR_RTSP_ERROR_NO_URL               404  //ָ����URL��ַ�����ڣ�����������404ʱ��ת�����������
#define NET_DVR_RTSP_ERROR_FORCE_STOP           406  //�û���;ǿ���˳�

#define NET_DVR_RTSP_GETPORTFAILED			    407  //rtsp �õ��˿ڴ���
#define NET_DVR_RTSP_DESCRIBERROR			    410  //rtsp decribe ��������
#define NET_DVR_RTSP_DESCRIBESENDTIMEOUT		411  //rtsp decribe ���ͳ�ʱ
#define NET_DVR_RTSP_DESCRIBESENDERROR			412  //rtsp decribe ����ʧ��
#define NET_DVR_RTSP_DESCRIBERECVTIMEOUT		413  //rtsp decribe ���ճ�ʱ
#define NET_DVR_RTSP_DESCRIBERECVDATALOST		414  //rtsp decribe �������ݴ���
#define NET_DVR_RTSP_DESCRIBERECVERROR			415  //rtsp decribe ����ʧ��
#define NET_DVR_RTSP_DESCRIBESERVERERR			416  //rtsp decribe ����������401:�û���������������Ȩ��,���� 501:�豸�ڲ���Դ����ʧ�� 

#define NET_DVR_RTSP_SETUPERROR			        420  //rtsp setup ��������
#define NET_DVR_RTSP_SETUPSENDTIMEOUT			421  //rtsp setup ���ͳ�ʱ
#define NET_DVR_RTSP_SETUPSENDERROR				422  //rtsp setup ���ʹ���
#define NET_DVR_RTSP_SETUPRECVTIMEOUT			423  //rtsp setup ���ճ�ʱ
#define NET_DVR_RTSP_SETUPRECVDATALOST			424  //rtsp setup �������ݴ���
#define NET_DVR_RTSP_SETUPRECVERROR				425  //rtsp setup ����ʧ��
#define NET_DVR_RTSP_OVER_MAX_CHAN				426  //rtsp setup ����������401,501�ȴ���,�������������

#define NET_DVR_RTSP_PLAYERROR			        430  //rtsp play ��������
#define NET_DVR_RTSP_PLAYSENDTIMEOUT			431  //rtsp play ���ͳ�ʱ
#define NET_DVR_RTSP_PLAYSENDERROR				432  //rtsp play ���ʹ���
#define NET_DVR_RTSP_PLAYRECVTIMEOUT			433  //rtsp play ���ճ�ʱ
#define NET_DVR_RTSP_PLAYRECVDATALOST			434  //rtsp play �������ݴ���
#define NET_DVR_RTSP_PLAYRECVERROR				435  //rtsp play ����ʧ��
#define NET_DVR_RTSP_PLAYSERVERERR				436  //rtsp play ����������401,501�ȴ���

#define NET_DVR_RTSP_TEARDOWNERROR			    440  //rtsp teardown ��������
#define NET_DVR_RTSP_TEARDOWNSENDTIMEOUT		441  //rtsp teardown ���ͳ�ʱ
#define NET_DVR_RTSP_TEARDOWNSENDERROR			442  //rtsp teardown ���ʹ���
#define NET_DVR_RTSP_TEARDOWNRECVTIMEOUT		443  //rtsp teardown ���ճ�ʱ
#define NET_DVR_RTSP_TEARDOWNRECVDATALOST		444  //rtsp teardown �������ݴ���
#define NET_DVR_RTSP_TEARDOWNRECVERROR			445  //rtsp teardown ����ʧ��
#define NET_DVR_RTSP_TEARDOWNSERVERERR			446  //rtsp teardown ����������401,501�ȴ���

#define  NET_PLAYM4_NOERROR					    500	//no error
#define	 NET_PLAYM4_PARA_OVER				    501	//input parameter is invalid;
#define  NET_PLAYM4_ORDER_ERROR				    502	//The order of the function to be called is error.
#define	 NET_PLAYM4_TIMER_ERROR				    503	//Create multimedia clock failed;
#define  NET_PLAYM4_DEC_VIDEO_ERROR			    504	//Decode video data failed.
#define  NET_PLAYM4_DEC_AUDIO_ERROR			    505	//Decode audio data failed.
#define	 NET_PLAYM4_ALLOC_MEMORY_ERROR		    506	//Allocate memory failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR			    507	//Open the file failed.
#define  NET_PLAYM4_CREATE_OBJ_ERROR		    508	//Create thread or event failed
#define  NET_PLAYM4_CREATE_DDRAW_ERROR		    509	//Create DirectDraw object failed.
#define  NET_PLAYM4_CREATE_OFFSCREEN_ERROR      510	//failed when creating off-screen surface.
#define  NET_PLAYM4_BUF_OVER			        511	//buffer is overflow
#define  NET_PLAYM4_CREATE_SOUND_ERROR	        512	//failed when creating audio device.	
#define	 NET_PLAYM4_SET_VOLUME_ERROR	        513	//Set volume failed
#define  NET_PLAYM4_SUPPORT_FILE_ONLY	        514	//The function only support play file.
#define  NET_PLAYM4_SUPPORT_STREAM_ONLY	        515	//The function only support play stream.
#define  NET_PLAYM4_SYS_NOT_SUPPORT		        516	//System not support.
#define  NET_PLAYM4_FILEHEADER_UNKNOWN          517	//No file header.
#define  NET_PLAYM4_VERSION_INCORRECT	        518	//The version of decoder and encoder is not adapted.  
#define  NET_PALYM4_INIT_DECODER_ERROR          519	//Initialize decoder failed.
#define  NET_PLAYM4_CHECK_FILE_ERROR	        520	//The file data is unknown.
#define  NET_PLAYM4_INIT_TIMER_ERROR	        521	//Initialize multimedia clock failed.
#define	 NET_PLAYM4_BLT_ERROR			        522	//Blt failed.
#define  NET_PLAYM4_UPDATE_ERROR		        523	//Update failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR_MULTI       524   //openfile error, streamtype is multi
#define  NET_PLAYM4_OPEN_FILE_ERROR_VIDEO       525   //openfile error, streamtype is video
#define  NET_PLAYM4_JPEG_COMPRESS_ERROR         526   //JPEG compress error
#define  NET_PLAYM4_EXTRACT_NOT_SUPPORT         527	//Don't support the version of this file.
#define  NET_PLAYM4_EXTRACT_DATA_ERROR          528	//extract video data failed.

#define NET_QOS_OK								 700					//no error
#define NET_QOS_ERROR							 (NET_QOS_OK - 1)		//qos error
#define NET_QOS_ERR_INVALID_ARGUMENTS			 (NET_QOS_OK - 2)		//invalid arguments 
#define NET_QOS_ERR_SESSION_NOT_FOUND			 (NET_QOS_OK - 3)		//session net found
#define NET_QOS_ERR_LIB_NOT_INITIALIZED          (NET_QOS_OK - 4)		//lib not initialized
#define NET_QOS_ERR_OUTOFMEM                     (NET_QOS_OK - 5)		//outtofmem
#define NET_QOS_ERR_PACKET_UNKNOW                (NET_QOS_OK - 10)		//packet unknow
#define NET_QOS_ERR_PACKET_VERSION               (NET_QOS_OK - 11)		//packet version error
#define NET_QOS_ERR_PACKET_LENGTH                (NET_QOS_OK - 12)		//packet length error
#define NET_QOS_ERR_PACKET_TOO_BIG               (NET_QOS_OK - 13)		//packet too big
#define NET_QOS_ERR_SCHEDPARAMS_INVALID_BANDWIDTH (NET_QOS_OK - 20)		//schedparams invalid bandwidth
#define NET_QOS_ERR_SCHEDPARAMS_BAD_FRACTION      (NET_QOS_OK - 21)		//schedparams bad fraction
#define NET_QOS_ERR_SCHEDPARAMS_BAD_MINIMUM_INTERVAL (NET_QOS_OK - 22)	//schedparams bad minimum interval

#define NET_ERROR_TRUNK_LINE						711 //��ϵͳ�ѱ���ɸ���
#define NET_ERROR_MIXED_JOINT						712 //���ܽ��л��ƴ��
#define NET_ERROR_DISPLAY_SWITCH					713 //���ܽ�����ʾͨ���л�
#define NET_ERROR_USED_BY_BIG_SCREEN				714 //������Դ������ռ��
#define NET_ERROR_USE_OTHER_DEC_RESOURCE			715 //����ʹ������������ϵͳ��Դ

#define NET_DVR_DEV_NET_OVERFLOW		            800	//�������������豸��������
#define NET_DVR_STATUS_RECORDFILE_WRITING_NOT_LOCK  801 //¼���ļ���¼���޷������� 
#define NET_DVR_STATUS_CANT_FORMAT_LITTLE_DISK      802 //����Ӳ��̫С�޷���ʽ��

//2011-10-25���������������루900-950��
#define  NET_ERR_WINCHAN_IDX				        901	// ����ͨ���Ŵ���
#define  NET_ERR_WIN_LAYER						    902	// ���ڲ������󣬵�����Ļ����า�ǵĴ��ڲ���
#define  NET_ERR_WIN_BLK_NUM			            903	// ���ڵĿ������󣬵������ڿɸ��ǵ���Ļ����
#define  NET_ERR_OUTPUT_RESOLUTION	                904	// ����ֱ��ʴ���
#define  NET_ERR_LAYOUT							    905	// ���ֺŴ���
#define  NET_ERR_INPUT_RESOLUTION    	            906 // ����ֱ��ʲ�֧��
#define  NET_ERR_SUBDEVICE_OFFLINE                  907 // ���豸������
#define  NET_ERR_NO_DECODE_CHAN                     908 // û�п��н���ͨ��
#define  NET_ERR_MAX_WINDOW_ABILITY                 909 // ������������
#define  NET_ERR_ORDER_ERROR                        910 // ����˳������
#define  NET_ERR_PLAYING_PLAN    					911 //����ִ��Ԥ��
#define  NET_ERR_DECODER_USED						912 //���������ʹ��
#define	 NET_ERR_OUTPUT_BOARD_DATA_OVERFLOW			913	// ���������������
#define	 NET_ERR_SAME_USER_NAME						914	// �û�����ͬ
#define	 NET_ERR_INVALID_USER_NAME					915	// ��Ч�û���
#define	 NET_ERR_MATRIX_USING						916	// �����������ʹ��
#define	 NET_ERR_DIFFERENT_CHAN_TYPE				917	// ͨ�����Ͳ�ͬ���������ͨ���Ϳ�����������Ϊ��ͬ�����ͣ�
#define	 NET_ERR_INPUT_CHAN_BINDED					918	// ����ͨ���Ѿ������������
#define	 NET_ERR_BINDED_OUTPUT_CHAN_OVERFLOW		919	// ����ʹ�õľ������ͨ����������������������󶨵�ͨ������
#define	 NET_ERR_MAX_SIGNAL_NUM						920	// �����ź�Դ�����ﵽ����
#define  NET_ERR_INPUT_CHAN_USING					921	// ����ͨ������ʹ��


//�����������루951-1000��
#define  NET_ERR_MAX_WIN_OVERLAP                    951 //�ﵽ��󴰿��ص���
//�����������������
#define		XML_ANALYZE_NOENOUGH_BUF				1001		//����ڴ治��
#define		XML_ANALYZE_FIND_LOCALXML_ERROR			1002		//�޷��ҵ���Ӧ�ı���xml
#define		XML_ANALYZE_LOAD_LOCALXML_ERROR			1003		//���ر���xml����
#define		XML_NANLYZE_DVR_DATA_FORMAT_ERROR		1004		//�豸�������ݸ�ʽ����
#define		XML_ANALYZE_TYPE_ERROR					1005		//���������ʹ���
#define		XML_ANALYZE_XML_NODE_ERROR				1006		//XML�����ڵ��ʽ����

//2012-10-16 �����豸�����루1200~1300��
#define NET_ERR_SEARCHING_MODULE                    1201 // �����������ģ��
#define NET_ERR_REGISTERING_MODULE                  1202 // ����ע�����ģ��
#define NET_ERR_GETTING_ZONES						1203 // ���ڻ�ȡ��������
#define NET_ERR_GETTING_TRIGGERS					1204 // ���ڻ�ȡ������
#define NET_ERR_ARMED_STATUS						1205 // ϵͳ���ڲ���״̬
#define	NET_ERR_PROGRAM_MODE_STATUS					1206 // ϵͳ���ڱ��ģʽ
#define	NET_ERR_WALK_TEST_MODE_STATUS				1207 // ϵͳ���ڲ���ģʽ
#define	NET_ERR_BYPASS_STATUS						1208 // ��·״̬
#define NET_ERR_DISABLED_MODULE_STATUS				1209 // ����δʹ��
#define	NET_ERR_NOT_SUPPORT_OPERATE_ZONE			1210 // ������֧�ָò���
#define NET_ERR_NOT_SUPPORT_MOD_MODULE_ADDR			1211 // ģ���ַ���ܱ��޸�
#define NET_ERR_UNREGISTERED_MODULE					1212 // ģ��δע��
#define NET_ERR_PUBLIC_SUBSYSTEM_ASSOCIATE_SELF		1213 // ������ϵͳ��������
#define NET_ERR_EXCEEDS_ASSOCIATE_SUBSYSTEM_NUM		1214 // ����������ϵͳ����������
#define NET_ERR_BE_ASSOCIATED_BY_PUBLIC_SUBSYSTEM	1215 // ��ϵͳ������������ϵͳ����
#define	NET_ERR_ZONE_FAULT_STATUS					1216 // �������ڹ���״̬
#define  NET_ERR_SAME_EVENT_TYPE					1217 //�¼�������������������¼�������������ر�������ͬ�¼�����	
#define NET_ERR_ZONE_ALARM_STATUS					1218 //�������ڱ���״̬
#define NET_ERR_EXPANSION_BUS_SHORT_CIRCUIT			1219 //��չ���߶�·

//2012-12-20ץ�Ļ������루1400-1499��
#define NET_DVR_ERR_LANENUM_EXCEED                  1400  //��������������
#define NET_DVR_ERR_PRAREA_EXCEED                   1401  //��ʶ�������
#define NET_DVR_ERR_LIGHT_PARAM                     1402  //�źŵƽ����������
#define NET_DVR_ERR_LANE_LINE_INVALID               1403  //���������ô���
#define NET_DVR_ERR_STOP_LINE_INVALID               1404  //ֹͣ�����ô���
#define NET_DVR_ERR_LEFTORRIGHT_LINE_INVALID        1405  //��/��ת�ֽ������ô���
#define NET_DVR_ERR_LANE_NO_REPEAT                  1406  //���ӳ������ظ�
#define NET_DVR_ERR_PRAREA_INVALID                  1407  //��ʶ����β�����Ҫ��
#define NET_DVR_ERR_LIGHT_NUM_EXCEED                1408  //��Ƶ��⽻ͨ���źŵ���Ŀ�������ֵ
#define NET_DVR_ERR_SUBLIGHT_NUM_INVALID            1409  //��Ƶ��⽻ͨ���źŵ��ӵ���Ŀ���Ϸ�
#define NET_DVR_ERR_LIGHT_AREASIZE_INVALID          1410  //��Ƶ��⽻ͨ�������źŵƿ��С���Ϸ�
#define NET_DVR_ERR_LIGHT_COLOR_INVALID             1411  //��Ƶ��⽻ͨ�������źŵ���ɫ���Ϸ�
#define NET_DVR_ERR_LIGHT_DIRECTION_INVALID         1412  //��Ƶ��⽻ͨ������Ʒ������Բ��Ϸ�

/*******************ȫ�ִ����� end**********************/

/*************************************************
NET_DVR_IsSupport()����ֵ
1��9λ�ֱ��ʾ������Ϣ��λ����TRUE)��ʾ֧�֣�
**************************************************/
#define NET_DVR_SUPPORT_DDRAW			0x01//֧��DIRECTDRAW�������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLT				0x02//�Կ�֧��BLT�����������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLTFOURCC		0x04//�Կ�BLT֧����ɫת���������֧�֣��������������������RGBת����
#define NET_DVR_SUPPORT_BLTSHRINKX		0x08//�Կ�BLT֧��X����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSHRINKY		0x10//�Կ�BLT֧��Y����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHX		0x20//�Կ�BLT֧��X��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHY		0x40//�Կ�BLT֧��Y��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_SSE				0x80//CPU֧��SSEָ�Intel Pentium3����֧��SSEָ�
#define NET_DVR_SUPPORT_MMX				0x100//CPU֧��MMXָ���Intel Pentium3����֧��SSEָ�

/**********************��̨�������� begin*************************/	
#define LIGHT_PWRON		2	/* ��ͨ�ƹ��Դ */
#define WIPER_PWRON		3	/* ��ͨ��ˢ���� */
#define FAN_PWRON		4	/* ��ͨ���ȿ��� */
#define HEATER_PWRON	5	/* ��ͨ���������� */
#define AUX_PWRON1		6	/* ��ͨ�����豸���� */
#define AUX_PWRON2		7	/* ��ͨ�����豸���� */
#define SET_PRESET		8	/* ����Ԥ�õ� */
#define CLE_PRESET		9	/* ���Ԥ�õ� */

#define ZOOM_IN			11	/* �������ٶ�SS���(���ʱ��) */
#define ZOOM_OUT		12	/* �������ٶ�SS��С(���ʱ�С) */
#define FOCUS_NEAR      13  /* �������ٶ�SSǰ�� */
#define FOCUS_FAR       14  /* �������ٶ�SS��� */
#define IRIS_OPEN       15  /* ��Ȧ���ٶ�SS���� */
#define IRIS_CLOSE      16  /* ��Ȧ���ٶ�SS��С */

#define TILT_UP			21	/* ��̨��SS���ٶ����� */
#define TILT_DOWN		22	/* ��̨��SS���ٶ��¸� */
#define PAN_LEFT		23	/* ��̨��SS���ٶ���ת */
#define PAN_RIGHT		24	/* ��̨��SS���ٶ���ת */
#define UP_LEFT			25	/* ��̨��SS���ٶ���������ת */
#define UP_RIGHT		26	/* ��̨��SS���ٶ���������ת */
#define DOWN_LEFT		27	/* ��̨��SS���ٶ��¸�����ת */
#define DOWN_RIGHT		28	/* ��̨��SS���ٶ��¸�����ת */
#define PAN_AUTO		29	/* ��̨��SS���ٶ������Զ�ɨ�� */

#define FILL_PRE_SEQ	30	/* ��Ԥ�õ����Ѳ������ */
#define SET_SEQ_DWELL	31	/* ����Ѳ����ͣ��ʱ�� */
#define SET_SEQ_SPEED	32	/* ����Ѳ���ٶ� */
#define CLE_PRE_SEQ		33	/* ��Ԥ�õ��Ѳ��������ɾ�� */
#define STA_MEM_CRUISE	34	/* ��ʼ��¼�켣 */
#define STO_MEM_CRUISE	35	/* ֹͣ��¼�켣 */
#define RUN_CRUISE		36	/* ��ʼ�켣 */
#define RUN_SEQ			37	/* ��ʼѲ�� */
#define STOP_SEQ		38	/* ֹͣѲ�� */
#define GOTO_PRESET		39	/* ����ת��Ԥ�õ� */

#define DEL_SEQ         43  /* ɾ��Ѳ��·�� */

#define PAN_CIRCLE      50  //��̨��SS���ٶ��Զ�Բ��ɨ��
/**********************��̨�������� end*************************/	

/*************************************************
�ط�ʱ���ſ�������궨�� 
NET_DVR_PlayBackControl
NET_DVR_PlayControlLocDisplay
NET_DVR_DecPlayBackCtrl�ĺ궨��
����֧�ֲ鿴����˵���ʹ���
**************************************************/	
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYFRAME		8//��֡��
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYAUDIOVOLUME	11//��������
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���
#define NET_DVR_PLAYGETPOS		13//��ȡ�ļ��طŵĽ���
#define NET_DVR_PLAYGETTIME		14//��ȡ��ǰ�Ѿ����ŵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_PLAYGETFRAME	15//��ȡ��ǰ�Ѿ����ŵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALFRAMES  16//��ȡ��ǰ�����ļ��ܵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALTIME    17//��ȡ��ǰ�����ļ��ܵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_THROWBFRAME		20//��B֡
#define NET_DVR_SETSPEED		24//���������ٶ�
#define NET_DVR_KEEPALIVE		25//�������豸������(����ص�����������2�뷢��һ��)
#define NET_DVR_PLAYSETTIME		26//������ʱ�䶨λ
#define NET_DVR_PLAYGETTOTALLEN	27//��ȡ��ʱ��طŶ�Ӧʱ����ڵ������ļ����ܳ���
#define NET_DVR_PLAY_FORWARD    29 //�����л�Ϊ����
#define NET_DVR_PLAY_REVERSE    30 //�����л�Ϊ����

//Զ�̰����������£�
/* key value send to CONFIG program */
#define KEY_CODE_1      1
#define KEY_CODE_2      2
#define KEY_CODE_3      3
#define KEY_CODE_4      4
#define KEY_CODE_5      5
#define KEY_CODE_6      6
#define KEY_CODE_7      7
#define KEY_CODE_8      8
#define KEY_CODE_9      9
#define KEY_CODE_0      10
#define KEY_CODE_POWER  11
#define KEY_CODE_MENU   12
#define KEY_CODE_ENTER  13
#define KEY_CODE_CANCEL 14
#define KEY_CODE_UP     15
#define KEY_CODE_DOWN   16
#define KEY_CODE_LEFT   17
#define KEY_CODE_RIGHT  18
#define KEY_CODE_EDIT   19
#define KEY_CODE_ADD    20
#define KEY_CODE_MINUS  21
#define KEY_CODE_PLAY   22
#define KEY_CODE_REC    23
#define KEY_CODE_PAN    24
#define KEY_CODE_M      25
#define KEY_CODE_A      26
#define KEY_CODE_F1     27
#define KEY_CODE_F2     28

/* for PTZ control */
#define KEY_PTZ_UP_START        KEY_CODE_UP
#define KEY_PTZ_UP_STOP         32

#define KEY_PTZ_DOWN_START      KEY_CODE_DOWN
#define KEY_PTZ_DOWN_STOP       33

#define KEY_PTZ_LEFT_START      KEY_CODE_LEFT
#define KEY_PTZ_LEFT_STOP       34

#define KEY_PTZ_RIGHT_START     KEY_CODE_RIGHT
#define KEY_PTZ_RIGHT_STOP      35

#define KEY_PTZ_AP1_START       KEY_CODE_EDIT /* ��Ȧ+ */
#define KEY_PTZ_AP1_STOP        36

#define KEY_PTZ_AP2_START       KEY_CODE_PAN /* ��Ȧ- */
#define KEY_PTZ_AP2_STOP        37

#define KEY_PTZ_FOCUS1_START    KEY_CODE_A /* �۽�+ */
#define KEY_PTZ_FOCUS1_STOP     38

#define KEY_PTZ_FOCUS2_START    KEY_CODE_M /* �۽�- */
#define KEY_PTZ_FOCUS2_STOP     39

#define KEY_PTZ_B1_START        40 /* �䱶+ */
#define KEY_PTZ_B1_STOP         41

#define KEY_PTZ_B2_START        42 /* �䱶- */
#define KEY_PTZ_B2_STOP         43

//9000����
#define KEY_CODE_11             44
#define KEY_CODE_12             45
#define KEY_CODE_13             46
#define KEY_CODE_14             47
#define KEY_CODE_15             48
#define KEY_CODE_16             49

#define AUDIOTALKTYPE_G722       0
#define AUDIOTALKTYPE_G711_MU    1
#define AUDIOTALKTYPE_G711_A	 2
#define AUDIOTALKTYPE_G726		 6
/*************************������������ begin*******************************/
//����NET_DVR_SetDVRConfig��NET_DVR_GetDVRConfig,ע�����Ӧ�����ýṹ

#define NET_DVR_GET_DEVICECFG		100		//��ȡ�豸����
#define NET_DVR_SET_DEVICECFG		101		//�����豸����
#define NET_DVR_GET_NETCFG			102		//��ȡ�������
#define NET_DVR_SET_NETCFG			103		//�����������
#define NET_DVR_GET_PICCFG			104		//��ȡͼ�����
#define NET_DVR_SET_PICCFG			105		//����ͼ�����
#define NET_DVR_GET_COMPRESSCFG		106		//��ȡѹ������
#define NET_DVR_SET_COMPRESSCFG		107		//����ѹ������
#define NET_DVR_GET_RECORDCFG		108		//��ȡ¼��ʱ�����
#define NET_DVR_SET_RECORDCFG		109		//����¼��ʱ�����
#define NET_DVR_GET_DECODERCFG		110		//��ȡ����������
#define NET_DVR_SET_DECODERCFG		111		//���ý���������
#define NET_DVR_GET_RS232CFG 		112		//��ȡ232���ڲ���
#define NET_DVR_SET_RS232CFG		113		//����232���ڲ���
#define NET_DVR_GET_ALARMINCFG 		114		//��ȡ�����������
#define NET_DVR_SET_ALARMINCFG		115		//���ñ����������
#define NET_DVR_GET_ALARMOUTCFG 	116		//��ȡ�����������
#define NET_DVR_SET_ALARMOUTCFG		117		//���ñ����������
#define NET_DVR_GET_TIMECFG 		118		//��ȡDVRʱ��
#define NET_DVR_SET_TIMECFG			119		//����DVRʱ��
#define NET_DVR_GET_PREVIEWCFG 		120		//��ȡԤ������
#define NET_DVR_SET_PREVIEWCFG		121		//����Ԥ������
#define NET_DVR_GET_VIDEOOUTCFG 	122		//��ȡ��Ƶ�������
#define NET_DVR_SET_VIDEOOUTCFG		123		//������Ƶ�������
#define NET_DVR_GET_USERCFG 		124		//��ȡ�û�����
#define NET_DVR_SET_USERCFG			125		//�����û�����
#define NET_DVR_GET_EXCEPTIONCFG 	126		//��ȡ�쳣����
#define NET_DVR_SET_EXCEPTIONCFG	127		//�����쳣����
#define NET_DVR_GET_ZONEANDDST		128		//��ȡʱ������ʱ�Ʋ���
#define NET_DVR_SET_ZONEANDDST		129		//����ʱ������ʱ�Ʋ���
#define NET_DVR_GET_SHOWSTRING		130		//��ȡ�����ַ�����
#define NET_DVR_SET_SHOWSTRING		131		//���õ����ַ�����
#define NET_DVR_GET_EVENTCOMPCFG	132		//��ȡ�¼�����¼�����
#define NET_DVR_SET_EVENTCOMPCFG	133		//�����¼�����¼�����
#define NET_DVR_GET_FTPCFG			134		//��ȡץͼ��FTP����(����)
#define NET_DVR_SET_FTPCFG			135		//����ץͼ��FTP����(����)
#define NET_DVR_GET_AUXOUTCFG		140		//��ȡ�������������������(HS�豸�������2006-02-28)
#define NET_DVR_SET_AUXOUTCFG		141		//���ñ������������������(HS�豸�������2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX 	142		//��ȡ-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX	143		//����-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)

/*********************************���ܲ��ֽӿ� begin***************************************/
//��Ϊ��Ӧ��NET_VCA_RULECFG��
#define NET_DVR_SET_RULECFG		    152	//������Ϊ��������
#define NET_DVR_GET_RULECFG	        153	//��ȡ��Ϊ��������
//����궨������NET_DVR_TRACK_CFG ��
#define NET_DVR_SET_TRACK_CFG       160//������������ò��� 
#define NET_DVR_GET_TRACK_CFG       161//��ȡ��������ò���

//���ܷ�����ȡ�����ýṹ
#define NET_DVR_SET_IVMS_STREAMCFG	162		//�������ܷ�����ȡ������
#define NET_DVR_GET_IVMS_STREAMCFG	163		//��ȡ���ܷ�����ȡ������
//���ܿ��Ʋ����ṹ
#define NET_DVR_SET_VCA_CTRLCFG		164	 //�������ܿ��Ʋ���
#define NET_DVR_GET_VCA_CTRLCFG		165	 //��ȡ���ܿ��Ʋ���
//��������NET_VCA_MASK_REGION_LIST
#define NET_DVR_SET_VCA_MASK_REGION	166	 //���������������
#define NET_DVR_GET_VCA_MASK_REGION	167	 //��ȡ�����������

//ATM�������� NET_VCA_ENTER_REGION
#define NET_DVR_SET_VCA_ENTER_REGION 168	 //���ý����������
#define NET_DVR_GET_VCA_ENTER_REGION 169	 //��ȡ�����������

//�궨������NET_VCA_LINE_SEGMENT_LIST
#define NET_DVR_SET_VCA_LINE_SEGMENT 170	 //���ñ궨��
#define NET_DVR_GET_VCA_LINE_SEGMENT 171	 //��ȡ�궨��

// ivms��������NET_IVMS_MASK_REGION_LIST
#define NET_DVR_SET_IVMS_MASK_REGION 172	 //����IVMS�����������
#define NET_DVR_GET_IVMS_MASK_REGION 173	 //��ȡIVMS�����������
// ivms����������NET_IVMS_ENTER_REGION
#define NET_DVR_SET_IVMS_ENTER_REGION 174	 //����IVMS�����������
#define NET_DVR_GET_IVMS_ENTER_REGION 175	 //��ȡIVMS�����������

#define NET_DVR_SET_IVMS_BEHAVIORCFG  176	//�������ܷ�������Ϊ�������
#define NET_DVR_GET_IVMS_BEHAVIORCFG  177	//��ȡ���ܷ�������Ϊ�������

// IVMS �طż���
#define NET_DVR_IVMS_SET_SEARCHCFG		178	//����IVMS�طż�������
#define NET_DVR_IVMS_GET_SEARCHCFG		179	//��ȡIVMS�طż�������

#define NET_DVR_SET_POSITION_TRACK      180     // ���ó�������������Ϣ
#define NET_DVR_GET_POSITION_TRACK      181     // ��ȡ��������������Ϣ

#define NET_DVR_SET_CALIBRATION         182    // ���ñ궨��Ϣ
#define NET_DVR_GET_CALIBRATION         183    // ��ȡ�궨��Ϣ

#define NET_DVR_SET_PDC_RULECFG         184    // ����������ͳ�ƹ���
#define NET_DVR_GET_PDC_RULECFG         185    // ��ȡ������ͳ�ƹ���

#define NET_DVR_SET_PU_STREAMCFG        186     // ����ǰ��ȡ���豸��Ϣ
#define NET_DVR_GET_PU_STREAMCFG        187     // ��ȡǰ��ȡ���豸��Ϣ

#define NET_VCA_SET_SIZE_FILTER         194     // ����ȫ�ֳߴ������
#define NET_VCA_GET_SIZE_FILTER         195     // ��ȡȫ�ֳߴ������

#define NET_DVR_SET_TRACK_PARAMCFG      196     // ����������ز˵�����
#define NET_DVR_GET_TRACK_PARAMCFG      197     // ��ȡ������ز˵�����

#define NET_DVR_SET_DOME_MOVEMENT_PARAM 198     // ���������о����
#define NET_DVR_GET_DOME_MOVEMENT_PARAM 199     // ��ȡ�����о����

/**************************************���ܲ��ֽӿ� begin**********************************/


#define NET_DVR_GET_PICCFG_EX		200		//��ȡͼ�����(SDK_V14��չ����)
#define NET_DVR_SET_PICCFG_EX		201		//����ͼ�����(SDK_V14��չ����)
#define NET_DVR_GET_USERCFG_EX 		202		//��ȡ�û�����(SDK_V15��չ����)
#define NET_DVR_SET_USERCFG_EX		203		//�����û�����(SDK_V15��չ����)
#define NET_DVR_GET_COMPRESSCFG_EX	204		//��ȡѹ������(SDK_V15��չ����2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX	205		//����ѹ������(SDK_V15��չ����2006-05-15)


#define NET_DVR_GET_NETAPPCFG		222		//��ȡ����Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG		223		//��������Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG			224		//��ȡ����Ӧ�ò��� NTP
#define NET_DVR_SET_NTPCFG			225		//��������Ӧ�ò��� NTP
#define NET_DVR_GET_DDNSCFG			226		//��ȡ����Ӧ�ò��� DDNS
#define NET_DVR_SET_DDNSCFG			227		//��������Ӧ�ò��� DDNS
//��ӦNET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG		228		//��ȡ����Ӧ�ò��� EMAIL
#define NET_DVR_SET_EMAILCFG		229		//��������Ӧ�ò��� EMAIL

#define NET_DVR_GET_NFSCFG			230		/* NFS disk config */
#define NET_DVR_SET_NFSCFG			231		/* NFS disk config */

#define NET_DVR_GET_SHOWSTRING_EX	238		//��ȡ�����ַ�������չ(֧��8���ַ�)
#define NET_DVR_SET_SHOWSTRING_EX	239		//���õ����ַ�������չ(֧��8���ַ�)
#define NET_DVR_GET_NETCFG_OTHER	244		//��ȡ�������
#define NET_DVR_SET_NETCFG_OTHER	245		//�����������

//��ӦNET_DVR_EMAILCFG�ṹ
#define NET_DVR_GET_EMAILPARACFG	250		//Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG	251		//Setup EMAIL parameters


#define NET_DVR_GET_DDNSCFG_EX		274	//��ȡ��չDDNS����
#define NET_DVR_SET_DDNSCFG_EX		275	//������չDDNS����

#define	NET_DVR_SET_PTZPOS			292		//��̨����PTZλ��
#define	NET_DVR_GET_PTZPOS			293		//��̨��ȡPTZλ��
#define	NET_DVR_GET_PTZSCOPE		294		//��̨��ȡPTZ��Χ

#define NET_DVR_GET_AP_INFO_LIST	305//��ȡ����������Դ����
#define NET_DVR_SET_WIFI_CFG		306	//����IP����豸���߲���
#define NET_DVR_GET_WIFI_CFG		307	//��ȡIP����豸���߲���
#define NET_DVR_SET_WIFI_WORKMODE	308	//����IP����豸���ڹ���ģʽ����
#define NET_DVR_GET_WIFI_WORKMODE	309	//��ȡIP����豸���ڹ���ģʽ����
/*********************************���ܽ�ͨ�¼�begin***************************************/
#define NET_DVR_GET_REFERENCE_REGION            400          // ��ȡ�ο�����
#define NET_DVR_SET_REFERENCE_REGION            401          // ���òο�����

#define NET_DVR_GET_TRAFFIC_MASK_REGION         402     // ��ȡ��ͨ�¼���������
#define NET_DVR_SET_TRAFFIC_MASK_REGION         403     //  ���ý�ͨ�¼���������
#define NET_DVR_SET_AID_RULECFG                 404         // ���ý�ͨ�¼��������
#define NET_DVR_GET_AID_RULECFG                 405         // ��ȡ��ͨ�¼��������

#define NET_DVR_SET_TPS_RULECFG                 406         // ���ý�ͨͳ�ƹ������
#define NET_DVR_GET_TPS_RULECFG                 407         // ��ȡ��ͨͳ�ƹ������

#define NET_DVR_SET_LANECFG				        408			// ���ó�������
#define	NET_DVR_GET_LANECFG				        409			// ��ȡ��������


/*********************************���ܽ�ͨ�¼�end***************************************/
#define NET_DVR_SET_FACEDETECT_RULECFG          420         // ��������������
#define NET_DVR_GET_FACEDETECT_RULECFG          421         // ��ȡ����������

/***************************DS9000��������(_V30) begin *****************************/
//����(NET_DVR_NETCFG_V30�ṹ)
#define NET_DVR_GET_NETCFG_V30		            1000		//��ȡ�������
#define NET_DVR_SET_NETCFG_V30		            1001		//�����������

//ͼ��(NET_DVR_PICCFG_V30�ṹ)
#define NET_DVR_GET_PICCFG_V30		            1002		//��ȡͼ�����
#define NET_DVR_SET_PICCFG_V30		            1003		//����ͼ�����

//¼��ʱ��(NET_DVR_RECORD_V30�ṹ)
#define NET_DVR_GET_RECORDCFG_V30	            1004		//��ȡ¼�����
#define NET_DVR_SET_RECORDCFG_V30	            1005		//����¼�����

//�û�(NET_DVR_USER_V30�ṹ)
#define NET_DVR_GET_USERCFG_V30 	            1006		//��ȡ�û�����
#define NET_DVR_SET_USERCFG_V30		            1007		//�����û�����

//9000DDNS��������(NET_DVR_DDNSPARA_V30�ṹ)
#define     NET_DVR_GET_DDNSCFG_V30		        1010		//��ȡDDNS(9000��չ)
#define     NET_DVR_SET_DDNSCFG_V30		        1011		//����DDNS(9000��չ)

//EMAIL����(NET_DVR_EMAILCFG_V30�ṹ)
#define NET_DVR_GET_EMAILCFG_V30		        1012	//��ȡEMAIL���� 
#define NET_DVR_SET_EMAILCFG_V30		        1013	//����EMAIL���� 

//Ѳ������ (NET_DVR_CRUISE_PARA�ṹ)
#define 	NET_DVR_GET_CRUISE			        1020		
#define 	NET_DVR_SET_CRUISE			        1021		


//��������ṹ���� (NET_DVR_ALARMINCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMINCFG_V30			1024		
#define 	NET_DVR_SET_ALARMINCFG_V30			1025

//��������ṹ���� (NET_DVR_ALARMOUTCFG_V30�ṹ)
#define 	NET_DVR_GET_ALARMOUTCFG_V30			1026		
#define 	NET_DVR_SET_ALARMOUTCFG_V30			1027

//��Ƶ����ṹ���� (NET_DVR_VIDEOOUT_V30�ṹ)
#define 	NET_DVR_GET_VIDEOOUTCFG_V30			1028		
#define 	NET_DVR_SET_VIDEOOUTCFG_V30			1029	

//�����ַ��ṹ���� (NET_DVR_SHOWSTRING_V30�ṹ)
#define 	NET_DVR_GET_SHOWSTRING_V30			1030		
#define 	NET_DVR_SET_SHOWSTRING_V30			1031

//�쳣�ṹ���� (NET_DVR_EXCEPTION_V30�ṹ)
#define 	NET_DVR_GET_EXCEPTIONCFG_V30		1034		
#define 	NET_DVR_SET_EXCEPTIONCFG_V30		1035

//����232�ṹ���� (NET_DVR_RS232CFG_V30�ṹ)
#define 	NET_DVR_GET_RS232CFG_V30			1036		
#define 	NET_DVR_SET_RS232CFG_V30			1037

//����Ӳ�̽���ṹ���� (NET_DVR_NET_DISKCFG�ṹ)
#define		NET_DVR_GET_NET_DISKCFG				1038		//����Ӳ�̽����ȡ
#define		NET_DVR_SET_NET_DISKCFG				1039		//����Ӳ�̽�������
//ѹ������ (NET_DVR_COMPRESSIONCFG_V30�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_V30	        1040		
#define     NET_DVR_SET_COMPRESSCFG_V30	        1041		

//��ȡ485���������� (NET_DVR_DECODERCFG_V30�ṹ)
#define     NET_DVR_GET_DECODERCFG_V30		    1042		//��ȡ����������
#define     NET_DVR_SET_DECODERCFG_V30		    1043		//���ý���������

//��ȡԤ������ (NET_DVR_PREVIEWCFG_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_V30		    1044		//��ȡԤ������
#define     NET_DVR_SET_PREVIEWCFG_V30		    1045		//����Ԥ������

//����Ԥ������ (NET_DVR_PREVIEWCFG_AUX_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30		1046		//��ȡ����Ԥ������
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30		1047		//���ø���Ԥ������

//IP�������ò��� ��NET_DVR_IPPARACFG�ṹ��
#define     NET_DVR_GET_IPPARACFG               1048        //��ȡIP����������Ϣ 
#define     NET_DVR_SET_IPPARACFG               1049        //����IP����������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMINCFG�ṹ��
#define     NET_DVR_GET_IPALARMINCFG            1050        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMINCFG            1051        //����IP�����������������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMOUTCFG�ṹ��
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //��ȡIP�����������������Ϣ 
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //����IP�����������������Ϣ

//Ӳ�̹���Ĳ�����ȡ (NET_DVR_HDCFG�ṹ)
#define     NET_DVR_GET_HDCFG			        1054	    //��ȡӲ�̹������ò���
#define     NET_DVR_SET_HDCFG			        1055	    //����Ӳ�̹������ò���
//�������Ĳ�����ȡ (NET_DVR_HDGROUP_CFG�ṹ)
#define     NET_DVR_GET_HDGROUP_CFG			    1056	    //��ȡ����������ò���
#define     NET_DVR_SET_HDGROUP_CFG			    1057	    //��������������ò���

//�豸������������(NET_DVR_COMPRESSION_AUDIO�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_AUD         1058        //��ȡ�豸�����Խ��������
#define     NET_DVR_SET_COMPRESSCFG_AUD         1059        //�����豸�����Խ��������

//IP�������ò��� ��NET_DVR_IPPARACFG_V31�ṹ��
#define     NET_DVR_GET_IPPARACFG_V31           1060        //��ȡIP����������Ϣ 
#define     NET_DVR_SET_IPPARACFG_V31           1061        //����IP����������Ϣ

// ͨ����Դ���� (NET_DVR_IPPARACFG_V40�ṹ)
#define NET_DVR_GET_IPPARACFG_V40               1062        // ��ȡIP��������
#define NET_DVR_SET_IPPARACFG_V40               1063        // ����IP��������

#define NET_DVR_GET_CCDPARAMCFG                 1067       //IPC��ȡCCD��������
#define NET_DVR_SET_CCDPARAMCFG                 1068       //IPC����CCD��������

#define NET_DVR_GET_IOINCFG		                1070    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOINCFG		                1071	 //����ץ�Ļ�IO�������

#define NET_DVR_GET_IOOUTCFG		            1072    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOOUTCFG		            1073	 //����ץ�Ļ�IO�������

#define NET_DVR_GET_FLASHCFG		            1074    //��ȡIO������������
#define NET_DVR_SET_FLASHCFG		            1075	 //����IO������������

#define NET_DVR_GET_LIGHTSNAPCFG		        1076    //��ȡץ�Ļ����̵Ʋ���
#define NET_DVR_SET_LIGHTSNAPCFG	        	1077	 //����ץ�Ļ����̵Ʋ���

#define NET_DVR_GET_MEASURESPEEDCFG		        1078    //��ȡץ�Ļ����ٲ���
#define NET_DVR_SET_MEASURESPEEDCFG		        1079	 //����ץ�Ļ����ٲ���

#define NET_DVR_GET_IMAGEOVERLAYCFG	            1080//��ȡץ�Ļ�ͼ�������Ϣ����
#define NET_DVR_SET_IMAGEOVERLAYCFG	            1081//����ץ�Ļ�ͼ�������Ϣ����

#define NET_DVR_GET_SNAPCFG	                    1082//��ȡ��IO����ץ�Ĺ�������
#define NET_DVR_SET_SNAPCFG	                    1083//���õ�IO����ץ�Ĺ�������

#define NET_DVR_GET_VTPPARAM		            1084//��ȡ������Ȧ����
#define NET_DVR_SET_VTPPARAM		            1085//����������Ȧ����

#define NET_DVR_GET_SNAPENABLECFG				1086//��ȡץ�Ļ�ʹ�ܲ���
#define NET_DVR_SET_SNAPENABLECFG				1087//����ץ�Ļ�ʹ�ܲ���

#define NET_DVR_GET_POSTEPOLICECFG              1088//��ȡ���ڵ羯����
#define NET_DVR_SET_POSTEPOLICECFG              1089//���ÿ��ڵ羯����

#define NET_DVR_GET_JPEGCFG_V30					1090		//��ȡץͼ��JPEG����(����)
#define NET_DVR_SET_JPEGCFG_V30					1091		//����ץͼ��JPEG����(����)

#define NET_DVR_GET_SPRCFG	                    1092    //��ȡ����ʶ�����
#define NET_DVR_SET_SPRCFG	                    1093    //���ó���ʶ�����
#define NET_DVR_GET_PLCCFG                      1094   //��ȡ�������Ȳ�������
#define NET_DVR_SET_PLCCFG                      1095  //���ó������Ȳ�������

#define NET_DVR_GET_DEVICESTATECFG              1096   //��ȡ�豸��ǰ״̬����

#define NET_DVR_GET_DEVICECFG_V40	            1100//��ȡ��չ�豸���� 
#define NET_DVR_SET_DEVICECFG_V40	            1101//������չ�豸����

#define NET_DVR_GET_ZEROCHANCFG   	            1102	//��ȡ��ͨ��ѹ������ 
#define NET_DVR_SET_ZEROCHANCFG  	            1103	//������ͨ��ѹ������

#define NET_DVR_GET_ZERO_PREVIEWCFG_V30         1104    // ��ȡ��ͨ��Ԥ����������
#define NET_DVR_SET_ZERO_PREVIEWCFG_V30         1105    // ������ͨ��Ԥ����������

#define NET_DVR_SET_ZERO_ZOOM	                1106     //������ͨ������������ 
#define NET_DVR_GET_ZERO_ZOOM	                1107     //��ȡ��ͨ������������

#define	NET_DVR_NATASSOCIATECFG_GET	            1110    //��ȡNAT���������Ϣ
#define	NET_DVR_NATASSOCIATECFG_SET	            1111     //����NAT���������Ϣ

#define NET_DVR_GET_SNMPCFG   	                1112    //��ȡSNMP���� 
#define NET_DVR_SET_SNMPCFG  	                1113    //����SNMP����

#define NET_DVR_GET_SNMPCFG_V30   	            1114        //��ȡSNMPv30���� 
#define NET_DVR_SET_SNMPCFG_V30  	            1115        //����SNMPv30����

#define	NET_DVR_VIDEOPLATFORMALARMCFG_GET	    1130  //��ȡ��Ƶ�ۺ�ƽ̨��������
#define	NET_DVR_VIDEOPLATFORMALARMCFG_SET	    1131  //������Ƶ�ۺ�ƽ̨��������

#define NET_DVR_GET_RAID_ADAPTER_INFO           1134    // ��ȡ��������Ϣ
#define NET_DVR_SET_RAID_ADAPTER_INFO           1135    // ������������Ϣ   

#define	NET_DVR_MATRIX_BIGSCREENCFG_GET		    1140//��ȡ����ƴ�Ӳ���
#define	NET_DVR_MATRIX_BIGSCREENCFG_SET		    1141//���ô���ƴ�Ӳ���

#define NET_DVR_GET_MB_PLATFORMPARA			    1145 //��ȡƽ̨��¼����
#define NET_DVR_SET_MB_PLATFORMPARA			    1146 //����ƽ̨��¼����
#define NET_DVR_GET_MB_DEVSTATUS                1147 //��ȡ�ƶ��豸״̬

//����������
#define NET_DVR_GET_NETCFG_MULTI                1161        //��ȡ����������
#define NET_DVR_SET_NETCFG_MULTI                1162        //���ö���������

#define NET_DVR_GET_CMSPARA			            1170//��ȡƽ̨����
#define NET_DVR_SET_CMSPARA			            1171//����ƽ̨����
#define NET_DVR_GET_DIALSTATUS		            1172//��ȡ����״̬����
#define NET_DVR_GET_SMSRELATIVEPARA	            1173//��ȡ������ز���
#define NET_DVR_SET_SMSRELATIVEPARA	            1174//���ö�����ز���
#define NET_DVR_GET_PINSTATUS		            1175//��ȡPin״̬
#define NET_DVR_SET_PINCMD			            1176//����PIN����


#define NET_DVR_SET_SENSOR_CFG					1180        // ����ģ��������
#define NET_DVR_GET_SENSOR_CFG					1181        // ��ȡģ��������
#define NET_DVR_SET_ALARMIN_PARAM				1182		// ���ñ����������
#define NET_DVR_GET_ALARMIN_PARAM				1183		// ��ȡ�����������
#define NET_DVR_SET_ALARMOUT_PARAM				1184		// ���ñ����������
#define NET_DVR_GET_ALARMOUT_PARAM				1185		// ��ȡ�����������
#define NET_DVR_SET_SIREN_PARAM					1186		// ���þ��Ų���
#define NET_DVR_GET_SIREN_PARAM					1187		// ��ȡ���Ų���
#define NET_DVR_SET_ALARM_RS485CFG				1188		// ���ñ�������485����
#define NET_DVR_GET_ALARM_RS485CFG				1189		// ��ȡ��������485����
#define NET_DVR_GET_ALARMHOST_MAIN_STATUS		1190		// ��ȡ����������Ҫ״̬
#define NET_DVR_GET_ALARMHOST_OTHER_STATUS		1191		// ��ȡ������������״̬
#define NET_DVR_SET_ALARMHOST_ENABLECFG			1192		//��ȡ��������ʹ��״̬
#define NET_DVR_GET_ALARMHOST_ENABLECFG			1193		//���ñ�������ʹ��״̬
#define NET_DVR_SET_ALARM_CAMCFG				1194		// ������Ƶ�ۺ�ƽ̨��������CAM��������
#define NET_DVR_GET_ALARM_CAMCFG				1195		// ������Ƶ�ۺ�ƽ̨��������CAM��������
#define NET_DVR_GET_GATEWAY_CFG                 1196        // ��ȡ�Ž���������
#define NET_DVR_SET_GATEWAY_CFG                 1197        // �����Ž���������
#define NET_DVR_GET_POS_TEXT_CFG                1198        //��ȡPOS��������
#define NET_DVR_SET_POS_TEXT_CFG                1199        //����POS��������

#define NET_DVR_GET_ALARMDIALMODECFG			1198		//��ȡ�����������Ų���
#define NET_DVR_SET_ALARMDIALMODECFG			1199		//���ñ����������Ų���
#define	NET_DVR_SET_WINCFG			            1202        //���ڲ�������
#define NET_DVR_GET_ALARMHOSTDIALSETUPMODE		1204		//��ȡ���������������÷�ʽ
#define NET_DVR_SET_ALARMHOSTDIALSETUPMODE		1205		//���ñ��������������÷�ʽ

#define NET_DVR_GET_HOLIDAY_PARAM_CFG           1240        // ��ȡ�ڼ��ղ���
#define NET_DVR_SET_HOLIDAY_PARAM_CFG           1241        // ���ýڼ��ղ���

#define NET_DVR_GET_MOTION_HOLIDAY_HANDLE       1242        // ��ȡ�ƶ������ձ�������ʽ
#define NET_DVR_SET_MOTION_HOLIDAY_HANDLE       1243        // ��ȡ�ƶ������ձ�������ʽ

#define NET_DVR_GET_VILOST_HOLIDAY_HANDLE       1244        // ��ȡ��Ƶ�źŶ�ʧ���ձ�������ʽ
#define NET_DVR_SET_VILOST_HOLIDAY_HANDLE       1245        // ��ȡ��Ƶ�źŶ�ʧ���ձ�������ʽ

#define NET_DVR_GET_HIDE_HOLIDAY_HANDLE         1246        // ��ȡ�ڸǼ��ձ�������ʽ
#define NET_DVR_SET_HIDE_HOLIDAY_HANDLE         1247        // �����ڸǼ��ձ�������ʽ

#define NET_DVR_GET_ALARMIN_HOLIDAY_HANDLE      1248        // ��ȡ����������ձ�������ʽ
#define NET_DVR_SET_ALARMIN_HOLIDAY_HANDLE      1249        // ���ñ���������ձ�������ʽ
#define NET_DVR_GET_ALARMOUT_HOLIDAY_HANDLE     1250        // ��ȡ����������ձ�������ʽ
#define NET_DVR_SET_ALARMOUT_HOLIDAY_HANDLE     1251        // ���ñ���������ձ�������ʽ
#define NET_DVR_GET_HOLIDAY_RECORD              1252        // ��ȡ����¼�����
#define NET_DVR_SET_HOLIDAY_RECORD              1253        // ���ü���¼�����
#define NET_DVR_GET_NETWORK_BONDING             1254        // ��ȡBONDING�������
#define NET_DVR_SET_NETWORK_BONDING             1255        // ����BONDING�������
#define NET_DVR_GET_LINK_STATUS                 1256        // ��ȡͨ��IP����״̬
#define NET_DVR_GET_DISK_QUOTA_CFG              1278        // ��ȡ���������Ϣ
#define NET_DVR_SET_DISK_QUOTA_CFG              1279        // ���ô��������Ϣ
#define NET_DVR_GET_JPEG_CAPTURE_CFG            1280        // ��ȡDVRץͼ����
#define NET_DVR_SET_JPEG_CAPTURE_CFG            1281        // ����DVRץͼ����
#define NET_DVR_GET_SCHED_CAPTURECFG            1282        // ��ȡץͼ�ƻ�
#define NET_DVR_SET_SCHED_CAPTURECFG            1283        // ����ץͼ�ƻ�
#define NET_DVR_GET_VGA_PREVIEWCFG              1284        // ��ȡVGAԤ������
#define NET_DVR_SET_VGA_PREVIEWCFG              1285        // ����VGAԤ������ 
#define NET_DVR_GET_VIDEO_INPUT_EFFECT          1286        // ��ȡͨ����Ƶ����ͼ�����
#define NET_DVR_SET_VIDEO_INPUT_EFFECT          1287        // ����ͨ����Ƶ����ͼ�����

#define NET_DVR_GET_OPTICAL_CHANNEL				1300	//��ȡ�����ϵͳͨ��������Ϣ
#define NET_DVR_SET_OPTICAL_CHANNEL				1301	//���ù����ϵͳͨ��������Ϣ
#define NET_DVR_GET_FIBER_CASCADE				1302	//��ȡ���˼���ģʽ
#define NET_DVR_SET_FIBER_CASCADE				1303	//���ù��˼���ģʽ
#define NET_DVR_GET_SPARTAN_STATUS				1304	//��ȡ����״̬
#define NET_DVR_SET_SPARTAN_STATUS				1305	//���ó���״̬
#define NET_DVR_GET_ETHERNET_CHANNEL			1306	//��ȡ�˿ھۺϲ���
#define NET_DVR_SET_ETHERMET_CHANNEL			1307	//���ö˿ھۺϲ���
#define NET_DVR_OPTICAL_REBOOT					1320	//��˻�����
#define NET_DVR_SET_AUDIOCHAN_CFG				1321	//������Ƶ�л�����
#define NET_DVR_GET_AUDIOCHAN_CFG				1322	//��ȡ��Ƶ�л�����

#define	NET_DVR_BIGSCREENASSOCIATECFG_GET		1511 //��ȡ������������
#define	NET_DVR_BIGSCREENASSOCIATECFG_SET		1512 //���ô�����������

//1200��
#define		NET_DVR_GETSCREENINFO		        1601 //��ȡ������Ϣ����
#define		NET_DVR_SETSCREENINFO		        1602 //���ô�����Ϣ����
#define		NET_DVR_GET_SCREEN_WINCFG	        1603//�������ڲ�����ȡ
#define		NET_DVR_LAYOUTLIST_GET 		        1605//��ȡ�����б�
#define		NET_DVR_SET_LAYOUTCFG		        1606 //��������
#define		NET_DVR_LAYOUTCTRL			        1607//���ֿ��ƣ�1-open��2-close
#define		NET_DVR_INPUTLIST_GET		        1608 //��ȡ�����ź�Դ�б�
#define		NET_DVR_SET_INPUTSTREAMCFG	        1609 //�����ź�Դ���� 
#define		NET_DVR_OUTPUT_SET			        1610 //�����������
#define		NET_DVR_OUTPUT_GET			        1611 //���������ȡ
#define		NET_DVR_SET_OSDCFG			        1612 //OSD��������
#define		NET_DVR_GET_OSDCFG			        1613 //OSD������ȡ
#define		NET_DVR_BIGSCREEN_GETSERIAL         1614//��ȡ����������Ϣ
#define		NET_DVR_GET_PLANLIST		        1615	//��ȡԤ���б�
#define		NET_DVR_SET_PLAN			        1616	//����Ԥ��
#define		NET_DVR_CTRL_PLAN			        1617	//����Ԥ��
#define		NET_DVR_GET_DEVICE_RUN_STATUS       1618	//��ȡ�豸����״̬
#define 	NET_DVR_GET_EXTERNAL_MATRIX_CFG		1619	//��ȡ������Ϣ
#define		NET_DVR_SET_EXTERNAL_MATRIX_CFG		1620	//���þ�����Ϣ
#define		NET_DVR_GET_OUTPUT_SCREEN_RELATION	1621	//��ȡ�������Ļ�İ󶨹�ϵ
#define		NET_DVR_SET_OUTPUT_SCREEN_RELATION	1622	//�����������Ļ�İ󶨹�ϵ
#define 	NET_DVR_GET_VCS_USER_CFG			1623	//��ȡ�û���Ϣ����
#define		NET_DVR_SET_VCS_USER_CFG			1624	//�����û���Ϣ����

#define NET_DVR_GET_DEV_BASEINFO			    1650	// ��ȡ�����豸��Ϣ
#define NET_DVR_SET_DEV_BASEINFO			    1651	// ���õ����豸��Ϣ
#define NET_DVR_GET_DEV_NETINFO				    1652	// ��ȡ�豸��������Ϣ
#define NET_DVR_SET_DEV_NETINFO				    1653	// �����豸��������Ϣ
#define NET_DVR_GET_SIGNAL_SOURCE_INFO		    1654	// ��ȡ�ź�Դ��Ϣ
#define NET_DVR_SET_SIGNAL_SOURCE_INFO		    1655	// �����ź�Դ��Ϣ
#define NET_DVR_ADJUST_PIC_V40				    1656	// ͼ��΢��
#define NET_DVR_RESTORE_V40					    1657	// �ָ�Ĭ�ϲ���
#define	NET_DVR_SET_NET_SIGNAL				    1658	// ���������ź�Դ
#define NET_DVR_REBOOT_V40					    1659	// ����

#define NET_DVR_GET_AUTO_REBOOT_CFG             1710    //��ȡ�Զ���������
#define NET_DVR_SET_AUTO_REBOOT_CFG             1711    //�����Զ���������
#define NET_DVR_GET_TRUNK_USE_STATE 			1713	//��ȡָ������ʹ��״̬
#define NET_DVR_SET_PTZ_CTRL_INFO 				1714	//����PTZ���Ʋ���
#define NET_DVR_GET_PTZ_CTRL_INFO 				1715	//��ȡPTZ���Ʋ���
#define NET_DVR_GET_PTZ_STATUS 					1716	//��ȡPTZ״̬
#define	NET_DVR_GET_DISP_ROUTE_LIST				1717	//��ȡ��ʾ·���б�

#define NET_DVR_GET_ALARMHOSTSUBSYSTEM_CFG	    2001			//����������ȡ��ϵͳ����
#define NET_DVR_SET_ALARMHOSTSUBSYSTEM_CFG	    2002			//��������������ϵͳ����
#define NET_DVR_GETEXTENDALARMININFO    	    2003			//��ȡ���������Ϣ
#define NET_DVR_MODIFYALARMINNO 	            2004			//�޸ķ��������Ϣ
#define NET_DVR_GET_ALARMHOST_WIRELESS_NETWORK_CFG			2005	//��ȡ���������������
#define	NET_DVR_SET_ALARMHOST_WIRELESS_NETWORK_CFG			2006	//�������������������
#define	NET_DVR_GET_ALARMHOST_NETCFG		    2007			//��ȡ�����������
#define	NET_DVR_SET_ALARMHOST_NETCFG		    2008			//���������������

#define NET_DVR_GET_ALARMHOST_AUDIO_ASSOCIATE_ALARM		2021 //��ȡ��Ƶ���汨���¼�
#define NET_DVR_SET_ALARMHOST_AUDIO_ASSOCIATE_ALARM		2022 //������Ƶ���汨���¼�
#define NET_DVR_GET_LED_SCREEN_CFG		2009	// ��ȡLED��Ļ����
#define NET_DVR_SET_LED_SCREEN_CFG		2010	// ����LED��Ļ����
#define NET_DVR_GET_LED_CONTENT_CFG		2011	// ��ȡLED��������
#define	NET_DVR_SET_LED_CONTENT_CFG		2012	// ����LED��������
#define NET_DVR_TURNON_LED				2013	// ��LED��
#define NET_DVR_TURNOFF_LED				2014	// �ر�LED��
#define NET_DVR_GET_LED_TIMER_SWITCH	2015	// ��ȡLED����ʱ���ز���
#define NET_DVR_SET_LED_TIMER_SWITCH	2016	// ����LED����ʱ���ز���
#define NET_DVR_SET_LED_BRIGHTNESS		2017	// �ֶ�����LED������
#define NET_DVR_GET_LED_TIMER_BRIGHTNESS		    2018	// ���÷�ʱLED������
#define NET_DVR_SET_LED_TIMER_BRIGHTNESS		    2019	// ��ȡ��ʱLED������
#define NET_DVR_LED_CHECKTIME						2020	// LEDУʱ
#define	NET_DVR_GET_LED_STATUS						2023	//��ȡLED��״̬
#define NET_DVR_CLOSE_SUBSYSTEM_FAULT_ALARM         2027       // �ر���ϵͳ������ʾ��
#define NET_DVR_SET_SUBSYSTEM_BYPASS				2028       // ��ϵͳ��·
#define NET_DVR_CANCEL_SUBSYSTEM_BYPASS				2029       // ��ϵͳ��·�ָ�

#define  NET_DVR_GET_ALARMHOST_SUBSYSTEM_CFG_EX				2030			//��ȡ��ϵͳ��չ����
#define	 NET_DVR_SET_ALARMHOST_SUBSYSTEM_CFG_EX				2031			//������ϵͳ��չ����
#define  NET_DVR_GET_ALARMHOST_PRINTER_CFG					2032			//��ȡ��ӡ����ӡʹ��
#define	 NET_DVR_SET_ALARMHOST_PRINTER_CFG					2033			//���ô�ӡ����ӡʹ��
#define	 NET_DVR_GET_ALARMHOST_ZONE_LIST_IN_SUBSYSTEM		2034			//��ȡָ����ϵͳ�ڵ����з���
#define	 NET_DVR_GET_ALARMHOST_TRIGGER_LIST					2035			//��ȡ���д�����
#define	 NET_DVR_ARM_ALARMHOST_SUBSYSTEM					2036			//���������Ͷ���ϵͳ����
#define	 NET_DVR_GET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG		2037			// ��ȡ�¼����������������
#define  NET_DVR_SET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG		2038			// �����¼����������������
#define	 NET_DVR_GET_ALARMHOST_FAULT_CFG					2039			// ��ȡ���ϴ�������
#define  NET_DVR_SET_ALARMHOST_FAULT_CFG					2040			// ���ù��ϴ�������
#define  NET_DVR_SEARCH_ARMHOST_EXTERNAL_MODULE 			2041			//�Զ�����
#define	 NET_DVR_REGISTER_ALARMHOST_EXTERNAL_MODULE			2042			//�Զ�ע��
#define  NET_DVR_CLOSE_ALARMHOST_OVERALL_FAULT_ALARM 		2043			//�ر�ȫ�ֹ�����ʾ��

#define NET_DVR_GET_SAFETYCABIN_WORK_MODE			2044 //��ȡ�����չ���ģʽ����
#define NET_DVR_SET_SAFETYCABIN_WORK_MODE			2045 //���÷����չ���ģʽ����
#define NET_DVR_GET_SAFETYCABIN_PERSON_SIGNAL_CFG   2046 //��ȡ���������ź�̽�����
#define NET_DVR_SET_SAFETYCABIN_PERSON_SIGNAL_CFG   2047 //���÷��������ź�̽�����

#define  NET_DVR_GET_ALARMHOST_MODULE_CFG					2048			// ��ȡģ����Ϣ
//#define  NET_DVR_SET_ALARMHOST_MODULE_CFG					2049			// ����ģ����Ϣ(Ԥ��)

#define NET_ITC_GET_TRIGGERCFG                  3003  //��ȡ��������
#define NET_ITC_SET_TRIGGERCFG                  3004  //���ô�������
#define NET_ITC_GET_IOOUT_PARAM_CFG	            3005  //��ȡIO���������3.1��֮��汾��
#define NET_ITC_SET_IOOUT_PARAM_CFG	            3006  //����IO���������3.1��֮��汾��
#define NET_ITC_GET_TRIGGER_DEFAULTCFG          3013  //��ȡ����ģʽ�Ƽ�����
#define NET_DVR_GET_STATUS_DETECTCFG            3015  //��ȡ״̬���ʹ�ܲ���
#define NET_DVR_SET_STATUS_DETECTCFG            3016  //����״̬���ʹ�ܲ���
#define NET_ITC_GET_VIDEO_TRIGGERCFG            3017  //��ȡ��Ƶ�羯��������
#define NET_ITC_SET_VIDEO_TRIGGERCFG            3018  //������Ƶ�羯��������
	
#define NET_DVR_GET_REDAREACFG                  3100   //��ȡ���̵��������
#define NET_DVR_SET_REDAREACFG                  3101   //���ú��̵��������

#define NET_DVR_GET_AUDIO_INPUT                 3201   //��ȡ��Ƶ�������
#define NET_DVR_SET_AUDIO_INPUT                 3202  //������Ƶ�������
#define NET_DVR_GET_CAMERA_DEHAZE_CFG           3203   //��ȡȥ���������
#define NET_DVR_SET_CAMERA_DEHAZE_CFG           3204  //����ȥ���������
#define NET_DVR_REMOTECONTROL_ALARM             3205  //Զ�̿���ң��������
#define NET_DVR_REMOTECONTROL_DISALARM          3206  //Զ�̿���ң��������
#define NET_DVR_REMOTECONTROL_STUDY             3207  //Զ�̿���ң����ѧϰ
#define NET_DVR_WIRELESS_ALARM_STUDY            3208  //Զ�̿������߱���ѧϰ
#define NET_IPC_GET_AUX_ALARMCFG                3209   //��ȡ����������������
#define NET_IPC_SET_AUX_ALARMCFG                3210  //���ø���������������
#define NET_DVR_GET_PREVIEW_DISPLAYCFG	        3211		//��ȡԤ����ʾ����
#define NET_DVR_SET_PREVIEW_DISPLAYCFG	     	3212		//����Ԥ����ʾ����
#define NET_DVR_REMOTECONTROL_PTZ            	3213       //Զ�̿���PTZ
#define NET_DVR_REMOTECONTROL_PRESETPOINT   	3214       //Զ�̿���Ԥ�õ�
#define NET_DVR_REMOTECONTROL_CRUISE         	3215       //Զ�̿���Ѳ��

#define NET_DVR_GET_MULTI_STREAM_COMPRESSIONCFG  3216 //Զ�̻�ȡ������ѹ������
#define NET_DVR_SET_MULTI_STREAM_COMPRESSIONCFG  3217 //Զ�����ö�����ѹ������ 

#define NET_DVR_GET_WPSCFG	                    3218		//��ȡWPS����
#define NET_DVR_SET_WPSCFG	                    3219		//����WPS����
#define NET_DVR_WPS_CONNECT                     3220 //Զ������WPS����
#define NET_DVR_GET_DEVICE_PIN                  3221 //��ȡ�豸PIN��
#define NET_DVR_UPDATE_PIN                      3223 //�����豸PIN��
#define NET_DVR_GET_PRESETCFG           		3224    //��ȡԤ�õ����
#define NET_DVR_GET_PTZCRUISECFG        		3225    //��ȡѲ��·������
#define NET_DVR_GET_PRESET_NUM		    		3226	//��ȡԤ�õ����
#define NET_DVR_GET_PTZCRUISE_NUM				3227	//��ȡѲ��·������

#define NET_DVR_GET_MOTION_TRACK_CFG			3228	//��ȡ���ٲ���
#define NET_DVR_SET_MOTION_TRACK_CFG			3229	//���ø��ٲ���

#define NET_DVR_GET_IPADDR_FILTERCFG		    3232  //��ȡIP��ַ���˲���
#define NET_DVR_SET_IPADDR_FILTERCFG		    3233  //����IP��ַ���˲���

#define NET_DVR_GET_LOGO_OVERLAYCFG	            3234 //��ȡLOGOͼƬ���Ӳ��� 
#define NET_DVR_SET_LOGO_OVERLAYCFG	            3235//����LOGOͼƬ���Ӳ���

/********************************200������������������(V5.0.2) begin****************************/
#define NET_DVR_GET_LOW_LIGHTCFG                3303	   //��ȡ������ն�������Ϣ
#define NET_DVR_SET_LOW_LIGHTCFG                3304    //���ÿ�����ն�������Ϣ

#define NET_DVR_GET_FOCUSMODECFG                3305       //��ȡ����۽�ģʽ��Ϣ
#define NET_DVR_SET_FOCUSMODECFG                3306       //���ÿ���۽�ģʽ��Ϣ

#define NET_DVR_GET_INFRARECFG                  3307       //��ȡ�������������Ϣ
#define NET_DVR_SET_INFRARECFG                  3308       //���ÿ������������Ϣ

#define NET_DVR_GET_AEMODECFG                   3309       //��ȡ��������������Ϣ
#define NET_DVR_SET_AEMODECFG                   3310       //���ÿ�������������Ϣ

#define NET_DVR_CONTROL_RESTART_SUPPORT         3312 //�����о����
#define NET_DVR_CONTROL_RESTORE_SUPPORT         3311 // 	�ָ�ǰ��Ĭ�ϲ���(�����������е�ǰ�˲���������صĶ��ָ�)
/********************************200������������������(V5.0.2) end****************************/

/********************************��������ʶ��****************************/
#define NET_DVR_GET_FACESNAPCFG                 5001  //��ȡ����ץ�Ĳ���
#define NET_DVR_SET_FACESNAPCFG                 5002  //��������ץ�Ĳ���
#define NET_DVR_GET_DEVACCESS_CFG               5005  //��ȡ�����豸����
#define NET_DVR_SET_DEVACCESS_CFG               5006  //���ý����豸����
#define NET_DVR_GET_SAVE_PATH_CFG               5007  //��ȡ�洢��Ϣ����
#define NET_DVR_SET_SAVE_PATH_CFG               5008  //���ô洢��Ϣ����
#define NET_VCA_GET_RULECFG_V41			        5011  //��ȡ��Ϊ��������(��չ)
#define NET_VCA_SET_RULECFG_V41			        5012  //������Ϊ��������(��չ)
#define NET_VCA_GET_FACEDETECT_RULECFG_V41      5017  //��ȡATM����������(��չ) 
#define NET_VCA_SET_FACEDETECT_RULECFG_V41      5018  //����ATM����������(��չ)

/********************************��������ʶ�� end****************************/

/********************************ITS****************************/
#define NET_ITS_GET_BASE_INFO		            5060//��ȡ�ն˻�����Ϣ
#define NET_ITS_GET_IMGMERGE_CFG	            5063//��ȡͼƬ�ϳ����ò���
#define NET_ITS_SET_IMGMERGE_CFG	            5064//����ͼƬ�ϳ����ò���
#define NET_ITS_GET_UPLOAD_CFG		            5065//��ȡ�����ϴ�����
#define NET_ITS_SET_UPLOAD_CFG		            5066//���������ϴ�����
#define NET_ITS_GET_WORKSTATE		            5069//��ȡ�ն˹���״̬
#define NET_ITS_GET_IPC_CHAN_CFG	            5070//��ȡͨ��IPC��Ϣ
#define NET_ITS_SET_IPC_CHAN_CFG	            5071//����ͨ��IPC��Ϣ
#define NET_ITS_GET_OVERLAP_CFG		            5072//��ȡ�ַ����Ӳ�������
#define NET_ITS_SET_OVERLAP_CFG	            	5073//�����ַ����Ӳ�������
#define NET_ITS_GET_ROAD_INFO	            	5076//��ȡ·����Ϣ
/********************************ITS end****************************/

#define NET_DVR_GET_DISK_RAID_INFO              6001  //��ȡ����Raid��Ϣ
#define NET_DVR_SET_DISK_RAID_INFO              6002  //���ô���Raid��Ϣ
	
#define NET_DVR_GET_DVR_SYNCHRONOUS_IPC         6005  //��ȡ���Ƿ�Ϊǰ��IPCͬ���豸����
#define NET_DVR_SET_DVR_SYNCHRONOUS_IPC         6006  //���ã��Ƿ�Ϊǰ��IPCͬ���豸����

#define NET_DVR_SET_DVR_IPC_PASSWD              6008  //���ã�IPC�û�������
#define NET_DVR_GET_DEVICE_NET_USING_INFO       6009  //��ȡ����ǰ�豸������Դʹ�����

#define NET_DVR_SET_DVR_IPC_NET                 6012  //���ã�����ǰ��IPC�������ַ

#define NET_DVR_GET_RECORD_CHANNEL_INFO         6013  //��ȡ��¼��ͨ����Ϣ
#define NET_DVR_SET_RECORD_CHANNEL_INFO         6014  //���ã�¼��ͨ����Ϣ


#define NET_DVR_MOUNT_DISK						6015     // ���ش���
#define NET_DVR_UNMOUNT_DISK				    6016     // ж�ش���

// CVR 
#define NET_DVR_GET_STREAM_SRC_INFO				6017  //��ȡ������Դ��Ϣ
#define NET_DVR_SET_STREAM_SRC_INFO				6018  //���ã�����Դ��Ϣ
#define NET_DVR_GET_STREAM_RECORD_INFO			6019  //��ȡ����¼����Ϣ
#define NET_DVR_SET_STREAM_RECORD_INFO			6020  //���ã���¼����Ϣ
#define NET_DVR_GET_STREAM_RECORD_STATUS		6021  //��ȡ����¼��״̬
#define NET_DVR_SET_STREAM_RECORD_STATUS		6022  //���ã���¼��״̬
#define NET_DVR_GET_STREAM_INFO					6023  //��ȡ����ӵ���ID��Ϣ

//NVR��96xx
#define NET_DVR_GET_IP_ALARM_GROUP_NUM          6100  //��ȡ��IPͨ�����������������
#define NET_DVR_GET_IP_ALARM_IN                 6101  //��ȡ��IPͨ������������Ϣ
#define NET_DVR_GET_IP_ALARM_OUT                6102  //��ȡ��IPͨ�����������Ϣ

//9000 v2.2
#define NET_DVR_GET_FTPCFG_SECOND		        6103  	//��ȡͼƬ�ϴ�FTP����
#define NET_DVR_SET_FTPCFG_SECOND		        6104  	//����ͼƬ�ϴ�FTP����

#define NET_DVR_GET_DEFAULT_VIDEO_EFFECT		6105	   // ��ȡ��Ƶ����Ч������Ĭ��ֵ
#define NET_DVR_SET_VIDEO_EFFECT				6106       // ����ͨ����Ƶ����ͼ�����
#define NET_DVR_DEL_INVALID_DISK				6107       // ɾ����Ч����

#define NET_DVR_GET_DRAWFRAME_DISK_QUOTA_CFG	6109	//��ȡ��֡ͨ���������
#define NET_DVR_SET_DRAWFRAME_DISK_QUOTA_CFG	6110	//���ó�֡ͨ���������

#define NET_DVR_GET_NAT_CFG                     6111     //��ȡNATӳ�����
#define NET_DVR_SET_NAT_CFG                     6112     //����NATӳ�����  
#define NET_DVR_GET_AES_KEY                     6113     //��ȡ�豸AES������Կ
#define NET_DVR_GET_POE_CFG                     6114     //��ȡPOE����
#define NET_DVR_SET_POE_CFG                     6115     //����POE����
#define NET_DVR_GET_CUSTOM_PRO_CFG              6116     //��ȡ�Զ���Э�����
#define NET_DVR_SET_CUSTOM_PRO_CFG              6117     //�����Զ���Э�����
#define NET_DVR_GET_STREAM_CABAC                6118     //��ȡ����ѹ������ѡ��
#define NET_DVR_SET_STREAM_CABAC                6119     //��������ѹ������ѡ��   
#define NET_DVR_GET_ESATA_MINISAS_USAGE_CFG	    6120  //��ȡeSATA��miniSAS��;
#define NET_DVR_SET_ESATA_MINISAS_USAGE_CFG	    6121  //����eSATA��miniSAS��; 

#define NET_DVR_GET_HDCFG_V40			        6122  //��ȡӲ����Ϣ����
#define NET_DVR_SET_HDCFG_V40			        6123  //����Ӳ����Ϣ����
#define NET_DVR_GET_POE_CHANNEL_ADD_MODE        6124     //��ȡPOEͨ����ӷ�ʽ
#define NET_DVR_SET_POE_CHANNEL_ADD_MODE        6125     //����POEͨ����ӷ�ʽ
#define NET_DVR_GET_DIGITAL_CHANNEL_STATE       6126     //��ȡ�豸����ͨ��״̬

#define NET_DVR_GET_RECORD_LOCK_PERCENTAGE	    6140  //��ȡ¼�����������
#define NET_DVR_SET_RECORD_LOCK_PERCENTAGE      6141  //����¼�����������

#define NET_DVR_CMD_TRIGGER_PERIOD_RECORD	    6144 //�ⲿ�����ָ��ʱ��¼��

#define NET_DVR_GET_FTPCFG_V40		            6162	//��ȡFTP��Ϣ
#define NET_DVR_SET_FTPCFG_V40		            6163	//����FTP��Ϣ
#define NET_DVR_GET_HTTPS_CFG		            6134		//��ȡHTTPS��Ϣ
#define NET_DVR_SET_HTTPS_CFG		            6135		//����HTTPS��Ϣ
#define NET_DVR_GET_WD1_CFG                     6136 //Զ�̻�ȡWD1ʹ�ܿ���
#define NET_DVR_SET_WD1_CFG                     6137 //Զ������WD1ʹ�ܿ���

//91ϵ��HD-SDI����DVR
#define NET_DVR_GET_ACCESS_CAMERA_INFO          6201 // ��ȡǰ�������Ϣ
#define NET_DVR_SET_ACCESS_CAMERA_INFO    6202 // ����ǰ�������Ϣ
#define NET_DVR_PULL_DISK					6203 // ��ȫ����
#define NET_DVR_SCAN_RAID					6204 // ɨ������
					
#define NET_DVR_GET_RECORD_PACK				    6301    //��ȡ¼��������
#define NET_DVR_SET_RECORD_PACK				    6302    //����¼��������

#define NET_DVR_GET_OUTPUT_CFG                  6401        //��ȡ��ʾ�������
#define NET_DVR_SET_OUTPUT_CFG                  6402        //������ʾ�������
#define NET_DVR_CODER_DISPLAY_START             6403        //��ʼ���
#define NET_DVR_CODER_DISPLAY_STOP              6404        //ֹͣ���
#define NET_DVR_GET_WINDOW_STATUS               6405        //��ȡ��ʾ����״̬

#define NET_DVR_GET_MB_POWERCTRLPARA		    8000//��ȡ�������Ʋ���
#define	NET_DVR_SET_MB_POWERCTRLPARA		    8001 //�����������Ʋ���
#define NET_DVR_GET_AUTOBACKUPPARA			    8002//��ȡ�Զ����ݲ���
#define NET_DVR_SET_AUTOBACKUPPARA			    8003 //�����Զ����ݲ���
#define NET_DVR_GET_MB_GPSPARA				    8004//��ȡGPS����
#define NET_DVR_SET_MB_GPSPARA				    8005 //����GPS����
#define NET_DVR_GET_MB_SENSORINPARA			    8006//��ȡSENSOR����
#define NET_DVR_SET_MB_SENSORINPARA			    8007 //����SENSOR����
#define NET_DVR_GET_GSENSORPARA				    8008//��ȡGSENSOR����
#define NET_DVR_SET_GSENSORPARA				    8009 //����GSENSOR����
#define NET_DVR_GET_MB_DOWNLOADSVRPARA		    8010//��ȡ���ط���������
#define NET_DVR_SET_MB_DOWNLOADSVRPARA		    8011//�������ط���������
#define NET_DVR_GET_PLATERECOG_PARA			    8012//��ȡ����ʶ�����
#define NET_DVR_SET_PLATERECOG_PARA			    8013//���ó���ʶ�����
#define NET_DVR_GET_ENFORCESYS_PARA			    8014//��ȡ�����������
#define NET_DVR_SET_ENFORCESYS_PARA		    	8015//���ó����������
#define NET_DVR_GET_GPS_DATA					8016 //��ȡGPS����

/*****************************����ǽ start****************************/
#define	NET_DVR_MATRIX_WALL_SET		            9001  //���õ���ǽ����Ļ����
#define	NET_DVR_MATRIX_WALL_GET	                9002  //��ȡ����ǽ����Ļ����
#define	NET_DVR_WALLWIN_GET			            9003  //����ǽ�л�ȡ���ڲ���
#define	NET_DVR_WALLWIN_SET			            9004  //����ǽ�����ô��ڲ���
#define	NET_DVR_WALLWINPARAM_SET		        9005  //���õ���ǽ������ز���
#define	NET_DVR_WALLWINPARAM_GET		        9006  //��ȡ����ǽ������ز���
#define NET_DVR_WALLSCENEPARAM_GET				9007  //���ó���ģʽ����
#define NET_DVR_WALLSCENEPARAM_SET				9008  //��ȡ����ģʽ����
#define NET_DVR_MATRIX_GETWINSTATUS             9009  //��ȡ���ڽ���״̬
#define	NET_DVR_GET_WINASSOCIATEDDEVINFO		9010  //����ǽ�л�ȡ��Ӧ��Դ��Ϣ
#define	NET_DVR_WALLOUTPUT_GET		            9011  //����ǽ�л�ȡ��ʾ�������
#define	NET_DVR_WALLOUTPUT_SET		            9012  //����ǽ��������ʾ�������
#define NET_DVR_GET_UNITEDMATRIXSYSTEM          9013  //����ǽ�л�ȡ��Ӧ��Դ
#define NET_DVR_GET_WALL_CFG					9014  //��ȡ����ǽȫ�ֲ���
#define NET_DVR_SET_WALL_CFG					9015  //���õ���ǽȫ�ֲ���
/*****************************����ǽ end******************************/
#define NET_DVR_GET_ISCSI_CFG                   11070 // ��ȡISCSI�洢����Э�� 
#define NET_DVR_SET_ISCSI_CFG                   11071 // ��ȡISCSI�洢����Э�� 
// ���ֶ��Ʋ˵����ģʽ�ⲿ����
#define NET_DVR_GET_MEMU_OUTPUT_MODE			0x26001			// ��ȡ�˵����ģʽ
#define NET_DVR_SET_MEMU_OUTPUT_MODE			0x26002			// ���ò˵����ģʽ


/***************************DS9000��������(_V30) end *****************************/

//***********************************67DVS start***********************************

#define   NET_DVR_GET_BONJOUR_CFG    6127 // ��ȡBonjour��Ϣ
#define   NET_DVR_SET_BONJOUR_CFG    6128 // ����Bonjour��Ϣ


#define NET_DVR_GET_SOCKS_CFG	     6130    //��ȡSOCKS��Ϣ 
#define NET_DVR_SET_SOCKS_CFG  	     6131    //����SOCKS��Ϣ

#define	NET_DVR_GET_QOS_CFG	         6132	// ��ȡQoS��Ϣ
#define NET_DVR_SET_QOS_CFG	         6133	// ����QoS��Ϣ

#define NET_DVR_GET_HTTPS_CFG		 6134		//��ȡHTTPS��Ϣ
#define NET_DVR_SET_HTTPS_CFG		 6135		//����HTTPS��Ϣ

#define NET_DVR_CREATE_CERT          6138     //����֤��
#define NET_DVR_DELETE_CERT          6139     //ɾ��֤��

#define NET_DVR_UPLOAD_CERT          6145    //�ϴ�֤��
#define NET_DVR_DOWNLOAD_CERT        6146     //����֤��
#define NET_DVR_GET_CERT             6147     //��ȡ֤��

#define MAX_LOCAL_ADDR_LEN			 96		//SOCKS��󱾵����θ���
#define	MAX_COUNTRY_NAME_LEN		  4		//���Ҽ�д���Ƴ���

/**************************67DVS end*********************************************/

/**************************ץ�Ļ�V2V3 Begin*********************************************/
#define  NET_DVR_GET_CAMERA_SETUPCFG		3007//��ȡ����������
#define  NET_DVR_SET_CAMERA_SETUPCFG		3008//��������������
#define  NET_DVR_GET_TPS_ALARMCFG			3019  //��ȡ��ͨͳ�Ʊ�������
#define  NET_DVR_SET_TPS_ALARMCFG			3020  //���ý�ͨͳ�Ʊ�������
/**************************ץ�Ļ�V2V3 end*********************************************/

/************************DVR��־ begin***************************/

/* ���� */
//������
#define MAJOR_ALARM						0x1
//������
#define MINOR_ALARM_IN					0x1		/* �������� */
#define MINOR_ALARM_OUT					0x2		/* ������� */
#define MINOR_MOTDET_START				0x3		/* �ƶ���ⱨ����ʼ */
#define MINOR_MOTDET_STOP				0x4		/* �ƶ���ⱨ������ */
#define MINOR_HIDE_ALARM_START			0x5		/* �ڵ�������ʼ */
#define MINOR_HIDE_ALARM_STOP			0x6		/* �ڵ��������� */
#define MINOR_VCA_ALARM_START			0x7		/*���ܱ�����ʼ*/
#define MINOR_VCA_ALARM_STOP			0x8		/*���ܱ���ֹͣ*/
#define MINOR_ITS_ALARM_START           0x09    // ��ͨ�¼�������ʼ
#define MINOR_ITS_ALARM_STOP            0x0A    // ��ͨ�¼���������
//2010-11-10 ���籨����־
#define MINOR_NETALARM_START            0x0b    /*���籨����ʼ*/
#define MINOR_NETALARM_STOP             0x0c    /*���籨������*/
//2010-12-16 ��������־����"MINOR_ALARM_IN"���ʹ��
#define MINOR_NETALARM_RESUME			0x0d	/*���籨���ָ�*/
//2012-4-5 IPC PIR�����ߡ����ȱ���
#define MINOR_WIRELESS_ALARM_START      0x0e  /* ���߱�����ʼ */
#define MINOR_WIRELESS_ALARM_STOP  	    0x0f /* ���߱������� */
#define MINOR_PIR_ALARM_START   	    0x10  /* �����Ӧ������ʼ */
#define MINOR_PIR_ALARM_STOP   		    0x11  /* �����Ӧ�������� */
#define MINOR_CALLHELP_ALARM_START  	0x12  /* ���ȱ�����ʼ */
#define MINOR_CALLHELP_ALARM_STOP  		0x13  /* ���ȱ������� */
#define MINOR_IPCHANNEL_ALARMIN_START   0x14  //����ͨ���������뿪ʼ��PCNVR�ڽ��յ�����ͨ����MINOR_ALARM_IN����������ͨ���������뿪ʼ����10s�����ղ���MINOR_ALARM_IN������������ͨ���������������
#define MINOR_IPCHANNEL_ALARMIN_STOP    0x15  //����ͨ���������뿪ʼ��ͬ��
/* �쳣 */
//������
#define MAJOR_EXCEPTION					0x2
//������
#define MINOR_RAID_ERROR				0x20	/* �����쳣 */
#define MINOR_VI_LOST					0x21	/* ��Ƶ�źŶ�ʧ */
#define MINOR_ILLEGAL_ACCESS			0x22	/* �Ƿ����� */
#define MINOR_HD_FULL					0x23	/* Ӳ���� */
#define MINOR_HD_ERROR					0x24	/* Ӳ�̴��� */
#define MINOR_DCD_LOST					0x25	/* MODEM ����(������ʹ��) */
#define MINOR_IP_CONFLICT				0x26	/* IP��ַ��ͻ */
#define MINOR_NET_BROKEN				0x27	/* ����Ͽ�*/
#define MINOR_REC_ERROR                 0x28    /* ¼����� */
#define MINOR_IPC_NO_LINK               0x29    /* IPC�����쳣 */
#define MINOR_VI_EXCEPTION              0x2a    /* ��Ƶ�����쳣(ֻ���ģ��ͨ��) */
#define MINOR_IPC_IP_CONFLICT           0x2b    /*ipc ip ��ַ ��ͻ*/
#define MINOR_SENCE_EXCEPTION           0x2c    // �����쳣

#define MINOR_PIC_REC_ERROR  			0x2d    /* ץͼ����--��ȡͼƬ�ļ�ʧ��*/
#define MINOR_VI_MISMATCH    			0x2e    /* ��Ƶ��ʽ��ƥ��*/
#define MINOR_RESOLUTION_MISMATCH		0x2f	/*ǰ��/¼��ֱ��ʲ�ƥ��  */

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_FANABNORMAL				0x31	/* ��Ƶ�ۺ�ƽ̨������״̬�쳣 */
#define MINOR_FANRESUME					0x32	/* ��Ƶ�ۺ�ƽ̨������״̬�ָ����� */
#define MINOR_SUBSYSTEM_ABNORMALREBOOT	0x33	/* ��Ƶ�ۺ�ƽ̨��6467�쳣���� */
#define MINOR_MATRIX_STARTBUZZER		0x34	/* ��Ƶ�ۺ�ƽ̨��dm6467�쳣������������ */

//2010-01-22 ������Ƶ�ۺ�ƽ̨�쳣��־������
#define MINOR_NET_ABNORMAL				0x35	/*����״̬�쳣*/
#define MINOR_MEM_ABNORMAL				0x36	/*�ڴ�״̬�쳣*/
#define MINOR_FILE_ABNORMAL				0x37	/*�ļ�״̬�쳣*/
#define MINOR_PANEL_ABNORMAL			0x38 /*ǰ��������쳣*/
#define MINOR_PANEL_RESUME				0x39 /*ǰ���ָ�����*/	
#define MINOR_RS485_DEVICE_ABNORMAL		0x3a 	/*RS485����״̬�쳣*/
#define MINOR_RS485_DEVICE_REVERT		0x3b    /*RS485����״̬�쳣�ָ�*/

//2012-2-18 ���Ӵ����������쳣��־������
#define MINOR_SCREEN_SUBSYSTEM_ABNORMALREBOOT   0x3c            //�Ӱ��쳣����
#define	MINOR_SCREEN_SUBSYSTEM_ABNORMALINSERT	0x3d			//�Ӱ����
#define	MINOR_SCREEN_SUBSYSTEM_ABNORMALPULLOUT	0x3e			//�Ӱ�γ�
#define	MINOR_SCREEN_ABNARMALTEMPERATURE		0x3f			//�¶��쳣
//2012-07-26 ��Ƶ�ۺ�ƽ̨v2.1
#define MINOR_HIGH_TEMPERATURE_PROTECT  0x40 //�Ӱ���ȱ���

//Netra 2.2.2
#define MINOR_RECORD_OVERFLOW           0x41              /*���������*/   

/* ���� */
//������
#define MAJOR_OPERATION					0x3

//������
#define MINOR_START_DVR					0x41	/* ���� */
#define MINOR_STOP_DVR					0x42	/* �ػ� */
#define MINOR_STOP_ABNORMAL				0x43	/* �쳣�ػ� */
#define MINOR_REBOOT_DVR                0x44    /*���������豸*/

#define MINOR_LOCAL_LOGIN				0x50	/* ���ص�½ */
#define MINOR_LOCAL_LOGOUT				0x51	/* ����ע����½ */
#define MINOR_LOCAL_CFG_PARM			0x52	/* �������ò��� */
#define MINOR_LOCAL_PLAYBYFILE          0x53	/* ���ذ��ļ��طŻ����� */
#define MINOR_LOCAL_PLAYBYTIME          0x54	/* ���ذ�ʱ��طŻ�����*/
#define MINOR_LOCAL_START_REC			0x55	/* ���ؿ�ʼ¼�� */
#define MINOR_LOCAL_STOP_REC			0x56	/* ����ֹͣ¼�� */
#define MINOR_LOCAL_PTZCTRL				0x57	/* ������̨���� */
#define MINOR_LOCAL_PREVIEW				0x58	/* ����Ԥ�� (������ʹ��)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59	/* �����޸�ʱ��(������ʹ��) */
#define MINOR_LOCAL_UPGRADE             0x5a	/* �������� */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* ���ر���¼���ļ� */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* ���س�ʼ��Ӳ�� */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* �������������ļ� */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* ���뱾�������ļ� */
#define MINOR_LOCAL_COPYFILE            0x5f    /* ���ر����ļ� */
#define MINOR_LOCAL_LOCKFILE            0x60    /* ��������¼���ļ� */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* ���ؽ���¼���ļ� */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* �����ֶ�����ʹ�������*/
#define MINOR_IPC_ADD                   0x63    /* �������IPC */
#define MINOR_IPC_DEL                   0x64    /* ����ɾ��IPC */
#define MINOR_IPC_SET                   0x65    /* ��������IPC */
#define MINOR_LOCAL_START_BACKUP		0x66	/* ���ؿ�ʼ���� */
#define MINOR_LOCAL_STOP_BACKUP			0x67	/* ����ֹͣ����*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68	/* ���ر��ݿ�ʼʱ��*/
#define MINOR_LOCAL_COPYFILE_END_TIME	0x69	/* ���ر��ݽ���ʱ��*/
#define MINOR_LOCAL_ADD_NAS             0x6a	/*�����������Ӳ�� ��nfs��iscsi��*/
#define MINOR_LOCAL_DEL_NAS             0x6b	/* ����ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_SET_NAS             0x6c	/* ��������nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_RESET_PASSWD        0x6d    /* ���ػָ�����ԱĬ������*/ 

#define MINOR_REMOTE_LOGIN				0x70	/* Զ�̵�¼ */
#define MINOR_REMOTE_LOGOUT				0x71	/* Զ��ע����½ */
#define MINOR_REMOTE_START_REC			0x72	/* Զ�̿�ʼ¼�� */
#define MINOR_REMOTE_STOP_REC			0x73	/* Զ��ֹͣ¼�� */
#define MINOR_START_TRANS_CHAN			0x74	/* ��ʼ͸������ */
#define MINOR_STOP_TRANS_CHAN			0x75	/* ֹͣ͸������ */
#define MINOR_REMOTE_GET_PARM			0x76	/* Զ�̻�ȡ���� */
#define MINOR_REMOTE_CFG_PARM			0x77	/* Զ�����ò��� */
#define MINOR_REMOTE_GET_STATUS         0x78	/* Զ�̻�ȡ״̬ */
#define MINOR_REMOTE_ARM				0x79	/* Զ�̲��� */
#define MINOR_REMOTE_DISARM				0x7a	/* Զ�̳��� */
#define MINOR_REMOTE_REBOOT				0x7b	/* Զ������ */
#define MINOR_START_VT					0x7c	/* ��ʼ�����Խ� */
#define MINOR_STOP_VT					0x7d	/* ֹͣ�����Խ� */
#define MINOR_REMOTE_UPGRADE			0x7e	/* Զ������ */
#define MINOR_REMOTE_PLAYBYFILE         0x7f	/* Զ�̰��ļ��ط� */
#define MINOR_REMOTE_PLAYBYTIME         0x80	/* Զ�̰�ʱ��ط� */
#define MINOR_REMOTE_PTZCTRL			0x81	/* Զ����̨���� */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* Զ�̸�ʽ��Ӳ�� */
#define MINOR_REMOTE_STOP               0x83    /* Զ�̹ػ� */
#define MINOR_REMOTE_LOCKFILE			0x84	/* Զ�������ļ� */
#define MINOR_REMOTE_UNLOCKFILE         0x85	/* Զ�̽����ļ� */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* Զ�̵���¼���ļ� */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* Զ���ֶ�����ʹ�������*/
#define MINOR_REMOTE_IPC_ADD			0x8a	/* Զ�����IPC */
#define MINOR_REMOTE_IPC_DEL			0x8b	/* Զ��ɾ��IPC */
#define MINOR_REMOTE_IPC_SET			0x8c	/* Զ������IPC */
#define MINOR_REBOOT_VCA_LIB            0x8d    /*�������ܿ�*/
#define MINOR_REMOTE_ADD_NAS            0x8e   /* Զ�����nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_DEL_NAS            0x8f   /* Զ��ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_SET_NAS            0x90   /* Զ������nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_OPERATE_LOCK        0x9d			/* ���ز�������             */
#define MINOR_LOCAL_OPERATE_UNLOCK      0x9e            /* ���ز����������         */
#define MINOR_REMOTE_DELETE_HDISK       0x9a            /* Զ��ɾ���쳣�����ڵ�Ӳ�� */
#define MINOR_REMOTE_LOAD_HDISK         0x9b            /* Զ�̼���Ӳ��             */
#define MINOR_REMOTE_UNLOAD_HDISK       0x9c            /* Զ��ж��Ӳ��   */


//2010-05-26 ������ѶDVR��־����
#define MINOR_LOCAL_START_REC_CDRW      0x91   /* ���ؿ�ʼѶ�� */
#define MINOR_LOCAL_STOP_REC_CDRW       0x92   /* ����ֹͣѶ�� */
#define MINOR_REMOTE_START_REC_CDRW     0x93   /* Զ�̿�ʼѶ�� */
#define MINOR_REMOTE_STOP_REC_CDRW      0x94   /* Զ��ֹͣѶ�� */

#define MINOR_LOCAL_PIC_OUTPUT			0x95   /* ���ر���ͼƬ�ļ� */ 
#define MINOR_REMOTE_PIC_OUTPUT			0x96   /* Զ�̱���ͼƬ�ļ� */

//2011-07-26 ����81��ѶDVR��־����
#define MINOR_LOCAL_INQUEST_RESUME      0x97   /* ���ػָ���Ѷ�¼�*/
#define MINOR_REMOTE_INQUEST_RESUME     0x98   /* Զ�ָ̻���Ѷ�¼�*/

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_SUBSYSTEMREBOOT           0xa0	/*��Ƶ�ۺ�ƽ̨��dm6467 ��������*/
#define MINOR_MATRIX_STARTTRANSFERVIDEO 0xa1	/*��Ƶ�ۺ�ƽ̨�������л���ʼ����ͼ��*/
#define MINOR_MATRIX_STOPTRANSFERVIDEO	0xa2	/*��Ƶ�ۺ�ƽ̨�������л�ֹͣ����ͼ��*/
#define MINOR_REMOTE_SET_ALLSUBSYSTEM   0xa3	/*��Ƶ�ۺ�ƽ̨����������6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_GET_ALLSUBSYSTEM   0xa4	/*��Ƶ�ۺ�ƽ̨����ȡ����6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_SET_PLANARRAY      0xa5	/*��Ƶ�ۺ�ƽ̨�����üƻ���Ѳ��*/
#define MINOR_REMOTE_GET_PLANARRAY      0xa6	/*��Ƶ�ۺ�ƽ̨����ȡ�ƻ���Ѳ��*/
#define MINOR_MATRIX_STARTTRANSFERAUDIO 0xa7	/*��Ƶ�ۺ�ƽ̨�������л���ʼ������Ƶ*/
#define MINOR_MATRIX_STOPRANSFERAUDIO   0xa8	/*��Ƶ�ۺ�ƽ̨�������л�ֹͣ������Ƶ*/
#define MINOR_LOGON_CODESPITTER         0xa9	/*��Ƶ�ۺ�ƽ̨����½�����*/
#define MINOR_LOGOFF_CODESPITTER        0xaa	/*��Ƶ�ۺ�ƽ̨���˳������*/

//2010-01-22 ������Ƶ�ۺ�ƽ̨�н�����������־
#define MINOR_START_DYNAMIC_DECODE 		0xb0	/*��ʼ��̬����*/
#define MINOR_STOP_DYNAMIC_DECODE		0xb1	/*ֹͣ��̬����*/
#define MINOR_GET_CYC_CFG				0xb2	/*��ȡ������ͨ����Ѳ����*/
#define MINOR_SET_CYC_CFG				0xb3	/*���ý���ͨ����Ѳ����*/
#define MINOR_START_CYC_DECODE			0xb4	/*��ʼ��Ѳ����*/
#define MINOR_STOP_CYC_DECODE			0xb5	/*ֹͣ��Ѳ����*/
#define MINOR_GET_DECCHAN_STATUS		0xb6	/*��ȡ����ͨ��״̬*/
#define MINOR_GET_DECCHAN_INFO			0xb7	/*��ȡ����ͨ����ǰ��Ϣ*/
#define MINOR_START_PASSIVE_DEC			0xb8	/*��ʼ��������*/
#define MINOR_STOP_PASSIVE_DEC			0xb9	/*ֹͣ��������*/
#define MINOR_CTRL_PASSIVE_DEC			0xba	/*���Ʊ�������*/
#define MINOR_RECON_PASSIVE_DEC			0xbb	/*������������*/
#define MINOR_GET_DEC_CHAN_SW			0xbc	/*��ȡ����ͨ���ܿ���*/
#define MINOR_SET_DEC_CHAN_SW			0xbd	/*���ý���ͨ���ܿ���*/
#define MINOR_CTRL_DEC_CHAN_SCALE		0xbe	/*����ͨ�����ſ���*/
#define MINOR_SET_REMOTE_REPLAY			0xbf	/*����Զ�̻ط�*/
#define MINOR_GET_REMOTE_REPLAY			0xc0	/*��ȡԶ�̻ط�״̬*/
#define MINOR_CTRL_REMOTE_REPLAY		0xc1	/*Զ�̻طſ���*/
#define MINOR_SET_DISP_CFG				0xc2	/*������ʾͨ��*/
#define MINOR_GET_DISP_CFG				0xc3	/*��ȡ��ʾͨ������*/
#define MINOR_SET_PLANTABLE				0xc4	/*���üƻ���Ѳ��*/
#define MINOR_GET_PLANTABLE				0xc5	/*��ȡ�ƻ���Ѳ��*/
#define MINOR_START_PPPPOE				0xc6	/*��ʼPPPoE����*/
#define MINOR_STOP_PPPPOE				0xc7	/*����PPPoE����*/
#define MINOR_UPLOAD_LOGO				0xc8	/*�ϴ�LOGO*/
//2010-12-16 ��������־
#define MINOR_REMOTE_BYPASS             0xd0    /* Զ����·*/
#define MINOR_REMOTE_UNBYPASS           0xd1    /* Զ����·�ָ�*/
#define MINOR_REMOTE_SET_ALARMIN_CFG    0xd2    /* Զ�����ñ����������*/
#define MINOR_REMOTE_GET_ALARMIN_CFG    0xd3    /* Զ�̻�ȡ�����������*/
#define MINOR_REMOTE_SET_ALARMOUT_CFG   0xd4    /* Զ�����ñ����������*/
#define MINOR_REMOTE_GET_ALARMOUT_CFG   0xd5    /* Զ�̻�ȡ�����������*/
#define MINOR_REMOTE_ALARMOUT_OPEN_MAN  0xd6    /* Զ���ֶ������������*/
#define MINOR_REMOTE_ALARMOUT_CLOSE_MAN 0xd7    /* Զ���ֶ��رձ������*/
#define MINOR_REMOTE_ALARM_ENABLE_CFG   0xd8    /* Զ�����ñ���������RS485����ʹ��״̬*/
#define MINOR_DBDATA_OUTPUT				0xd9	/* �������ݿ��¼ */
#define MINOR_DBDATA_INPUT				0xda	/* �������ݿ��¼ */
#define MINOR_MU_SWITCH					0xdb	/* �����л� */
#define MINOR_MU_PTZ					0xdc	/* ����PTZ���� */

#define MINOR_LOCAL_CONF_REB_RAID       0x101           /*���������Զ��ؽ�*/
#define MINOR_LOCAL_CONF_SPARE          0x102           /*���������ȱ�*/
#define MINOR_LOCAL_ADD_RAID            0x103           /*���ش�������*/
#define MINOR_LOCAL_DEL_RAID            0x104           /*����ɾ������*/
#define MINOR_LOCAL_MIG_RAID            0x105           /*����Ǩ������*/
#define MINOR_LOCAL_REB_RAID            0x106           /* �����ֶ��ؽ�����*/
#define MINOR_LOCAL_QUICK_CONF_RAID     0x107           /*����һ������*/
#define MINOR_LOCAL_ADD_VD              0x108           /*���ش����������*/
#define MINOR_LOCAL_DEL_VD              0x109           /*����ɾ���������*/
#define MINOR_LOCAL_RP_VD               0x10a           /*�����޸��������*/
#define MINOR_LOCAL_FORMAT_EXPANDVD     0X10b           /*������չ�����������*/
#define MINOR_LOCAL_RAID_UPGRADE        0X10c           /*����raid������*/  
#define MINOR_LOCAL_STOP_RAID           0x10d           /*������ͣRAID����(����ȫ����)*/  
#define MINOR_REMOTE_CONF_REB_RAID      0x111           /*Զ�������Զ��ؽ�*/
#define MINOR_REMOTE_CONF_SPARE         0x112            /*Զ�������ȱ�*/
#define MINOR_REMOTE_ADD_RAID           0x113           /*Զ�̴�������*/
#define MINOR_REMOTE_DEL_RAID           0x114           /*Զ��ɾ������*/
#define MINOR_REMOTE_MIG_RAID           0x115           /*Զ��Ǩ������*/
#define MINOR_REMOTE_REB_RAID           0x116           /* Զ���ֶ��ؽ�����*/
#define MINOR_REMOTE_QUICK_CONF_RAID    0x117           /*Զ��һ������*/
#define MINOR_REMOTE_ADD_VD             0x118           /*Զ�̴����������*/
#define MINOR_REMOTE_DEL_VD             0x119           /*Զ��ɾ���������*/
#define MINOR_REMOTE_RP_VD              0x11a           /*Զ���޸��������*/
#define MINOR_REMOTE_FORMAT_EXPANDVD    0X11b           /*Զ�������������*/
#define MINOR_REMOTE_RAID_UPGRADE       0X11c           /*Զ��raid������*/  
#define MINOR_REMOTE_STOP_RAID          0x11d           /*Զ����ͣRAID����(����ȫ����)*/
#define MINOR_LOCAL_START_PIC_REC       0x121          /*���ؿ�ʼץͼ*/ 
#define MINOR_LOCAL_STOP_PIC_REC        0x122          /*����ֹͣץͼ*/
#define MINOR_LOCAL_SET_SNMP            0x125           /*��������SNMP*/
#define MINOR_LOCAL_TAG_OPT             0x126          /*���ر�ǩ����*/
#define MINOR_REMOTE_START_PIC_REC      0x131          /*Զ�̿�ʼץͼ*/
#define MINOR_REMOTE_STOP_PIC_REC       0x132           /*Զ��ֹͣץͼ*/
#define MINOR_REMOTE_SET_SNMP           0x135            /*Զ������SNMP*/
#define MINOR_REMOTE_TAG_OPT            0x136             /*Զ�̱�ǩ����*/  

// 9000 v2.2.0
#define MINOR_LOCAL_VOUT_SWITCH         0x140   /* ����������л�����*/
#define MINOR_STREAM_CABAC         		0x141   /* ����ѹ������ѡ�����ò���*/


#define MINOR_SET_MULTI_MASTER          0x201    /*���ô�������*/
#define MINOR_SET_MULTI_SLAVE           0x202    /*���ô�������*/
#define MINOR_CANCEL_MULTI_MASTER       0x203    /*ȡ����������*/
#define MINOR_CANCEL_MULTI_SLAVE        0x204    /*ȡ����������*/

#define MINOR_DISPLAY_LOGO				0x205    /*��ʾLOGO*/
#define MINOR_HIDE_LOGO                 0x206    /*����LOGO*/
#define MINOR_SET_DEC_DELAY_LEVEL       0x207    /*����ͨ����ʱ��������*/
#define MINOR_SET_BIGSCREEN_DIPLAY_AREA 0x208    /*���ô�����ʾ����*/
#define MINOR_CUT_VIDEO_SOURCE          0x209    /*������ƵԴ�и�����*/
#define MINOR_SET_BASEMAP_AREA          0x210    /*������ͼ��������*/
#define MINOR_DOWNLOAD_BASEMAP          0x211    /*���ش�����ͼ*/
#define MINOR_CUT_BASEMAP               0x212    /*��ͼ�и�����*/
#define MINOR_CONTROL_ELEC_ENLARGE      0x213    /*���ӷŴ����(�Ŵ��ԭ)*/
#define MINOR_SET_OUTPUT_RESOLUTION     0x214    /*��ʾ����ֱ�������*/
#define MINOR_SET_TRANCSPARENCY         0X215    /*ͼ��͸��������*/
#define MINOR_SET_OSD                   0x216    /*��ʾOSD����*/
#define MINOR_RESTORE_DEC_STATUS        0x217    /*�ָ���ʼ״̬(�����л�ʱ������ָ���ʼ״̬)*/

//2011-11-11 ���Ӵ���������������־������
#define MINOR_SCREEN_SET_INPUT			0x251    /*�޸�����Դ*/
#define MINOR_SCREEN_SET_OUTPUT			0x252    /*�޸����ͨ��*/
#define MINOR_SCREEN_SET_OSD			0x253    /*�޸�OSD*/
#define MINOR_SCREEN_SET_LOGO			0x254    /*�޸�LOGO*/
#define MINOR_SCREEN_SET_LAYOUT			0x255    /*���ò���*/
#define	MINOR_SCREEN_PICTUREPREVIEW		0x256	 /*���Բ���*/

//2012-06-14 CVCS2.0, �������õȲ�����V1.0�� V1.1���Ѿ����ˣ���ʱ���豸��־��û�ж��� 
#define MINOR_SCREEN_GET_OSD			0x257   /*��ȡOSD*/
#define MINOR_SCREEN_GET_LAYOUT			0x258   /*��ȡ����*/
#define MINOR_SCREEN_LAYOUT_CTRL		0x259   /*���ֿ���*/
#define MINOR_GET_ALL_VALID_WND			0x260	/*��ȡ������Ч����*/
#define MINOR_GET_SIGNAL_WND			0x261	/*��ȡ����������Ϣ*/
#define MINOR_WINDOW_CTRL				0x262	/*���ڿ���*/
#define MINOR_GET_LAYOUT_LIST			0x263	/*��ȡ�����б�*/
#define MINOR_LAYOUT_CTRL				0x264	/*���ֿ���*/
#define MINOR_SET_LAYOUT				0x265	/*���ò���*/
#define MINOR_GET_SIGNAL_LIST			0x266	/*��ȡ�����ź�Դ�б�*/
#define MINOR_GET_PLAN_LIST				0x267	/*��ȡԤ���б�*/
#define MINOR_SET_PLAN					0x268	/*�޸�Ԥ��*/
#define MINOR_CTRL_PLAN					0x269	/*����Ԥ��*/
#define MINOR_CTRL_SCREEN				0x270	/*��Ļ����*/
#define MINOR_ADD_NETSIG				0x271	/*����ź�Դ*/
#define MINOR_SET_NETSIG				0x272	/*�޸��ź�Դ*/
#define MINOR_SET_DECBDCFG				0x273	/*���ý�������*/
#define MINOR_GET_DECBDCFG				0x274	/*��ȡ��������*/
#define MINOR_GET_DEVICE_STATUS			0x275	/*��ȡ�豸��Ϣ*/
#define MINOR_UPLOAD_PICTURE			0x276	/*��ͼ�ϴ�*/
#define MINOR_SET_USERPWD				0x277	/*�����û�����*/
#define MINOR_ADD_LAYOUT				0x278	/*��Ӳ���*/
#define MINOR_DEL_LAYOUT				0x279	/*ɾ������*/
#define MINOR_DEL_NETSIG				0x280	/*ɾ���ź�Դ*/
#define MINOR_ADD_PLAN					0x281	/*���Ԥ��*/
#define MINOR_DEL_PLAN					0x282	/*ɾ��Ԥ��*/
#define MINOR_GET_EXTERNAL_MATRIX_CFG	0x283	//��ȡ��Ӿ�������
#define MINOR_SET_EXTERNAL_MATRIX_CFG	0x284	//������Ӿ�������
#define	MINOR_GET_USER_CFG				0x285	//��ȡ�û�����
#define	MINOR_SET_USER_CFG				0x286	//�����û�����
#define	MINOR_GET_DISPLAY_PANEL_LINK_CFG 0x287	//��ȡ��ʾǽ��������
#define	MINOR_SET_DISPLAY_PANEL_LINK_CFG 0x288	//������ʾǽ��������
#define	MINOR_GET_SCREEN_MODE_CFG		0x289		//��ȡ��������
#define	MINOR_SET_SCREEN_MODE_CFG		0x290		//���÷�������

// Netra 2.2.2
#define MINOR_LOCAL_LOAD_HDISK          0x300            //���ؼ���Ӳ��             
#define MINOR_LOCAL_DELETE_HDISK        0x301            //����ɾ���쳣�����ڵ�Ӳ��

//2012-03-05 ITC������־����
#define MINOR_SET_TRIGGERMODE_CFG          0x1001    /*���ô���ģʽ����*/
#define MINOR_GET_TRIGGERMODE_CFG          0x1002    /*��ȡ����ģʽ����*/
#define MINOR_SET_IOOUT_CFG                0x1003    /*����IO�������*/
#define MINOR_GET_IOOUT_CFG                0x1004    /*��ȡIO�������*/
#define MINOR_GET_TRIGGERMODE_DEFAULT      0x1005    /*��ȡ����ģʽ�Ƽ�����*/
#define MINOR_GET_ITCSTATUS                0x1006    /*��ȡ״̬������*/
#define MINOR_SET_STATUS_DETECT_CFG        0x1007    /*����״̬������*/
#define MINOR_GET_STATUS_DETECT_CFG        0x1008    /*��ȡ״̬������*/
#define MINOR_SET_VIDEO_TRIGGERMODE_CFG    0x1009  /*������Ƶ����ģʽ����*/
#define MINOR_GET_VIDEO_TRIGGERMODE_CFG     0x100a   /*��ȡ��Ƶ����ģʽ����*/

/*��־������Ϣ*/
//������
#define MAJOR_INFORMATION               0x4     /*������Ϣ*/
//������
#define MINOR_HDD_INFO                  0xa1 /*Ӳ����Ϣ*/
#define MINOR_SMART_INFO                0xa2 /*SMART��Ϣ*/
#define MINOR_REC_START                 0xa3 /*��ʼ¼��*/
#define MINOR_REC_STOP                  0xa4 /*ֹͣ¼��*/
#define MINOR_REC_OVERDUE				0xa5 /*����¼��ɾ��*/
#define MINOR_LINK_START				0xa6 //����ǰ���豸
#define MINOR_LINK_STOP					0xa7 //�Ͽ�ǰ���豸��
#define MINOR_NET_DISK_INFO				0xa8 //����Ӳ����Ϣ
#define MINOR_RAID_INFO                 0xa9 //raid�����Ϣ
#define MINOR_RUN_STATUS_INFO           0xaa /*ϵͳ����״̬��Ϣ*/

#define MINOR_PIC_REC_START             0xb3  /* ��ʼץͼ*/    
#define MINOR_PIC_REC_STOP              0xb4  /* ֹͣץͼ*/
#define MINOR_PIC_REC_OVERDUE           0xb5  /* ����ͼƬ�ļ�ɾ�� */

typedef enum tagALARMHOST_MAJOR_TYPE
{
    MAJOR_ALARMHOST_ALARM = 1,
    MAJOR_ALARMHOST_EXCEPTION,
    MAJOR_ALARMHOST_OPERATION,
    MAJ0R_ALARMHOST_EVENT
}ALARMHOST_MAJOR_TYPE;

typedef enum tagALARMHOST_MINOR_TYPE
{
    // ���� 
    MINOR_SHORT_CIRCUIT =0x01,      // ��·����
    MINOR_BROKEN_CIRCUIT,           // ��·����
    MINOR_ALARM_RESET,              // ������λ
    MINOR_ALARM_NORMAL,				// �����ָ�����
    MINOR_PASSWORD_ERROR,			// �����������3�������������
    MINOR_ID_CARD_ILLEGALLY,		// �Ƿ���Ӧ��ID
    MINOR_KEYPAD_REMOVE,			// ���̷���
    MINOR_KEYPAD_REMOVE_RESTORE,	// ���̷���λ
    MINOR_DEV_REMOVE,				// �豸����
    MINOR_DEV_REMOVE_RESTORE,		// �豸����λ
    MINOR_BELOW_ALARM_LIMIT1,		// ģ�������ڱ�����1
    MINOR_BELOW_ALARM_LIMIT2,		// ģ�������ڱ�����2
    MINOR_BELOW_ALARM_LIMIT3,		// ģ�������ڱ�����3
    MINOR_BELOW_ALARM_LIMIT4,		// ģ�������ڱ�����4
    MINOR_ABOVE_ALARM_LIMIT1,		// ģ�������ڱ�����1
    MINOR_ABOVE_ALARM_LIMIT2,		// ģ�������ڱ�����2
    MINOR_ABOVE_ALARM_LIMIT3,		// ģ�������ڱ�����3
    MINOR_ABOVE_ALARM_LIMIT4,		// ģ�������ڱ�����4
	MINOR_URGENCYBTN_ON,			// ������ť����
	MINOR_URGENCYBTN_OFF,			// ������ť��λ
	MINOR_VIRTUAL_DEFENCE_BANDIT,			//������˾�
	MINOR_VIRTUAL_DEFENCE_FIRE,				//�������
	MINOR_VIRTUAL_DEFENCE_URGENT,			//���������
	MINOR_ALARMHOST_MOTDET_START,			//�ƶ���ⱨ����ʼ
	MINOR_ALARMHOST_MOTDET_STOP,			//�ƶ���ⱨ������
	MINOR_ALARMHOST_HIDE_ALARM_START,		//�ڵ�������ʼ
	MINOR_ALARMHOST_HIDE_ALARM_STOP,		//�ڵ���������

    // �쳣
    MINOR_POWER_ON      = 0x01,	// �ϵ�
    MINOR_POWER_OFF,				// ����
    MINOR_WDT_RESET,				// WDT ��λ
    MINOR_LOW_BATTERY_VOLTAGE,		// ���ص�ѹ��
    MINOR_AC_LOSS,					// ������ϵ�
    MINOR_AC_RESTORE,				// ������ָ�
    MINOR_RTC_EXCEPTION,			// RTCʵʱʱ���쳣
    MINOR_NETWORK_CONNECT_FAILURE,	// �������Ӷ�
    MINOR_NETWORK_CONNECT_RESTORE,	// �������ӻָ�
    MINOR_TEL_LINE_CONNECT_FAILURE,	// �绰�����Ӷ�
    MINOR_TEL_LINE_CONNECT_RESTORE,	// �绰�����ӻָ�
    MINOR_EXPANDER_BUS_LOSS,		// ��չ����ģ�����
    MINOR_EXPANDER_BUS_RESTORE,		// ��չ����ģ����߻ָ�
    MINOR_KEYPAD_BUS_LOSS,			// ��������ģ�����
    MINOR_KEYPAD_BUS_RESTORE,		// ��������ģ����߻ָ�
    MINOR_SENSOR_FAILURE,			// ģ��������������
    MINOR_SENSOR_RESTORE,			// ģ�����������ָ�
    MINOR_RS485_CONNECT_FAILURE,	// RS485ͨ�����Ӷ�
    MINOR_RS485_CONNECT_RESTORE,	// RS485ͨ�����Ӷϻָ�
    MINOR_BATTERT_VOLTAGE_RESTORE,  // ���ص�ѹ�ָ����� 
	MINOR_WIRED_NETWORK_ABNORMAL,	//���������쳣
	MINOR_WIRED_NETWORK_RESTORE,	//��������ָ�����
	MINOR_GPRS_ABNORMAL,			//GPRSͨ���쳣
	MINOR_GPRS_RESTORE,				//GPRS�ָ�����
	MINOR_3G_ABNORMAL,				//3Gͨ���쳣
	MINOR_3G_RESTORE,				//3G�ָ�����
	MINOR_SIM_CARD_ABNORMAL,		//SIM���쳣
	MINOR_SIM_CARD_RESTORE,			//SIM���ָ�����
	MINOR_ALARMHOST_VI_LOST,		// ��Ƶ�źŶ�ʧ
	MINOR_ALARMHOST_ILLEGAL_ACCESS,	// �Ƿ�����
	MINOR_ALARMHOST_HD_FULL,		// Ӳ����
	MINOR_ALARMHOST_HD_ERROR,		// Ӳ�̴���
	MINOR_ALARMHOST_DCD_LOST,		// MODEM ����(������ʹ��)
	MINOR_ALARMHOST_IP_CONFLICT,	// IP��ַ��ͻ
	MINOR_ALARMHOST_NET_BROKEN,		// ����Ͽ�
	MINOR_ALARMHOST_REC_ERROR,      // ¼�����
	MINOR_ALARMHOST_VI_EXCEPTION,   // ��Ƶ�����쳣(ֻ���ģ��ͨ��)

    // ���� 
    MINOR_GUARD         = 0x01,		// ��ͨ����
    MINOR_UNGUARD,					// ��ͨ����
    MINOR_BYPASS,					// ��·
    MINOR_DURESS_ACCESS,			// Ю��
    MINOR_ALARMHOST_LOCAL_REBOOT,	// ��������
    MINOR_ALARMHOST_REMOTE_REBOOT,	// Զ������
    MINOR_ALARMHOST_LOCAL_UPGRADE,	// ��������
    MINOR_ALARMHOST_REMOTE_UPGRADE,	// Զ������
    MINOR_RECOVERY_DEFAULT_PARAM,	// �ָ�Ĭ�ϲ���
    MINOR_ALARM_OUTPUT,				// ���Ʊ������
    MINOR_ACCESS_OPEN,				// �����Ž���
    MINOR_ACCESS_CLOSE,				// �����Ž���
    MINOR_SIREN_OPEN,				// ���ƾ��ſ�
    MINOR_SIREN_CLOSE,				// ���ƾ��Ź�
    MINOR_MOD_ZONE_CONFIG,			// �޸ķ�������
    MINOR_MOD_ALARMOUT_CONIFG,		// ���Ʊ����������
    MINOR_MOD_ANALOG_CONFIG,		// �޸�ģ��������
    MINOR_RS485_CONFIG,				// �޸�485ͨ������
    MINOR_PHONE_CONFIG,				// �޸Ĳ�������
    MINOR_ADD_ADMIN,				// ���ӹ���Ա
    MINOR_MOD_ADMIN_PARAM,			// �޸Ĺ���Ա����
    MINOR_DEL_ADMIN,				// ɾ������Ա
    MINOR_ADD_NETUSER,				// ���Ӻ�˲���Ա
    MINOR_MOD_NETUSER_PARAM,		// �޸ĺ�˲���Ա����
    MINOR_DEL_NETUSER,				// ɾ����˲���Ա
    MINOR_ADD_OPERATORUSER,			// ����ǰ�˲���Ա
    MINOR_MOD_OPERATORUSER_PW,		// �޸�ǰ�˲���Ա����
    MINOR_DEL_OPERATORUSER,			// ɾ��ǰ�˲���Ա
    MINOR_ADD_KEYPADUSER,			// ���Ӽ���/�������û�	
    MINOR_DEL_KEYPADUSER,			// ɾ������/�������û�	
    MINOR_REMOTEUSER_LOGIN,			// Զ���û���½
    MINOR_REMOTEUSER_LOGOUT,		// Զ���û�ע��
    MINOR_REMOTE_GUARD,				// Զ�̲���
    MINOR_REMOTE_UNGUARD,			// Զ�̳���
    MINOR_MOD_HOST_CONFIG,          // �޸���������
    MINOR_RESTORE_BYPASS,			// ��·�ָ�
	MINOR_ALARMOUT_OPEN,			// �����������
	MINOR_ALARMOUT_CLOSE,			// ��������ر�
	MINOR_MOD_SUBSYSTEM_PARAM,		// �޸���ϵͳ��������
	MINOR_GROUP_BYPASS,				// ����·
	MINOR_RESTORE_GROUP_BYPASS,		// ����·�ָ�
	MINOR_MOD_GRPS_PARAM,			// �޸�GPRS����
	MINOR_MOD_NET_REPORT_PARAM,		// �޸������ϱ���������
	MINOR_MOD_REPORT_MOD,			// �޸��ϴ���ʽ����
	MINOR_MOD_GATEWAY_PARAM,		// �޸��Ž���������
	MINOR_ALARMHOST_REMOTE_START_REC,		// Զ�̿�ʼ¼��
	MINOR_ALARMHOST_REMOTE_STOP_REC,		// Զ��ֹͣ¼��
	MINOR_ALARMHOST_START_TRANS_CHAN,		// ��ʼ͸������
	MINOR_ALARMHOST_STOP_TRANS_CHAN,		// ֹͣ͸������
	MINOR_ALARMHOST_START_VT,				// ��ʼ�����Խ�
	MINOR_ALARMHOST_STOP_VTM,				// ֹͣ�����Խ�
	MINOR_ALARMHOST_REMOTE_PLAYBYFILE,		// Զ�̰��ļ��ط�
	MINOR_ALARMHOST_REMOTE_PLAYBYTIME,      // Զ�̰�ʱ��ط�
	MINOR_ALARMHOST_REMOTE_PTZCTRL,			// Զ����̨����
	MINOR_ALARMHOST_REMOTE_FORMAT_HDD,      // Զ�̸�ʽ��Ӳ��
	MINOR_ALARMHOST_REMOTE_LOCKFILE,		// Զ�������ļ�
	MINOR_ALARMHOST_REMOTE_UNLOCKFILE,      // Զ�̽����ļ�
	MINOR_ALARMHOST_REMOTE_CFGFILE_OUTPUT,  // Զ�̵��������ļ�
	MINOR_ALARMHOST_REMOTE_CFGFILE_INTPUT,  // Զ�̵��������ļ�
	MINOR_ALARMHOST_REMOTE_RECFILE_OUTPUT,  // Զ�̵���¼���ļ�
	
	MINOR_ALARMHOST_STAY_ARM,						//���ز���
	MINOR_ALARMHOST_QUICK_ARM,						//��ʱ����
	MINOR_ALARMHOST_AUTOMATIC_ARM,					//�Զ�����
	MINOR_ALARMHOST_AUTOMATIC_DISARM,				//�Զ�����
	MINOR_ALARMHOST_KEYSWITCH_ARM,					//Կ�׷�������
	MINOR_ALARMHOST_KEYSWITCH_DISARM,				//Կ�׷�������
	MINOR_ALARMHOST_CLEAR_ALARM,					//����
	MINOR_ALARMHOST_MOD_FAULT_CFG,					//�޸�ϵͳ��������
	MINOR_ALARMHOST_MOD_EVENT_TRIGGER_ALARMOUT_CFG,	//�޸��¼����������������
	MINOR_ALARMHOST_SEARCH_EXTERNAL_MODULE,			//�������ģ��
	MINOR_ALARMHOST_REGISTER_EXTERNAL_MODULE,		//����ע�����ģ��
	MINOR_ALARMHOST_CLOSE_KEYBOARD_ALARM,			//�رռ��̱�����ʾ��
	MINOR_ALARMHOST_MOD_3G_PARAM,					//�޸�3G����


    // �¼� 
    MINOR_SCHOOLTIME_IRGI_B = 0x01,		// B��Уʱ
    MINOR_SCHOOLTIME_SDK,				// SDKУʱ
    MINOR_SCHOOLTIME_SELFTEST			// ��ʱ�Լ�Уʱ
}ALARMHOST_MINOR_TYPE;


//����־��������ΪMAJOR_OPERATION=03��������ΪMINOR_LOCAL_CFG_PARM=0x52����MINOR_REMOTE_GET_PARM=0x76����MINOR_REMOTE_CFG_PARM=0x77ʱ��dwParaType:����������Ч���京�����£�
#define PARA_VIDEOOUT	0x1
#define PARA_IMAGE		0x2
#define PARA_ENCODE		0x4
#define PARA_NETWORK	0x8
#define PARA_ALARM		0x10
#define PARA_EXCEPTION	0x20
#define PARA_DECODER	0x40    /*������*/
#define PARA_RS232		0x80
#define PARA_PREVIEW	0x100
#define PARA_SECURITY	0x200
#define PARA_DATETIME	0x400
#define PARA_FRAMETYPE	0x800    /*֡��ʽ*/
#define PARA_VCA_RULE   0x1001  //��Ϊ���� 
#define PARA_VCA_CTRL   0x1002  //�������ܿ�����Ϣ
#define PARA_VCA_PLATE  0x1003 //  ����ʶ��

#define PARA_CODESPLITTER 0x2000 /*���������*/
//2010-01-22 ������Ƶ�ۺ�ƽ̨��־��Ϣ������
#define PARA_RS485		  0x2001			/* RS485������Ϣ*/
#define PARA_DEVICE		  0x2002			/* �豸������Ϣ*/
#define PARA_HARDDISK	  0x2003			/* Ӳ��������Ϣ */
#define PARA_AUTOBOOT	  0x2004			/* �Զ�����������Ϣ*/
#define PARA_HOLIDAY	  0x2005			/* �ڼ���������Ϣ*/			
#define PARA_IPC		  0x2006			/* IPͨ������ */	
/*************************������������ end*******************************/


/*******************�����ļ�����־��������ֵ*************************/
#define NET_DVR_FILE_SUCCESS		    1000	//����ļ���Ϣ
#define NET_DVR_FILE_NOFIND			    1001	//û���ļ�
#define NET_DVR_ISFINDING			    1002	//���ڲ����ļ�
#define	NET_DVR_NOMOREFILE			    1003	//�����ļ�ʱû�и�����ļ�
#define	NET_DVR_FILE_EXCEPTION		    1004	//�����ļ�ʱ�쳣

/*********************�ص��������� begin************************/

//�����ص�����
//��ӦNET_DVR_PLATE_RESULT
#define COMM_ALARM					        0x1100	//8000������Ϣ�����ϴ�
#define COMM_ALARM_PLATE				    0x1101	//����ʶ�𱨾���Ϣ
//��ӦNET_VCA_RULE_ALARM
#define COMM_ALARM_RULE				        0x1102	//��Ϊ����������Ϣ
#define COMM_ALARM_PDC                      0x1103  // ����ͳ�Ʊ�����Ϣ
#define COMM_ALARM_VIDEOPLATFORM            0x1104  // ��Ƶ�ۺ�ƽ̨����
#define COMM_ALARM_ALARMHOST                0x1105  // ���籨����������
#define COMM_ALARM_FACE                     0x1106   // �������ʶ�𱨾���Ϣ
#define COMM_RULE_INFO_UPLOAD               0x1107  //  �¼�������Ϣ�ϴ�
#define COMM_ALARM_AID                      0x1110      // ��ͨ�¼�������Ϣ
#define COMM_ALARM_TPS                      0x1111  // ��ͨ����ͳ�Ʊ�����Ϣ
//��������ץ�Ľ���ϴ�
#define COMM_UPLOAD_FACESNAP_RESULT         0x1112  //����ʶ�����ϴ�
#define COMM_SENSOR_VALUE_UPLOAD		    0x1120  // ģ��������ʵʱ�ϴ�
#define COMM_SENSOR_ALARM          		    0x1121  // ģ���������ϴ�
#define COMM_SWITCH_ALARM				    0x1122	// ����������
#define COMM_ALARMHOST_EXCEPTION            0x1123  // �����������ϱ���
#define COMM_ALARMHOST_OPERATEEVENT_ALARM   0x1124  // �����¼������ϴ�
#define COMM_ALARMHOST_SAFETYCABINSTATE		0x1125	// ������״̬
#define COMM_ALARMHOST_ALARMOUTSTATUS		0x1126	// ���������/����״̬
#define COMM_ALARM_ALARMGPS                 0x1202  //GPS������Ϣ�ϴ�
#define	COMM_TRADEINFO				        0x1500  //ATMDVR�����ϴ�������Ϣ
#define COMM_UPLOAD_PLATE_RESULT		    0x2800	//�ϴ�������Ϣ
#define COMM_ITC_STATUS_DETECT_RESULT       0x2810  //ʵʱ״̬������ϴ�(���ܸ���IPC)
#define COMM_IPC_AUXALARM_RESULT            0x2820  //PIR���������߱��������ȱ����ϴ�
#define COMM_UPLOAD_PICTUREINFO		        0x2900	//�ϴ�ͼƬ��Ϣ
#define COMM_SNAP_MATCH_ALARM               0x2902  //�������ȶԽ���ϴ�
#define COMM_ITS_PLATE_RESULT  	            0x3050  	//�ն�ͼƬ�ϴ�
#define	COMM_ITS_TRAFFIC_COLLECT	        0x3051		//�ն�ͳ�������ϴ�

#define COMM_ALARM_V30				        0x4000	//9000������Ϣ�����ϴ�
#define COMM_IPCCFG			                0x4001	//9000�豸IPC�������øı䱨����Ϣ�����ϴ�
#define COMM_IPCCFG_V31			            0x4002	//9000�豸IPC�������øı䱨����Ϣ�����ϴ���չ 9000_1.1
#define COMM_IPCCFG_V40                     0x4003  // IVMS 2000 ��������� NVR IPC�������øı�ʱ������Ϣ�ϴ�
#define COMM_ALARM_DEVICE                   0x4004  //�豸�������ݣ�����ͨ��ֵ����256����չ
#define	COMM_ITS_ROAD_EXCEPTION		        0x4500		//·���豸�쳣����
#define	COMM_SCREEN_ALARM                   0x5000  //������������������
#define COMM_DVCS_STATE_ALARM			    0x5001 //�ֲ�ʽ���������������ϴ�
#define COMM_PUSH_UPDATE_RECORD_INFO 		0x6001 //��ģʽ¼����Ϣ�ϴ�
/*************�����쳣����(��Ϣ��ʽ, �ص���ʽ(����))****************/
#define EXCEPTION_EXCHANGE			    0x8000	//�û�����ʱ�쳣
#define EXCEPTION_AUDIOEXCHANGE		    0x8001	//�����Խ��쳣
#define EXCEPTION_ALARM				    0x8002	//�����쳣
#define EXCEPTION_PREVIEW			    0x8003	//����Ԥ���쳣
#define EXCEPTION_SERIAL			    0x8004	//͸��ͨ���쳣
#define EXCEPTION_RECONNECT			    0x8005	//Ԥ��ʱ����
#define EXCEPTION_ALARMRECONNECT	    0x8006	//����ʱ����
#define EXCEPTION_SERIALRECONNECT	    0x8007	//͸��ͨ������
#define SERIAL_RECONNECTSUCCESS         0x8008	//͸��ͨ�������ɹ�
#define EXCEPTION_PLAYBACK	            0x8010	//�ط��쳣
#define EXCEPTION_DISKFMT	            0x8011	//Ӳ�̸�ʽ��
#define EXCEPTION_PASSIVEDECODE         0x8012  //���������쳣
#define EXCEPTION_EMAILTEST             0x8013  // �ʼ������쳣    
#define EXCEPTION_BACKUP                0x8014  // �����쳣
#define PREVIEW_RECONNECTSUCCESS        0x8015  //Ԥ��ʱ�����ɹ�
#define ALARM_RECONNECTSUCCESS          0x8016  //����ʱ�����ɹ�
#define RESUME_EXCHANGE				    0x8017	//�û������ָ�
#define NETWORK_FLOWTEST_EXCEPTION      0x8018  //������������쳣
#define EXCEPTION_PICPREVIEWRECONNECT	0x8019	//ͼƬԤ������
#define PICPREVIEW_RECONNECTSUCCESS		0x8020	//ͼƬԤ�������ɹ�
#define EXCEPTION_PICPREVIEW			0x8021	//ͼƬԤ���쳣
#define SUCCESS_PUSHDEVLOGON            0x8030  //��ģʽ�豸ע��ɹ�
/********************Ԥ���ص�����*********************/
#define NET_DVR_SYSHEAD			1	//ϵͳͷ����
#define NET_DVR_STREAMDATA		2	//��Ƶ�����ݣ�����������������Ƶ�ֿ�����Ƶ�����ݣ�
#define NET_DVR_AUDIOSTREAMDATA	3	//��Ƶ������
#define NET_DVR_STD_VIDEODATA	4	//��׼��Ƶ������
#define NET_DVR_STD_AUDIODATA	5	//��׼��Ƶ������
#define NET_DVR_CHANGE_FORWARD  10  //�����ı�Ϊ����  
#define NET_DVR_CHANGE_REVERSE  11  //�����ı�Ϊ����
#define NET_DVR_PRIVATE_DATA    112 //˽������,����������Ϣ

//�豸�ͺ�(DVR����)
/* �豸���� */
#define DVR							1				/*����δ�����dvr���ͷ���NETRET_DVR*/
#define ATMDVR						2				/*atm dvr*/
#define DVS							3				/*DVS*/
#define DEC							4				/* 6001D */
#define ENC_DEC						5				/* 6001F */
#define DVR_HC						6				/*8000HC*/
#define DVR_HT						7				/*8000HT*/
#define DVR_HF						8				/*8000HF*/
#define DVR_HS						9				/* 8000HS DVR(no audio) */
#define DVR_HTS						10              /* 8016HTS DVR(no audio) */
#define DVR_HB						11              /* HB DVR(SATA HD) */
#define DVR_HCS						12              /* 8000HCS DVR */
#define DVS_A						13              /* ��ATAӲ�̵�DVS */
#define DVR_HC_S					14              /* 8000HC-S */
#define DVR_HT_S					15              /* 8000HT-S */
#define DVR_HF_S					16              /* 8000HF-S */
#define DVR_HS_S					17              /* 8000HS-S */
#define ATMDVR_S					18              /* ATM-S */
#define DVR_7000H					19				/*7000Hϵ��*/
#define DEC_MAT						20              /*��·������*/
#define DVR_MOBILE					21				/* mobile DVR */                 
#define DVR_HD_S					22              /* 8000HD-S */
#define DVR_HD_SL					23				/* 8000HD-SL */
#define DVR_HC_SL					24				/* 8000HC-SL */
#define DVR_HS_ST					25				/* 8000HS_ST */
#define DVS_HW						26              /* 6000HW */
#define DS630X_D					27              /* ��·������ */
#define DS640X_HD					28				/*640X���������*/
#define DS610X_D                    29              /*610X������*/
#define IPCAM						30				/*IP �����*/
#define MEGA_IPCAM					31				/*852F&852MF*/
#define IPCAM_X62MF					32				/*862MF���Խ���9000�豸*/
#define ITCCAM                      35              /*���ܸ������������*/
#define IVS_IPCAM                   36              /*���ܷ����������������*/
#define ZOOMCAM                     38              /*һ���*/
#define IPDOME                      40              /*IP �������*/
#define IPDOME_MEGA200              41              /*IP 200��������*/
#define IPDOME_MEGA130              42              /*IP 130��������*/
#define IPDOME_AI                   43              /*IP �������ܿ���*/
#define TII_IPCAM                   44              /*�����ȳ��������*/
#define IPMOD						50				/*IP ģ��*/
#define IDS6501_HF_P                60              // 6501 ���� 
#define IDS6101_HF_A                61              //����ATM
#define IDS6002_HF_B                62          //˫�����٣�DS6002-HF/B
#define IDS6101_HF_B	            63              //��Ϊ������DS6101-HF/B DS6101-HF/B_SATA
#define IDS52XX		                64          //���ܷ�����IVMS
#define IDS90XX						65				// 9000����
#define IDS8104_AHL_S_HX            66          // ��������ʶ�� ATM
#define IDS8104_AHL_S_H             67              // ˽������ʶ�� ATM
#define IDS91XX						68				// 9100����
#define IIP_CAM_B                   69              // ������ΪIP�����
#define IIP_CAM_F                   70              //��������IP�����
#define DS71XX_H					71				/* DS71XXH_S */
#define DS72XX_H_S					72				/* DS72XXH_S */
#define DS73XX_H_S					73				/* DS73XXH_S */
#define DS72XX_HF_S                 74              //DS72XX_HF_S
#define DS73XX_HFI_S                75              //DS73XX_HFI_S
#define DS76XX_H_S					76				/* DVR,e.g. DS7604_HI_S */
#define DS76XX_N_S					77				/* NVR,e.g. DS7604_NI_S */
#define DS81XX_HS_S					81				/* DS81XX_HS_S */
#define DS81XX_HL_S					82				/* DS81XX_HL_S */
#define DS81XX_HC_S					83				/* DS81XX_HC_S */
#define DS81XX_HD_S					84				/* DS81XX_HD_S */
#define DS81XX_HE_S					85				/* DS81XX_HE_S */
#define DS81XX_HF_S					86				/* DS81XX_HF_S */
#define DS81XX_AH_S					87				/* DS81XX_AH_S */
#define DS81XX_AHF_S				88				/* DS81XX_AHF_S */
#define DS90XX_HF_S		            90              /*DS90XX_HF_S*/
#define DS91XX_HF_S					91              /*DS91XX_HF_S*/
#define DS91XX_HD_S					92              /*91XXHD-S(MD)*/
#define IDS90XX_A					93				// 9000���� ATM
#define IDS91XX_A					94				// 9100���� ATM
#define DS95XX_N_S					95              /*DS95XX_N_S NVR �����κ����*/
#define DS96XX_N_SH					96              /*DS96XX_N_SH NVR*/
#define DS90XX_HF_SH                97              /*DS90XX_HF_SH */   
#define DS91XX_HF_SH                98              /*DS91XX_HF_SH */
#define DS_B10_XY                   100             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�(X:�����Ƭ����Y:�����Ƭ��)*/
#define DS_6504HF_B10               101             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_6504D_B10                102             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_1832_B10                 103             /*��Ƶ�ۺ�ƽ̨�ڲ������*/
#define DS_6401HFH_B10              104             /*��Ƶ�ۺ�ƽ̨�ڲ����˰�*/
#define DS_65XXHC					105				//65XXHC DVS
#define DS_65XXHC_S					106				//65XXHC-SATA DVS
#define DS_65XXHF					107				//65XXHF DVS
#define DS_65XXHF_S					108				//65XXHF-SATA DVS
#define DS_6500HF_B                 109             //65 rack DVS
#define IVMS_6200_C                 110             // iVMS-6200(/C)  
#define IVMS_6200_B                 111             // iVMS-6200(/B)
#define DS_72XXHV_ST15				112				//72XXHV_ST15 DVR
#define DS_72XXHV_ST20				113				//72XXHV_ST20 DVR
#define IVMS_6200_T			        114             // IVMS-6200(/T)
#define IVMS_6200_BP                115             // IVMS-6200(/BP)
#define DS_81XXHC_ST				116				//DS_81XXHC_ST
#define DS_81XXHS_ST				117				//DS_81XXHS_ST
#define DS_81XXAH_ST				118				//DS_81XXAH_ST
#define DS_81XXAHF_ST				119				//DS_81XXAHF_ST
#define DS_66XXDVS				    120				//66XX DVS

#define DS_1964_B10                 121             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_B10N04_IN				122             /*��Ƶ�ۺ�ƽ̨�ڲ���������*/
#define DS_B10N04_OUT				123             /*��Ƶ�ۺ�ƽ̨�ڲ��������*/
#define DS_B10N04_INTEL             124             /*��Ƶ�ۺ�ƽ̨�ڲ�����*/
#define DS_6408HFH_B10E_RM          125             //V6����
#define DS_B10N64F1_RTM             126             //V6��������DSP
#define DS_B10N64F1D_RTM            127             //V6������DSP
#define DS_B10_SDS                  128             //��Ƶ�ۺ�ƽ̨���������
#define DS_B10_DS                   129             //��Ƶ�ۺ�ƽ̨�������
#define DS_6401HFH_B10V    			130     	    //VGA���������
#define DS_6504D_B10B               131             /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define DS_6504D_B10H               132             /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define DS_6504D_B10V               133             /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
#define DS_6408HFH_B10S			    134             //��Ƶ�ۺ�ƽ̨SDI�Ӱ� 
#define DS_18XX_N      				135             /* �����������*/ 

#define DS_18XX_PTZ					141				/*����������Ʒ*/
#define DS_19AXX					142				/*ͨ�ñ����������Ʒ*/
#define DS_19BXX					143				/*���ñ�������*/
#define DS_19CXX					144				/*�������б�������*/
#define DS_19DXX					145				/*������ر�������*/	
#define DS_19XX                     146             /*1900ϵ�б�������*/ 
#define DS_19SXX					147				/*��Ƶ��������*/
#define DS_1HXX						148				/*CS���Ʒ*/ //������

//2011-11-30
#define	DS_C10H						161				/*����������*/
#define DS_C10N_BI					162				//BNC������
#define DS_C10N_DI					163				//rbg������
#define DS_C10N_SI					164				//����������
#define DS_C10N_DO					165				//��ʾ������
#define DS_C10N_SERVER				166				//�ֲ�ʽ������


#define IDS_8104_AHFL_S_H           171             // 8104ATM 
#define IDS_65XX_HF_A               172             // 65 ATM
#define IDS90XX_HF_RH               173             // 9000 ����RH
#define IDS91XX_HF_RH               174             // 9100 ����RH�豸
#define IDS_65XX_HF_B               175             // 65 ��Ϊ����
#define IDS_65XX_HF_P               176             // 65 ����ʶ��
#define IVMS_6200_F 		        177             // IVMS-6200(/F)
#define IVMS_6200_A                 178             //iVMS-6200(/A)
#define IVMS_6200_F_S 		        179             // IVMS-6200(/F_S)���������������

#define DS90XX_HF_RH                181             // 9000 RH    648
#define DS91XX_HF_RH                182             // 9100 RH�豸 648
#define DS78XX_S					183             // 78ϵ���豸 6446
#define DS81XXHW_S					185				// 81 Resolution 960 KY2011
#define DS81XXHW_ST					186             // DS81XXHW_ST  KY2011
#define DS91XXHW_ST					187             // DS91XXHW_ST  KY2011
#define DS91XX_ST					188             // DS91XX_ST netra
#define DS81XX_ST					189             // DS81XX_ST netra
#define DS81XXHX_ST					190             // DS81XXHDI_ST,DS81XXHE_ST ky2012
#define DS73XXHX_ST					191             // DS73XXHI_ST ky2012
#define DS81XX_SH                   192             // ��Ѷ81SH,81SHF
#define DS81XX_SN                   193             // ��Ѷ81SNL

#define DS96XXN_ST                  194             //NVR:DS96xxN_ST
#define DS86XXN_ST                  195             //NVR:DS86xxN_ST
#define DS80XXHF_ST                 196             //DVR:DS80xxHF_ST
#define DS90XXHF_ST                 197             //DVR:DS90xxHF_ST
#define DS76XXN_ST                  198             //NVR:DS76xxN_ST

#define DS_9664N_RX                 199         //NVR:DS_9664N_RX
#define ENCODER_SERVER				200			// ���뿨������
#define DECODER_SERVER              201         // ���뿨������
#define PCNVR_SERVER                202         // PCNVR�洢������
#define CVR_SERVER                  203         // ��ŵCVR�������Լ���������ΪDVR_S-1
#define DS_91XXHFH_ST				204         // 91ϵ��HD-SDI����DVR
#define DS_66XXHFH					205         // 66���������
#define	TRAFFIC_TS_SERVER			210	       //�ն˷�����
#define	TRAFFIC_VAR					211	       //��Ƶ������¼��
#define DS_B11_M_CLASS 			    301             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�*/
#define DS_B12_M_CLASS 		 		302             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�*/
#define DS_6504HF_B11_CLASS 		303             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_6504HF_B12_CLASS 		304              /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define  DS_6401HFH_B11V_CLASS 	    305     //VGA����
#define  DS_6401HFH_B12V_CLASS 	    306     //VGA����
#define  DS_6408HFH_B11S_CLASS 	    307     //SDI
#define  DS_6408HFH_B12S_CLASS  	308     //SDI
#define  DS_6504D_B11H_CLASS        309   /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B11B_CLASS        310    /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B12B_CLASS        311       /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B11V_CLASS        312      /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
#define  DS_6504D_B12V_CLASS        313     /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
//B10����
#define  DS_6401HFH_B10R_CLASS 	    314     //B10 RGB����
#define  DS_6401HFH_B10D_CLASS 	    315     //B10 DVI����
#define  DS_6401HFH_B10H_CLASS 	    316     //B10 HDMI����
//B11����
#define  DS_6401HFH_B11R_CLASS 	    317     //B11 RGB����
#define  DS_6401HFH_B11D_CLASS 	    318     //B11 DVI����
#define  DS_6401HFH_B11H_CLASS 	    319     //B11 HDMI����
//B12����
#define  DS_6401HFH_B12R_CLASS 	    320     //B12 RGB����
#define  DS_6401HFH_B12D_CLASS 	    321     //B12 DVI����
#define  DS_6401HFH_B12H_CLASS 	    322     //B12 HDMI����
#define  DS_65XXD_B10_CLASS			323		//��Ƶ�ۺ�ƽ̨���ܽ���� 

//B10 V2.1����
#define  DS_6516HW_B10_CLASS		324     //netra���߱���
#define  DS_6401HFH_B10F_RX_CLASS   326		//�����˻����루֧��1/2·��˻����룩
#define  DS_6502HW_B10F_RX_CLASS	327		//960H��˻����루֧��1/4/8·��˻����룩
//2012-5-16����
#define  DS_6504D_B11Ex_CLASS		328     //netra�������
#define  DS_6504D_B12Ex_CLASS		329     //netra�������
#define  DS_6512_B11_CLASS			330     //netra���߱���
#define  DS_6512_B12_CLASS			331     //netra���߱���
#define  DS_6504D_B10H_CLASS        332     //��Ƶ�ۺ�ƽ̨�ڲ����������

//B20����
#define  DS_B20_MSU_NP              400     //���ذ�
#define  DS_6416HFH_B20S            401     //SDI�������
#define  DS_6416HFH_B20_RM          402     //��������������
#define  DS_6564D_B20D              403     //DVI����
#define  DS_6564D_B20H              404     //HDMI����
#define  DS_6564D_B20V              405     //VGA����
#define  DS_B20_MSU_T               406     //netra����
#define  DS_6408HFH_B20V            407     //VGA�����

//�����豸
#define DS_19M00_MN					601     //����������������ģ�� 

#define DS64XXHD_T					701				//64-T���������
#define DS_65XXD                    703             //65���ܽ�����
#define DS63XXD_T					704				//63-T���������
#define SCE_SERVER                  705     //ץ��������
#define DS_64XXHD_S                 706             //64XXHD-S���������
// DVR
#define DS90XXHW_ST					2001	// DS90XXHW_ST���DVR
#define DS72XXHX_SH                 2002	// DS-72xxHV_SH, DS-72xxHF-SH 
#define DS_92XX_HF_ST				2003	// DS-92XX-HF-ST 
#define DS_91XX_HF_XT				2004	// NETRET_9100DVR_HF_XT
#define DS_90XX_HF_XT               2005	// NETRET_9000DVR_HF_XT 
#define DS_73XXHX_SH				2006	// NETRET_7300DVR_HX_SH  
#define DS_72XXHFH_ST				2007	// NETRET_7200DVR_HFH_ST
//DS_67ϵ��

#define DS_67XXHF_SATA              2008 // DS-67XXHF-SATA
#define DS_67XXHW                   2009 // DS-67XXHW 
#define DS_67XXHW_SATA              2010 // DS-67XXHW-SATA
#define DS_67XXHF                   2011 // DS-67XXHF

//Netra2.3
#define DS_72XXHF_SV                2012  // DS-72xxHF-SV 
#define DS_72XXHW_SV                2013   // DS-72xxHW-SV


#define DS_81XXHX_SH                2014   // NETRET_8100DVR_HX_SH

#define IDS_91XX_HF_ST_A            2100    //iDS-9100HF-ST/A
#define IDS_91XX_HF_ST_B            2101    //iDS-9100HF-ST/B
#define IDS_90XX_HF_ST_A            2102    //iDS-9000HF-ST/A
#define IDS_90XX_HF_ST_B            2103    //iDS-9000HF-ST/B
#define IDS_81XX_HF_ST_A            2104    //iDS-8100HF-ST/A
#define IDS_81XX_HF_ST_B            2105    //iDS-8100HF-ST/B
#define IDS_80XX_HF_ST_A            2106    //iDS-8000HF-ST/A
#define IDS_80XX_HF_ST_B            2107    //iDS-8000HF-ST/B

// NVR
#define DS_77XXN_ST				    2201	// Netra NVR DS-77XXHF-ST
#define DS_95XX_N_ST			    2202	// Netra 95XXN_ST NVR          
#define DS_85XX_N_ST			    2203	// Netra 85XXN_ST NVR
#define DS_96XX_N_XT			    2204	// NETRET_9600NVR_N_XT
#define DS_76XX_N_SE				2205	// NETRET_7600NVR_N_SE

//PCNVR
#define PCNVR_IVMS_4200             2301	// PCNVR_IVMS_4200
 
/**********************�豸���� end***********************/
/******************************��������ȡ*********************************/
//������ȡ����
#define DEVICE_SOFTHARDWARE_ABILITY         0x001  //�豸��Ӳ������
#define DEVICE_NETWORK_ABILITY              0x002  //�豸��������
#define DEVICE_ENCODE_ALL_ABILITY           0x003  //�豸���б�������
#define	DEVICE_ENCODE_CURRENT               0x004  //�豸��ǰ��������
#define IPC_FRONT_PARAMETER			        0x005	 //ipcǰ�˲���1.0
#define IPC_UPGRADE_DESCRIPTION		        0x006	 //ipc������Ϣ
#define DEVICE_RAID_ABILITY                 0x007  //RAID����
#define DEVICE_ENCODE_ALL_ABILITY_V20       0x008	 //�豸���б�������2.0
#define IPC_FRONT_PARAMETER_V20		        0x009	 //ipcǰ�˲���2.0
#define DEVICE_ALARM_ABILITY                0x00a  //������������
#define DEVICE_DYNCHAN_ABILITY		        0x00b  //�豸����ͨ������
#define DEVICE_USER_ABILITY                 0x00c  //�豸�û������������
#define DEVICE_NETAPP_ABILITY               0x00d  //�豸����Ӧ�ò�������
#define DEVICE_VIDEOPIC_ABILITY             0x00e  //�豸ͼ���������
#define DEVICE_JPEG_CAP_ABILITY             0x00f  //�豸JPEGץͼ����
#define DEVICE_SERIAL_ABILITY               0x010  //RS232��RS485��������
#define DEVICE_ABILITY_INFO			        0x011	 //�豸ͨ���������ͣ������������ݷ��͵������ڵ�������
#define VCA_DEV_ABILITY 	                0x100  //�豸���ܷ�����������
#define VCA_CHAN_ABILITY                    0x110  //��Ϊ��������
#define MATRIXDECODER_ABILITY               0x200  //��·��������ʾ����������
#define VIDEOPLATFORM_ABILITY               0x210 //��Ƶ�ۺ�ƽ̨������
#define VIDEOPLATFORM_SBUCODESYSTEM_ABILITY 0x211 //��Ƶ�ۺ�ƽ̨������ϵͳ������
#define WALL_ABILITY                        0x212  //����ǽ������
#define DECODECARD_ABILITY                  0x220 //���뿨������������
#define VIDEOPLATFORM_ABILITY_V40           0x230 //��Ƶ�ۺ�ƽ̨������
#define MATRIXMANAGEDEVICE_ABILITY          0x240 //�����������������
#define MATRIXDECODER_ABILITY_V41           0x260 //������������
#define DECODER_ABILITY                     0x261 //������������
#define DECODECARD_ABILITY_V41              0x270 //���뿨������������V41
#define CODECARD_ABILITY                    0x271  //���뿨������
#define SNAPCAMERA_ABILITY                  0x300  //ץ�Ļ�������
#define ITC_TRIGGER_MODE_ABILITY            0x301  //����IPC�豸�Ĵ���ģʽ����
#define COMPRESSIONCFG_ABILITY              0x400  //��ȡѹ��������������
#define COMPRESSION_LIMIT                   0x401  //��ȡ��������ѹ��������������
#define PIC_CAPTURE_ABILITY			        0x402  //��ͼƬ�ֱ�����������
#define ALARMHOST_ABILITY                   0x500 //���籨������������ 
#define IT_DEVICE_ABILITY                   0x501  //���ܽ�ͨ������
#define	SCREENCONTROL_ABILITY		        0x600 	//����������������
#define	SCREENSERVER_ABILITY                0x610 	//����������������
#define FISHEYE_ABILITY                     0x700   //����������
/*************************************************
�������ýṹ������(����_V30Ϊ9000����)
**************************************************/

/////////////////////////////////////////////////////////////////////////
//Уʱ�ṹ����
typedef struct
{
	DWORD dwYear;		//��
	DWORD dwMonth;		//��
	DWORD dwDay;		//��
	DWORD dwHour;		//ʱ
	DWORD dwMinute;		//��
	DWORD dwSecond;		//��
}NET_DVR_TIME, *LPNET_DVR_TIME;

typedef struct tagNET_DVR_TIME_EX
{
	 WORD wYear;
	 BYTE byMonth;
	 BYTE byDay;
	 BYTE byHour;
	 BYTE byMinute;
	 BYTE bySecond;
	 BYTE byRes;
}NET_DVR_TIME_EX,*LPNET_DVR_TIME_EX;

//ʱ���(�ӽṹ)
typedef struct
{
	//��ʼʱ��
    BYTE byStartHour;
	BYTE byStartMin;
	//����ʱ��
	BYTE byStopHour;
	BYTE byStopMin;
}NET_DVR_SCHEDTIME, *LPNET_DVR_SCHEDTIME;

/*�豸�������쳣����ʽ*/
/*�豸�������쳣����ʽ*/
#define NOACTION			0x0				/*����Ӧ*/
#define WARNONMONITOR		0x1				/*�������Ͼ���*/
#define WARNONAUDIOOUT		0x2				/*��������*/
#define UPTOCENTER			0x4				/*�ϴ�����*/
#define TRIGGERALARMOUT		0x8				/*�����������*/
#define TRIGGERCATPIC		0x10			/*����ץͼ���ϴ�E-mail*/
#define SEND_PIC_FTP        0x200           /*ץͼ���ϴ�ftp*/

//�������쳣����ṹ(�ӽṹ)(�ദʹ��)(9000��չ)
typedef struct
{
	DWORD	dwHandleType;	/*����ʽ,����ʽ��"��"���*/
	/*0x00: ����Ӧ*/
	/*0x01: �������Ͼ���*/
	/*0x02: ��������*/
	/*0x04: �ϴ�����*/
	/*0x08: �����������*/
	/*0x10: ����JPRGץͼ���ϴ�Email*/
	/*0x20: �������ⱨ��������*/
	/*0x40: �������ӵ�ͼ(Ŀǰֻ��PCNVR֧��)*/
	/*0x200: ץͼ���ϴ�FTP*/
	BYTE byRelAlarmOut[MAX_ALARMOUT_V30];  
    //�������������ͨ��,�������������,Ϊ1��ʾ���������
}NET_DVR_HANDLEEXCEPTION_V30, *LPNET_DVR_HANDLEEXCEPTION_V30;

//�������쳣����ṹ(�ӽṹ)(�ദʹ��)
typedef struct
{
	DWORD	dwHandleType;			/*����ʽ,����ʽ��"��"���*/
	/*0x00: ����Ӧ*/
	/*0x01: �������Ͼ���*/
	/*0x02: ��������*/
	/*0x04: �ϴ�����*/
	/*0x08: �����������*/
	/*0x10: Jpegץͼ���ϴ�EMail*/
	BYTE byRelAlarmOut[MAX_ALARMOUT];  //�������������ͨ��,�������������,Ϊ1��ʾ���������
}NET_DVR_HANDLEEXCEPTION, *LPNET_DVR_HANDLEEXCEPTION;

//DVR�豸����
typedef struct
{
	DWORD dwSize;
	BYTE sDVRName[NAME_LEN];     //DVR����
	DWORD dwDVRID;				//DVR ID,����ң���� //V1.4(0-99), V1.5(0-255)
	DWORD dwRecycleRecord;		//�Ƿ�ѭ��¼��,0:����; 1:��
	//���²��ɸ���
	BYTE sSerialNumber[SERIALNO_LEN];  //���к�
	DWORD dwSoftwareVersion;			//����汾��,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwSoftwareBuildDate;			//�����������,0xYYYYMMDD
	DWORD dwDSPSoftwareVersion;		    //DSP����汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwDSPSoftwareBuildDate;		// DSP�����������,0xYYYYMMDD
	DWORD dwPanelVersion;				// ǰ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwHardwareVersion;	// Ӳ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	BYTE byAlarmInPortNum;		//DVR�����������
	BYTE byAlarmOutPortNum;		//DVR�����������
	BYTE byRS232Num;			//DVR 232���ڸ���
	BYTE byRS485Num;			//DVR 485���ڸ���
	BYTE byNetworkPortNum;		//����ڸ���
	BYTE byDiskCtrlNum;			//DVR Ӳ�̿���������
	BYTE byDiskNum;				//DVR Ӳ�̸���
	BYTE byDVRType;				//DVR����, 1:DVR 2:ATM DVR 3:DVS ......
	BYTE byChanNum;				//DVR ͨ������
	BYTE byStartChan;			//��ʼͨ����,����DVS-1,DVR - 1
	BYTE byDecordChans;			//DVR ����·��
	BYTE byVGANum;				//VGA�ڵĸ���
	BYTE byUSBNum;				//USB�ڵĸ���
    BYTE byAuxoutNum;			//���ڵĸ���
    BYTE byAudioNum;			//�����ڵĸ���
    BYTE byIPChanNum;			//�������ͨ����
}NET_DVR_DEVICECFG, *LPNET_DVR_DEVICECFG;

/*
IP��ַ
*/
typedef struct
{		
	char	sIpV4[16];						/* IPv4��ַ */
	BYTE	byIPv6[128];						/* ���� */
}NET_DVR_IPADDR, *LPNET_DVR_IPADDR;

/*
�������ݽṹ(�ӽṹ)(9000��չ)
*/
typedef struct 
{
	NET_DVR_IPADDR	struDVRIP;          					//DVR IP��ַ
	NET_DVR_IPADDR	struDVRIPMask;  //DVR IP��ַ����
	DWORD	dwNetInterface;   								//����ӿ�1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M����Ӧ
	WORD	wDVRPort;										//�˿ں�
	WORD	wMTU;											//����MTU���ã�Ĭ��1500��
	BYTE	byMACAddr[MACADDR_LEN];							// �����ַ
	BYTE    byRes[2];              //����
}NET_DVR_ETHERNET_V30, *LPNET_DVR_ETHERNET_V30;

/*
�������ݽṹ(�ӽṹ)
*/
typedef struct
{
	char sDVRIP[16];          //DVR IP��ַ
	char sDVRIPMask[16];      //DVR IP��ַ����
	DWORD dwNetInterface;     //����ӿ� 1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M����Ӧ
	WORD wDVRPort;		      //�˿ں�
	BYTE byMACAddr[MACADDR_LEN];		//�������������ַ
}NET_DVR_ETHERNET;

//pppoe�ṹ
typedef struct 
{
	DWORD	dwPPPOE;										//0-������,1-����
	BYTE	sPPPoEUser[NAME_LEN];							//PPPoE�û���
	char	sPPPoEPassword[PASSWD_LEN];						// PPPoE����
	NET_DVR_IPADDR	struPPPoEIP;							//PPPoE IP��ַ
}NET_DVR_PPPOECFG, *LPNET_DVR_PPPOECFG;

//�������ýṹ(9000��չ)
typedef struct
{	
	DWORD dwSize;
	NET_DVR_ETHERNET_V30	struEtherNet[MAX_ETHERNET];		//��̫����
	NET_DVR_IPADDR	struRes1[2];					/*����*/
	NET_DVR_IPADDR	struAlarmHostIpAddr;					/* ��������IP��ַ */
	BYTE	byRes2[4];								/* ���� */
	WORD	wAlarmHostIpPort;								/* ���������˿ں� */
	BYTE    byUseDhcp;                                      /* �Ƿ�����DHCP 0xff-��Ч 0-������ 1-����*/
	BYTE	byIPv6Mode;								//IPv6���䷽ʽ��0-·�ɹ��棬1-�ֶ����ã�2-����DHCP����
	NET_DVR_IPADDR	struDnsServer1IpAddr;					/* ����������1��IP��ַ */
	NET_DVR_IPADDR	struDnsServer2IpAddr;					/* ����������2��IP��ַ */
	BYTE	byIpResolver[MAX_DOMAIN_NAME];					/* IP����������������IP��ַ */
	WORD	wIpResolverPort;								/* IP�����������˿ں� */
	WORD	wHttpPortNo;									/* HTTP�˿ں� */
	NET_DVR_IPADDR	struMulticastIpAddr;					/* �ಥ���ַ */
	NET_DVR_IPADDR	struGatewayIpAddr;						/* ���ص�ַ */
	NET_DVR_PPPOECFG struPPPoE;	
    BYTE    byRes[64];
} NET_DVR_NETCFG_V30, *LPNET_DVR_NETCFG_V30;

//���������������ṹ
typedef struct 
{
	NET_DVR_IPADDR struDVRIP;           //DVR IP��ַ
	NET_DVR_IPADDR struDVRIPMask;           //DVR IP��ַ����
	DWORD dwNetInterface;    //����ӿ�1-10MBase-T 2-10MBase-Tȫ˫�� 3-100MBase-TX 4-100Mȫ˫�� 5-10M/100M/1000M����Ӧ
	BYTE byRes1[2]; 
	WORD wMTU;             //����MTU���ã�Ĭ��1500��
	BYTE byMACAddr[MACADDR_LEN]; //�����ַ��ֻ������ʾ
	BYTE byRes2[2]; //����
	BYTE byUseDhcp;                          /* �Ƿ�����DHCP */
	BYTE byRes3[3];
	NET_DVR_IPADDR struGatewayIpAddr;     /* ���ص�ַ */
	NET_DVR_IPADDR struDnsServer1IpAddr; /* ����������1��IP��ַ */
	NET_DVR_IPADDR struDnsServer2IpAddr; /* ����������2��IP��ַ */
}NET_DVR_ETHERNET_MULTI, *LPNET_DVR_ETHERNET_MULTI;

//�������������ýṹ
typedef struct
{
	DWORD  dwSize;
	BYTE   byDefaultRoute;        //Ĭ��·�ɣ�0��ʾstruEtherNet[0]��1��ʾstruEtherNet[1]
	BYTE   byNetworkCardNum;      //�豸ʵ�ʿ����õ�������Ŀ
	BYTE   byRes[2]; //����
	NET_DVR_ETHERNET_MULTI struEtherNet[MAX_NETWORK_CARD]; //��̫����
	NET_DVR_IPADDR         struManageHost1IpAddr;     /* ����������IP��ַ */
	NET_DVR_IPADDR         struManageHost2IpAddr;     /* ����������IP��ַ */
	NET_DVR_IPADDR	       struAlarmHostIpAddr; /* ��������IP��ַ */
	WORD wManageHost1Port;     /* �����������˿ں� */
	WORD wManageHost2Port;     /* �����������˿ں� */
	WORD wAlarmHostIpPort;     /* ���������˿ں� */
	BYTE  byIpResolver[MAX_DOMAIN_NAME];     /* IP����������������IP��ַ */
	WORD wIpResolverPort; /* IP�����������˿ں� */
	WORD wDvrPort; //ͨѶ�˿� Ĭ��8000 
	WORD wHttpPortNo; /* HTTP�˿ں� */
	BYTE  byRes2[6];
	NET_DVR_IPADDR   struMulticastIpAddr; /* �ಥ���ַ */
	NET_DVR_PPPOECFG struPPPoE;
	BYTE        byRes3[24];
}NET_DVR_NETCFG_MULTI, *LPNET_DVR_NETCFG_MULTI;

//�������ýṹ
typedef struct
{
	DWORD dwSize;
	NET_DVR_ETHERNET struEtherNet[MAX_ETHERNET];		/* ��̫���� */
	char sManageHostIP[16];		//Զ�̹���������ַ
	WORD wManageHostPort;		//Զ�̹��������˿ں�
	char sIPServerIP[16];            //IPServer��������ַ
	char sMultiCastIP[16];     //�ಥ���ַ
	char sGatewayIP[16];       	//���ص�ַ
	char sNFSIP[16];			//NFS����IP��ַ
	BYTE sNFSDirectory[PATHNAME_LEN];//NFSĿ¼
	DWORD dwPPPOE;				//0-������,1-����
	BYTE sPPPoEUser[NAME_LEN];	//PPPoE�û���
	char sPPPoEPassword[PASSWD_LEN];// PPPoE����
	char sPPPoEIP[16];			//PPPoE IP��ַ(ֻ��)
	WORD wHttpPort;				//HTTP�˿ں�
}NET_DVR_NETCFG, *LPNET_DVR_NETCFG;

//ͨ��ͼ��ṹ
//�ƶ����(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byMotionScope[64][96];									/*�������,0-96λ,��ʾ64��,����96*64��С���,Ϊ1��ʾ���ƶ��������,0-��ʾ����*/
	BYTE byMotionSensitive;										/*�ƶ����������, 0 - 5,Խ��Խ����,oxff�ر�*/
	BYTE byEnableHandleMotion;									/* �Ƿ����ƶ���� 0���� 1����*/ 
	BYTE byEnableDisplay;	/*�����ƶ���������ʾ��0-��1-��*/
	char reservedData;	
	NET_DVR_HANDLEEXCEPTION_V30 struMotionHandleType;				/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*����ʱ��*/
	BYTE byRelRecordChan[MAX_CHANNUM_V30];									/* ����������¼��ͨ��*/
}NET_DVR_MOTION_V30, *LPNET_DVR_MOTION_V30;

//�ƶ����(�ӽṹ)
typedef struct 
{
	BYTE byMotionScope[18][22];	/*�������,����22*18��С���,Ϊ1��ʾ�ĺ�����ƶ��������,0-��ʾ����*/
	BYTE byMotionSensitive;		/*�ƶ����������, 0 - 5,Խ��Խ����,0xff�ر�*/
	BYTE byEnableHandleMotion;	/* �Ƿ����ƶ���� */
	BYTE byEnableDisplay;	/*�����ƶ���������ʾ��0-��1-��*/
	char reservedData;
	NET_DVR_HANDLEEXCEPTION strMotionHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
}NET_DVR_MOTION, *LPNET_DVR_MOTION;

//�ڵ�����(�ӽṹ)(9000��չ)  �����С704*576
typedef struct 
{
	DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
	WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
	WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
	WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
	NET_DVR_HANDLEEXCEPTION_V30 strHideAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
}NET_DVR_HIDEALARM_V30, *LPNET_DVR_HIDEALARM_V30;
//�ڵ�����(�ӽṹ)  �����С704*576
typedef struct 
{
	DWORD dwEnableHideAlarm;				/* �Ƿ������ڵ����� ,0-��,1-�������� 2-�������� 3-��������*/
	WORD wHideAlarmAreaTopLeftX;			/* �ڵ������x���� */
	WORD wHideAlarmAreaTopLeftY;			/* �ڵ������y���� */
	WORD wHideAlarmAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAlarmAreaHeight;				/*�ڵ�����ĸ�*/
	NET_DVR_HANDLEEXCEPTION strHideAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
}NET_DVR_HIDEALARM, *LPNET_DVR_HIDEALARM;

//�źŶ�ʧ����(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
	NET_DVR_HANDLEEXCEPTION_V30 strVILostHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
}NET_DVR_VILOST_V30, *LPNET_DVR_VILOST_V30;

//�źŶ�ʧ����(�ӽṹ)
typedef struct 
{
	BYTE byEnableHandleVILost;	/* �Ƿ����źŶ�ʧ���� */
	NET_DVR_HANDLEEXCEPTION strVILostHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
}NET_DVR_VILOST, *LPNET_DVR_VILOST;

//�ڵ�����(�ӽṹ)
typedef struct 
{
	WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
	WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
	WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
}NET_DVR_SHELTER, *LPNET_DVR_SHELTER;

typedef struct
{
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/	
	BYTE bySaturation;  	/*���Ͷ�,0-255*/
	BYTE byHue;    			/*ɫ��,0-255*/
}NET_DVR_COLOR, *LPNET_DVR_COLOR;


//ͨ��ͼ��ṹ(9000��չ)
typedef struct
{
	DWORD dwSize;
	BYTE  sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	BYTE  byReservedData[64];/*����*/
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//��Ƶ�źŶ�ʧ����
	NET_DVR_VILOST_V30 struVILost;
	NET_DVR_VILOST_V30 struRes;		/*����*/
//	BYTE byRes1[328];
	//�ƶ����
	NET_DVR_MOTION_V30 struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM_V30 struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	/*6: xx/xx/xxxx(��/��/��) */
	/*7: xxxx/xx/xx(��/��/��) */
	/*8: xx/xx/xxxx(��/��/��)*/
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
    BYTE byHourOSDType;				/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
	BYTE byFontSize;//�����С��16*16(��)/8*16(Ӣ)��1-32*32(��)/16*32(Ӣ)��2-64*64(��)/32*64(Ӣ) 
	BYTE byRes[63];
}NET_DVR_PICCFG_V30, *LPNET_DVR_PICCFG_V30;

//ͨ��ͼ��ṹSDK_V14��չ
typedef struct 
{
	DWORD dwSize;
	BYTE sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/	
	BYTE bySaturation;  	/*���Ͷ�,0-255 */
	BYTE byHue;    			/*ɫ��,0-255*/
	//��ʾͨ����
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//�źŶ�ʧ����
	NET_DVR_VILOST struVILost;
	//�ƶ����
	NET_DVR_MOTION struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	NET_DVR_SHELTER struShelter[MAX_SHELTERNUM];
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	/*6: xx/xx/xxxx(��/��/��) */
	/*7: xxxx/xx/xx(��/��/��) */
	/*8: xx/xx/xxxx(��/��/��)*/
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
	BYTE byHourOsdType;		/* OSDСʱ��:0-24Сʱ��,1-12Сʱ�� */
}NET_DVR_PICCFG_EX, *LPNET_DVR_PICCFG_EX;

//ͨ��ͼ��ṹ(SDK_V13��֮ǰ�汾)
typedef struct 
{
	DWORD dwSize;
	BYTE sChanName[NAME_LEN];
	DWORD dwVideoFormat;	/* ֻ�� ��Ƶ��ʽ 1-NTSC 2-PAL*/
	BYTE byBrightness;  	/*����,0-255*/
	BYTE byContrast;    	/*�Աȶ�,0-255*/	
	BYTE bySaturation;  	/*���Ͷ�,0-255 */
	BYTE byHue;    			/*ɫ��,0-255*/
	//��ʾͨ����
	DWORD dwShowChanName; // Ԥ����ͼ�����Ƿ���ʾͨ������,0-����ʾ,1-��ʾ �����С704*576
	WORD wShowNameTopLeftX;				/* ͨ��������ʾλ�õ�x���� */
	WORD wShowNameTopLeftY;				/* ͨ��������ʾλ�õ�y���� */
	//�źŶ�ʧ����
	NET_DVR_VILOST struVILost;
	//�ƶ����
	NET_DVR_MOTION struMotion;
	//�ڵ�����
	NET_DVR_HIDEALARM struHideAlarm;
	//�ڵ�  �����С704*576
	DWORD dwEnableHide;		/* �Ƿ������ڵ� ,0-��,1-��*/
	WORD wHideAreaTopLeftX;				/* �ڵ������x���� */
	WORD wHideAreaTopLeftY;				/* �ڵ������y���� */
	WORD wHideAreaWidth;				/* �ڵ�����Ŀ� */
	WORD wHideAreaHeight;				/*�ڵ�����ĸ�*/
	//OSD
	DWORD dwShowOsd;// Ԥ����ͼ�����Ƿ���ʾOSD,0-����ʾ,1-��ʾ �����С704*576
	WORD wOSDTopLeftX;				/* OSD��x���� */
	WORD wOSDTopLeftY;				/* OSD��y���� */
	BYTE byOSDType;					/* OSD����(��Ҫ�������ո�ʽ) */
	/* 0: XXXX-XX-XX ������ */
	/* 1: XX-XX-XXXX ������ */
	/* 2: XXXX��XX��XX�� */
	/* 3: XX��XX��XXXX�� */
	/* 4: XX-XX-XXXX ������*/
	/* 5: XX��XX��XXXX�� */
	/*6: xx/xx/xxxx(��/��/��) */
	/*7: xxxx/xx/xx(��/��/��) */
	/*8: xx/xx/xxxx(��/��/��)*/
	BYTE byDispWeek;				/* �Ƿ���ʾ���� */
	BYTE byOSDAttrib;				/* OSD����:͸������˸ */
	/* 1: ͸��,��˸ */
	/* 2: ͸��,����˸ */
	/* 3: ��˸,��͸�� */
	/* 4: ��͸��,����˸ */
	char reservedData2;
}NET_DVR_PICCFG, *LPNET_DVR_PICCFG;

//����ѹ������(�ӽṹ)(9000��չ)
typedef struct 
{
	BYTE byStreamType;		//�������� 0-��Ƶ��, 1-������, ��ʾ�¼�ѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
    /*�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5��������,6-QVGA(320*240), 7-QQVGA(160*120), 13-576*576,
    16-VGA��640*480��, 17-UXGA��1600*1200��, 18-SVGA ��800*600��,
    19-HD720p��1280*720��,20-XVGA,  21-HD900p, 23-1536*1536,24-1920*1920, 27-1920*1080(1080p), 
    28-2560*1920, 29-1600*304, 30-2048*1536, 31-2448*2048,32-2448*1200,
    33-2448*800,34-XGA��1024*768����35-SXGA��1280*1024��,36-WD1(960*576/960*480),37-1080i,38-WXGA(1440*900)
	39-HD_F(1920*1080/1280*720),40-HD_H(1920*540/1280*360),41-HD_Q(960*540/630*360)
	42-2336*1744, 43-1920*1456, 44-2592*2048, 45-3296*2472
	0xff-Auto(ʹ�õ�ǰ�����ֱ���)*/
    BYTE byResolution;  	
	BYTE byBitrateType;		//�������� 0:������, 1:������
	BYTE byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
    /*��Ƶ����:0-������1-16K(����)��2-32K��3-48k��4-64K��5-80K��6-96K��7-128K��8-160k��9-192K��10-224K��
    11-256K��12-320K��13-384K��14-448K��15-512K��16-640K��17-768K��18-896K��19-1024K��20-1280K��21-1536K��22-1792K��23-2048K��
    24-3072K��25-4096K��26-8192K��27-16384K�����λ(31λ)�ó�1��ʾ���Զ���������0��30λ��ʾ����ֵ����Сֵ16k*/
	DWORD dwVideoBitrate; 	 
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; V2.0�汾���¼�14-15; 15-18; 16-22;
	WORD  wIntervalFrameI;  //I֡���
	BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡(2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����)
 	BYTE  byres1;        //����
 	BYTE  byVideoEncType;   //��Ƶ�������� 0 ˽��h264;1��׼h264; 2��׼mpeg4; 3-M-JPEG
 	BYTE  byAudioEncType;   //��Ƶ�������� 0-OggVorbis;1-G711_U;2-G711_A;6-G726
	BYTE  byVideoEncComplexity; //��Ƶ���븴�Ӷȣ�0-�ͣ�1-�У�2��
    BYTE  byres[9];//���ﱣ����Ƶ��ѹ������
}NET_DVR_COMPRESSION_INFO_V30, *LPNET_DVR_COMPRESSION_INFO_V30;


//ͨ��ѹ������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_V30 struNormHighRecordPara;    //¼�� ��Ӧ8000����ͨ
	NET_DVR_COMPRESSION_INFO_V30 struRes;//���� char reserveData[28];
    NET_DVR_COMPRESSION_INFO_V30 struEventRecordPara;       //�¼�����ѹ������
	NET_DVR_COMPRESSION_INFO_V30 struNetPara;               //����(������)
}NET_DVR_COMPRESSIONCFG_V30, *LPNET_DVR_COMPRESSIONCFG_V30;

//����ѹ������(�ӽṹ)
typedef struct 
{
	BYTE byStreamType;		//��������0-��Ƶ��,1-������,��ʾѹ������ʱ���λ��ʾ�Ƿ�����ѹ������
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
	BYTE byBitrateType;		//��������0:�����ʣ�1:������
	BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
							// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
							//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20;
}NET_DVR_COMPRESSION_INFO, *LPNET_DVR_COMPRESSION_INFO;

//ͨ��ѹ������
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO struRecordPara; //¼��/�¼�����¼��
	NET_DVR_COMPRESSION_INFO struNetPara;	//����/����
}NET_DVR_COMPRESSIONCFG, *LPNET_DVR_COMPRESSIONCFG;

//����ѹ������(�ӽṹ)(��չ) ����I֡���
typedef struct 
{
	BYTE byStreamType;		//��������0-��Ƶ��, 1-������
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF, 5-2QCIF(352X144)(����ר��)
	BYTE byBitrateType;		//��������0:�����ʣ�1:������
	BYTE  byPicQuality;		//ͼ������ 0-��� 1-�κ� 2-�Ϻ� 3-һ�� 4-�ϲ� 5-��
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
	// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
	//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20, //V2.0����14-15, 15-18, 16-22;
	WORD  wIntervalFrameI;  //I֡���
	//2006-08-11 ���ӵ�P֡�����ýӿڣ����Ը���ʵʱ����ʱ����
	BYTE  byIntervalBPFrame;//0-BBP֡; 1-BP֡; 2-��P֡
	BYTE  byRes;
}NET_DVR_COMPRESSION_INFO_EX, *LPNET_DVR_COMPRESSION_INFO_EX;

//ͨ��ѹ������(��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_EX struRecordPara; //¼��
	NET_DVR_COMPRESSION_INFO_EX struNetPara;	//����
}NET_DVR_COMPRESSIONCFG_EX, *LPNET_DVR_COMPRESSIONCFG_EX;


//ʱ���¼���������(�ӽṹ)
typedef struct 
{
	NET_DVR_SCHEDTIME struRecordTime;
	BYTE byRecordType;	//0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&����, 5:�����, 6: ����¼��,10-PIR������11-���߱�����12-���ȱ�����13-�ƶ�|��������|PIR|���߱���|���ȱ���,14-���ܽ�ͨ�¼�
	char reservedData[3];
}NET_DVR_RECORDSCHED, *LPNET_DVR_RECORDSCHED;

//ȫ��¼���������(�ӽṹ)
typedef struct 
{
	WORD wAllDayRecord;				/* �Ƿ�ȫ��¼�� 0-�� 1-��*/
	BYTE byRecordType;				/* ¼������ 0:��ʱ¼��1:�ƶ���⣬2:����¼��3:����|������4:����&���� 5:�����, 6: ����¼��,10-PIR������11-���߱�����12-���ȱ�����13-�ƶ�|��������|PIR|���߱���|���ȱ���,14-���ܽ�ͨ�¼�*/
	char reservedData;
}NET_DVR_RECORDDAY, *LPNET_DVR_RECORDDAY;

//ͨ��¼���������(9000��չ)
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwRecord;  						/*�Ƿ�¼�� 0-�� 1-��*/
	NET_DVR_RECORDDAY	struRecAllDay[MAX_DAYS];
	NET_DVR_RECORDSCHED	struRecordSched[MAX_DAYS][MAX_TIMESEGMENT_V30];
	DWORD	dwRecordTime;					/* ¼����ʱ���� 0-5�룬 1-10�룬 2-30�룬 3-1���ӣ� 4-2���ӣ� 5-5���ӣ� 6-10����*/
	DWORD	dwPreRecordTime;				/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
	DWORD	dwRecorderDuration;				/* ¼�񱣴���ʱ�� */
	BYTE	byRedundancyRec;	/*�Ƿ�����¼��,��Ҫ����˫���ݣ�0/1*/
	BYTE	byAudioRec;		/*¼��ʱ����������ʱ�Ƿ��¼��Ƶ���ݣ������д˷���*/
	BYTE	byReserve[10]; 
}NET_DVR_RECORD_V30, *LPNET_DVR_RECORD_V30;

//ͨ��¼���������
typedef struct 
{
	DWORD dwSize;
	DWORD dwRecord;  /*�Ƿ�¼�� 0-�� 1-��*/
	NET_DVR_RECORDDAY struRecAllDay[MAX_DAYS];
	NET_DVR_RECORDSCHED struRecordSched[MAX_DAYS][MAX_TIMESEGMENT];
	DWORD dwRecordTime;	/* ¼��ʱ�䳤�� */
	DWORD dwPreRecordTime;	/* Ԥ¼ʱ�� 0-��Ԥ¼ 1-5�� 2-10�� 3-15�� 4-20�� 5-25�� 6-30�� 7-0xffffffff(������Ԥ¼) */
}NET_DVR_RECORD, *LPNET_DVR_RECORD;

//��̨Э���ṹ����
typedef struct
{ 
    DWORD dwType;               /*����������ֵ*/    
    BYTE  byDescribe[DESC_LEN]; /*������������������8000�е�һ��*/    
}NET_DVR_PTZ_PROTOCOL;

typedef struct
{    
    DWORD   dwSize;    
    NET_DVR_PTZ_PROTOCOL struPtz[PTZ_PROTOCOL_NUM];/*���200��PTZЭ��*/    
    DWORD   dwPtzNum;           /*��Ч��ptzЭ����Ŀ����0��ʼ(������ʱ��1)*/
    BYTE    byRes[8];
}NET_DVR_PTZCFG, *LPNET_DVR_PTZCFG;

/***************************��̨����(end)******************************/

//ͨ��������(��̨)��������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
	WORD wDecoderType;//����������, ��0��ʼ����ӦptzЭ���б��NET_DVR_IPC_PROTO_LIST�õ�
	WORD wDecoderAddress;	/*��������ַ:0 - 255*/
	BYTE bySetPreset[MAX_PRESET_V30];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
	BYTE bySetCruise[MAX_CRUISE_V30];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
	BYTE bySetTrack[MAX_TRACK_V30];		    /* �켣�Ƿ�����,0-û������,1-����*/
}NET_DVR_DECODERCFG_V30, *LPNET_DVR_DECODERCFG_V30;

//ͨ��������(��̨)��������
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;       //������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;         // �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;         // ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;          // У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;     // 0���ޣ�1��������,2-Ӳ����
	WORD wDecoderType;      //����������  NET_DVR_IPC_PROTO_LIST�еõ�
	WORD wDecoderAddress;	/*��������ַ:0 - 255*/
	BYTE bySetPreset[MAX_PRESET];		/* Ԥ�õ��Ƿ�����,0-û������,1-����*/
	BYTE bySetCruise[MAX_CRUISE];		/* Ѳ���Ƿ�����: 0-û������,1-���� */
	BYTE bySetTrack[MAX_TRACK];		/* �켣�Ƿ�����,0-û������,1-����*/
}NET_DVR_DECODERCFG, *LPNET_DVR_DECODERCFG;

//ppp��������(�ӽṹ)
typedef struct 
{
	NET_DVR_IPADDR struRemoteIP;	//Զ��IP��ַ
	NET_DVR_IPADDR struLocalIP;		//����IP��ַ
	char sLocalIPMask[16];			//����IP��ַ����
	BYTE sUsername[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byPPPMode;					//PPPģʽ, 0��������1������
	BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
	BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
	BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
	DWORD dwMTU;					//MTU
	char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
}NET_DVR_PPPCFG_V30, *LPNET_DVR_PPPCFG_V30;

//ppp��������(�ӽṹ)
typedef struct 
{
	char sRemoteIP[16];				//Զ��IP��ַ
	char sLocalIP[16];				//����IP��ַ
	char sLocalIPMask[16];			//����IP��ַ����
	BYTE sUsername[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byPPPMode;					//PPPģʽ, 0��������1������
	BYTE byRedial;					//�Ƿ�ز� ��0-��,1-��
	BYTE byRedialMode;				//�ز�ģʽ,0-�ɲ�����ָ��,1-Ԥ�ûز�����
	BYTE byDataEncrypt;				//���ݼ���,0-��,1-��
	DWORD dwMTU;					//MTU
	char sTelephoneNumber[PHONENUMBER_LEN];   //�绰����
}NET_DVR_PPPCFG, *LPNET_DVR_PPPCFG;

//RS232���ڲ�������(9000��չ)
typedef struct
{
    DWORD dwBaudRate;   /*������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;*/
    BYTE byDataBit;     /* �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ */
    BYTE byStopBit;     /* ֹͣλ 0��1λ��1��2λ */
    BYTE byParity;      /* У�� 0����У�飬1����У�飬2��żУ�� */
    BYTE byFlowcontrol; /* 0���ޣ�1��������,2-Ӳ���� */
    DWORD dwWorkMode;   /* ����ģʽ��0��232��������PPP���ţ�1��232�������ڲ������ƣ�2��͸��ͨ��  3- ptzģʽ,��Ѷ��ʪ�ȴ����� 4-������ģʽ*/
}NET_DVR_SINGLE_RS232;

//RS232���ڲ�������(9000��չ)
typedef struct 
{
	DWORD dwSize;
    NET_DVR_SINGLE_RS232 struRs232[MAX_SERIAL_PORT];/*ע�⣺�˽ṹ�޸��ˣ�ԭ���ǵ����ṹ�������޸�Ϊ������ṹ*/
	NET_DVR_PPPCFG_V30 struPPPConfig;
}NET_DVR_RS232CFG_V30, *LPNET_DVR_RS232CFG_V30;

//RS232���ڲ�������
typedef struct 
{
	DWORD dwSize;
	DWORD dwBaudRate;//������(bps)��0��50��1��75��2��110��3��150��4��300��5��600��6��1200��7��2400��8��4800��9��9600��10��19200�� 11��38400��12��57600��13��76800��14��115.2k;
	BYTE byDataBit;// �����м�λ 0��5λ��1��6λ��2��7λ��3��8λ;
	BYTE byStopBit;// ֹͣλ 0��1λ��1��2λ;
	BYTE byParity;// У�� 0����У�飬1����У�飬2��żУ��;
	BYTE byFlowcontrol;// 0���ޣ�1��������,2-Ӳ����
	DWORD dwWorkMode;// ����ģʽ��0��խ������(232��������PPP����)��1������̨(232�������ڲ�������)��2��͸��ͨ��
	NET_DVR_PPPCFG struPPPConfig;
}NET_DVR_RS232CFG, *LPNET_DVR_RS232CFG;

//���������������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmInName[NAME_LEN];	/* ���� */
	BYTE byAlarmType;	            //����������,0������,1������
	BYTE byAlarmInHandle;	        /* �Ƿ��� 0-������ 1-����*/
    BYTE byChannel;                 // �������봥������ʶ��ͨ��
    BYTE byRes1[1];			
	NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE byEnablePreset[MAX_CHANNUM_V30];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
	BYTE byPresetNo[MAX_CHANNUM_V30];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
	BYTE byRes2[192];					/*����*/
	BYTE byEnableCruise[MAX_CHANNUM_V30];		/* �Ƿ����Ѳ�� 0-��,1-��*/
	BYTE byCruiseNo[MAX_CHANNUM_V30];			/* Ѳ�� */
	BYTE byEnablePtzTrack[MAX_CHANNUM_V30];		/* �Ƿ���ù켣 0-��,1-��*/
	BYTE byPTZTrack[MAX_CHANNUM_V30];			/* ���õ���̨�Ĺ켣��� */
    BYTE byRes3[16];
}NET_DVR_ALARMINCFG_V30, *LPNET_DVR_ALARMINCFG_V30;

//���������������
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmInName[NAME_LEN];	/* ���� */
	BYTE byAlarmType;	//����������,0������,1������
	BYTE byAlarmInHandle;	/* �Ƿ��� 0-������ 1-����*/
    BYTE byChannel;                 // �������봥������ʶ��ͨ��
    BYTE byRes;                     
    NET_DVR_HANDLEEXCEPTION struAlarmHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
	BYTE byRelRecordChan[MAX_CHANNUM]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE byEnablePreset[MAX_CHANNUM];		/* �Ƿ����Ԥ�õ� 0-��,1-��*/
	BYTE byPresetNo[MAX_CHANNUM];			/* ���õ���̨Ԥ�õ����,һ������������Ե��ö��ͨ������̨Ԥ�õ�, 0xff��ʾ������Ԥ�õ㡣*/
	BYTE byEnableCruise[MAX_CHANNUM];		/* �Ƿ����Ѳ�� 0-��,1-��*/
	BYTE byCruiseNo[MAX_CHANNUM];			/* Ѳ�� */
	BYTE byEnablePtzTrack[MAX_CHANNUM];		/* �Ƿ���ù켣 0-��,1-��*/
	BYTE byPTZTrack[MAX_CHANNUM];			/* ���õ���̨�Ĺ켣��� */
}NET_DVR_ALARMINCFG, *LPNET_DVR_ALARMINCFG;


//�ϴ�������Ϣ(9000��չ)
typedef struct 
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-��Ƶ�ź��쳣��
                        10-¼���쳣 11- ���ܳ����仯  12-�����쳣 13-ǰ��/¼��ֱ��ʲ�ƥ��*/
	DWORD dwAlarmInputNumber;/*��������˿�*/
	BYTE byAlarmOutputNumber[MAX_ALARMOUT_V30];/*����������˿ڣ�Ϊ1��ʾ��Ӧ���*/
	BYTE byAlarmRelateChannel[MAX_CHANNUM_V30];/*������¼��ͨ����Ϊ1��ʾ��Ӧ¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	BYTE byChannel[MAX_CHANNUM_V30];/*dwAlarmTypeΪ2��3,6��9��10ʱ����ʾ�ĸ�ͨ����dwChannel[0]��Ӧ��1��ͨ��*/
	BYTE byDiskNumber[MAX_DISKNUM_V30];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]��Ӧ��1��Ӳ��*/
#ifdef SDK_CHEZAI
	NET_DVR_ADDIT_POSITION GPS_pos;  /* GPS��λ��Ϣ */
#endif
}NET_DVR_ALARMINFO_V30, *LPNET_DVR_ALARMINFO_V30;


typedef struct 
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-��Ƶ�ź��쳣��10-¼���쳣 11- ���ܳ����仯*/
	DWORD dwAlarmInputNumber;/*��������˿�*/
	DWORD dwAlarmOutputNumber[MAX_ALARMOUT];/*����������˿ڣ���һλΪ1��ʾ��Ӧ��һ�����*/
	DWORD dwAlarmRelateChannel[MAX_CHANNUM];/*������¼��ͨ������һλΪ1��ʾ��Ӧ��һ·¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	DWORD dwChannel[MAX_CHANNUM];/*dwAlarmTypeΪ2��3,6,9,10ʱ����ʾ�ĸ�ͨ����dwChannel[0]λ��Ӧ��1��ͨ��*/
	DWORD dwDiskNumber[MAX_DISKNUM];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]λ��Ӧ��1��Ӳ��*/
}NET_DVR_ALARMINFO, *LPNET_DVR_ALARMINFO;

//////////////////////////////////////////////////////////////////////////////////////
//IPC�����������
/* IP�豸�ṹ */
typedef struct 
{
    DWORD dwEnable;				    /* ��IP�豸�Ƿ����� */
    BYTE sUserName[NAME_LEN];		/* �û��� */
    BYTE sPassword[PASSWD_LEN];	    /* ���� */ 
    NET_DVR_IPADDR struIP;			/* IP��ַ */
    WORD wDVRPort;			 	    /* �˿ں� */
    BYTE byRes[34];				/* ���� */
}NET_DVR_IPDEVINFO, *LPNET_DVR_IPDEVINFO;

//ipc�����豸��Ϣ��չ��֧��ip�豸���������
typedef struct tagNET_DVR_IPDEVINFO_V31
{
    BYTE byEnable;				    //��IP�豸�Ƿ���Ч
	BYTE byProType;					//Э�����ͣ�0-˽��Э�飬1-����Э�飬2-����
    BYTE byEnableQuickAdd;        // 0 ��֧�ֿ������  1 ʹ�ÿ������ 
    // ���������Ҫ�豸IP��Э�����ͣ�������Ϣ���豸Ĭ��ָ��
    BYTE byRes1;					//�����ֶΣ���0
    BYTE sUserName[NAME_LEN];		//�û���
    BYTE sPassword[PASSWD_LEN];	    //����
    BYTE byDomain[MAX_DOMAIN_NAME];	//�豸����
    NET_DVR_IPADDR struIP;			//IP��ַ
    WORD wDVRPort;			 	    // �˿ں�
    BYTE byRes2[34];				//�����ֶΣ���0
}NET_DVR_IPDEVINFO_V31, *LPNET_DVR_IPDEVINFO_V31;

/* IPͨ��ƥ����� */
typedef struct 
{
    BYTE byEnable;					/* ��ͨ���Ƿ����� */
    BYTE byIPID;					//IP�豸ID��8λ�����豸IDΪ0ʱ��ʾͨ��������
    BYTE byChannel;					/* ͨ���� */
    BYTE byIPIDHigh;                // IP�豸ID�ĸ�8λ
	BYTE byres[32];					//����,��0
} NET_DVR_IPCHANINFO, *LPNET_DVR_IPCHANINFO;

/* IP�������ýṹ */
typedef struct 
{
    DWORD dwSize;			                            /* �ṹ��С */
    NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];    /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-32ͨ����0��ʾ��Ч 1��Ч */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IPͨ�� */    
}NET_DVR_IPPARACFG, *LPNET_DVR_IPPARACFG;
/* ��չIP�������ýṹ */
typedef struct tagNET_DVR_IPPARACFG_V31
{
    DWORD dwSize;			                            /* �ṹ��С */
    NET_DVR_IPDEVINFO_V31  struIPDevInfo[MAX_IP_DEVICE];    /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];        /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-32ͨ����0��ʾ��Ч 1��Ч */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	/* IPͨ�� */    
}NET_DVR_IPPARACFG_V31, *LPNET_DVR_IPPARACFG_V31;

typedef  struct tagNET_DVR_IPSERVER_STREAM
{
    BYTE    byEnable;   // �Ƿ�����
    BYTE    byRes[3];               // �����ֽ�
    NET_DVR_IPADDR struIPServer;    //IPServer ��ַ
    WORD    wPort;                  //IPServer �˿�
    WORD    wDvrNameLen;            // DVR ���Ƴ���
    BYTE    byDVRName[NAME_LEN];    // DVR����
    WORD    wDVRSerialLen;          // ���кų���
    WORD    byRes1[2];              // �����ֽ�
    BYTE    byDVRSerialNumber[SERIALNO_LEN];    // DVR���кų���
    BYTE    byUserName[NAME_LEN];   // DVR ��½�û���
    BYTE    byPassWord[PASSWD_LEN]; // DVR��½����
    BYTE    byChannel;              // DVR ͨ��
    BYTE    byRes2[11];             //  �����ֽ�
}NET_DVR_IPSERVER_STREAM, *LPNET_DVR_IPSERVER_STREAM;

//��ý���������������
typedef struct tagNET_DVR_STREAM_MEDIA_SERVER_CFG
{
    BYTE	byValid;			/*�Ƿ����*/
    BYTE	byRes1[3];
    NET_DVR_IPADDR  struDevIP;      
    WORD	wDevPort;			/*��ý��������˿�*/    
    BYTE	byTransmitType;		/*����Э������ 0-TCP��1-UDP*/
    BYTE	byRes2[69];
}NET_DVR_STREAM_MEDIA_SERVER_CFG,*LPNET_DVR_STREAM_MEDIA_SERVER_CFG;

//�豸ͨ����Ϣ
typedef struct tagNET_DVR_DEV_CHAN_INFO
{
    NET_DVR_IPADDR 	struIP;		    //DVR IP��ַ
    WORD 	wDVRPort;			 	//�˿ں�
    BYTE 	byChannel;				//ͨ����
    BYTE	byTransProtocol;		//����Э������0-TCP��1-UDP
    BYTE	byTransMode;			//��������ģʽ 0�������� 1��������
    BYTE	byFactoryType;			/*ǰ���豸��������,ͨ���ӿڻ�ȡ*/
    BYTE	byDeviceType; //�豸����(��Ƶ�ۺ�ƽ̨���ܰ�ʹ��)��1-����������ʱ������Ƶ�ۺ�ƽ̨��������byVcaSupportChanMode�ֶ���������ʹ�ý���ͨ��������ʾͨ������2-������
    BYTE    byDispChan;//��ʾͨ����,��������ʹ��
    BYTE	bySubDispChan;//��ʾͨ����ͨ���ţ���������ʱʹ��
	BYTE	byResolution;	//; 1-CIF 2-4CIF 3-720P 4-1080P 5-500w����������ʹ�ã���������������ݸò������������Դ
    BYTE	byRes[2];
    BYTE    byDomain[MAX_DOMAIN_NAME];	//�豸����
    BYTE	sUserName[NAME_LEN];	//���������½�ʺ�
    BYTE	sPassword[PASSWD_LEN];	//�����������
}NET_DVR_DEV_CHAN_INFO,*LPNET_DVR_DEV_CHAN_INFO;

//ֱ��ͨ����ý��ȡ��
typedef struct tagNET_DVR_PU_STREAM_CFG
{
    DWORD								dwSize;
    NET_DVR_STREAM_MEDIA_SERVER_CFG	struStreamMediaSvrCfg;
    NET_DVR_DEV_CHAN_INFO				struDevChanInfo;
}NET_DVR_PU_STREAM_CFG,*LPNET_DVR_PU_STREAM_CFG;

typedef struct tagNET_DVR_DDNS_STREAM_CFG
{
	BYTE   byEnable;   // �Ƿ�����
    BYTE   byRes1[3];
    NET_DVR_IPADDR  struStreamServer;            //��ý���������ַ
    WORD   wStreamServerPort;           //��ý��������˿�   
    BYTE   byStreamServerTransmitType;  //��ý�崫��Э������ 0-TCP��1-UDP
	BYTE   byRes2;
	NET_DVR_IPADDR   struIPServer;          //IPSERVER��ַ
	WORD   wIPServerPort;        //IPserver�˿ں�
	BYTE   byRes3[2];           
    BYTE   sDVRName[NAME_LEN];   //DVR����
	WORD   wDVRNameLen;            // DVR���Ƴ���
    WORD   wDVRSerialLen;          // ���кų���
    BYTE   sDVRSerialNumber[SERIALNO_LEN];    // DVR���к�
    BYTE   sUserName[NAME_LEN];   // DVR ��½�û���
    BYTE   sPassWord[PASSWD_LEN]; // DVR��½����
	WORD   wDVRPort;   //DVR�˿ں�
    BYTE   byRes4[2];    
    BYTE   byChannel;              // DVR ͨ��
	BYTE   byTransProtocol; //����Э������0-TCP��1-UDP
    BYTE   byTransMode; //��������ģʽ 0�������� 1��������
    BYTE   byFactoryType; //ǰ���豸��������,ͨ���ӿڻ�ȡ
}NET_DVR_DDNS_STREAM_CFG, *LPNET_DVR_DDNS_STREAM_CFG;

typedef struct tagNET_DVR_PU_STREAM_URL
{
	BYTE    byEnable; 
	BYTE    strURL[240];
	BYTE	byTransPortocol ; // ����Э������ 0-tcp  1-UDP
	WORD    wIPID;  //�豸ID�ţ�wIPID = iDevInfoIndex + iGroupNO*64 +1
	BYTE	byChannel;  //ͨ����
	BYTE    byRes[7];   
}NET_DVR_PU_STREAM_URL, *LPNET_DVR_PU_STREAM_URL;

typedef struct tagNET_DVR_HKDDNS_STREAM
{
    BYTE    byEnable;				 // �Ƿ�����
    BYTE    byRes[3];               // �����ֽ�
    BYTE    byDDNSDomain[64];		// hkDDNS������
    WORD    wPort;                  // hkDDNS �˿�
    WORD    wAliasLen;              // ��������
    BYTE    byAlias[NAME_LEN];		 // ����
    WORD    wDVRSerialLen;          // ���кų���
    BYTE    byRes1[2];              // �����ֽ�
    BYTE    byDVRSerialNumber[SERIALNO_LEN];    // DVR���к�
    BYTE    byUserName[NAME_LEN];   // DVR ��½�û���
    BYTE    byPassWord[PASSWD_LEN]; // DVR��½����
    BYTE    byChannel;              // DVRͨ��
    BYTE    byRes2[11];             // ������	
}NET_DVR_HKDDNS_STREAM, *LPNET_DVR_HKDDNS_STREAM;

typedef union tagNET_DVR_GET_STREAM_UNION
{
	DWORD uLen[63];   //252byte
    NET_DVR_IPCHANINFO      struChanInfo;	/*IPͨ����Ϣ*/
    NET_DVR_IPSERVER_STREAM struIPServerStream;  // IPServerȥ��
    NET_DVR_PU_STREAM_CFG   struPUStream;     //  ͨ��ǰ���豸��ȡ��ý��ȥ��
	NET_DVR_DDNS_STREAM_CFG struDDNSStream;     //ͨ��IPServer����ý��ȡ��
	NET_DVR_PU_STREAM_URL   struStreamUrl;        //ͨ����ý�嵽urlȡ��
	NET_DVR_HKDDNS_STREAM	struHkDDNSStream;   //ͨ��hkDDNSȥȡ��
}NET_DVR_GET_STREAM_UNION, *LPNET_DVR_GET_STREAM_UNION;

typedef enum
{
    NET_SDK_IP_DEVICE = 0,
    NET_SDK_STREAM_MEDIA,
    NET_SDK_IPSERVER,
	NET_SDK_DDNS_STREAM_CFG,
	NET_SDK_STREAM_MEDIA_URL,
	NET_SDK_HKDDNS
}GET_STREAM_TYPE;

typedef struct tagNET_DVR_STREAM_MODE
{
    BYTE    byGetStreamType; //ȡ����ʽGET_STREAM_TYPE��0-ֱ�Ӵ��豸ȡ����1-����ý��ȡ����2-ͨ��IPServer���ip��ַ��ȡ��,3.ͨ��IPServer�ҵ��豸����ͨ����ý��ȥ�豸����
	                         //4-ͨ����ý����URLȥȡ��
	BYTE    byRes[3];        //�����ֽ�
    NET_DVR_GET_STREAM_UNION uGetStream;    // ��ͬȡ����ʽ�ṹ��
}NET_DVR_STREAM_MODE, *LPNET_DVR_STREAM_MODE;

//��չIP���������豸
typedef struct tagNET_DVR_IPPARACFG_V40
{
    DWORD      dwSize;			                /* �ṹ��С */
    DWORD	   dwGroupNum;					//	 �豸֧�ֵ�������    
    DWORD      dwAChanNum;					//���ģ��ͨ������
    DWORD      dwDChanNum;                  //����ͨ������
    DWORD      dwStartDChan;		            //��ʼ����ͨ��
    BYTE       byAnalogChanEnable[MAX_CHANNUM_V30];    /* ģ��ͨ���Ƿ����ã��ӵ͵��߱�ʾ1-64ͨ����0��ʾ��Ч 1��Ч */
    NET_DVR_IPDEVINFO_V31   struIPDevInfo[MAX_IP_DEVICE_V40];      /* IP�豸 */
    NET_DVR_STREAM_MODE  struStreamMode[MAX_CHANNUM_V30];
    BYTE            byRes2[20];                 // �����ֽ�
}NET_DVR_IPPARACFG_V40, *LPNET_DVR_IPPARACFG_V40;


//ΪCVR��չ�ı�������
typedef struct tagNET_DVR_ALARMINFO_DEV
{
	DWORD     dwAlarmType;  //0-������(ͨ��)�ź���������1-˽�о���𻵣�2- NVR�����˳���
	//3-������״̬�쳣��4-ϵͳʱ���쳣��5-¼���ʣ���������ͣ�
	//6-������(ͨ��)�ƶ���ⱨ����7-������(ͨ��)�ڵ�������
	NET_DVR_TIME   struTime;     //����ʱ��
	BYTE       byRes[32];    //����
	DWORD      dwNumber;     //��Ŀ
    WORD       *pNO;         //dwNumber��WORD; ÿ��WORD��ʾһ��ͨ���ţ����ߴ��̺�, ��ЧʱΪ0
}NET_DVR_ALARMINFO_DEV, *LPNET_DVR_ALARMINFO_DEV;

/* ����������� */
typedef struct 
{
    BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
    BYTE byAlarmOut;				/* ��������� */
    BYTE byRes[18];					/* ���� */
}NET_DVR_IPALARMOUTINFO, *LPNET_DVR_IPALARMOUTINFO;

/* IP����������ýṹ */
typedef struct 
{
    DWORD dwSize;			                        /* �ṹ��С */    
   NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT];/* IP������� */
}NET_DVR_IPALARMOUTCFG, *LPNET_DVR_IPALARMOUTCFG;

/* ����������� */
typedef struct 
{
    BYTE byIPID;					/* IP�豸IDȡֵ1- MAX_IP_DEVICE */
    BYTE byAlarmIn;					/* ��������� */
    BYTE byRes[18];					/* ���� */
}NET_DVR_IPALARMININFO, *LPNET_DVR_IPALARMININFO;

/* IP�����������ýṹ */
typedef struct 
{
    DWORD dwSize;			                        /* �ṹ��С */    
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];/* IP�������� */
}NET_DVR_IPALARMINCFG, *LPNET_DVR_IPALARMINCFG;

//ipc alarm info
typedef struct tagNET_DVR_IPALARMINFO
{
    NET_DVR_IPDEVINFO  struIPDevInfo[MAX_IP_DEVICE];            /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IPͨ�� */
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
    NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */
}NET_DVR_IPALARMINFO, *LPNET_DVR_IPALARMINFO;

//ipc���øı䱨����Ϣ��չ 9000_1.1
typedef struct tagNET_DVR_IPALARMINFO_V31
{
    NET_DVR_IPDEVINFO_V31  struIPDevInfo[MAX_IP_DEVICE];            /* IP�豸 */
    BYTE byAnalogChanEnable[MAX_ANALOG_CHANNUM];                /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_IP_CHANNEL];	        /* IPͨ�� */
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
    NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */   
}NET_DVR_IPALARMINFO_V31, *LPNET_DVR_IPALARMINFO_V31;

typedef struct tagNET_DVR_IPALARMINFO_V40
{
    NET_DVR_IPDEVINFO_V31 struIPDevInfo[MAX_IP_DEVICE_V40];           // IP�豸
    BYTE     byAnalogChanEnable[MAX_CHANNUM_V30];           /* ģ��ͨ���Ƿ����ã�0-δ���� 1-���� */
    NET_DVR_IPCHANINFO struIPChanInfo[MAX_CHANNUM_V30];	        /* IPͨ�� */
    NET_DVR_IPALARMININFO struIPAlarmInInfo[MAX_IP_ALARMIN];    /* IP�������� */
    NET_DVR_IPALARMOUTINFO struIPAlarmOutInfo[MAX_IP_ALARMOUT]; /* IP������� */   
    BYTE                    byRes[20];                          // �����ֽ�
}NET_DVR_IPALARMINFO_V40, *LPNET_DVR_IPALARMINFO_V40;

typedef enum _HD_STAT_
{
	HD_STAT_OK					=	0,    /* ���� */
	HD_STAT_UNFORMATTED			=	1,    /* δ��ʽ�� */
	HD_STAT_ERROR           	=	2,    /* ���� */
	HD_STAT_SMART_FAILED    	=	3,    /* SMART״̬ */
	HD_STAT_MISMATCH        	=	4,    /* ��ƥ�� */
	HD_STAT_IDLE            	=	5,    /* ����*/
	NET_HD_STAT_OFFLINE     	=	6,    /* �����̴���δ����״̬ */
	HD_RIADVD_EXPAND            =   7,    /* ������̿����� */
	HD_STAT_REPARING            =   10,   /* Ӳ�������޸�(9000 2.0) */
	HD_STAT_FORMATING           =   11,   /* Ӳ�����ڸ�ʽ��(9000 2.0) */ 
}HD_STAT;


//����Ӳ����Ϣ����
typedef struct
{
    DWORD dwHDNo;         /*Ӳ�̺�, ȡֵ0~MAX_DISKNUM_V30-1*/
    DWORD dwCapacity;     /*Ӳ������(��������)*/
    DWORD dwFreeSpace;    /*Ӳ��ʣ��ռ�(��������)*/
	DWORD dwHdStatus;     //Ӳ��״̬(��������) HD_STAT 0-����, 1-δ��ʽ��, 2-����, 3-SMART״̬, 
							//4-��ƥ��, 5-���� 6-����Ӳ�̲����� 7-������̿����� 10-Ӳ�������޸�
							//11-Ӳ�����ڸ�ʽ�� 12-Ӳ�����ڵȴ���ʽ�� 13-Ӳ����ж�� 14-����Ӳ�̲�����
	                        //15-����ɾ��(����Ӳ��)
    BYTE  byHDAttr;       /*0-Ĭ��, 1-����; 2-ֻ��*/
	BYTE  byHDType;		  /*0-����Ӳ��,1-ESATAӲ��,2-NASӲ��,3-iSCSIӲ�� 4-Array�������*/
    BYTE  byDiskDriver;   // ֵ ������ASCII�ַ� 
	BYTE  byRes1[1];
    DWORD dwHdGroup;      /*�����ĸ����� 1-MAX_HD_GROUP*/
	BYTE  byRecycling;   // �Ƿ�ѭ������ 0����ѭ�����ã�1��ѭ������
	BYTE  byRes2[3];
	DWORD  dwStorageType;    //��λ��ʾ 0-��֧�� ��0-֧��
							// dwStorageType & 0x1 ��ʾ�Ƿ�����ͨ¼��ר�ô洢��     
							// dwStorageType & 0x2  ��ʾ�Ƿ��ǳ�֡¼��ר�ô洢��
							// dwStorageType & 0x4 ��ʾ�Ƿ���ͼƬ¼��ר�ô洢��

	DWORD dwPictureCapacity; //Ӳ��ͼƬ����(��������)����λ:MB
	DWORD dwFreePictureSpace; //ʣ��ͼƬ�ռ�(��������)����λ:MB
    BYTE  byRes3[104];
}NET_DVR_SINGLE_HD, *LPNET_DVR_SINGLE_HD;

typedef struct
{
    DWORD dwSize;
    DWORD dwHDCount;          /*Ӳ����(��������)*/
    NET_DVR_SINGLE_HD struHDInfo[MAX_DISKNUM_V30];//Ӳ����ز�������Ҫ����������Ч��
}NET_DVR_HDCFG, *LPNET_DVR_HDCFG;

//����������Ϣ����
typedef struct
{
    DWORD dwHDGroupNo;       /*�����(��������) 1-MAX_HD_GROUP*/        
    BYTE byHDGroupChans[MAX_CHANNUM_V30]; /*�����Ӧ��¼��ͨ��, 0-��ʾ��ͨ����¼�󵽸����飬1-��ʾ¼�󵽸�����*/
    BYTE byRes[8];
}NET_DVR_SINGLE_HDGROUP, *LPNET_DVR_SINGLE_HDGROUP;

typedef struct
{
    DWORD dwSize;
    DWORD dwHDGroupCount;        /*��������(��������)*/
    NET_DVR_SINGLE_HDGROUP struHDGroupAttr[MAX_HD_GROUP];//Ӳ����ز�������Ҫ����������Ч��
}NET_DVR_HDGROUP_CFG, *LPNET_DVR_HDGROUP_CFG;
                                       

//�������Ų����Ľṹ
typedef struct
{
    DWORD dwSize;
    DWORD dwMajorScale;    /* ����ʾ 0-�����ţ�1-����*/
    DWORD dwMinorScale;    /* ����ʾ 0-�����ţ�1-����*/
    DWORD dwRes[2];
}NET_DVR_SCALECFG, *LPNET_DVR_SCALECFG;



//DVR�������(9000��չ)
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmOutName[NAME_LEN];	/* ���� */
	DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
	//0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
	NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT_V30];/* �����������ʱ��� */
    BYTE byRes[16];
}NET_DVR_ALARMOUTCFG_V30, *LPNET_DVR_ALARMOUTCFG_V30;

//DVR�������
typedef struct 
{
	DWORD dwSize;
	BYTE sAlarmOutName[NAME_LEN];	/* ���� */
	DWORD dwAlarmOutDelay;	/* �������ʱ��(-1Ϊ���ޣ��ֶ��ر�) */
	//0-5��,1-10��,2-30��,3-1����,4-2����,5-5����,6-10����,7-�ֶ�
	NET_DVR_SCHEDTIME struAlarmOutTime[MAX_DAYS][MAX_TIMESEGMENT];/* �����������ʱ��� */
}NET_DVR_ALARMOUTCFG, *LPNET_DVR_ALARMOUTCFG;

//DVR����Ԥ������(9000��չ)
/*�л���ָ�ڵ�ǰԤ��ģʽ���л���ʾ���棬�������л�Ԥ��ģʽ������byPreviewNumberΪ0��1���棩��bySwitchSeq[0][0] = 1,bySwitchSeq[0][1] = 2,bySwitchSeq[0][2] = 3 
�򱾵ػ���һֱ��1���棬Ȼ����������水1,2,3ͨ��˳���л�*/
typedef struct 
{
    DWORD dwSize;
    BYTE byPreviewNumber;//Ԥ��ģʽ,0-1����,1-4����,2-9����,3-16����,0xff:�����
    BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
    WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
    BYTE bySwitchSeq[MAX_PREVIEW_MODE][MAX_WINDOW_V30];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
    BYTE byRes[24];
}NET_DVR_PREVIEWCFG_V30, *LPNET_DVR_PREVIEWCFG_V30;

//DVR����Ԥ������
typedef struct 
{
	DWORD dwSize;
	BYTE byPreviewNumber;//Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16����,0xff:�����
	BYTE byEnableAudio;//�Ƿ�����Ԥ��,0-��Ԥ��,1-Ԥ��
	WORD wSwitchTime;//�л�ʱ��,0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s
	BYTE bySwitchSeq[MAX_WINDOW];//�л�˳��,���lSwitchSeq[i]Ϊ 0xff��ʾ����
}NET_DVR_PREVIEWCFG, *LPNET_DVR_PREVIEWCFG;

//DVR��Ƶ���
typedef struct 
{
	WORD wResolution;							/* �ֱ��� */
	WORD wFreq;									/* ˢ��Ƶ�� */
	DWORD dwBrightness;							/* ���� */
}NET_DVR_VGAPARA;

/*
* MATRIX��������ṹ
*/
typedef struct
{		
	WORD	wOrder[MAX_ANALOG_CHANNUM];		/* Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
	WORD	wSwitchTime;				/* Ԥ���л�ʱ�� */
	BYTE	res[14];
}NET_DVR_MATRIXPARA_V30, *LPNET_DVR_MATRIXPARA_V30;

typedef struct 
{
	WORD wDisplayLogo;						/* ��ʾ��Ƶͨ���� */
	WORD wDisplayOsd;						/* ��ʾʱ�� */
}NET_DVR_MATRIXPARA;

typedef struct 
{
	BYTE byVideoFormat;						/* �����ʽ,0-PAL,1-NTSC */
	BYTE byMenuAlphaValue;					/* �˵��뱳��ͼ��Աȶ� */
	WORD wScreenSaveTime;					/* ��Ļ����ʱ�� 0-�Ӳ�,1-1����,2-2����,3-5����,4-10����,5-20����,6-30���� */
	WORD wVOffset;							/* ��Ƶ���ƫ�� */
	WORD wBrightness;						/* ��Ƶ������� */
	BYTE byStartMode;						/* ��������Ƶ���ģʽ(0:�˵�,1:Ԥ��)*/
	BYTE byEnableScaler;                    /* �Ƿ��������� (0-������, 1-����)*/
}NET_DVR_VOOUT;

//DVR��Ƶ���(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT_V30];
	NET_DVR_VGAPARA struVGAPara[MAX_VGA_V30];	/* VGA���� */
	NET_DVR_MATRIXPARA_V30 struMatrixPara[MAX_MATRIXOUT];		/* MATRIX���� */
    BYTE byRes[16];
}NET_DVR_VIDEOOUT_V30, *LPNET_DVR_VIDEOOUT_V30;

//DVR��Ƶ���
typedef struct 
{
	DWORD dwSize;
	NET_DVR_VOOUT struVOOut[MAX_VIDEOOUT];
	NET_DVR_VGAPARA struVGAPara[MAX_VGA];	/* VGA���� */
	NET_DVR_MATRIXPARA struMatrixPara;		/* MATRIX���� */
}NET_DVR_VIDEOOUT, *LPNET_DVR_VIDEOOUT;

//���û�����(�ӽṹ)(9000��չ)
typedef struct
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byLocalRight[MAX_RIGHT];	/* ����Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
    /*����6: ���ز鿴���� */
    /*����7: ���ع���ģ���IP camera */
    /*����8: ���ر��� */
    /*����9: ���عػ�/���� */    
	BYTE byRemoteRight[MAX_RIGHT];/* Զ��Ȩ�� */	
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/	
    /*����11: Զ�̲鿴���� */
    /*����12: Զ�̹���ģ���IP camera */
    /*����13: Զ�̹ػ�/���� */
	BYTE byNetPreviewRight[MAX_CHANNUM_V30];		/* Զ�̿���Ԥ����ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalPlaybackRight[MAX_CHANNUM_V30];	/* ���ؿ��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetPlaybackRight[MAX_CHANNUM_V30];	/* Զ�̿��Իطŵ�ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalRecordRight[MAX_CHANNUM_V30];		/* ���ؿ���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetRecordRight[MAX_CHANNUM_V30];		/* Զ�̿���¼���ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalPTZRight[MAX_CHANNUM_V30];		/* ���ؿ���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byNetPTZRight[MAX_CHANNUM_V30];			/* Զ�̿���PTZ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	BYTE byLocalBackupRight[MAX_CHANNUM_V30];		/* ���ر���Ȩ��ͨ�� 0-��Ȩ�ޣ�1-��Ȩ��*/
	NET_DVR_IPADDR struUserIP;		/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
	BYTE byPriority;				/* ���ȼ���0xff-�ޣ�0--�ͣ�1--�У�2--�� */
                                    /*
                                    �ޡ�����ʾ��֧�����ȼ�������
                                    �͡���Ĭ��Ȩ��:�������غ�Զ�̻ط�,���غ�Զ�̲鿴��־��״̬,���غ�Զ�̹ػ�/����
                                    �С����������غ�Զ�̿�����̨,���غ�Զ���ֶ�¼��,���غ�Զ�̻ط�,�����Խ���Զ��Ԥ��
                                          ���ر���,����/Զ�̹ػ�/����
                                    �ߡ�������Ա
                                    */
	BYTE	byAlarmOnRight;         // ��������ڲ���Ȩ��
	BYTE	byAlarmOffRight;        // ��������ڳ���Ȩ��
	BYTE	byBypassRight;          // �����������·Ȩ��
	BYTE	byRes[14];	
}NET_DVR_USER_INFO_V30, *LPNET_DVR_USER_INFO_V30;

//���û�����(SDK_V15��չ)(�ӽṹ)
typedef struct 
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
	DWORD dwLocalPlaybackRight;		/* ���ؿ��Իطŵ�ͨ�� bit0 -- channel 1*/
	DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/
	DWORD dwNetPreviewRight;		/* Զ�̿���Ԥ����ͨ�� bit0 -- channel 1*/
	DWORD dwNetPlaybackRight;		/* Զ�̿��Իطŵ�ͨ�� bit0 -- channel 1*/
	char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
}NET_DVR_USER_INFO_EX, *LPNET_DVR_USER_INFO_EX;

//���û�����(�ӽṹ)
typedef struct 
{
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	DWORD dwLocalRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: ���ؿ�����̨*/
	/*����1: �����ֶ�¼��*/
	/*����2: ���ػط�*/
	/*����3: �������ò���*/
	/*����4: ���ز鿴״̬����־*/
	/*����5: ���ظ߼�����(��������ʽ�����������ػ�)*/
	DWORD dwRemoteRight[MAX_RIGHT];	/* Ȩ�� */
	/*����0: Զ�̿�����̨*/
	/*����1: Զ���ֶ�¼��*/
	/*����2: Զ�̻ط� */
	/*����3: Զ�����ò���*/
	/*����4: Զ�̲鿴״̬����־*/
	/*����5: Զ�̸߼�����(��������ʽ�����������ػ�)*/
	/*����6: Զ�̷��������Խ�*/
	/*����7: Զ��Ԥ��*/
	/*����8: Զ�����󱨾��ϴ����������*/
	/*����9: Զ�̿��ƣ��������*/
	/*����10: Զ�̿��ƴ���*/
	char sUserIP[16];				/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
	BYTE byMACAddr[MACADDR_LEN];	/* �����ַ */
}NET_DVR_USER_INFO, *LPNET_DVR_USER_INFO;


//DVR�û�����(9000��չ)
typedef struct
{
	DWORD dwSize;
	NET_DVR_USER_INFO_V30 struUser[MAX_USERNUM_V30];
}NET_DVR_USER_V30, *LPNET_DVR_USER_V30;

//DVR�û�����(SDK_V15��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_USER_INFO_EX struUser[MAX_USERNUM];
}NET_DVR_USER_EX, *LPNET_DVR_USER_EX;

//DVR�û�����
typedef struct 
{
	DWORD dwSize;
	NET_DVR_USER_INFO struUser[MAX_USERNUM];
}NET_DVR_USER, *LPNET_DVR_USER;

//DVR�쳣����(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_HANDLEEXCEPTION_V30 struExceptionHandleType[MAX_EXCEPTIONNUM_V30];
	/*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ, 4-�Ƿ�����, 5-����/�����Ƶ��ʽ��ƥ��, 6-��Ƶ�ź��쳣, 7-¼���쳣*/
}NET_DVR_EXCEPTION_V30, *LPNET_DVR_EXCEPTION_V30;

//DVR�쳣����
typedef struct 
{
	DWORD dwSize;
	NET_DVR_HANDLEEXCEPTION struExceptionHandleType[MAX_EXCEPTIONNUM];
	/*����0-����,1- Ӳ�̳���,2-���߶�,3-��������IP ��ַ��ͻ,4-�Ƿ�����, 5-����/�����Ƶ��ʽ��ƥ��, 6-��Ƶ�ź��쳣*/
}NET_DVR_EXCEPTION, *LPNET_DVR_EXCEPTION;

//ͨ��״̬(9000��չ)
typedef struct 
{
	BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
	BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
	BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
	BYTE byRes1;		//����
	DWORD dwBitRate;//ʵ������
	DWORD dwLinkNum;//�ͻ������ӵĸ���
	NET_DVR_IPADDR struClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
    DWORD dwIPLinkNum;//�����ͨ��ΪIP���룬��ô��ʾIP���뵱ǰ��������
    BYTE byExceedMaxLink;		// �Ƿ񳬳��˵�·6·������ 0 - δ����, 1-����
    BYTE byRes[11];        // �����ֽ�
}NET_DVR_CHANNELSTATE_V30, *LPNET_DVR_CHANNELSTATE_V30;

//ͨ��״̬
typedef struct 
{
	BYTE byRecordStatic; //ͨ���Ƿ���¼��,0-��¼��,1-¼��
	BYTE bySignalStatic; //���ӵ��ź�״̬,0-����,1-�źŶ�ʧ
	BYTE byHardwareStatic;//ͨ��Ӳ��״̬,0-����,1-�쳣,����DSP����
	char reservedData;		//����
	DWORD dwBitRate;//ʵ������
	DWORD dwLinkNum;//�ͻ������ӵĸ���
	DWORD dwClientIP[MAX_LINK];//�ͻ��˵�IP��ַ
}NET_DVR_CHANNELSTATE, *LPNET_DVR_CHANNELSTATE;

//Ӳ��״̬
typedef struct 
{
	DWORD dwVolume;//Ӳ�̵�����
	DWORD dwFreeSpace;//Ӳ�̵�ʣ��ռ�
	DWORD dwHardDiskStatic; //Ӳ�̵�״̬,��λ:1-����,2-������,3-����Ӳ�̳���,4-δ��ʽ��, 5-δ����״̬(����Ӳ��),6-Ӳ�����ڸ�ʽ��
}NET_DVR_DISKSTATE, *LPNET_DVR_DISKSTATE;

//DVR����״̬(9000��չ)
typedef struct 
{
	DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
	NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM_V30];
	NET_DVR_CHANNELSTATE_V30 struChanStatic[MAX_CHANNUM_V30];//ͨ����״̬
	BYTE  byAlarmInStatic[MAX_ALARMIN_V30]; //�����˿ڵ�״̬,0-û�б���,1-�б���
	BYTE  byAlarmOutStatic[MAX_ALARMOUT_V30]; //��������˿ڵ�״̬,0-û�����,1-�б������
	DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
    BYTE  byAudioChanStatus[MAX_AUDIO_V30];//��ʾ����ͨ����״̬ 0-δʹ�ã�1-ʹ����, 0xff��Ч
    BYTE  byRes[10];
}NET_DVR_WORKSTATE_V30, *LPNET_DVR_WORKSTATE_V30;

//DVR����״̬
typedef struct 
{
	DWORD dwDeviceStatic; 	//�豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
	NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM];
	NET_DVR_CHANNELSTATE struChanStatic[MAX_CHANNUM];//ͨ����״̬
	BYTE  byAlarmInStatic[MAX_ALARMIN]; //�����˿ڵ�״̬,0-û�б���,1-�б���
	BYTE  byAlarmOutStatic[MAX_ALARMOUT]; //��������˿ڵ�״̬,0-û�����,1-�б������
	DWORD  dwLocalDisplay;//������ʾ״̬,0-����,1-������
}NET_DVR_WORKSTATE, *LPNET_DVR_WORKSTATE;



//��־��Ϣ(9000��չ)
typedef struct 
{
	NET_DVR_TIME strLogTime;
	DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
	DWORD	dwMinorType;//������ 0-ȫ��;
	BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
	BYTE	sNetUser[MAX_NAMELEN];//����������û���
	NET_DVR_IPADDR	struRemoteHostAddr;//Զ��������ַ
	DWORD	dwParaType;//��������,9000�豸MINOR_START_VT/MINOR_STOP_VTʱ����ʾ�����Խ��Ķ��Ӻ�
	DWORD	dwChannel;//ͨ����
	DWORD	dwDiskNumber;//Ӳ�̺�
	DWORD	dwAlarmInPort;//��������˿�
	DWORD	dwAlarmOutPort;//��������˿�
    DWORD   dwInfoLen;
    char    sInfo[LOG_INFO_LEN];
}NET_DVR_LOG_V30, *LPNET_DVR_LOG_V30;

//��־��Ϣ
typedef struct 
{
	NET_DVR_TIME strLogTime;
	DWORD	dwMajorType;	//������ 1-����; 2-�쳣; 3-����; 0xff-ȫ��
	DWORD	dwMinorType;//������ 0-ȫ��;
	BYTE	sPanelUser[MAX_NAMELEN]; //���������û���
	BYTE	sNetUser[MAX_NAMELEN];//����������û���
	char	sRemoteHostAddr[16];//Զ��������ַ
	DWORD	dwParaType;//��������
	DWORD	dwChannel;//ͨ����
	DWORD	dwDiskNumber;//Ӳ�̺�
	DWORD	dwAlarmInPort;//��������˿�
	DWORD	dwAlarmOutPort;//��������˿�
}NET_DVR_LOG, *LPNET_DVR_LOG;

/************************DVR��־ end***************************/

/************************������������������־���� begin************************************************/
typedef struct tagNET_DVR_ALARMHOST_SEARCH_LOG_PARAM
{
    WORD            wMajorType;		// ������
    WORD            wMinorType;		// ������ 
    NET_DVR_TIME    struStartTime;	// ��ʼʱ�� 
    NET_DVR_TIME    struEndTime;	// ����ʱ��
    BYTE            byRes[8];		// �����ֽ�
}NET_DVR_ALARMHOST_SEARCH_LOG_PARAM, LPNET_DVR_ALARMHOST_SEARCH_LOG_PARAM;

typedef struct tagNET_DVR_ALARMHOST_LOG_RET
{
    NET_DVR_TIME	struLogTime;                //  ��־ʱ��
    BYTE		    sUserName[NAME_LEN];     // �����û�
    NET_DVR_IPADDR	struIPAddr;                 // ����IP��ַ
    WORD		    wMajorType;                 // ������ 
    WORD		    wMinorType;                 // ������
    WORD	    	wParam;	                    // ��������
    BYTE		    byRes[10];
    DWORD		    dwInfoLen;	                // ������Ϣ����
    char			sInfo[LOG_INFO_LEN];       // ������Ϣ
}NET_DVR_ALARMHOST_LOG_RET, *LPNET_DVR_ALARMHOST_LOG_RET;

/*************************������������������־���� end***********************************************/

//�������״̬(9000��չ)
typedef struct 
{
	BYTE Output[MAX_ALARMOUT_V30];
}NET_DVR_ALARMOUTSTATUS_V30, *LPNET_DVR_ALARMOUTSTATUS_V30;

//�������״̬
typedef struct 
{
	BYTE Output[MAX_ALARMOUT];
}NET_DVR_ALARMOUTSTATUS, *LPNET_DVR_ALARMOUTSTATUS;

//������Ϣ
typedef struct 
{
	USHORT m_Year;
	USHORT m_Month;
	USHORT m_Day;
	USHORT m_Hour;
	USHORT m_Minute;
	USHORT m_Second;
	BYTE DeviceName[24];	//�豸����
	DWORD dwChannelNumer;	//ͨ����
	BYTE CardNumber[32];	//����
	char cTradeType[12];	//��������
	DWORD dwCash;			//���׽��
}NET_DVR_TRADEINFO, *LPNET_DVR_TRADEINFO;


//ATMר��
/****************************ATM(begin)***************************/
#define NCR		0
#define DIEBOLD	1
#define WINCOR_NIXDORF	2
#define SIEMENS	3
#define OLIVETTI	4
#define FUJITSU	5
#define HITACHI	6
#define SMI		7
#define IBM		8
#define BULL	9
#define YiHua	10
#define LiDe	11
#define GDYT	12
#define Mini_Banl	13
#define GuangLi	14
#define DongXin	15
#define ChenTong	16
#define NanTian	17
#define XiaoXing	18
#define GZYY	19
#define QHTLT	20
#define DRS918	21
#define KALATEL	22
#define NCR_2	23	
#define NXS		24


/*֡��ʽ*/
typedef struct 
{
	BYTE code[12];		/* ���� */
}NET_DVR_FRAMETYPECODE;


//ATM����
typedef struct 
{
	DWORD dwSize;
	char sATMIP[16];						/* ATM IP��ַ */
	DWORD dwATMType;						/* ATM���� */
	DWORD dwInputMode;						/* ���뷽ʽ	0-�������� 1-������� 2-����ֱ������ 3-����ATM��������*/
	DWORD dwFrameSignBeginPos;              /* ���ı�־λ����ʼλ��*/
	DWORD dwFrameSignLength;				/* ���ı�־λ�ĳ��� */
	BYTE  byFrameSignContent[12];			/* ���ı�־λ������ */
	DWORD dwCardLengthInfoBeginPos;			/* ���ų�����Ϣ����ʼλ�� */
	DWORD dwCardLengthInfoLength;			/* ���ų�����Ϣ�ĳ��� */
	DWORD dwCardNumberInfoBeginPos;			/* ������Ϣ����ʼλ�� */
	DWORD dwCardNumberInfoLength;			/* ������Ϣ�ĳ��� */
	DWORD dwBusinessTypeBeginPos;           /* �������͵���ʼλ�� */
	DWORD dwBusinessTypeLength;				/* �������͵ĳ��� */
	NET_DVR_FRAMETYPECODE frameTypeCode[10];/* ���� */
}NET_DVR_FRAMEFORMAT, *LPNET_DVR_FRAMEFORMAT;
//SDK_V31 ATM

/*��������*/
typedef struct	tagNET_DVR_FILTER
{	
	BYTE			        byEnable;			//0,������;1,����
	BYTE					byMode;				//0,ASCII;1,HEX	
    BYTE                    byFrameBeginPos;    // ��Ҫ����Ŀ���ַ�����ʼλ��     
	BYTE					byRes[1];           // �����ֽ�
	BYTE 					byFilterText[16];	//�����ַ���
	BYTE					byRes2[12];         // �����ֽ�
}NET_DVR_FILTER, *LPNET_DVR_FILTER;

//���ݰ����� ���ݰ���ʶ
typedef struct	tagNET_DVR_IDENTIFICAT
{	
	BYTE					byStartMode;		//��ʼ�ַ�ģʽ:0,ASCII;1,HEX
	BYTE					byEndMode;			//�����ַ�ģʽ��0,ASCII;1,HEX
	BYTE					byRes[2];           //�����ֽ�
	NET_DVR_FRAMETYPECODE	struStartCode;		//���ݰ���ʼ��ʶ�ַ�
	NET_DVR_FRAMETYPECODE	struEndCode;		//���ݰ�������ʶ�ַ�
	BYTE					byRes1[12];         //�����ֽ�
}NET_DVR_IDENTIFICAT, *LPNET_DVR_IDENTIFICAT;

typedef struct	tagNET_DVR_PACKAGE_LOCATION/*������Ϣλ��*/
{	
	BYTE 					byOffsetMode;			/*����λ����Ϣģʽ 0,token(�ַ���־ģʽ);1,fix���̶�ģʽ��*/
    BYTE                    byRes1[3];				// �����ֽ�
	DWORD  				    dwOffsetPos;			/*modeΪ1��ʱ��ʹ��,�̶�ƫ�ƴ�С*/
	NET_DVR_FRAMETYPECODE	struTokenCode;			/*��־λ*/
	BYTE					byMultiplierValue;		/*��־λ���ٴγ���*/
	BYTE					byEternOffset;			/*�����ַ�ƫ����*/
	BYTE					byCodeMode;			    /*0,ASCII;1,HEX*/
	BYTE 					byRes2[9];			    //�����ֽ�
}NET_DVR_PACKAGE_LOCATION, *LPNET_DVR_PACKAGE_LOCATION;


typedef struct	tagNET_DVR_PACKAGE_LENGTH//������Ϣ����
{	
	BYTE					byLengthMode;			//�������ͣ�0,�ɱ䳤��;1,�̶�����;2,��������(�ӿ����л�ȡ)
    BYTE                    byRes1[3];              // �����ֽ�
	DWORD  			    	dwFixLength;			    //modeΪ1��ʱ��ʹ��,�̶����ȴ�С
	DWORD					dwMaxLength;            //������Ϣ��󳤶�  byLengthModeΪ0ʱʹ��
	DWORD					dwMinLength;            //������Ϣ��С����  byLengthModeΪ0ʱʹ��
	BYTE					byEndMode;			    //�ɱ䳤�� �ս��ģʽ 0,ASCII;1,HEX	
    BYTE                    byRes2[3];              //�����ֽ�
	NET_DVR_FRAMETYPECODE	struEndCode;		//�ɱ䳤���ս��
	DWORD					dwLengthPos;			//lengthModeΪ2��ʱ��ʹ�ã����ų����ڱ����е�λ��
	DWORD					dwLengthLen;			//lengthModeΪ2��ʱ��ʹ�ã����ų��ȵĳ���
	BYTE					byRes3[8];              // �����ֽ�
}NET_DVR_PACKAGE_LENGTH,* LPNET_DVR_PACKAGE_LENGTH;
 
typedef struct	tagNET_DVR_OSD_POSITION//OSD ���ӵ�λ��
{	
	BYTE					byPositionMode;		//���ӷ�񣬹�2�֣�0������ʾ��1���Զ���
    BYTE                    byRes1[3];          // �����ֽ�
	DWORD 					dwPosX;				//x���꣬���ӷ��Ϊ�Զ���ʱʹ��
	DWORD					dwPosY;				//y���꣬���ӷ��Ϊ�Զ���ʱʹ��
	BYTE					byRes2[8];          //�����ֽ�
}NET_DVR_OSD_POSITION, *LPNET_DVR_OSD_POSITION;

typedef struct	tagNET_DVR_DATE_FORMAT//������ʾ��ʽ
{	
	BYTE					byMonth;			    //Month,0.mm;1.mmm;2.mmmm							
	BYTE 					byDay;				    //Day,0.dd;									
	BYTE 					byYear;				    //Year,0.yy;1.yyyy	
	BYTE					byDateForm;			    //0~5�������յ��������
	BYTE					byRes[20];              // �����ֽ�
	char					chSeprator[4];		    //�ָ���
	char	    			chDisplaySeprator[4];	//��ʾ�ָ���
    BYTE	    			byDisplayForm;			//0~5��3��item���������
	BYTE					res[27];                // �����ֽ�
}NET_DVR_DATE_FORMAT, *LPNET_DVR_DATE_FORMAT;
typedef struct	tagNET_DVRT_TIME_FORMAT//ʱ����ʾ��ʽ
{	
	BYTE					byTimeForm;				//1. HH MM SS;0. HH MM
	BYTE 					byRes1[23];             // �����ֽ�
    BYTE                    byHourMode;             //0,12;1,24 
    BYTE                    byRes2[3];              // �����ֽ�
	char					chSeprator[4]; 			//���ķָ�������ʱû��
	char					chDisplaySeprator[4];	//��ʾ�ָ���
	BYTE	    			byDisplayForm;			//0~5��3��item���������
    BYTE                    byRes3[3];              // �����ֽ�
	BYTE					byDisplayHourMode;		//0,12;1,24 
	BYTE					byRes4[19];             // �����ֽ�
}NET_DVR_TIME_FORMAT, *LPNET_DVR_TIME_FORMAT;

typedef struct tagNET_DVR_OVERLAY_CHANNEL
{	
	BYTE                    byChannel[64];//���ӵ�ͨ�� ÿ���ֽڱ�ʶһ��ͨ���� ����byChannel[0]ֵΪ1��Ӧ����ͨ��1��0��ʾ������ͨ��1��
	DWORD					dwDelayTime;			//������ʱʱ��
	BYTE					byEnableDelayTime;		//�Ƿ����õ�����ʱ
	BYTE					byRes[11];          // �����ֽ�
}NET_DVR_OVERLAY_CHANNEL, *LPNET_DVR_OVERLAY_CHANNEL;

// ATM ������Ϊ��Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_ACTION
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation;// ����λ����Ϣ
	NET_DVR_OSD_POSITION		struOsdPosition;    // OSD ����λ��
	NET_DVR_FRAMETYPECODE		struActionCode;		//����������Ϊ��
	NET_DVR_FRAMETYPECODE		struPreCode;		//�����ַ�ǰ���ַ�
	BYTE					byActionCodeMode;		//����������Ϊ��ģʽ0,ASCII;1,HEX
	BYTE					byRes[7];               // �����ֽ�
}NET_DVR_ATM_PACKAGE_ACTION, *LPNET_DVR_ATM_PACKAGE_ACTION;

// ATM ����DATA��Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_DATE
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation;// �����ڱ����е�λ����Ϣ
	NET_DVR_DATE_FORMAT		    struDateForm;		//������ʾ��ʽ
	NET_DVR_OSD_POSITION		struOsdPosition;	// OSD����λ����Ϣ
	BYTE				    	res[8]; 			// �����ֽ�
}NET_DVR_ATM_PACKAGE_DATE, *LPNET_DVR_ATM_PACKAGE_DATE;


//ATM����ʱ����Ϣ
typedef struct tagNET_DVR_ATM_PACKAGE_TIME
{	
	NET_DVR_PACKAGE_LOCATION	location;		// ʱ���ڱ����е�λ����Ϣ
	NET_DVR_TIME_FORMAT		    struTimeForm;	// ʱ����ʾ��ʽ
	NET_DVR_OSD_POSITION		struOsdPosition;// OSD ����λ����Ϣ
	BYTE					    byRes[8];		// �����ֽ�
}NET_DVR_ATM_PACKAGE_TIME, *LPNET_DVR_ATM_PACKAGE_TIME;


// ATM ����������Ϣ�����ţ����׽�������ţ�
typedef struct tagNET_DVR_ATM_PACKAGE_OTHERS
{	
	NET_DVR_PACKAGE_LOCATION	struPackageLocation; //����λ����Ϣ
	NET_DVR_PACKAGE_LENGTH	struPackageLength;		//������Ϣ
	NET_DVR_OSD_POSITION		struOsdPosition;	// OSD����λ����Ϣ
	NET_DVR_FRAMETYPECODE		struPreCode;		//�����ַ�ǰ���ַ�
	BYTE					res[8];					//�����ֽ�
}NET_DVR_ATM_PACKAGE_OTHERS, *LPNET_DVR_ATM_PACKAGE_OTHERS;


//�û��Զ���Э��
typedef struct tagNET_DVR_ATM_USER_DEFINE_PROTOCOL
{
    NET_DVR_IDENTIFICAT        struIdentification;  //���ı�־
    NET_DVR_FILTER             struFilter; //���ݰ���������
    NET_DVR_ATM_PACKAGE_OTHERS struCardNoPara; //���ӿ�������
    NET_DVR_ATM_PACKAGE_ACTION struTradeActionPara[MAX_ACTION_TYPE]; //���ӽ�����Ϊ���� 0-9 ���ζ�ӦInCard OutCard OverLay SetTime GetStatus Query WithDraw Deposit ChanPass Transfer
    NET_DVR_ATM_PACKAGE_OTHERS struAmountPara; //���ӽ��׽������
    NET_DVR_ATM_PACKAGE_OTHERS struSerialNoPara; //���ӽ����������
    NET_DVR_OVERLAY_CHANNEL    struOverlayChan; //����ͨ������
    NET_DVR_ATM_PACKAGE_DATE   struRes1; //�������ڣ�����
    NET_DVR_ATM_PACKAGE_TIME   struRes2; //����ʱ�䣬����
    BYTE                       byRes3[124];        //����
}NET_DVR_ATM_USER_DEFINE_PROTOCOL, *LPNET_DVR_ATM_USER_DEFINE_PROTOCOL;

typedef struct tagNET_DVR_ATM_FRAMEFORMAT_V30
{		
    DWORD                        dwSize;                 //�ṹ��С
    BYTE					    byEnable;				/*�Ƿ�����0,������;1,����*/
    BYTE					    byInputMode;			/**���뷽ʽ:0-���������1����Э�顢2-���ڼ�����3-����Э��*/
    BYTE					    byRes1[34];              //�����ֽ� 
    NET_DVR_IPADDR		    	struAtmIp;				/*ATM ��IP �������ʱʹ�� */
    WORD					    wAtmPort;				/* ����Э�鷽ʽʱ��ʹ��*/
    BYTE					    byRes2[2];              // �����ֽ�
    DWORD					    dwAtmType;				/*ATMЭ�����ͣ���NET_DVR_ATM_PROTOCOL�ṹ�л�ȡ���������Ϊ�Զ���ʱʹ���û��Զ���Э��*/
    NET_DVR_ATM_USER_DEFINE_PROTOCOL   struAtmUserDefineProtocol; //�û��Զ���Э�飬��ATM����Ϊ�Զ�ʱ��Ҫʹ�øö���
    BYTE					    byRes3[8];
}NET_DVR_ATM_FRAMEFORMAT_V30, *LPNET_DVR_ATM_FRAMEFORMAT_V30;


typedef struct  tagNET_DVR_ATM_PROTO_TYPE
{
    DWORD dwAtmType; //ATMЭ�����ͣ�ͬʱ��Ϊ������� ATM �����е�dwAtmType �Զ���ʱΪ1025
    char chDesc[ATM_DESC_LEN]; //ATMЭ�������
}NET_DVR_ATM_PROTO_TYPE, *LPNET_DVR_ATM_PROTO_TYPE; //Э����Ϣ���ݽṹ

typedef struct tagNET_DVR_ATM_PROTO_LIST    //ATM Э���б�
{
    DWORD                  dwAtmProtoNum;           // Э���б�ĸ���
    NET_DVR_ATM_PROTO_TYPE struAtmProtoType[MAX_ATM_PROTOCOL_NUM]; //Э���б���Ϣ
}NET_DVR_ATM_PROTO_LIST, *LPNET_DVR_ATM_PROTO_LIST;

typedef struct tagNET_DVR_ATM_PROTOCOL
{
    DWORD dwSize;
    NET_DVR_ATM_PROTO_LIST struNetListenList; // �������Э������
    NET_DVR_ATM_PROTO_LIST struSerialListenList; //���ڼ���Э������
    NET_DVR_ATM_PROTO_LIST struNetProtoList;     //����Э������
    NET_DVR_ATM_PROTO_LIST struSerialProtoList;   //����Э������
    NET_DVR_ATM_PROTO_TYPE struCustomProto;        //�Զ���Э��
}NET_DVR_ATM_PROTOCOL, *LPNET_DVR_ATM_PROTOCOL;
// SDK_V31

/*****************************DS-6001D/F(begin)***************************/
//DS-6001D Decoder
typedef struct 
{
	BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
	BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
	BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
	BYTE bySendMode;			//�����豸���ӷ�����������ģʽ
	BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
	WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
	BYTE reservedData[4];		//����
}NET_DVR_DECODERINFO, *LPNET_DVR_DECODERINFO;

typedef struct 
{
	BYTE byEncoderIP[16];		//�����豸���ӵķ�����IP
	BYTE byEncoderUser[16];		//�����豸���ӵķ��������û���
	BYTE byEncoderPasswd[16];	//�����豸���ӵķ�����������
	BYTE byEncoderChannel;		//�����豸���ӵķ�������ͨ����
	BYTE bySendMode;			//�����豸���ӵķ�����������ģʽ
	WORD wEncoderPort;			//�����豸���ӵķ������Ķ˿ں�
	DWORD dwConnectState;		//�����豸���ӷ�������״̬
	BYTE reservedData[4];		//����
}NET_DVR_DECODERSTATE, *LPNET_DVR_DECODERSTATE;

/*�����豸�����붨��*/
#define NET_DEC_STARTDEC		1
#define NET_DEC_STOPDEC			2
#define NET_DEC_STOPCYCLE		3
#define NET_DEC_CONTINUECYCLE	4
/*���ӵ�ͨ������*/
typedef struct 
{
	char sDVRIP[16];				/* DVR IP��ַ */
	WORD wDVRPort;			 		/* �˿ں� */
	BYTE sUserName[NAME_LEN];		/* �û��� */
	BYTE sPassword[PASSWD_LEN];		/* ���� */
	BYTE byChannel;					/* ͨ���� */
	BYTE byLinkMode;				/* ����ģʽ */
	BYTE byLinkType;				/* �������� 0�������� 1�������� */
}NET_DVR_DECCHANINFO, *LPNET_DVR_DECCHANINFO;

/*ÿ������ͨ��������*/
typedef struct 
{
	BYTE	byPoolChans;			/*ÿ·����ͨ���ϵ�ѭ��ͨ������, ���4ͨ�� 0��ʾû�н���*/
	NET_DVR_DECCHANINFO struchanConInfo[MAX_DECPOOLNUM];
	BYTE	byEnablePoll;			/*�Ƿ���Ѳ 0-�� 1-��*/
	BYTE	byPoolTime;				/*��Ѳʱ�� 0-���� 1-10�� 2-15�� 3-20�� 4-30�� 5-45�� 6-1���� 7-2���� 8-5���� */
}NET_DVR_DECINFO, *LPNET_DVR_DECINFO;

/*�����豸��������*/
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwDecChanNum; 		/*����ͨ��������*/
	NET_DVR_DECINFO struDecInfo[MAX_DECNUM];
}NET_DVR_DECCFG, *LPNET_DVR_DECCFG;

//2005-08-01
/* �����豸͸��ͨ������ */
typedef struct 
{
	DWORD dwEnableTransPort;	/* �Ƿ�����͸��ͨ�� 0�������� 1������*/
	char sDecoderIP[16];		/* DVR IP��ַ */
	WORD wDecoderPort;			/* �˿ں� */
	WORD wDVRTransPort;			/* ����ǰ��DVR�Ǵ�485/232�����1��ʾ232����,2��ʾ485���� */
	char cReserve[4];
}NET_DVR_PORTINFO, *LPNET_DVR_PORTINFO;

typedef struct 
{
	DWORD dwSize;
	NET_DVR_PORTINFO struTransPortInfo[MAX_TRANSPARENTNUM]; /* ����0��ʾ232 ����1��ʾ485 */
}NET_DVR_PORTCFG, *LPNET_DVR_PORTCFG;

/* ���������ļ��ط� */
typedef struct 
{
	DWORD dwSize;
	char sDecoderIP[16];		/* DVR IP��ַ */
	WORD wDecoderPort;			/* �˿ں� */
	WORD wLoadMode;				/* �ط�����ģʽ 1�������� 2����ʱ�� */
	union
	{
		BYTE byFile[100];		/* �طŵ��ļ��� */
		struct
		{
			DWORD dwChannel;
			BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE sPassword[PASSWD_LEN];	/* ���� */
			NET_DVR_TIME struStartTime;	/* ��ʱ��طŵĿ�ʼʱ�� */
			NET_DVR_TIME struStopTime;	/* ��ʱ��طŵĽ���ʱ�� */
		}bytime;
	}mode_size;
}NET_DVR_PLAYREMOTEFILE, *LPNET_DVR_PLAYREMOTEFILE;

/*��ǰ�豸��������״̬*/
typedef struct 
{
	DWORD dwWorkType;		/*������ʽ��1����Ѳ��2����̬���ӽ��롢3���ļ��ط����� 4����ʱ��ط�����*/
	char sDVRIP[16];		/*���ӵ��豸ip*/
	WORD wDVRPort;			/*���Ӷ˿ں�*/
	BYTE byChannel;			/* ͨ���� */
	BYTE byLinkMode;		/* ����ģʽ */
	DWORD	dwLinkType;		/*�������� 0�������� 1��������*/
	union
	{
		struct
		{
			BYTE sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE sPassword[PASSWD_LEN];	/* ���� */
			char cReserve[52];
		}userInfo;
		struct
		{
			BYTE   fileName[100];
		}fileInfo;
		struct
		{
			DWORD	dwChannel;
			BYTE	sUserName[NAME_LEN];	/*������Ƶ�û���*/
			BYTE	sPassword[PASSWD_LEN];	/* ���� */
			NET_DVR_TIME struStartTime;		/* ��ʱ��طŵĿ�ʼʱ�� */
			NET_DVR_TIME struStopTime;		/* ��ʱ��طŵĽ���ʱ�� */
		}timeInfo;
	}objectInfo;
}NET_DVR_DECCHANSTATUS, *LPNET_DVR_DECCHANSTATUS;

typedef struct 
{
	DWORD   dwSize;
	NET_DVR_DECCHANSTATUS struDecState[MAX_DECNUM];
}NET_DVR_DECSTATUS, *LPNET_DVR_DECSTATUS;
/*****************************DS-6001D/F(end)***************************/

//���ַ�����(�ӽṹ)
typedef struct 
{
	WORD wShowString;				// Ԥ����ͼ�����Ƿ���ʾ�ַ�,0-����ʾ,1-��ʾ �����С704*576,�����ַ��Ĵ�СΪ32*32
	WORD wStringSize;				/* �����ַ��ĳ��ȣ����ܴ���44���ַ� */
	WORD wShowStringTopLeftX;		/* �ַ���ʾλ�õ�x���� */
	WORD wShowStringTopLeftY;		/* �ַ�������ʾλ�õ�y���� */
	char sString[44];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRINGINFO, *LPNET_DVR_SHOWSTRINGINFO;

//�����ַ�(9000��չ)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_V30];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING_V30, *LPNET_DVR_SHOWSTRING_V30;

//�����ַ���չ(8���ַ�)
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM_EX];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING_EX, *LPNET_DVR_SHOWSTRING_EX;

//�����ַ�
typedef struct 
{
	DWORD dwSize;
	NET_DVR_SHOWSTRINGINFO struStringInfo[MAX_STRINGNUM];				/* Ҫ��ʾ���ַ����� */
}NET_DVR_SHOWSTRING, *LPNET_DVR_SHOWSTRING;

/****************************DS9000�����ṹ(begin)******************************/
/*
EMAIL�����ṹ
*/
typedef struct
{		
	DWORD		dwSize;
	BYTE		sAccount[NAME_LEN];				/* �˺�*/ 
	BYTE		sPassword[MAX_EMAIL_PWD_LEN];			/*���� */
	struct
	{
		BYTE	sName[NAME_LEN];				/* ���������� */
		BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �����˵�ַ */
	}struSender;
	BYTE		sSmtpServer[MAX_EMAIL_ADDR_LEN];	/* smtp������ */
	BYTE		sPop3Server[MAX_EMAIL_ADDR_LEN];	/* pop3������ */
	struct
	{
		BYTE	sName[NAME_LEN];				/* �ռ������� */
		BYTE	sAddress[MAX_EMAIL_ADDR_LEN];		/* �ռ��˵�ַ */
	}struReceiver[3];							/* ����������3���ռ��� */
	BYTE		byAttachment;					/* �Ƿ������ */
	BYTE		bySmtpServerVerify;				/* ���ͷ�����Ҫ�������֤ */
    BYTE        byMailInterval;                 /* mail interval */
	BYTE        byEnableSSL;					//ssl�Ƿ�����9000_1.1
	WORD        wSmtpPort;						//gmail��465����ͨ��Ϊ25     
	BYTE        byRes[74];						//����
} NET_DVR_EMAILCFG_V30, *LPNET_DVR_EMAILCFG_V30;

/*
DVRʵ��Ѳ�����ݽṹ
*/
typedef struct
{	
	DWORD 	dwSize;
	BYTE	byPresetNo[CRUISE_MAX_PRESET_NUMS];		/* Ԥ�õ�� */
	BYTE 	byCruiseSpeed[CRUISE_MAX_PRESET_NUMS];	/* Ѳ���ٶ� */
	WORD	wDwellTime[CRUISE_MAX_PRESET_NUMS];		/* ͣ��ʱ�� */
	BYTE	byEnableThisCruise;						/* �Ƿ����� */
	BYTE	res[15];
}NET_DVR_CRUISE_PARA, *LPNET_DVR_CRUISE_PARA; 
/****************************DS9000�����ṹ(end)******************************/

//ʱ���
typedef struct 
{
	DWORD dwMonth;		//�� 0-11��ʾ1-12����
	DWORD dwWeekNo;		//�ڼ��� 0����1�� 1����2�� 2����3�� 3����4�� 4�����һ��
	DWORD dwWeekDate;	//���ڼ� 0�������� 1������һ 2�����ڶ� 3�������� 4�������� 5�������� 6��������
	DWORD dwHour;		//Сʱ	��ʼʱ��0��23 ����ʱ��1��23
	DWORD dwMin;		//��	0��59
}NET_DVR_TIMEPOINT;

//����ʱ����
typedef struct 
{
	DWORD dwSize;
	DWORD dwZoneIndex; //Ӧ�ò����ʹ��NET_DVR_NTPPARA �е�cTimeDifferenceH ��cTimeDifferenceM ������ʱ�����˴��û�ȡ��ֵ��䣬�����û��ṩ����༭��
	BYTE byRes1[12];			//����
	DWORD dwEnableDST;		//�Ƿ�������ʱ�� 0�������� 1������
	BYTE byDSTBias;	//����ʱƫ��ֵ��30min, 60min, 90min, 120min, �Է��Ӽƣ�����ԭʼ��ֵ
	BYTE byRes2[3];
	NET_DVR_TIMEPOINT struBeginPoint;	//��ʱ�ƿ�ʼʱ��
	NET_DVR_TIMEPOINT struEndPoint;	//��ʱ��ֹͣʱ��
}NET_DVR_ZONEANDDST, *LPNET_DVR_ZONEANDDST;

//ͼƬ����
typedef struct 
{
	/*ע�⣺��ͼ��ѹ���ֱ���ΪVGAʱ��֧��0=CIF, 1=QCIF, 2=D1ץͼ��
	���ֱ���Ϊ3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA,7=XVGA, 8=HD900p
	��֧�ֵ�ǰ�ֱ��ʵ�ץͼ*/
	WORD	wPicSize;				/* ����ͨ����������ȡ, 0-CIF��1-QCIF��2-D1��3-UXGA(1600x1200)��
									4-SVGA(800x600)��5-HD720p(1280x720)��6-VGA��7-XVGA��8-HD900p��
									9-HD1080��10-2560*1920��11-1600*304��12-2048*1536��
									13-2448*2048,,14-2448*1200��15-2448*800��
                                16-XGA(1024*768)��17-SXGA(1280*1024),18-WD1(960*576/960*480),19-1080i*/
	WORD	wPicQuality;			/* ͼƬ����ϵ�� 0-��� 1-�Ϻ� 2-һ�� */
}NET_DVR_JPEGPARA, *LPNET_DVR_JPEGPARA;

/* aux video out parameter */
//���������������
typedef struct 
{
	DWORD dwSize;
	DWORD dwAlarmOutChan;                       /* ѡ�񱨾������󱨾�ͨ���л�ʱ�䣺1��������ͨ��: 0:�����/1:��1/2:��2/3:��3/4:��4 */
	DWORD dwAlarmChanSwitchTime;                /* :1�� - 10:10�� */
	DWORD dwAuxSwitchTime[MAX_AUXOUT];			/* ��������л�ʱ��: 0-���л�,1-5s,2-10s,3-20s,4-30s,5-60s,6-120s,7-300s */
	BYTE  byAuxOrder[MAX_AUXOUT][MAX_WINDOW];	/* �������Ԥ��˳��, 0xff��ʾ��Ӧ�Ĵ��ڲ�Ԥ�� */
}NET_DVR_AUXOUTCFG, *LPNET_DVR_AUXOUTCFG;


//ntp
typedef struct 
{
	BYTE sNTPServer[64];   /* Domain Name or IP addr of NTP server */
	WORD wInterval;		 /* adjust time interval(hours) */
	BYTE byEnableNTP;    /* enable NPT client 0-no��1-yes*/
	signed char cTimeDifferenceH; /* ����ʱ�׼ʱ��� Сʱƫ��-12 ... +13 */
	signed char cTimeDifferenceM;/* ����ʱ�׼ʱ��� ����ƫ��0, 30, 45*/
	BYTE res1;
    WORD wNtpPort;         /* ntp server port 9000���� �豸Ĭ��Ϊ123*/
    BYTE res2[8];
}NET_DVR_NTPPARA, *LPNET_DVR_NTPPARA;

//ddns
typedef struct 
{
	BYTE sUsername[NAME_LEN];  /* DDNS�˺��û���/���� */
	BYTE sPassword[PASSWD_LEN];
	BYTE sDomainName[64];       /* ���� */
	BYTE byEnableDDNS;			/*�Ƿ�Ӧ�� 0-��1-��*/
	BYTE res[15];
}NET_DVR_DDNSPARA, *LPNET_DVR_DDNSPARA;


typedef struct
{
	BYTE byHostIndex;					/* 0-˽��DDNS 1��Dyndns 2��PeanutHull(������)*/
	BYTE byEnableDDNS;					/*�Ƿ�Ӧ��DDNS 0-��1-��*/
	WORD wDDNSPort;						/* DDNS�˿ں� */
	BYTE sUsername[NAME_LEN];			/* DDNS�û���*/
	BYTE sPassword[PASSWD_LEN];			/* DDNS���� */
	BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
	BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNS ��Ӧ�ķ�������ַ��������IP��ַ������ */
	BYTE byRes[16];
}NET_DVR_DDNSPARA_EX, *LPNET_DVR_DDNSPARA_EX;

//9000��չ
typedef struct
{
    BYTE byEnableDDNS;
    BYTE byHostIndex;/*0-IPServer 1��Dyndns 2��PeanutHull(������)��3- NO-IP, 4- hkDDNS*/
    BYTE byRes1[2];
    struct
    {    
        BYTE sUsername[NAME_LEN];			/* DDNS�˺��û���*/
        BYTE sPassword[PASSWD_LEN];			/* ���� */
        BYTE sDomainName[MAX_DOMAIN_NAME];	/* �豸�䱸��������ַ */
        BYTE sServerName[MAX_DOMAIN_NAME];	/* DDNSЭ���Ӧ�ķ�������ַ��������IP��ַ������ */
        WORD wDDNSPort;						/* �˿ں� */
        BYTE byRes[10];
    } struDDNS[MAX_DDNS_NUMS];
    BYTE byRes2[16];
}NET_DVR_DDNSPARA_V30, *LPNET_DVR_DDNSPARA_V30;

//email
typedef struct 
{
	BYTE sUsername[64];  /* �ʼ��˺�/���� */
	BYTE sPassword[64];
	BYTE sSmtpServer[64];
	BYTE sPop3Server[64];
	BYTE sMailAddr[64];   /* email */
	BYTE sEventMailAddr1[64];  /* �ϴ�����/�쳣�ȵ�email */
	BYTE sEventMailAddr2[64];
	BYTE res[16];
}NET_DVR_EMAILPARA, *LPNET_DVR_EMAILPARA;

//�����������
typedef struct 
{
	DWORD  dwSize;
	char  sDNSIp[16];                /* DNS��������ַ */
	NET_DVR_NTPPARA  struNtpClientParam;      /* NTP���� */
	NET_DVR_DDNSPARA struDDNSClientParam;     /* DDNS���� */
	BYTE res[464];			/* ���� */
}NET_DVR_NETAPPCFG, *LPNET_DVR_NETAPPCFG;

//nfs�ṹ����
typedef struct
{
    char sNfsHostIPAddr[16];
    BYTE sNfsDirectory[PATHNAME_LEN];        // PATHNAME_LEN = 128
}NET_DVR_SINGLE_NFS, *LPNET_DVR_SINGLE_NFS;

typedef struct 
{
	DWORD  dwSize;
	NET_DVR_SINGLE_NFS struNfsDiskParam[MAX_NFS_DISK];
}NET_DVR_NFSCFG, *LPNET_DVR_NFSCFG;

typedef struct tagNET_DVR_ISCSI_CFG
{   
    DWORD dwSize;                   // �ṹ��С
    WORD wVrmPort;                  // VRM �����˿�
    BYTE byEnable;                  // �Ƿ����� ISCSI�洢
    BYTE byRes[69];                 // �����ֽ�
    NET_DVR_IPADDR struVrmAddr;          // VRM ip��ַ 16λ
    char chNvtIndexCode[64];        //nvt index Code 
}NET_DVR_ISCSI_CFG, *LPNET_DVR_ISCSI_CFG;  

//Ѳ��������(˽��IP����ר��)
typedef struct
{
    BYTE	PresetNum;	//Ԥ�õ�
    BYTE	Dwell;		//ͣ��ʱ��
    BYTE	Speed;		//�ٶ�
    BYTE	Reserve;	//����
}NET_DVR_CRUISE_POINT, *LPNET_DVR_CRUISE_POINT;

typedef struct 
{
	NET_DVR_CRUISE_POINT struCruisePoint[32];			//���֧��32��Ѳ����
}NET_DVR_CRUISE_RET, *LPNET_DVR_CRUISE_RET;

/************************************��·������(begin)***************************************/
typedef struct 
{
	DWORD	dwSize;
	char	sFirstDNSIP[16];
	char	sSecondDNSIP[16];
	char	sRes[32];
}NET_DVR_NETCFG_OTHER, *LPNET_DVR_NETCFG_OTHER;

typedef struct 
{
	char 	sDVRIP[16];				/* DVR IP��ַ */
	WORD 	wDVRPort;			 	/* �˿ں� */
	BYTE 	byChannel;				/* ͨ���� */
	BYTE	byTransProtocol;			/* ����Э������ 0-TCP, 1-UDP */
	BYTE	byTransMode;				/* ��������ģʽ 0�������� 1��������*/
	BYTE	byRes[3];
	BYTE	sUserName[NAME_LEN];			/* ���������½�ʺ� */
	BYTE	sPassword[PASSWD_LEN];			/* ����������� */
}NET_DVR_MATRIX_DECINFO, *LPNET_DVR_MATRIX_DECINFO;

//����/ֹͣ��̬����
typedef struct 
{
	DWORD	dwSize;				
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��̬����ͨ����Ϣ */
}NET_DVR_MATRIX_DYNAMIC_DEC, *LPNET_DVR_MATRIX_DYNAMIC_DEC;

typedef struct  
{
    DWORD 	dwSize;
    DWORD   dwIsLinked;         /* ����ͨ��״̬ 0������ 1���������� 2�������� 3-���ڽ��� */
    DWORD   dwStreamCpRate;     /* Stream copy rate, X kbits/second */
    char    cRes[64];		/* ���� */
}NET_DVR_MATRIX_DEC_CHAN_STATUS, *LPNET_DVR_MATRIX_DEC_CHAN_STATUS;

typedef struct 
{
	DWORD	dwSize;
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ����ͨ����Ϣ */
	DWORD	dwDecState;	/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
	NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
	NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
	char    sFileName[128];		/* ���ļ��ط��ļ��� */
}NET_DVR_MATRIX_DEC_CHAN_INFO, *LPNET_DVR_MATRIX_DEC_CHAN_INFO;

//���ӵ�ͨ������ 2007-11-05
typedef struct 
{
	DWORD dwEnable;					/* �Ƿ����� 0���� 1������*/
	NET_DVR_MATRIX_DECINFO struDecChanInfo;		/* ��Ѳ����ͨ����Ϣ */
}NET_DVR_MATRIX_DECCHANINFO, *LPNET_DVR_MATRIX_DECCHANINFO;

//2007-11-05 ����ÿ������ͨ��������
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwPoolTime;			/*��Ѳʱ�� */
	NET_DVR_MATRIX_DECCHANINFO struchanConInfo[MAX_CYCLE_CHAN];
}NET_DVR_MATRIX_LOOP_DECINFO, *LPNET_DVR_MATRIX_LOOP_DECINFO;

//2007-12-22
typedef struct 
{
	BYTE	baudrate; 	/* ������ */
	BYTE	databits;		/* ����λ */
	BYTE	stopbits;		/* ֹͣλ */
	BYTE	parity;		/* ��żУ��λ */
	BYTE	flowcontrol;	/* ���� */
	BYTE	res[3];
}TTY_CONFIG, *LPTTY_CONFIG;

typedef struct  
{					
	BYTE byTranChanEnable;	/* ��ǰ͸��ͨ���Ƿ�� 0���ر� 1���� */	
	/*
	 *	��·������������1��485���ڣ�1��232���ڶ�������Ϊ͸��ͨ��,�豸�ŷ������£�
	 *	0 RS485
	 *	1 RS232 Console
	 */
	BYTE	byLocalSerialDevice;			/* Local serial device */
	/*
	 *	Զ�̴��������������,һ��RS232��һ��RS485
	 *	1��ʾ232����
	 *	2��ʾ485����
	 */
	BYTE	byRemoteSerialDevice;			/* Remote output serial device */
	BYTE	res1;							/* ���� */
	char	sRemoteDevIP[16];				/* Remote Device IP */
	WORD	wRemoteDevPort;				/* Remote Net Communication Port */
	BYTE	res2[2];						/* ���� */
	TTY_CONFIG RemoteSerialDevCfg;
}NET_DVR_MATRIX_TRAN_CHAN_INFO, *LPNET_DVR_MATRIX_TRAN_CHAN_INFO;

typedef struct  
{
	DWORD dwSize;
	BYTE 	by232IsDualChan; /* ������·232͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	by485IsDualChan; /* ������·485͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	res[2];	/* ���� */
	NET_DVR_MATRIX_TRAN_CHAN_INFO struTranInfo[MAX_SERIAL_NUM];/*ͬʱ֧�ֽ���MAX_SERIAL_NUM��͸��ͨ��*/
}NET_DVR_MATRIX_TRAN_CHAN_CONFIG, *LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG;

//2007-12-24 Merry Christmas Eve...
typedef struct 
{
	DWORD	dwSize;
	char	sDVRIP[16];		/* DVR IP��ַ */	
	WORD	wDVRPort;			/* �˿ں� */	
	BYTE	byChannel;			/* ͨ���� */
	BYTE 	byReserve;
	BYTE	sUserName[NAME_LEN];		/* �û��� */
	BYTE	sPassword[PASSWD_LEN];		/* ���� */
	DWORD	dwPlayMode;   	/* 0�����ļ� 1����ʱ��*/        	
	NET_DVR_TIME StartTime;
	NET_DVR_TIME StopTime;
	char    sFileName[128];
}NET_DVR_MATRIX_DEC_REMOTE_PLAY, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY;

/* �ļ��������� */
#define NET_DVR_PLAYSTART		1//��ʼ����
#define NET_DVR_PLAYSTOP		2//ֹͣ����
#define NET_DVR_PLAYPAUSE		3//��ͣ����
#define NET_DVR_PLAYRESTART		4//�ָ�����
#define NET_DVR_PLAYFAST		5//���
#define NET_DVR_PLAYSLOW		6//����
#define NET_DVR_PLAYNORMAL		7//�����ٶ�
#define NET_DVR_PLAYSTARTAUDIO	9//������
#define NET_DVR_PLAYSTOPAUDIO	10//�ر�����
#define NET_DVR_PLAYSETPOS		12//�ı��ļ��طŵĽ���

typedef struct 
{
	DWORD	dwSize;
	DWORD	dwPlayCmd;		/* �������� ���ļ���������*/
	DWORD	dwCmdParam;		/* ����������� */
}NET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_CONTROL;

typedef struct  
{
	DWORD dwSize;
	DWORD dwCurMediaFileLen;		/* ��ǰ���ŵ�ý���ļ����� */       
	DWORD dwCurMediaFilePosition;	/* ��ǰ�����ļ��Ĳ���λ�� */        
	DWORD dwCurMediaFileDuration;	/* ��ǰ�����ļ�����ʱ�� */        
	DWORD dwCurPlayTime;			/* ��ǰ�Ѿ����ŵ�ʱ�� */        
	DWORD dwCurMediaFIleFrames;		/* ��ǰ�����ļ�����֡�� */        
	DWORD dwCurDataType;			/* ��ǰ������������ͣ�19-�ļ�ͷ��20-�����ݣ� 21-���Ž�����־ */        
	BYTE res[72];	
}NET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS;

//2009-4-11 added by likui ��·������new
typedef struct tagNET_MATRIX_PASSIVEMODE
{
    WORD	wTransProtol;		//����Э�飬0-TCP, 1-UDP, 2-MCAST
    WORD	wPassivePort;		//UDP�˿�, TCPʱĬ��
    NET_DVR_IPADDR  struMcastIP;	//TCP,UDPʱ��Ч, MCASTʱΪ�ಥ��ַ
    BYTE	byStreamType;/* ���ݲ���ģʽ:REAL_TIME_STREAM(1)ʵʱ��,RECORD_STREAM(2)�ļ��� */
    BYTE	byRes[7];
}NET_DVR_MATRIX_PASSIVEMODE, *LPNET_DVR_MATRIX_PASSIVEMODE;

typedef struct tagMATRIX_TRAN_CHAN_INFO 
{					
	BYTE byTranChanEnable;	/* ��ǰ͸��ͨ���Ƿ�� 0���ر� 1���� */	
    /*
	 *	��·������������1��485���ڣ�1��232���ڶ�������Ϊ͸��ͨ��,�豸�ŷ������£�
	 *	0 RS485
	 *	1 RS232 Console
	 */
	BYTE	byLocalSerialDevice;			/* Local serial device */
    /*
	 *	Զ�̴��������������,һ��RS232��һ��RS485
	 *	1��ʾ232����
	 *	2��ʾ485����
	 */
	BYTE	byRemoteSerialDevice;			/* Remote output serial device */
	BYTE	byRes1;							/* ���� */		
    NET_DVR_IPADDR  struRemoteDevIP;/* Remote Device IP */
	WORD    wRemoteDevPort;				/* Remote Net Communication Port */
    BYTE    byIsEstablished;			/* ͸��ͨ�������ɹ���־��0-û�гɹ���1-�����ɹ� */
    BYTE	byRes2;						/* ���� */
	TTY_CONFIG RemoteSerialDevCfg;
	BYTE  	byUsername[NAME_LEN]; 		/* 32BYTES */
	BYTE   	byPassword[PASSWD_LEN]; 		/* 16BYTES */
	BYTE 	byRes3[16];
} NET_DVR_MATRIX_TRAN_CHAN_INFO_V30,*LPNET_DVR_MATRIX_TRAN_CHAN_INFO_V30;

typedef struct tagMATRIX_TRAN_CHAN_CONFIG 
{
	DWORD   dwSize;
	BYTE 	by232IsDualChan; /* ������·232͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	by485IsDualChan; /* ������·485͸��ͨ����ȫ˫���� ȡֵ1��MAX_SERIAL_NUM */
	BYTE	vyRes[2];	/* ���� */
	NET_DVR_MATRIX_TRAN_CHAN_INFO_V30 struTranInfo[MAX_SERIAL_NUM];/*ͬʱ֧�ֽ���MAX_SERIAL_NUM��͸��ͨ��*/
}NET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30,*LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30;

typedef struct  
{
    DWORD								dwEnable;	/* �Ƿ����� 0���� 1������*/
    NET_DVR_STREAM_MEDIA_SERVER_CFG	streamMediaServerCfg;	
    NET_DVR_DEV_CHAN_INFO 		struDevChanInfo;		/* ��Ѳ����ͨ����Ϣ */
}NET_DVR_MATRIX_CHAN_INFO_V30,*LPNET_DVR_CYC_SUR_CHAN_ELE_V30;

typedef struct  tagMATRIX_LOOP_DECINFO_V30
{
    DWORD							dwSize;
    DWORD							dwPoolTime;		/*��Ѳ���*/
    NET_DVR_MATRIX_CHAN_INFO_V30	struchanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE               				byRes[16];
} NET_DVR_MATRIX_LOOP_DECINFO_V30,*LPNET_DVR_MATRIX_LOOP_DECINFO_V30;


typedef struct tagDEC_MATRIX_CHAN_INFO_V30
{
    DWORD	dwSize;
    NET_DVR_STREAM_MEDIA_SERVER_CFG streamMediaServerCfg;	/*��ý�����������*/
    NET_DVR_DEV_CHAN_INFO 			  struDevChanInfo;		/* ����ͨ����Ϣ */
    DWORD	dwDecState;		/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
    NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
    NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
    char    sFileName[128];		/* ���ļ��ط��ļ��� */
    DWORD   dwGetStreamMode;	/*ȡ��ģʽ:1-������2-����*/
    NET_DVR_MATRIX_PASSIVEMODE      struPassiveMode;
    BYTE	byRes[32];
}NET_DVR_MATRIX_DEC_CHAN_INFO_V30,*LPNET_DVR_MATRIX_DEC_CHAN_INFO_V30;

#define MAX_RESOLUTIONNUM    64 //֧�ֵ����ֱ�����Ŀ
typedef struct tagNET_DVR_MATRIX_ABILITY
{
    DWORD dwSize;
    BYTE  byDecNums;
    BYTE  byStartChan;
    BYTE  byVGANums;
    BYTE  byBNCNums;
    BYTE  byVGAWindowMode[8][12];     /*VGA֧�ֵĴ���ģʽ��VGA1�����ɻ�����*/
    BYTE  byBNCWindowMode[4];       	/*BNC֧�ֵĴ���ģʽ*/
    BYTE  byDspNums;   
    BYTE  byHDMINums;//HDMI��ʾͨ����������25��ʼ��
    BYTE  byDVINums;//DVI��ʾͨ����������29��ʼ��
	BYTE  byRes1[13];
	BYTE  bySupportResolution[MAX_RESOLUTIONNUM];//���������ö�ٶ���,һ���ֽڴ���һ���ֱ�����//��֧�֣�1��֧�֣�0����֧��
	BYTE  byHDMIWindowMode[4][8];//HDMI֧�ֵĴ���ģʽ
	BYTE  byDVIWindowMode[4][8];//DVI֧�ֵĴ���ģʽ
	BYTE  byRes2[24];
}NET_DVR_MATRIX_ABILITY, *LPNET_DVR_MATRIX_ABILITY;
//�ϴ�logo�ṹ
typedef struct tagNET_DVR_DISP_LOGOCFG
{
    DWORD		dwCorordinateX;	//ͼƬ��ʾ����X����
    DWORD		dwCorordinateY;	//ͼƬ��ʾ����Y����
	WORD        wPicWidth; //ͼƬ��
	WORD        wPicHeight; //ͼƬ��
    BYTE        byRes1[4];
    BYTE        byFlash;  //�Ƿ���˸1-��˸��0-����˸
    BYTE        byTranslucent; //�Ƿ��͸��1-��͸����0-����͸��
    BYTE		byRes2[6];				//����
    DWORD		dwLogoSize;//LOGO��С������BMP���ļ�ͷ
}NET_DVR_DISP_LOGOCFG,*LPNET_DVR_DISP_LOGOCFG;

/*��������*/
#define NET_DVR_ENCODER_UNKOWN 0 /*δ֪�����ʽ*/
#define NET_DVR_ENCODER_H264   1 /*˽�� 264*/
#define NET_DVR_ENCODER_S264   2 /*Standard H264*/
#define NET_DVR_ENCODER_MPEG4  3 /*MPEG4*/
#define NET_DVR_ORIGINALSTREAM 4 /*Original Stream*/
#define NET_DVR_PICTURE		   5/*Picture*/
#define NET_DVR_ENCODER_MJPEG  6
#define NET_DVR_ECONDER_MPEG2  7
/* �����ʽ */
#define NET_DVR_STREAM_TYPE_UNKOWN   0     /*δ֪�����ʽ*/
#define NET_DVR_STREAM_TYPE_PRIVT    1     /*˽�и�ʽ*/
#define NET_DVR_STREAM_TYPE_TS       7   /* TS��� */
#define NET_DVR_STREAM_TYPE_PS       8   /* PS��� */
#define NET_DVR_STREAM_TYPE_RTP      9    /* RTP��� */
#define NET_DVR_STREAM_TYPE_ORIGIN   10 //δ���(��Ƶ�ۺ�ƽ̨������ϵͳ��)

/*����ͨ��״̬*/
typedef struct
{
    BYTE  byDecodeStatus; /*��ǰ״̬:0:δ������1����������*/
    BYTE  byStreamType;    /*��������*/
    BYTE  byPacketType;     /*�����ʽ*/
    BYTE  byRecvBufUsage; /*���ջ���ʹ����*/
    BYTE  byDecBufUsage; /*���뻺��ʹ����*/
    BYTE  byFpsDecV; /*��Ƶ����֡��*/
    BYTE  byFpsDecA; /*��Ƶ����֡��*/
    BYTE  byCpuLoad;     /*DSP CPUʹ����*/ 
    BYTE  byRes1[4];    
    DWORD dwDecodedV; /*�������Ƶ֡*/
    DWORD dwDecodedA; /*�������Ƶ֡*/
    WORD wImgW; /*��������ǰ��ͼ���С,��*/
    WORD wImgH; //��
    BYTE byVideoFormat; /*��Ƶ��ʽ:0-NON,NTSC--1,PAL--2*/
    BYTE byRes2[27];
}NET_DVR_MATRIX_CHAN_STATUS, *LPNET_DVR_MATRIX_CHAN_STATUS;

/*��ʾͨ��״̬*/
#define NET_DVR_MAX_DISPREGION 16         /*ÿ����ʾͨ����������ʾ�Ĵ���*/
//�ֱ���
//
typedef enum
{
	/*VGA*/
    VGA_NOT_AVALIABLE,
    VGA_THS8200_MODE_SVGA_60HZ,    //(800*600)
    VGA_THS8200_MODE_SVGA_75HZ,    //(800*600)
    VGA_THS8200_MODE_XGA_60HZ,     //(1024*768)
    VGA_THS8200_MODE_XGA_75HZ,     //(1024*768)
    VGA_THS8200_MODE_SXGA_60HZ,    //(1280*1024)
    VGA_THS8200_MODE_720P_60HZ,    //(1280*720)
    VGA_THS8200_MODE_1080I_60HZ,   //(1920*1080)
    VGA_THS8200_MODE_1080P_30HZ,   //(1920*1080)
    VGA_THS8200_MODE_UXGA_30HZ,    //(1600*1200)
	/*HDMI*/	
	HDMI_SII9134_MODE_XGA_60HZ,	   //(1024*768)
	HDMI_SII9134_MODE_SXGA_60HZ,   //(1280*1024)
	HDMI_SII9134_MODE_SXGA2_60HZ,  //(1280*960)
	HDMI_SII9134_MODE_720P_60HZ,   //(1280*720)	
	HDMI_SII9134_MODE_720P_50HZ,   //(1280*720)		
	HDMI_SII9134_MODE_1080I_60HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080I_50HZ,  //(1920*1080)	
	HDMI_SII9134_MODE_1080P_25HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_30HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_50HZ,  //(1920*1080)
	HDMI_SII9134_MODE_1080P_60HZ,  //(1920*1080)
	HDMI_SII9134_MODE_UXGA_60HZ,   //(1600*1200)
	/*DVI*/	
	DVI_SII9134_MODE_XGA_60HZ,	   //(1024*768)
	DVI_SII9134_MODE_SXGA_60HZ,	   //(1280*1024)
	DVI_SII9134_MODE_SXGA2_60HZ,   //(1280*960)
	DVI_SII9134_MODE_720P_60HZ,	   //(1280*720)	
	DVI_SII9134_MODE_720P_50HZ,    //(1280*720)		
	DVI_SII9134_MODE_1080I_60HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080I_50HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_25HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_30HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_50HZ,   //(1920*1080)
	DVI_SII9134_MODE_1080P_60HZ,   //(1920*1080)
	DVI_SII9134_MODE_UXGA_60HZ,     //(1600*1200)
    VGA_DECSVR_MODE_SXGA2_60HZ,
    HDMI_DECSVR_MODE_1080P_24HZ,
    DVI_DECSVR_MODE_1080P_24HZ,
    YPbPr_DECSVR_MODE_720P_60HZ,
	YPbPr_DECSVR_MODE_1080I_60HZ
}VGA_MODE;

//��֡�ʶ���
#define           LOW_DEC_FPS_1_2                51
#define           LOW_DEC_FPS_1_4                52
#define           LOW_DEC_FPS_1_8                53
#define           LOW_DEC_FPS_1_16               54

/*��Ƶ��ʽ��׼*/
typedef enum
{
    VS_NON = 0,
    VS_NTSC = 1,
    VS_PAL = 2
}VIDEO_STANDARD;

typedef struct tagNET_DVR_VGA_DISP_CHAN_CFG
{        
    DWORD	dwSize; 
    BYTE	byAudio;			/*��Ƶ�Ƿ���,0-��1-��*/
    BYTE    byAudioWindowIdx;      /*��Ƶ�����Ӵ���*/
    BYTE 	byVgaResolution;      /*VGA�ķֱ���*/
    BYTE	byVedioFormat;         /*1:NTSC,2:PAL,0-NULL*/
    DWORD	dwWindowMode;		/*����ģʽ,����������ȡ,Ŀǰ֧��1,2,4,9,16*/       
    BYTE	byJoinDecChan[MAX_WINDOWS];/*�����Ӵ��ڹ����Ľ���ͨ��*/
    BYTE	byEnlargeStatus;          /*�Ƿ��ڷŴ�״̬��0�����Ŵ�1���Ŵ�*/
    BYTE    byEnlargeSubWindowIndex;//�Ŵ���Ӵ��ں�
	union
	{
		BYTE byRes[16];
		struct
		{
			/*�����Ӵ��ڶ�Ӧ����ͨ������Ӧ�Ľ�����ϵͳ�Ĳ�λ��(������Ƶ�ۺ�ƽ̨�н�����ϵͳ��Ч)*/
			BYTE	 byJoinDecoderId[MAX_WINDOWS];
		}struVideoPlatform;
		struct
		{
			BYTE	 byRes[16];
		}struNotVideoPlatform;
	}struDiff;
	/*���ֹ����壬0-��Ƶ�ۺ�ƽ̨�ڲ���������ʾͨ�����ã�1-������������ʾͨ������*/
	BYTE		byUnionType;
	BYTE		byScale; /*��ʾģʽ��0---��ʵ��ʾ��1---������ʾ( ���BNC )*/
}NET_DVR_VGA_DISP_CHAN_CFG,*LPNET_DVR_VGA_DISP_CHAN_CFG;


/*��ʾͨ��״̬*/
#define NET_DVR_MAX_DISPREGION 16 /*ÿ����ʾͨ����������ʾ�Ĵ���*/
typedef struct
{
    BYTE  byDispStatus;          /*��ʾ״̬��0��δ��ʾ��1��������ʾ*/
    BYTE  byBVGA;                /*0-BNC��1-VGA�� 2-HDMI��3-DVI*/
    BYTE  byVideoFormat;        /*��Ƶ��ʽ:1:NTSC,2:PAL,0-NON*/
    BYTE  byWindowMode;        /*��ǰ����ģʽ*/
    BYTE  byJoinDecChan[MAX_WINDOWS];        /*�����Ӵ��ڹ����Ľ���ͨ��*/
    BYTE  byFpsDisp[NET_DVR_MAX_DISPREGION]; /*ÿ���ӻ������ʾ֡��*/
    BYTE  byScreenMode;			//��Ļģʽ0-��ͨ 1-����
    BYTE  byRes2[31];
}NET_DVR_DISP_CHAN_STATUS, *LPNET_DVR_DISP_CHAN_STATUS;

#define MAX_DECODECHANNUM   32//��·������������ͨ����
#define MAX_DISPCHANNUM   24//��·�����������ʾͨ����

/*�������豸״̬*/
typedef struct tagNET_DVR_DECODER_WORK_STATUS
{
    DWORD dwSize;
    NET_DVR_MATRIX_CHAN_STATUS struDecChanStatus[MAX_DECODECHANNUM]; /*����ͨ��״̬*/
    NET_DVR_DISP_CHAN_STATUS   struDispChanStatus[MAX_DISPCHANNUM];  /*��ʾͨ��״̬*/
    BYTE byAlarmInStatus[MAX_ANALOG_ALARMIN];         /*��������״̬*/
    BYTE byAlarmOutStatus[MAX_ANALOG_ALARMOUT];       /*�������״̬*/
    BYTE byAudioInChanStatus;          /*�����Խ�״̬*/
    BYTE byRes[127];
}NET_DVR_DECODER_WORK_STATUS,*LPNET_DVR_DECODER_WORK_STATUS;

//2009-12-1 ���ӱ������벥�ſ���
typedef struct tagNET_DVR_PASSIVEDECODE_CONTROL
{
    DWORD	dwSize;
    DWORD	dwPlayCmd;		/* �������� ���ļ���������*/
    DWORD	dwCmdParam;		/* ����������� */
    BYTE	byRes[16];//Reverse
}NET_DVR_PASSIVEDECODE_CONTROL,*LPNET_DVR_PASSIVEDECODE_CONTROL;

#define		PASSIVE_DEC_PAUSE			1	/*����������ͣ(���ļ�����Ч)*/
#define		PASSIVE_DEC_RESUME			2	/*�ָ���������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_FAST          	3   /*���ٱ�������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_SLOW			4   /*���ٱ�������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_NORMAL      	5   /*������������(���ļ�����Ч)*/
#define 	PASSIVE_DEC_ONEBYONE      	6  /*�������뵥֡����(����)*/
#define 	PASSIVE_DEC_AUDIO_ON 		7   /*��Ƶ����*/
#define 	PASSIVE_DEC_AUDIO_OFF		8  	 /*��Ƶ�ر�*/
#define		PASSIVE_DEC_RESETBUFFER	    9    /*��ջ�����*/
//2009-12-16 ���ӿ��ƽ���������ͨ������
typedef struct tagNET_DVR_MATRIX_DECCHAN_CONTROL
{        
	DWORD	dwSize;
	BYTE	byDecChanScaleStatus;/*����ͨ����ʾ���ſ���,1��ʾ������ʾ��0��ʾ��ʵ��ʾ*/
    BYTE    byDecodeDelay;//������ʱ��0-Ĭ�ϣ�1-ʵʱ�Ժã�2-ʵʱ�ԽϺã�3-ʵʱ���У��������У�4-�����ԽϺã�5-�����Ժã�0xff-�Զ�����
	BYTE	byRes[66];//Reverse
}NET_DVR_MATRIX_DECCHAN_CONTROL,*LPNET_DVR_MATRIX_DECCHAN_CONTROL;

/************************************��·������(end)***************************************/
//2009-8-19 ��Ƶ�ۺ�ƽ̨�ӿں���
/************************************��Ƶ�ۺ�ƽ̨(begin)***************************************/
#define MAX_SUBSYSTEM_NUM	80   //һ������ϵͳ�������ϵͳ����
#define MAX_SERIALLEN		36  //������кų���
#define MAX_LOOPPLANNUM		16//���ƻ��л���
#define DECODE_TIMESEGMENT 4//�ƻ�����ÿ��ʱ�����
typedef struct tagNET_DVR_SUBSYSTEMINFO
{
    BYTE		bySubSystemType;//��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ��5-�������ϵͳ��6-����������ϵͳ��7-������ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��		
    BYTE		byChan;//��ϵͳͨ���������������ϵͳ������485�����������˲���ֻ�ܻ�ȡ��					
    BYTE		byLoginType;//ע�����ͣ�1-ֱ����2-DNS��3-������
    BYTE		byRes1[5];
    NET_DVR_IPADDR   struSubSystemIP;		/*IP��ַ�����޸ģ�*/
    WORD		wSubSystemPort;        //��ϵͳ�˿ںţ����޸ģ�
    BYTE		byRes2[6];
    NET_DVR_IPADDR  struSubSystemIPMask;//��������
    NET_DVR_IPADDR	struGatewayIpAddr;	/* ���ص�ַ*/   
    BYTE		sUserName[NAME_LEN];	/* �û��� ���˲���ֻ�ܻ�ȡ��*/
    BYTE		sPassword[PASSWD_LEN];	/*���루�˲���ֻ�ܻ�ȡ��*/
    char		sDomainName[MAX_DOMAIN_NAME];//����(���޸�)
    char 		sDnsAddress[MAX_DOMAIN_NAME];/*DNS������IP��ַ*/
    BYTE		sSerialNumber[SERIALNO_LEN];//���кţ��˲���ֻ�ܻ�ȡ��
}NET_DVR_SUBSYSTEMINFO, *LPNET_DVR_SUBSYSTEMINFO;

typedef struct tagNET_DVR_ALLSUBSYSTEMINFO
{
    DWORD dwSize;
    NET_DVR_SUBSYSTEMINFO struSubSystemInfo[MAX_SUBSYSTEM_NUM];
    BYTE byRes[8];
}NET_DVR_ALLSUBSYSTEMINFO, *LPNET_DVR_ALLSUBSYSTEMINFO;

typedef struct  tagNET_DVR_LOOPPLAN_SUBCFG
{
    DWORD 						    dwSize;
    DWORD							dwPoolTime;		/*��Ѳ�������λ����*/      
    NET_DVR_MATRIX_CHAN_INFO_V30 struChanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE               				byRes[16];
}NET_DVR_LOOPPLAN_SUBCFG,*LPNET_DVR_LOOPPLAN_SUBCFG;

typedef struct tagNET_DVR_ALARMMODECFG
{
    DWORD 	dwSize;
    BYTE	byAlarmMode;//�����������ͣ�1-��Ѳ��2-����		
    WORD	wLoopTime;//��Ѳʱ��, ��λ����			
    BYTE    byRes[9];
}NET_DVR_ALARMMODECFG,*LPNET_DVR_ALARMMODECFG;

typedef struct  tagNET_DVR_CODESPLITTERINFO
{
    DWORD			dwSize;
    NET_DVR_IPADDR   struIP;		/*�����IP��ַ*/
    WORD		wPort;        			//������˿ں�
    BYTE		byRes1[6];
    BYTE		sUserName[NAME_LEN];	/* �û��� */
    BYTE		sPassword[PASSWD_LEN];	/*���� */
    BYTE        byChan;//�����485��
    BYTE		by485Port;//485�ڵ�ַ
    BYTE		byRes2[14];
} NET_DVR_CODESPLITTERINFO, *LPNET_DVR_CODESPLITTERINFO;

typedef struct tagNET_DVR_ASSOCIATECFG
{
    BYTE	byAssociateType;//�������ͣ�1-����
    WORD	wAlarmDelay;//������ʱ��0��5�룻1��10�룻2��30�룻3��1���ӣ�4��2���ӣ�5��5���ӣ�6��10���ӣ�
    BYTE	byAlarmNum;//�����ţ������ֵ��Ӧ�ø�����ͬ�ı�������ͬ��ֵ
    BYTE	byRes[8];
} NET_DVR_ASSOCIATECFG,*LPNET_DVR_ASSOCIATECFG;

typedef struct tagNET_DVR_DYNAMICDECODE
{
    DWORD						    dwSize;
    NET_DVR_ASSOCIATECFG   		struAssociateCfg;//������̬��������ṹ
    NET_DVR_PU_STREAM_CFG		struPuStreamCfg;//��̬����ṹ
    BYTE							byRes[8];
}NET_DVR_DYNAMICDECODE,*LPNET_DVR_DYNAMICDECODE;

typedef struct  tagNET_DVR_DECODESCHED
{
	NET_DVR_SCHEDTIME  struSchedTime;//
    BYTE  byDecodeType;/*0-�ޣ�1-��Ѳ���룬2-��̬����*/
	BYTE  byLoopGroup;//��Ѳ���
	BYTE  byRes[6];
	NET_DVR_PU_STREAM_CFG struDynamicDec;//��̬����
} NET_DVR_DECODESCHED, *LPNET_DVR_DECODESCHED;

typedef struct tagNET_DVR_PLANDECODE
{
	DWORD dwSize;
	NET_DVR_DECODESCHED struDecodeSched[MAX_DAYS][DECODE_TIMESEGMENT];//��һ��Ϊ��ʼ����9000һ��
	BYTE byRes[8];
} NET_DVR_PLANDECODE,*LPNET_DVR_PLANDECODE;

//end
/************************************��Ƶ�ۺ�ƽ̨(end)***************************************/
typedef struct 
{	/* 12 bytes */
	DWORD	dwSize;
	char	sUserName[32];
	char 	sPassWord[32];
	char 	sFromName[32];			/* Sender *///�ַ����еĵ�һ���ַ������һ���ַ�������"@",�����ַ�����Ҫ��"@"�ַ�
	char 	sFromAddr[48];			/* Sender address */
	char 	sToName1[32];			/* Receiver1 */
	char 	sToName2[32];			/* Receiver2 */
	char 	sToAddr1[48];			/* Receiver address1 */
	char 	sToAddr2[48];			/* Receiver address2 */
	char	sEmailServer[32];		/* Email server address */
	BYTE	byServerType;			/* Email server type: 0-SMTP, 1-POP, 2-IMTP��*/
	BYTE	byUseAuthen;			/* Email server authentication method: 1-enable, 0-disable */
	BYTE	byAttachment;			/* enable attachment */
	BYTE	byMailinterval;			/* mail interval 0-2s, 1-3s, 2-4s. 3-5s*/
} NET_DVR_EMAILCFG, *LPNET_DVR_EMAILCFG;

typedef struct 
{
	DWORD dwSize;
	NET_DVR_COMPRESSION_INFO_EX  struLowCompression;	//��ʱ¼��
	NET_DVR_COMPRESSION_INFO_EX  struEventCompression;	//�¼�����¼��
}NET_DVR_COMPRESSIONCFG_NEW, *LPNET_DVR_COMPRESSIONCFG_NEW;

//���λ����Ϣ
typedef struct
{
    WORD wAction;//��ȡʱ���ֶ���Ч
    WORD wPanPos;//ˮƽ����
    WORD wTiltPos;//��ֱ����
    WORD wZoomPos;//�䱶����
}NET_DVR_PTZPOS, *LPNET_DVR_PTZPOS;

//�����Χ��Ϣ
typedef struct
{
    WORD wPanPosMin;//ˮƽ����min
    WORD wPanPosMax;//ˮƽ����max
    WORD wTiltPosMin;//��ֱ����min
    WORD wTiltPosMax;//��ֱ����max
    WORD wZoomPosMin;//�䱶����min
    WORD wZoomPosMax;//�䱶����max
}NET_DVR_PTZSCOPE, *LPNET_DVR_PTZSCOPE;

//rtsp���� ipcameraר��
typedef struct
{
    DWORD dwSize;         //����
    WORD  wPort;          //rtsp�����������˿�
    BYTE  byReserve[54];  //Ԥ��
}NET_DVR_RTSPCFG, *LPNET_DVR_RTSPCFG;

/********************************�ӿڲ����ṹ(begin)*********************************/

//NET_DVR_Login()�����ṹ
typedef struct
{
	BYTE sSerialNumber[SERIALNO_LEN];   //���к�
	BYTE byAlarmInPortNum;		        //DVR�����������
	BYTE byAlarmOutPortNum;		        //DVR�����������
	BYTE byDiskNum;				        //DVRӲ�̸���
	BYTE byDVRType;				        //DVR����, 1:DVR 2:ATM DVR 3:DVS ......
	BYTE byChanNum;				        //DVR ͨ������
	BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
}NET_DVR_DEVICEINFO, *LPNET_DVR_DEVICEINFO;

//NET_DVR_Login_V30()�����ṹ
typedef struct
{
    BYTE sSerialNumber[SERIALNO_LEN];  //���к�
    BYTE byAlarmInPortNum;		        //�����������
    BYTE byAlarmOutPortNum;		        //�����������
    BYTE byDiskNum;				    //Ӳ�̸���
    BYTE byDVRType;				    //�豸����, 1:DVR 2:ATM DVR 3:DVS ......
    BYTE byChanNum;				    //ģ��ͨ������
    BYTE byStartChan;			        //��ʼͨ����,����DVS-1,DVR - 1
    BYTE byAudioChanNum;                //����ͨ����
    BYTE byIPChanNum;					//�������ͨ������  
	BYTE byZeroChanNum;			//��ͨ��������� //2010-01-16
	BYTE byMainProto;			//����������Э������ 0-private, 1-rtsp
	BYTE bySubProto;				//����������Э������0-private, 1-rtsp
    BYTE bySupport;        //������λ����Ϊ0��ʾ��֧�֣�1��ʾ֧�֣�
    //bySupport & 0x1, ��ʾ�Ƿ�֧����������
    //bySupport & 0x2, ��ʾ�Ƿ�֧�ֱ���
    //bySupport & 0x4, ��ʾ�Ƿ�֧��ѹ������������ȡ
    //bySupport & 0x8, ��ʾ�Ƿ�֧�ֶ�����
    //bySupport & 0x10, ��ʾ֧��Զ��SADP
    //bySupport & 0x20, ��ʾ֧��Raid������
    //bySupport & 0x40, ��ʾ֧��IPSAN Ŀ¼����
	//bySupport & 0x80, ��ʾ֧��rtp over rtsp
    BYTE bySupport1;        // ���������䣬λ����Ϊ0��ʾ��֧�֣�1��ʾ֧��
	//bySupport1 & 0x1, ��ʾ�Ƿ�֧��snmp v30
	//bySupport1 & 0x2, ֧�����ֻطź�����
	//bySupport1 & 0x4, �Ƿ�֧�ֲ������ȼ�	
	//bySupport1 & 0x8, �����豸�Ƿ�֧�ֲ���ʱ�����չ
	//bySupport1 & 0x10, ��ʾ�Ƿ�֧�ֶ������������33����
	//bySupport1 & 0x20, ��ʾ�Ƿ�֧��rtsp over http	
	//bySupport1 & 0x40, ��ʱԤ��
	//bySupport1 & 0x80, ��ʾ�Ƿ�֧�ֳ����±�����Ϣ2012-9-28
    BYTE bySupport2; //��������չ��λ����Ϊ0��ʾ��֧�֣�1��ʾ֧��
	//bySupport2 & 0x1, ��ʾ�������Ƿ�֧��ͨ��URLȡ������
	WORD wDevType;              //�豸�ͺ�
	BYTE byMultiStream;//֧�ֵĶ�����,��λ��ʾ,0-��֧��,1-֧��,bit0-����3,bit1-����4,��������
	BYTE byMultiStreamProto;//�������Ƿ�֧��rtspЭ��ȡ��,��λ��ʾ,0-��֧��,1-֧��,bit0-����3,bit1-����4,��������
    BYTE byRes2[14];		//����    
}NET_DVR_DEVICEINFO_V30, *LPNET_DVR_DEVICEINFO_V30;

//sdk���绷��ö�ٱ���������Զ������
typedef enum _SDK_NET_ENV
{
    LOCAL_AREA_NETWORK = 0,
        WIDE_AREA_NETWORK
}SDK_NETWORK_ENVIRONMENT;

//��ʾģʽ
typedef enum
{
	NORMALMODE = 0,
	OVERLAYMODE
}DISPLAY_MODE;

//����ģʽ
typedef enum
{
	PTOPTCPMODE = 0,
	PTOPUDPMODE,
	MULTIMODE,
	RTPMODE,
	RESERVEDMODE
}SEND_MODE;

//ץͼģʽ
typedef enum 
{
	BMP_MODE = 0,		//BMPģʽ
	JPEG_MODE = 1		//JPEGģʽ 
}CAPTURE_MODE;

//ʵʱ����ģʽ
typedef enum
{
	MONOPOLIZE_MODE = 1,//��ռģʽ
	SHARE_MODE = 2		//����ģʽ
}REALSOUND_MODE;

//�����Ԥ������
typedef struct
{
	LONG lChannel;//ͨ����
	LONG lLinkMode;//���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ: 0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-RTP/RTSP,5-RSTP/HTTP 
	HWND hPlayWnd;//���Ŵ��ڵľ��,ΪNULL��ʾ������ͼ��
	char* sMultiCastIP;//�ಥ���ַ
}NET_DVR_CLIENTINFO, *LPNET_DVR_CLIENTINFO;

//SDK״̬��Ϣ(9000����)
typedef struct 
{
    DWORD dwTotalLoginNum;		//��ǰlogin�û���
    DWORD dwTotalRealPlayNum;	//��ǰrealplay·��
    DWORD dwTotalPlayBackNum;	//��ǰ�طŻ�����·��
    DWORD dwTotalAlarmChanNum;	//��ǰ��������ͨ��·��
    DWORD dwTotalFormatNum;		//��ǰӲ�̸�ʽ��·��
    DWORD dwTotalFileSearchNum;	//��ǰ��־���ļ�����·��
    DWORD dwTotalLogSearchNum;	//��ǰ��־���ļ�����·��
    DWORD dwTotalSerialNum;	    //��ǰ͸��ͨ��·��
    DWORD dwTotalUpgradeNum;	//��ǰ����·��
    DWORD dwTotalVoiceComNum;	//��ǰ����ת��·��
    DWORD dwTotalBroadCastNum;	//��ǰ�����㲥·��
    DWORD dwTotalListenNum;	    //��ǰ�������·��
    DWORD dwEmailTestNum;       //��ǰ�ʼ�����·��
    DWORD dwBackupNum;          // ��ǰ�ļ�����·��
	DWORD dwTotalInquestUploadNum; //��ǰ��Ѷ�ϴ�·��
    DWORD dwRes[6];
}NET_DVR_SDKSTATE, *LPNET_DVR_SDKSTATE;

//SDK����֧����Ϣ(9000����)
typedef struct 
{
    DWORD dwMaxLoginNum;		//���login�û��� MAX_LOGIN_USERS
    DWORD dwMaxRealPlayNum;		//���realplay·�� WATCH_NUM
    DWORD dwMaxPlayBackNum;		//���طŻ�����·�� WATCH_NUM
    DWORD dwMaxAlarmChanNum;	//���������ͨ��·�� ALARM_NUM
    DWORD dwMaxFormatNum;		//���Ӳ�̸�ʽ��·�� SERVER_NUM
    DWORD dwMaxFileSearchNum;	//����ļ�����·�� SERVER_NUM
    DWORD dwMaxLogSearchNum;	//�����־����·�� SERVER_NUM
    DWORD dwMaxSerialNum;	    //���͸��ͨ��·�� SERVER_NUM
    DWORD dwMaxUpgradeNum;	    //�������·�� SERVER_NUM
    DWORD dwMaxVoiceComNum;		//�������ת��·�� SERVER_NUM
    DWORD dwMaxBroadCastNum;	//��������㲥·�� MAX_CASTNUM
    DWORD dwRes[10];
}NET_DVR_SDKABL, *LPNET_DVR_SDKABL;

//�����豸��Ϣ
typedef struct
{   
    BYTE byUserIDValid;                 /* userid�Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE bySerialValid;                 /* ���к��Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byVersionValid;                /* �汾���Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byDeviceNameValid;             /* �豸�����Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byMacAddrValid;                /* MAC��ַ�Ƿ���Ч 0-��Ч��1-��Ч */    
    BYTE byLinkPortValid;               /* login�˿��Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE byDeviceIPValid;               /* �豸IP�Ƿ���Ч 0-��Ч��1-��Ч */
    BYTE bySocketIPValid;               /* socket ip�Ƿ���Ч 0-��Ч��1-��Ч */
    LONG lUserID;                       /* NET_DVR_Login()����ֵ, ����ʱ��Ч */
    BYTE sSerialNumber[SERIALNO_LEN];	/* ���к� */
    DWORD dwDeviceVersion;			    /* �汾��Ϣ ��16λ��ʾ���汾����16λ��ʾ�ΰ汾*/
    char sDeviceName[NAME_LEN];		    /* �豸���� */
    BYTE byMacAddr[MACADDR_LEN];		/* MAC��ַ */    
    WORD wLinkPort;                     /* link port */
    char sDeviceIP[128];    			/* IP��ַ */
    char sSocketIP[128];    			/* ���������ϴ�ʱ��socket IP��ַ */
    BYTE byIpProtocol;                  /* IpЭ�� 0-IPV4, 1-IPV6 */
    BYTE byRes2[11];
}NET_DVR_ALARMER, *LPNET_DVR_ALARMER;

//Ӳ������ʾ�������(�ӽṹ)
typedef struct
{
	long bToScreen;
	long bToVideoOut;
	long nLeft;
	long nTop;
	long nWidth;
	long nHeight;
	long nReserved;
}NET_DVR_DISPLAY_PARA, *LPNET_DVR_DISPLAY_PARA;

//Ӳ����Ԥ������
typedef struct
{
	LONG lChannel;//ͨ����
	LONG lLinkMode; //���λ(31)Ϊ0��ʾ��������Ϊ1��ʾ�ӣ�0��30λ��ʾ�������ӷ�ʽ:0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��4-�绰�ߣ�5��128k�����6��256k�����7��384k�����8��512k�����
	char* sMultiCastIP;
	NET_DVR_DISPLAY_PARA struDisplayPara;
}NET_DVR_CARDINFO, *LPNET_DVR_CARDINFO;

//¼���ļ�����
typedef struct 
{
	char sFileName[100];//�ļ���
	NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
	NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
	DWORD dwFileSize;//�ļ��Ĵ�С
}NET_DVR_FIND_DATA, *LPNET_DVR_FIND_DATA;

//¼���ļ�����(9000)
typedef struct 
{
    char sFileName[100];//�ļ���
    NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
    NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
    DWORD dwFileSize;//�ļ��Ĵ�С
    char sCardNum[32];
    BYTE byLocked;//9000�豸֧��,1��ʾ���ļ��Ѿ�������,0��ʾ�������ļ�
	BYTE byFileType;  //�ļ�����:0����ʱ¼��,1-�ƶ���� ��2������������
	//3-����|�ƶ���� 4-����&�ƶ���� 5-����� 6-�ֶ�¼��,7���𶯱�����8-����������9-���ܱ�����10-PIR������11-���߱�����12-���ȱ���,14-���ܽ�ͨ�¼�
    BYTE byRes[2];
}NET_DVR_FINDDATA_V30, *LPNET_DVR_FINDDATA_V30;

//¼���ļ�����(������)
typedef struct 
{
	char sFileName[100];//�ļ���
	NET_DVR_TIME struStartTime;//�ļ��Ŀ�ʼʱ��
	NET_DVR_TIME struStopTime;//�ļ��Ľ���ʱ��
	DWORD dwFileSize;//�ļ��Ĵ�С
	char sCardNum[32];
}NET_DVR_FINDDATA_CARD, *LPNET_DVR_FINDDATA_CARD;


//¼���ļ����������ṹ
typedef struct 
{
    LONG lChannel;//ͨ����
    DWORD dwFileType;//¼���ļ�����
	   //�������ţ�0xff��ȫ����0����ʱ¼��,1-�ƶ���� ��2������������3-����|�ƶ���� 4-����&�ƶ���� 5-����� 6-�ֶ�¼��,7-����¼��10-PIR������11-���߱�����12-���ȱ�����13-�ƶ�|��������|PIR|���߱���|���ȱ���
	 //�����ţ�0xff��ȫ����0����ʱ¼��1-�ƶ���⣬2���ӽ�������3������������4������������5-�������6���ֶ�¼��7���𶯱�����8-����������9-���ܱ�����10-PIR������11-���߱�����12-���ȱ�����13-�ƶ�|��������|PIR|���߱���|���ȱ���
    DWORD dwIsLocked;//�Ƿ����� 0-�����ļ�,1-�����ļ�, 0xff��ʾ�����ļ�
    DWORD dwUseCardNo;//�Ƿ�ʹ�ÿ���
    BYTE sCardNumber[32];//����
    NET_DVR_TIME struStartTime;//��ʼʱ��
    NET_DVR_TIME struStopTime;//����ʱ��
}NET_DVR_FILECOND, *LPNET_DVR_FILECOND;

//��̨����ѡ��Ŵ���С(˽�� ����ר��)
typedef struct 
{
	int xTop;     //������ʼ���x����
	int yTop;     //����������y����
	int xBottom;  //����������x����
	int yBottom;  //����������y����
	int bCounter; //����
}NET_DVR_POINT_FRAME, *LPNET_DVR_POINT_FRAME;

//�����Խ�����
typedef struct tagNET_DVR_COMPRESSION_AUDIO
{
	BYTE  byAudioEncType;   //��Ƶ�������� 0-OggVorbis;1-G711_U;2-G711_A;6-G726
	BYTE  byres[7];//���ﱣ����Ƶ��ѹ������ 
}NET_DVR_COMPRESSION_AUDIO, *LPNET_DVR_COMPRESSION_AUDIO;

//2009-7-22


#define IW_ESSID_MAX_SIZE						 32
#define WIFI_WEP_MAX_KEY_COUNT					 4
#define WIFI_WEP_MAX_KEY_LENGTH					 33
#define WIFI_WPA_PSK_MAX_KEY_LENGTH				 63
#define WIFI_WPA_PSK_MIN_KEY_LENGTH				 8
#define WIFI_MAX_AP_COUNT						 20

typedef struct tagNET_DVR_AP_INFO
{
	char  sSsid[IW_ESSID_MAX_SIZE];
	DWORD  dwMode;						/* 0 mange ģʽ;1 ad-hocģʽ���μ�NICMODE */
	DWORD  dwSecurity;           /*0 �����ܣ�1 wep���ܣ�2 wpa-psk;3 wpa-Enterprise;4-WPA2_PSK�μ�WIFISECURITY*/
	DWORD  dwChannel;            /*1-11��ʾ11��ͨ��*/
	DWORD  dwSignalStrength;    /*0-100�ź���������Ϊ��ǿ*/
	DWORD  dwSpeed;               /*����,��λ��0.01mbps*/
}NET_DVR_AP_INFO,*LPNET_DVR_AP_INFO;

typedef struct tagNET_DVR_AP_INFO_LIST
{
	DWORD dwSize;
	DWORD dwCount;        /*����AP������������20*/
	NET_DVR_AP_INFO struApInfo[WIFI_MAX_AP_COUNT];
}NET_DVR_AP_INFO_LIST,*LPNET_DVR_AP_INFO_LIST;

typedef struct tagNET_DVR_WIFIETHERNET
{	
	char sIpAddress[16];				/*IP��ַ*/
	char sIpMask[16];					/*����*/	
	BYTE	byMACAddr[MACADDR_LEN];		/*�����ַ��ֻ������ʾ*/
	BYTE	bRes[2];
	DWORD	dwEnableDhcp;				/*�Ƿ�����dhcp  0������ 1����*/
	DWORD	dwAutoDns;					/*�������dhcp�Ƿ��Զ���ȡdns,0���Զ���ȡ 1�Զ���ȡ�����������������dhcpĿǰ�Զ���ȡdns*/	
	char sFirstDns[16];						 /*��һ��dns����*/
	char sSecondDns[16];					 /*�ڶ���dns����*/
	char sGatewayIpAddr[16]; 				/* ���ص�ַ*/
	BYTE   bRes2[8];
}NET_DVR_WIFIETHERNET,*LPNET_DVR_WIFIETHERNET;

typedef struct tagNET_DVR_WIFI_CFG_EX
{
	NET_DVR_WIFIETHERNET struEtherNet;        /*wifi����*/
	char sEssid[IW_ESSID_MAX_SIZE];	 /*SSID*/
	DWORD dwMode;      /* 0 mange ģʽ;1 ad-hocģʽ���μ�*/
	DWORD dwSecurity; /*0-������;1-WEP����;2-WPA-personal; 3-WPA-enterprise;4-WPA2-personal;5-WPA2-enterprise */
	union 
	{
		struct 
		{
			DWORD dwAuthentication;/*0 -����ʽ 1-����ʽ*/
			DWORD dwKeyLength;/* 0 -64λ��1- 128λ��2-152λ*/
			DWORD dwKeyType;/*0 16����;1 ASCI */
			DWORD dwActive;/*0 ������0---3��ʾ����һ����Կ*/
			char sKeyInfo[WIFI_WEP_MAX_KEY_COUNT][WIFI_WEP_MAX_KEY_LENGTH];
		}wep;
		struct 
		{
			DWORD dwKeyLength;/*8-63��ASCII�ַ�*/
			char sKeyInfo[WIFI_WPA_PSK_MAX_KEY_LENGTH];
			BYTE byEncryptType;  /*WPA/WPA2ģʽ�¼�������,0-AES, 1-TKIP*/
		}wpa_psk;
		struct 
		{
            BYTE byEncryptType;  /*��������,0-AES, 1-TKIP*/
			BYTE byAuthType; //��֤���ͣ�0-EAP_TTLS,1-EAP_PEAP,2-EAP_TLS
            BYTE byRes[2];
			union
            {
				struct 
				{
                    BYTE byEapolVersion; //EAPOL�汾��0-�汾1��1-�汾2
                    BYTE byAuthType; //�ڲ���֤��ʽ��0-PAP��1-MSCHAPV2
                    BYTE byRes1[2];
                    BYTE byAnonyIdentity [NAME_LEN]; //�������
					BYTE byUserName[NAME_LEN]; //�û���
                    BYTE byPassword[NAME_LEN]; //����
                    BYTE byRes[44];
				}EAP_TTLS; //WPA-enterprise/WPA2-enterprisģʽ����
				struct 
				{
                    BYTE byEapolVersion; //EAPOL�汾��0-�汾1��1-�汾2
                    BYTE byAuthType; //�ڲ���֤��ʽ��0-GTC��1-MD5��2-MSCHAPV2
                    BYTE byPeapVersion; //PEAP�汾��0-�汾0��1-�汾1
                    BYTE byPeapLabel; //PEAP��ǩ��0-�ϱ�ǩ��1-�±�ǩ
                    BYTE byAnonyIdentity[NAME_LEN]; //�������
					BYTE byUserName[NAME_LEN]; //�û���
					BYTE byPassword[NAME_LEN]; //����
                    BYTE byRes[44]; 
				}EAP_PEAP; //WPA-enterprise/WPA2-enterprisģʽ����
				struct 
				{
                    BYTE byEapolVersion; //EAPOL�汾��0-�汾1��1-�汾2
                    BYTE byRes1[3]; 
                    BYTE byIdentity[NAME_LEN]; //���
					BYTE byPrivateKeyPswd[NAME_LEN]; //˽Կ����
                    BYTE byRes[76]; 
				}EAP_TLS; 
            }auth_param;
		}wpa_wpa2; //WPA-enterprise/WPA2-enterprisģʽ����
	}key;	
}NET_DVR_WIFI_CFG_EX,*LPNET_DVR_WIFI_CFG_EX;

//wifi���ýṹ
typedef struct tagNET_DVR_WIFI_CFG
{
	DWORD dwSize;
	NET_DVR_WIFI_CFG_EX struWifiCfg;
}NET_DVR_WIFI_CFG,*LPNET_DVR_WIFI_CFG;

//wifi����ģʽ
typedef struct tagNET_DVR_WIFI_WORKMODE
{
	DWORD dwSize;
	DWORD dwNetworkInterfaceMode; /*0 �Զ��л�ģʽ��1 ����ģʽ*/
}NET_DVR_WIFI_WORKMODE,*LPNET_DVR_WIFI_WORKMODE;

//�ṹ�����궨�� 
#define VCA_MAX_POLYGON_POINT_NUM		10		//����������֧��10����Ķ����
#define MAX_RULE_NUM					8		//����������
#define MAX_TARGET_NUM    				30		//���Ŀ�����
#define MAX_CALIB_PT 					6		//���궨�����
#define MIN_CALIB_PT 					4		//��С�궨�����
#define MAX_TIMESEGMENT_2	    		2		//���ʱ�����
#define MAX_LICENSE_LEN					16		//���ƺ���󳤶�
#define MAX_PLATE_NUM					3		//���Ƹ���
#define MAX_MASK_REGION_NUM				4       //����ĸ���������
#define MAX_SEGMENT_NUM					6        //������궨�����������Ŀ
#define MIN_SEGMENT_NUM					3        //������궨��С��������Ŀ


//���ܿ�����Ϣ
#define MAX_VCA_CHAN  16//�������ͨ����
typedef struct tagNET_VCA_CTRLINFO
{
	BYTE   byVCAEnable;		//�Ƿ�������
	BYTE   byVCAType;	    //�����������ͣ�VCA_CHAN_ABILITY_TYPE 
	BYTE   byStreamWithVCA; //�������Ƿ��������Ϣ
    BYTE   byMode;			//ģʽ��VCA_CHAN_MODE_TYPE ,atm������ʱ����Ҫ����
	BYTE  byControlType; //�������ͣ���λ��ʾ��0-��1-��
	// byControlType &1 �Ƿ�����ץ�Ĺ���
	BYTE   byRes[3]; 		//����������Ϊ0 
}NET_VCA_CTRLINFO, * LPNET_VCA_CTRLINFO;

//���ܿ�����Ϣ�ṹ
typedef struct tagNET_VCA_CTRLCFG
{
	DWORD dwSize;
	NET_VCA_CTRLINFO  struCtrlInfo[MAX_VCA_CHAN]; 	//������Ϣ,����0��Ӧ�豸����ʼͨ��
	BYTE byRes[16];
}NET_VCA_CTRLCFG, * LPNET_VCA_CTRLCFG;

//�����豸������
typedef struct tagNET_VCA_DEV_ABILITY
{
	DWORD dwSize;			//�ṹ����
	BYTE byVCAChanNum;		//����ͨ������
	BYTE byPlateChanNum; 	//����ͨ������
	BYTE byBBaseChanNum;	//��Ϊ���������
	BYTE byBAdvanceChanNum; //��Ϊ�߼������
	BYTE byBFullChanNum;    //��Ϊ���������
	BYTE byATMChanNum;		//����ATM����
    BYTE byPDCChanNum;      //����ͳ��ͨ������
    BYTE byITSChanNum;      // ��ͨ�¼�ͨ������
    BYTE byBPrisonChanNum;	// ��Ϊ������(����)ͨ������
	BYTE byFSnapChanNum;  //����ץ��ͨ������
	BYTE byFSnapRecogChanNum;  //����ץ�ĺ�ʶ��ͨ������
	BYTE byFRetrievalChanNum; //�������������
	BYTE bySupport; //������λ����Ϊ0��ʾ��֧�֣�1��ʾ֧��
	//bySupport & 0x1����ʾ�Ƿ�֧�����ܸ��� 2012-3-22
	BYTE byFRecogChanNum; //����ʶ��ͨ������
	BYTE byBPPerimeterChanNum; //��Ϊ������(�ܽ�)ͨ������
	BYTE byTPSChanNum; //��ͨ�յ�ͨ������
    BYTE byRes[24];
}NET_VCA_DEV_ABILITY, *LPNET_VCA_DEV_ABILITY;


//��Ϊ������������
typedef enum _VCA_ABILITY_TYPE_
{
    TRAVERSE_PLANE_ABILITY           = 0x01,      //��Խ������
    ENTER_AREA_ABILITY          = 0x02,      //��������
    EXIT_AREA_ABILITY           = 0x04,      //�뿪����
    INTRUSION_ABILITY           = 0x08,      //����
    LOITER_ABILITY               = 0x10,     //�ǻ�
    LEFT_TAKE_ABILITY            = 0x20,     //��Ʒ������ȡ
    PARKING_ABILITY              = 0x40,     //ͣ��
    RUN_ABILITY                  = 0x80,    //�����ƶ�
	HIGH_DENSITY_ABILITY         = 0x100,    //��Ա�ۼ�
	LF_TRACK_ABILITY			 = 0x200,    //�������
    VIOLENT_MOTION_ABILITY		= 0x400,		// �����˶����
    REACH_HIGHT_ABILITY			= 0x800,		// �ʸ߼��
    GET_UP_ABILITY				= 0x1000,	// ������
    LEFT_ABILITY                = 0x2000,       // ��Ʒ����
    TAKE_ABILITY                = 0x4000,       // ��Ʒ��ȡ
	LEAVE_POSITION              = 0x8000, //���
	TRAIL_ABILITY               = 0x10000,         //β�� 
	FALL_DOWN_ABILITY           = 0x80000,        //����
	AUDIO_ABNORMAL_ABILITY      = 0x100000,       //��ǿͻ��
    HUMAN_ENTER_ABILITY         = 0x10000000,   //�˿���ATM           ֻ��ATM_PANELģʽ��֧��
    OVER_TIME_ABILITY           = 0x20000000,   //������ʱ            ֻ��ATM_PANELģʽ��֧��
	STICK_UP_ABILITY             = 0x40000000,  //��ֽ��
	INSTALL_SCANNER_ABILITY      = 0x80000000   //��װ������
}VCA_ABILITY_TYPE;


//����ͨ������
typedef enum _VCA_CHAN_ABILITY_TYPE_
{
	VCA_BEHAVIOR_BASE     =  1,   //��Ϊ����������
	VCA_BEHAVIOR_ADVANCE  =  2,   //��Ϊ�����߼���
	VCA_BEHAVIOR_FULL     =  3,   //��Ϊ����������
    VCA_PLATE     		  =  4,   //��������
	VCA_ATM               =  5,    //ATM����
    VCA_PDC               =  6,      // ������ͳ��
    VCA_ITS               =  7,      // ���� ��ͨ�¼�
    VCA_BEHAVIOR_PRISON   =  8,     // ��Ϊ����������(����) 
	VCA_FACE_SNAP         = 9,     //����ץ������
	VCA_FACE_SNAPRECOG    = 10,    //����ץ�ĺ�ʶ������
	VCA_FACE_RETRIEVAL    = 11,    //�������������
	VCA_FACE_RECOG        = 12,    //����ʶ������
	VCA_BEHAVIOR_PRISON_PERIMETER  =  13,     // ��Ϊ���������� (�ܽ�)
	VCA_TPS               = 14     //��ͨ�յ�
}VCA_CHAN_ABILITY_TYPE;

//����ATMģʽ����(ATM��������)
typedef enum _VCA_CHAN_MODE_TYPE_
{
    VCA_ATM_PANEL     =  0, //ATM���
    VCA_ATM_SURROUND  =  1,  //ATM����
    VCA_ATM_FACE		= 2	//ATM����
}VCA_CHAN_MODE_TYPE;


//ͨ�������������
typedef struct tagNET_VCA_CHAN_IN_PARAM
{
	BYTE byVCAType;	    //VCA_CHAN_ABILITY_TYPEö��ֵ
	BYTE byMode;		//ģʽ��VCA_CHAN_MODE_TYPE ,atm������ʱ����Ҫ����  ��VCA_TYPE Ϊ��ͨ�¼� ģʽ����TRAFFIC_SCENE_MODE
	BYTE byRes[2]; 	    //����������Ϊ0 
}NET_VCA_CHAN_IN_PARAM, *LPNET_VCA_CHAN_IN_PARAM;


//��Ϊ�������ṹ
typedef struct tagNET_VCA_BEHAVIOR_ABILITY
{
	DWORD dwSize;		 //�ṹ����
	DWORD dwAbilityType; //֧�ֵ��������ͣ���λ��ʾ����VCA_ABILITY_TYPE����
	BYTE  byMaxRuleNum;	 //��������
	BYTE  byMaxTargetNum; //���Ŀ����
    BYTE  bySupport;		// ֧�ֵĹ�������   ��λ��ʾ  
                            // bySupport & 0x01 ֧�ֱ궨����
    BYTE byRes[9];        //����������Ϊ0
}NET_VCA_BEHAVIOR_ABILITY, *LPNET_VCA_BEHAVIOR_ABILITY;

// ��ͨ�������ṹ
typedef struct tagNET_DVR_ITS_ABILITY
{
    DWORD 	dwSize;             // �ṹ���С
    DWORD 	dwAbilityType;      // ֧�ֵ������б�  ����ITS_ABILITY_TYPE
	BYTE 	byMaxRuleNum;	 	//��������
	BYTE 	byMaxTargetNum; 	//���Ŀ����
   	BYTE	byRes[10];		    // ����
}NET_DVR_ITS_ABILITY, *LPNET_DVR_ITS_ABILITY;

/***********************************end*******************************************/

/************************************���ܲ����ṹ*********************************/
//���ܹ��ýṹ
//����ֵ��һ��,������ֵΪ��ǰ����İٷֱȴ�С, ����ΪС�������λ
//������ṹ
typedef struct tagNET_VCA_POINT
{	
	float fX;								// X������, 0.001~1
	float fY;								//Y������, 0.001~1
}NET_VCA_POINT, *LPNET_VCA_POINT;

//�����ṹ
typedef struct tagNET_VCA_RECT
{
	float fX;               //�߽�����Ͻǵ��X������, 0.001~1
	float fY;               //�߽�����Ͻǵ��Y������, 0.001~1
	float fWidth;           //�߽��Ŀ��, 0.001~1
	float fHeight;          //�߽��ĸ߶�, 0.001~1
}NET_VCA_RECT, *LPNET_VCA_RECT;

//��Ϊ�����¼�����
typedef enum _VCA_EVENT_TYPE_
{
	VCA_TRAVERSE_PLANE		= 0x1,    //��Խ������
	VCA_ENTER_AREA		= 0x2,    //Ŀ���������,֧���������
	VCA_EXIT_AREA		= 0x4,    //Ŀ���뿪����,֧���������
	VCA_INTRUSION		= 0x8,    //�ܽ�����,֧���������
	VCA_LOITER			= 0x10,   //�ǻ�,֧���������
	VCA_LEFT_TAKE		= 0x20,   //��Ʒ������ȡ,֧���������
	VCA_PARKING			= 0x40,   //ͣ��,֧���������
	VCA_RUN				= 0x80,   //�����ƶ�,֧���������
	VCA_HIGH_DENSITY	= 0x100,  //��������Ա�ۼ�,֧���������
    VCA_VIOLENT_MOTION	= 0x200,		// �����˶����
    VCA_REACH_HIGHT		= 0x400,		// �ʸ߼��
    VCA_GET_UP			= 0x800,	// ������
    VCA_LEFT            = 0x1000,   // ��Ʒ����
    VCA_TAKE            = 0x2000,   // ��Ʒ��ȡ
	VCA_LEAVE_POSITION  = 0x4000,     //���
	VCA_TRAIL           = 0x8000,        //β��
	VCA_FALL_DOWN       = 0x80000,      //���ؼ��
	VCA_AUDIO_ABNORMAL  = 0x100000,     //��ǿͻ����
    VCA_HUMAN_ENTER     = 0x10000000,   //�˿���ATM           ֻ��ATM_PANELģʽ��֧��
    VCA_OVER_TIME       = 0x20000000,   //������ʱ            ֻ��ATM_PANELģʽ��֧��
    VCA_STICK_UP        = 0x40000000,  //��ֽ��,֧���������
    VCA_INSTALL_SCANNER = 0x80000000 //��װ������,֧���������
}VCA_EVENT_TYPE;

//�����洩Խ��������
typedef enum _VCA_CROSS_DIRECTION_
{
	VCA_BOTH_DIRECTION,  // ˫�� 
	VCA_LEFT_GO_RIGHT,   // �������� 
	VCA_RIGHT_GO_LEFT    // �������� 
}VCA_CROSS_DIRECTION;

//�߽ṹ
typedef struct tagNET_VCA_LINE
{
	NET_VCA_POINT struStart;    //��� 
	NET_VCA_POINT struEnd;      //�յ�
}NET_VCA_LINE, *LPNET_VCA_LINE;

//����ͽṹ��
typedef struct tagNET_VCA_POLYGON
{
	DWORD dwPointNum;                                  //��Ч�� ���ڵ���3������3����һ��������Ϊ����Ч�����߽�����Ϊ����Ч���� 
	NET_VCA_POINT  struPos[VCA_MAX_POLYGON_POINT_NUM]; //����α߽��,���ʮ�� 
}NET_VCA_POLYGON, *LPNET_VCA_POLYGON;

//���������
typedef struct tagNET_VCA_TRAVERSE_PLANE
{	
    NET_VCA_LINE struPlaneBottom;  //������ױ�
    VCA_CROSS_DIRECTION dwCrossDirection; //��Խ����: 0-˫��1-�����ң�2-���ҵ���
    BYTE byRes1;//����
    BYTE byPlaneHeight; //������߶�
    BYTE byRes2[38];				//����
}NET_VCA_TRAVERSE_PLANE, *LPNET_VCA_TRAVERSE_PLANE;

//����/�뿪�������
typedef struct tagNET_VCA_AREA
{
    NET_VCA_POLYGON struRegion;//����Χ
    BYTE byRes[8];
}NET_VCA_AREA, *LPNET_VCA_AREA;

//���ݱ����ӳ�ʱ������ʶ�����д�ͼƬ�����������IO����һ�£�1�뷢��һ����
//���ֲ���
typedef struct tagNET_VCA_INTRUSION
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration;    //��Ϊ�¼�����ʱ����ֵ: 1-120�룬����5�룬�ж�����Ч������ʱ��  ��ATMϵͳ�д����ļ���ֵΪ 1-1000��
    BYTE byRes[6];
}NET_VCA_INTRUSION, *LPNET_VCA_INTRUSION;

//�ǻ�����
typedef struct tagNET_VCA_PARAM_LOITER
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //����ʱ����ֵ��1-120�룬����10��
    BYTE byRes[6];
}NET_VCA_LOITER, *LPNET_VCA_LOITER;

//��Ʒ����/��Ʒ��ȡ����
typedef struct tagNET_VCA_TAKE_LEFT
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //����ʱ����ֵ��1-120�룬����10��
    BYTE byRes[6];
}NET_VCA_TAKE_LEFT, *LPNET_VCA_TAKE_LEFT;

//ͣ������
typedef struct tagNET_VCA_PARKING
{
    NET_VCA_POLYGON struRegion;	//����Χ
    WORD wDuration;				//����ʱ����ֵ��1-100�룬����10��
    BYTE byRes[6];
}NET_VCA_PARKING, *LPNET_VCA_PARKING;

//�����ƶ�����
typedef struct tagNET_VCA_RUN
{
	NET_VCA_POLYGON struRegion;	//����Χ
    float  fRunDistance;		//�˿����ƶ�������, ��Χ: [0.1, 1.00] ����ģʽ ʵ��ģʽ(1,20)m/s
    BYTE    byRes1;             // �����ֽ�
    BYTE    byMode;             // 0 ����ģʽ  1 ʵ��ģʽ
    BYTE byRes[2];
}NET_VCA_RUN, *LPNET_VCA_RUN;

//��Ա�ۼ�����
typedef struct tagNET_VCA_HIGH_DENSITY
{
    NET_VCA_POLYGON struRegion;//����Χ
    float           fDensity;       //�ۼ�����, ��Χ: [0.1, 1.0]
    BYTE            byRes;          // �����ֽ�
    WORD            wDuration;      // ������Ա�ۼ�����������ֵ 20-360s
}NET_VCA_HIGH_DENSITY, *LPNET_VCA_HIGH_DENSITY; 

//�����˶�����
typedef struct tagNET_VCA_VIOLENT_MOTION
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //���������˶�������ֵ��1-120��
    BYTE  bySensitivity;       //�����Ȳ�������Χ[1,5]
    BYTE byRes[5];
}NET_VCA_VIOLENT_MOTION, *LPNET_VCA_VIOLENT_MOTION; 
// �ʸ߲���
typedef struct tagNET_VCA_REACH_HIGHT
{
    NET_VCA_LINE struVcaLine;   //�ʸ߾�����
    WORD wDuration; //�����ʸ߱�����ֵ��1-120��
    BYTE	byRes[6];           // �����ֽ�
}NET_VCA_REACH_HIGHT, *LPNET_VCA_REACH_HIGHT;

// �𴲲���
typedef struct tagNET_VCA_GET_UP
{
    NET_VCA_POLYGON struRegion; // ����Χ
    WORD	wDuration;	// �����𴲱�����ֵ1-120 ��
    BYTE	byRes[6];		// �����ֽ�
}NET_VCA_GET_UP, * LPNET_VCA_GET_UP;

// ��Ʒ����
typedef struct tagNET_VCA_LEFT
{
    NET_VCA_POLYGON struRegion;     // ����Χ
    WORD      wDuration;      // ������Ʒ����������ֵ 4-60��
    BYTE       byRes[6];       // �����ֽ�
}NET_VCA_LEFT, *LPNET_VCA_LEFT;

// ��Ʒ��ȡ
typedef struct tagNET_VCA_TAKE
{
    NET_VCA_POLYGON struRegion;     // ����Χ
    WORD            wDuration;      // ������Ʒ��ȡ������ֵ4-60��
    BYTE            byRes[6];       // �����ֽ�
}NET_VCA_TAKE, *LPNET_VCA_TAKE;

typedef struct tagNET_VCA_OVER_TIME
{
    NET_VCA_POLYGON     struRegion;    // ����Χ
    WORD               wDuration;  // ��������ʱ����ֵ 4s-60000s
    BYTE   byRes[6];   // �����ֽ�
}NET_VCA_OVER_TIME, *LPNET_VCA_OVER_TIME;

typedef struct tagNET_VCA_HUMAN_ENTER
{
    DWORD                dwRes[23];			//�����ֽ�
}NET_VCA_HUMAN_ENTER, *LPNET_VCA_HUMAN_ENTER;

//��ֽ������
typedef struct tagNET_VCA_STICK_UP
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //����ʱ����ֵ��4-60�룬����10��
    BYTE  bySensitivity;       //�����Ȳ�������Χ[1,5]
    BYTE byRes[5];
}NET_VCA_STICK_UP, *LPNET_VCA_STICK_UP; 

//����������
typedef struct tagNET_VCA_SCANNER
{
    NET_VCA_POLYGON struRegion;//����Χ
    WORD wDuration; //��������ʱ�䣺4-60��
    BYTE bySensitivity;       //�����Ȳ�������Χ[1,5]
    BYTE byRes[5];
}NET_VCA_SCANNER, *LPNET_VCA_SCANNER; 

//����¼�
typedef struct tagNET_VCA_LEAVE_POSITION
{
	NET_VCA_POLYGON   struRegion; //����Χ
	WORD  wLeaveDelay;  //���˱���ʱ�䣬��λ��s��ȡֵ1-1800
	WORD  wStaticDelay; //˯������ʱ�䣬��λ��s��ȡֵ1-1800
	BYTE  byRes[4]; //����
}NET_VCA_LEAVE_POSITION, *LPNET_VCA_LEAVE_POSITION;

//β�����
typedef struct tagNET_VCA_TRAIL
{
	NET_VCA_POLYGON struRegion;//����Χ
	WORD  wRes;      /* ���� */
	BYTE  bySensitivity;       /* �����Ȳ�������Χ[1,5] */
	BYTE  byRes[5];
}NET_VCA_TRAIL, *LPNET_VCA_TRAIL;

//���ز���
typedef struct tagNET_VCA_FALL_DOWN
{
	NET_VCA_POLYGON struRegion;//����Χ
	WORD  wDuration;      /* �����¼���ֵ 1-60s*/
	BYTE  bySensitivity;       /* �����Ȳ�������Χ[1,5] */
	BYTE  byRes[5];
}NET_VCA_FALL_DOWN, *LPNET_VCA_FALL_DOWN;

//��ǿͻ�����
typedef struct tagNET_VCA_AUDIO_ABNORMAL
{
    WORD wDecibel;        //����ǿ��(����)
	BYTE bySensitivity;    /* �����Ȳ�������Χ[1,5] */
    BYTE byAudioMode;    //�������ģʽ��0�����������ȼ�⣻1�����÷ֱ���ֵ���
    BYTE byRes[56];    //����    
}NET_VCA_AUDIO_ABNORMAL, *LPNET_VCA_AUDIO_ABNORMAL;

//�����¼�����
typedef union tagNET_VCA_EVENT_UNION
{
	DWORD                uLen[23];			//����
	NET_VCA_TRAVERSE_PLANE    struTraversePlane;		//��Խ��������� 
	NET_VCA_AREA    	 struArea;			//����/�뿪�������
	NET_VCA_INTRUSION    struIntrusion;		//���ֲ���
	NET_VCA_LOITER       struLoiter;		//�ǻ�����
	NET_VCA_TAKE_LEFT    struTakeTeft;		//��Ʒ����/��Ʒ��ȡ����
	NET_VCA_PARKING      struParking;		//ͣ������
	NET_VCA_RUN          struRun;			//�����ƶ�����
	NET_VCA_HIGH_DENSITY struHighDensity;	//��Ա�ۼ�����  
    NET_VCA_VIOLENT_MOTION struViolentMotion;	// �����˶�
    NET_VCA_REACH_HIGHT	struReachHight;	// �ʸ�
    NET_VCA_GET_UP		struGetUp;		//��
    NET_VCA_LEFT        struLeft;       // ��Ʒ����
    NET_VCA_TAKE        struTake;       // ��Ʒ��ȡ
    NET_VCA_HUMAN_ENTER struHumanEnter; // ��Ա����
	NET_VCA_OVER_TIME   struOvertime;   // ������ʱ
    NET_VCA_STICK_UP 	struStickUp;		//��ֽ��
    NET_VCA_SCANNER 	struScanner;		//���������� 	
	NET_VCA_LEAVE_POSITION struLeavePos;  //��ڲ���
	NET_VCA_TRAIL          struTrail; //β�����
	NET_VCA_FALL_DOWN      struFallDown; //���ز���
	NET_VCA_AUDIO_ABNORMAL struAudioAbnormal;  //��ǿͻ��
}NET_VCA_EVENT_UNION, *LPNET_VCA_EVENT_UNION;

// �ߴ����������
typedef enum _VCA_SIZE_FILTER_MODE_
{
	IMAGE_PIX_MODE, //�������ش�С����
	REAL_WORLD_MODE, //����ʵ�ʴ�С����
    DEFAULT_MODE 	// Ĭ��ģʽ
}SIZE_FILTER_MODE;
//�ߴ������
typedef struct tagNET_VCA_SIZE_FILTER
{
	BYTE    byActive;			//�Ƿ񼤻�ߴ������ 0-�� ��0-��
    BYTE    byMode;		 //������ģʽSIZE_FILTER_MODE
	BYTE    byRes[2];        //��������0
	NET_VCA_RECT struMiniRect;    //��СĿ���,ȫ0��ʾ������
	NET_VCA_RECT struMaxRect;	  //���Ŀ���,ȫ0��ʾ������
}NET_VCA_SIZE_FILTER, *LPNET_VCA_SIZE_FILTER;

//�������ṹ
typedef struct tagNET_VCA_ONE_RULE
{
	BYTE   byActive;					//�Ƿ񼤻����,0-��,��0-��
	BYTE   byRes[7];         			//����������Ϊ0�ֶ�
    BYTE   byRuleName[NAME_LEN];		//��������
	VCA_EVENT_TYPE dwEventType;			//��Ϊ�����¼�����
    NET_VCA_EVENT_UNION uEventParam;	//��Ϊ�����¼�����
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
	NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
	BYTE byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
}NET_VCA_ONE_RULE, *LPNET_VCA_ONE_RULE;

//��Ϊ�������ýṹ��
typedef struct tagNET_VCA_RULECFG
{
	DWORD  dwSize;			//�ṹ����
	BYTE   byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
	BYTE   byUpLastAlarm; //2011-04-06 �Ƿ����ϴ����һ�εı���
	BYTE   byPicRecordEnable;  /*2012-3-1�Ƿ�����ͼƬ�洢, 0-������, 1-����*/
	BYTE   byRes;
	NET_DVR_JPEGPARA  struPictureParam; 		//ͼƬ���ṹ
	NET_VCA_ONE_RULE  struRule[MAX_RULE_NUM];  //��������
}NET_VCA_RULECFG, *LPNET_VCA_RULECFG;

//�������ṹ
typedef struct tagNET_VCA_ONE_RULE_V41
{
	BYTE   byActive;					//�Ƿ񼤻����,0-��,��0-��
	BYTE   byRes1[7];         			//����������Ϊ0�ֶ�
    BYTE   byRuleName[NAME_LEN];		//��������
	VCA_EVENT_TYPE dwEventType;			//��Ϊ�����¼�����
    NET_VCA_EVENT_UNION uEventParam;	//��Ϊ�����¼�����
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
	NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
	BYTE byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    WORD wAlarmDelay; //���ܱ�����ʱ��0-5s,1-10,2-30s,3-60s,4-120s,5-300s,6-600s
    BYTE byRes[58];
}NET_VCA_ONE_RULE_V41, *LPNET_VCA_ONE_RULE_V41;

//��Ϊ�������ýṹ��
typedef struct tagNET_VCA_RULECFG_V41
{
	DWORD  dwSize;			//�ṹ����
	BYTE    byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
	BYTE    byUpLastAlarm; //2011-04-06 �Ƿ����ϴ����һ�εı���
	BYTE    byPicRecordEnable;  /*2012-3-1�Ƿ�����ͼƬ�洢, 0-������, 1-����*/
	BYTE    byRes1;
	NET_DVR_JPEGPARA struPictureParam; 		//ͼƬ���ṹ
	NET_VCA_ONE_RULE_V41  struRule[MAX_RULE_NUM];  //��������
	BYTE byRes[32];
}NET_VCA_RULECFG_V41, *LPNET_VCA_RULECFG_V41;

//��Ŀ��ṹ��
typedef struct tagNET_VCA_TARGET_INFO
{
	DWORD    dwID;				//Ŀ��ID ,��Ա�ۼ����߱���ʱΪ0
	NET_VCA_RECT struRect;      //Ŀ��߽�� 
    BYTE      byRes[4];			//����
}NET_VCA_TARGET_INFO, *LPNET_VCA_TARGET_INFO;

//�򻯵Ĺ�����Ϣ, ��������Ļ�����Ϣ
typedef struct tagNET_VCA_RULE_INFO
{
	BYTE   byRuleID;		    //����ID,0-7
	BYTE   byRes[3];			//����
    BYTE   byRuleName[NAME_LEN]; //��������
	VCA_EVENT_TYPE  dwEventType; //�����¼�����
    NET_VCA_EVENT_UNION uEventParam;//�¼�����
}NET_VCA_RULE_INFO, *LPNET_VCA_RULE_INFO;

//ǰ���豸��ַ��Ϣ�����ܷ����Ǳ�ʾ����ǰ���豸�ĵ�ַ��Ϣ�������豸��ʾ�����ĵ�ַ
typedef struct tagNET_VCA_DEV_INFO
{
	NET_DVR_IPADDR  struDevIP; //ǰ���豸��ַ�� 
	WORD wPort; 			//ǰ���豸�˿ںţ� 
	BYTE byChannel;  		//ǰ���豸ͨ���� 
    BYTE byIvmsChannel;		// Ivms ͨ�� 
} NET_VCA_DEV_INFO, *LPNET_VCA_DEV_INFO;

//��Ϊ��������ϱ��ṹ
typedef struct  tagNET_VCA_RULE_ALARM
{
	DWORD    dwSize;						//�ṹ����
	DWORD    dwRelativeTime;				//���ʱ��
	DWORD    dwAbsTime;						//����ʱ��
	NET_VCA_RULE_INFO     struRuleInfo;		//�¼�������Ϣ
	NET_VCA_TARGET_INFO  struTargetInfo;	//����Ŀ����Ϣ
	NET_VCA_DEV_INFO  	 struDevInfo;		//ǰ���豸��Ϣ
	DWORD dwPicDataLen;						//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����*/
    BYTE       byPicType;		//  0-��ͨͼƬ 1-�Ա�ͼƬ
    BYTE       byRes[3];		// �����ֽ�
    DWORD      dwRes[3];		/* ����������Ϊ0*/
	BYTE  *pImage;   						//ָ��ͼƬ��ָ��
}NET_VCA_RULE_ALARM, *LPNET_VCA_RULE_ALARM;

//��Ϊ��������DSP��Ϣ���ӽṹ
typedef struct tagNET_VCA_DRAW_MODE
{ 
	DWORD  dwSize;
	BYTE	byDspAddTarget;			//�����Ƿ����Ŀ��
	BYTE    byDspAddRule;			//�����Ƿ���ӹ���
	BYTE	byDspPicAddTarget;		//ץͼ�Ƿ����Ŀ��
	BYTE	byDspPicAddRule;		//ץͼ�Ƿ���ӹ���
	BYTE	byRes[4];			
}NET_VCA_DRAW_MODE, *LPNET_VCA_DRAW_MODE;

//�궨���ӽṹ
typedef struct tagNET_DVR_CB_POINT
{
	NET_VCA_POINT struPoint;     //�궨�㣬���������ǹ����
	NET_DVR_PTZPOS struPtzPos;  //��������PTZ����
	BYTE	byRes[8];
}NET_DVR_CB_POINT, LPNET_DVR_CB_POINT;

//�궨�������ýṹ
typedef struct tagNET_DVR_TRACK_CALIBRATION_PARAM
{	
	BYTE byPointNum;			//��Ч�궨�����
	BYTE byRes[3];				
	NET_DVR_CB_POINT  struCBPoint[MAX_CALIB_PT]; //�궨����
}NET_DVR_TRACK_CALIBRATION_PARAM, *LPNET_DVR_TRACK_CALIBRATION_PARAM;

//������ýṹ
typedef struct tagNET_DVR_TRACK_CFG 
{	
	DWORD dwSize;				//�ṹ����	
    BYTE byEnable;				//�궨ʹ��
    BYTE byFollowChan;          // �����ƵĴ�ͨ��
    BYTE byDomeCalibrate;			//�������ܸ�������궨��1���� 0������ 
    BYTE byRes;					// �����ֽ�
	NET_DVR_TRACK_CALIBRATION_PARAM  struCalParam; //�궨����
}NET_DVR_TRACK_CFG, *LPNET_DVR_TRACK_CFG ;

//����ģʽ
typedef enum _TRACK_MODE_
{
	MANUAL_CTRL = 0,  //�ֶ�����
	ALARM_TRACK    //������������
}TRACK_MODE;

//�ֶ����ƽṹ
typedef struct tagNET_DVR_MANUAL_CTRL_INFO 
{
	NET_VCA_POINT struCtrlPoint;
	BYTE  byRes[8];
}NET_DVR_MANUAL_CTRL_INFO, *LPNET_DVR_MANUAL_CTRL_INFO ;

//����ģʽ�ṹ
typedef struct tagNET_DVR_TRACK_MODE
{
	DWORD dwSize;		//�ṹ����
	BYTE byTrackMode;   //����ģʽ
    BYTE byRuleConfMode;   //�������ø���ģʽ0-�������ø��٣�1-Զ�����ø���
    BYTE byRes[2];   //��������0
	union
	{
		DWORD dwULen[4];
		NET_DVR_MANUAL_CTRL_INFO  struManualCtrl;//�ֶ����ٽṹ
	}uModeParam;
}NET_DVR_TRACK_MODE,*LPNET_DVR_TRACK_MODE;

typedef struct tagNET_DVR_ALARM_JPEG
{
    BYTE    byPicProType;	    /*����ʱͼƬ����ʽ 0-������ 1-�ϴ�*/
    BYTE    byRes[3];           //�����ֽ�
    NET_DVR_JPEGPARA struPicParam; 				/*ͼƬ���ṹ*/
}NET_DVR_ALARM_JPEG, *LPNET_DVR_ALARM_JPEG;

//��������Ϊ��������ṹ
//�������ṹ
typedef struct tagNET_IVMS_ONE_RULE_
{
	BYTE    byActive;           /* �Ƿ񼤻����,0-��, ��0-�� */
	BYTE	byRes1[7];	//����������Ϊ0�ֶ�
	BYTE   byRuleName[NAME_LEN]; //��������
	VCA_EVENT_TYPE dwEventType;   //��Ϊ�����¼�����
    NET_VCA_EVENT_UNION uEventParam;//��Ϊ�����¼�����
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
	BYTE byRes2[68]; /*����������Ϊ0*/
}NET_IVMS_ONE_RULE, *LPNET_IVMS_ONE_RULE;

// �����ǹ���ṹ
typedef struct tagNET_IVMS_RULECFG
{
	NET_IVMS_ONE_RULE  struRule[MAX_RULE_NUM];   //��������
}NET_IVMS_RULECFG, *LPNET_IVMS_RULECFG;

// IVMS��Ϊ�������ýṹ
typedef struct tagNET_IVMS_BEHAVIORCFG
{
    DWORD dwSize;
	BYTE    byPicProType;	    //����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
	BYTE    byRes[3];
	NET_DVR_JPEGPARA struPicParam; 				//ͼƬ���ṹ
	NET_IVMS_RULECFG struRuleCfg[MAX_DAYS][MAX_TIMESEGMENT];//ÿ��ʱ��ζ�Ӧ����
} NET_IVMS_BEHAVIORCFG, *LPNET_IVMS_BEHAVIORCFG;

//���ܷ�����ȡ���ƻ��ӽṹ
typedef struct tagNET_IVMS_DEVSCHED
{
	NET_DVR_SCHEDTIME 	struTime;       //ʱ�����
	NET_DVR_PU_STREAM_CFG struPUStream; //ǰ��ȡ������
}NET_IVMS_DEVSCHED, *LPNET_IVMS_DEVSCHED;

//���ܷ����ǲ������ýṹ
typedef struct tagNET_IVMS_STREAMCFG
{
    DWORD dwSize;
	NET_IVMS_DEVSCHED	struDevSched[MAX_DAYS][MAX_TIMESEGMENT];//��ʱ�������ǰ��ȡ���Լ�������Ϣ
} NET_IVMS_STREAMCFG, *LPNET_IVMS_STREAMCFG;

//��������
typedef struct tagNET_VCA_MASK_REGION
{
    BYTE byEnable;			//�Ƿ񼤻�, 0-�񣬷�0-��
	BYTE byRes[3];         //��������0
	NET_VCA_POLYGON  struPolygon; //���ζ����
}NET_VCA_MASK_REGION, * LPNET_VCA_MASK_REGION;

//������������ṹ
typedef struct tagNET_VCA_MASK_REGION_LIST
{
	DWORD dwSize;     //�ṹ����
	BYTE byRes[4];     //��������0
	NET_VCA_MASK_REGION  struMask[MAX_MASK_REGION_NUM]; //������������
}NET_VCA_MASK_REGION_LIST, *LPNET_VCA_MASK_REGION_LIST;


//ATM�����������
typedef struct tagNET_VCA_ENTER_REGION//��ֹ����ATM���
{
	DWORD dwSize;
    BYTE byEnable;			//�Ƿ񼤻0-�񣬷�0-��
	BYTE byRes1[3];
	NET_VCA_POLYGON  struPolygon; //��������
	BYTE byRes2[16];
}NET_VCA_ENTER_REGION, * LPNET_VCA_ENTER_REGION;

//IVMS������������
typedef struct tagNET_IVMS_MASK_REGION_LIST
{
	DWORD dwSize;    //�ṹ����
	NET_VCA_MASK_REGION_LIST struList[MAX_DAYS][ MAX_TIMESEGMENT];
}NET_IVMS_MASK_REGION_LIST, *LPNET_IVMS_MASK_REGION_LIST;

//IVMS��ATM�����������
typedef struct tagNET_IVMS_ENTER_REGION
{
	DWORD dwSize;
	NET_VCA_ENTER_REGION  struEnter[MAX_DAYS][ MAX_TIMESEGMENT]; //��������
}NET_IVMS_ENTER_REGION, *LPNET_IVMS_ENTER_REGION;

// ivms ����ͼƬ�ϴ��ṹ
typedef struct tagNET_IVMS_ALARM_JPEG
{
    BYTE                byPicProType;               
    BYTE                byRes[3];
    NET_DVR_JPEGPARA      struPicParam;     
}NET_IVMS_ALARM_JPEG, *LPNET_IVMS_ALARM_JPEG;

// IVMS ���������
typedef struct tagNET_IVMS_SEARCHCFG
{
    DWORD                        dwSize;
    NET_DVR_MATRIX_DEC_REMOTE_PLAY struRemotePlay;// Զ�̻ط�
    NET_IVMS_ALARM_JPEG         struAlarmJpeg; // �����ϴ�ͼƬ����
    NET_IVMS_RULECFG           struRuleCfg;   //IVMS ��Ϊ��������
}NET_IVMS_SEARCHCFG, *LPNET_IVMS_SEARCHCFG;
/************************************end******************************************/

//����Ӳ�̽ṹ����
typedef struct tagNET_DVR_SINGLE_NET_DISK_INFO
{
	BYTE byNetDiskType;						//����Ӳ������, 0-NFS,1-iSCSI
	BYTE byRes1[3];							//����
    NET_DVR_IPADDR struNetDiskAddr;			//����Ӳ�̵�ַ
    BYTE sDirectory[PATHNAME_LEN];			// PATHNAME_LEN = 128
	WORD wPort;							    //iscsi�ж˿ڣ�����ΪĬ��
	BYTE byRes2[66];							//����
}NET_DVR_SINGLE_NET_DISK_INFO, *LPNET_DVR_SINGLE_NET_DISK_INFO;

#define MAX_NET_DISK	16//�������Ӳ�̸���

typedef struct tagNET_DVR_NET_DISKCFG 
{
    DWORD  dwSize;
    NET_DVR_SINGLE_NET_DISK_INFO struNetDiskParam[MAX_NET_DISK];
}NET_DVR_NET_DISKCFG, *LPNET_DVR_NET_DISKCFG;

//�¼�����
//������
typedef enum _MAIN_EVENT_TYPE_
{
	EVENT_MOT_DET = 0,		//�ƶ����
	EVENT_ALARM_IN = 1,		//��������
	EVENT_VCA_BEHAVIOR = 2,	// ��Ϊ����
	EVENT_INQUEST = 3,       //��Ѷ�¼�
	EVENT_AUX_ALARM = 4, //�������� add by wxm 12-12-17 for IPC V5.0
	EVENT_STREAM_INFO = 100  //��ID��Ϣ
}MAIN_EVENT_TYPE;

#define INQUEST_START_INFO        0x1001       /*Ѷ�ʿ�ʼ��Ϣ*/
#define INQUEST_STOP_INFO         0x1002       /*Ѷ��ֹͣ��Ϣ*/
#define INQUEST_TAG_INFO          0x1003       /*�ص�����Ϣ*/
#define INQUEST_SEGMENT_INFO      0x1004       /*��ѶƬ��״̬��Ϣ*/

//��Ϊ���������Ͷ�Ӧ�Ĵ����ͣ� 0xffff��ʾȫ��
typedef enum _BEHAVIOR_MINOR_TYPE_
{
	EVENT_TRAVERSE_PLANE     = 0,    // ��Խ������
	EVENT_ENTER_AREA,				//Ŀ���������,֧���������
	EVENT_EXIT_AREA,				//Ŀ���뿪����,֧���������
	EVENT_INTRUSION,				 // �ܽ�����,֧���������
	EVENT_LOITER,				 //�ǻ�,֧���������
	EVENT_LEFT_TAKE,				//��Ʒ������ȡ,֧���������
	EVENT_PARKING,					//ͣ��,֧���������
	EVENT_RUN,					//�����ƶ�,֧���������
	EVENT_HIGH_DENSITY,				 //��������Ա�ۼ�,֧���������
    EVENT_STICK_UP,				//��ֽ��,֧���������
    EVENT_INSTALL_SCANNER,				//��װ������,֧���������
    EVENT_OPERATE_OVER_TIME,        // ������ʱ
    EVENT_FACE_DETECT,              // �쳣����
    EVENT_LEFT,                     // ��Ʒ����
    EVENT_TAKE,                      // ��Ʒ��ȡ
	EVENT_LEAVE_POSITION,         //����¼�
	EVENT_TRAIL_INFO = 16,            //β��
	EVENT_FALL_DOWN_INFO = 19,                 //����
	EVENT_OBJECT_PASTE	    =20,		// ����ճ������
	EVENT_FACE_CAPTURE_INFO = 21,                //��������
	EVENT_MULTI_FACES_INFO = 22,                  //��������
	EVENT_AUDIO_ABNORMAL_INFO = 23             //��ǿͻ��
}BEHAVIOR_MINOR_TYPE;

// ������100����Ӧ��С����
typedef enum _STREAM_INFO_MINOR_TYPE_
{
	EVENT_STREAM_ID  = 0,				// ��ID
	EVENT_TIMING = 1,					// ��ʱ¼��
	EVENT_MOTION_DETECT = 2,			// �ƶ����
	EVENT_ALARM = 3,					// ����¼��
	EVENT_ALARM_OR_MOTION_DETECT = 4,	// �������ƶ����
	EVENT_ALARM_AND_MOTION_DETECT = 5,	// �������ƶ����
	EVENT_COMMAND_TRIGGER = 6,			// �����
	EVENT_MANNUAL = 7					// �ֶ�¼��
}STREAM_INFO_MINOR_TYPE;

// typedef enum tagITS_MINOR_TYPE
// {
//     ITS_EVENT_CONGESTION    = 0,    // ӵ��
//     ITS_EVENT_PARKING,              // ͣ��
//     ITS_EVENT_INVERSE,              // ����
//     ITS_EVENT_PEDESTRIAN,           // ����
//     ITS_EVENT_DEBRIS                // �������������Ƭ
// }ITS_MINOR_TYPE;

// ��ŵCVR
#define MAX_ID_COUNT    256
#define MAX_STREAM_ID_COUNT    1024
#define STREAM_ID_LEN   32

// ����Ϣ - 72�ֽڳ�
typedef struct tagNET_DVR_STREAM_INFO 
{
	DWORD dwSize;
	BYTE  byID[STREAM_ID_LEN];      //ID����
	DWORD dwChannel;                //�����豸ͨ��������0xffffffffʱ����ʾ������
	BYTE  byRes[32];                //����
}NET_DVR_STREAM_INFO, *LPNET_DVR_STREAM_INFO;

#define SEARCH_EVENT_INFO_LEN 300	//�¼���Ϣ����

//�¼���������
typedef struct tagNET_DVR_SEARCH_EVENT_PARAM
{
	WORD wMajorType;			//0-�ƶ���⣬1-��������, 2-�����¼�
	WORD wMinorType;			//����������- ���������ͱ仯��0xffff��ʾȫ��
	NET_DVR_TIME struStartTime;	//�����Ŀ�ʼʱ�䣬ֹͣʱ��: ͬʱΪ(0, 0) ��ʾ�������ʱ�俪ʼ���������ǰ���4000���¼�
	NET_DVR_TIME struEndTime;	//
	BYTE			byLockType;		// 0xff-ȫ����0-δ����1-����
	BYTE 			byRes[131];		// ����
	union	
	{
		BYTE byLen[SEARCH_EVENT_INFO_LEN];		  
		struct//��������
		{
			BYTE byAlarmInNo[MAX_ALARMIN_V30];    //��������ţ�byAlarmInNo[0]����1���ʾ�����ɱ�������1�������¼�
			BYTE byRes[SEARCH_EVENT_INFO_LEN - MAX_ALARMIN_V30];
		}struAlarmParam;
		struct//�ƶ����
		{
			BYTE byMotDetChanNo[MAX_CHANNUM_V30];//�ƶ����ͨ����byMotDetChanNo[0]����1���ʾ������ͨ��1�����ƶ���ⴥ�����¼�
			BYTE byRes[SEARCH_EVENT_INFO_LEN - MAX_CHANNUM_V30];
		}struMotionParam;
		struct//��Ϊ����
		{
			BYTE byChanNo[MAX_CHANNUM_V30];	//�����¼���ͨ��
			BYTE byRuleID;					//����ID��0xff��ʾȫ��
			BYTE byRes1[43];				//����
		}struVcaParam;
		struct//��Ѷ�¼���������
		{			
			BYTE byRoomIndex;    //��Ѷ�ұ��,��1��ʼ
			BYTE byRes[299];     //����
		} struInquestParam;
		struct
		{
			NET_DVR_STREAM_INFO struIDInfo; // ��id��Ϣ��72�ֽڳ�
			DWORD				dwCmdType;  // �ⲿ�������ͣ�NVR�����ƴ洢ʹ��
			BYTE				byRes[224];
		}struStreamIDParam;
		struct//��������
		{
			BYTE byChanNo[MAX_CHANNUM_V30];	//��������������ͨ��
			BYTE byRes[SEARCH_EVENT_INFO_LEN - MAX_CHANNUM_V30];
		}struAuxAlarmParam;
	}uSeniorParam;
}NET_DVR_SEARCH_EVENT_PARAM, *LPNET_DVR_SEARCH_EVENT_PARAM;

//���ҷ��ؽ��
typedef struct tagNET_DVR_SEARCH_EVENT_RET
{
	WORD wMajorType;			//������
	WORD wMinorType;			//������
	NET_DVR_TIME struStartTime;	//�¼���ʼ��ʱ��
	NET_DVR_TIME struEndTime;   //�¼�ֹͣ��ʱ�䣬�����¼�ʱ�Ϳ�ʼʱ��һ��
	BYTE byChan[MAX_CHANNUM_V30];	
	BYTE byRes[36];
	union		
	{
		struct//����������
		{
			DWORD dwAlarmInNo;     //���������
			BYTE byRes[SEARCH_EVENT_INFO_LEN];
		}struAlarmRet;
		struct//�ƶ������
		{
			DWORD dwMotDetNo;	//�ƶ����ͨ��
			BYTE byRes[SEARCH_EVENT_INFO_LEN];
		}struMotionRet;
		struct//��Ϊ�������  
		{
			DWORD dwChanNo;					//�����¼���ͨ����
			BYTE byRuleID;					//����ID
			BYTE byRes1[3];					//����
			BYTE byRuleName[NAME_LEN];		//��������
			NET_VCA_EVENT_UNION uEvent;     //��Ϊ�¼�����
		}struVcaRet;
		struct//��Ѷ�¼�
		{
			BYTE  byRoomIndex;     //��Ѷ�ұ��,��1��ʼ
            BYTE  byDriveIndex;    //��¼�����,��1��ʼ
			BYTE  byRes1[6];       //����
            DWORD dwSegmentNo;     //��Ƭ���ڱ�����Ѷ�е����,��1��ʼ 
			WORD  wSegmetSize;     //��Ƭ�ϵĴ�С, ��λM 
            WORD  wSegmentState;   //��Ƭ��״̬ 0 ��¼������1 ��¼�쳣��2 ����¼��Ѷ
			BYTE  byRes2[288];     //����
		}struInquestRet;
		struct //��id¼���ѯ���
		{
			DWORD dwRecordType;	//¼������ 0-��ʱ¼�� 1-�ƶ���� 2-����¼�� 3-����|�ƶ���� 4-����&�ƶ���� 5-����� 6-�ֶ�¼�� 7-�𶯱��� 8-�������� 9-���ܱ��� 10-�ش�¼��
			DWORD dwRecordLength;	//¼���С
			BYTE  byLockFlag;    // ������־ 0��û���� 1������
			BYTE  byDrawFrameType;    // 0���ǳ�֡¼�� 1����֡¼��
			BYTE  byRes1[2];
			BYTE  byFileName[NAME_LEN]; 	//�ļ���
			BYTE  byRes[260];
		}struStreamIDRet;
	}uSeniorRet;
}NET_DVR_SEARCH_EVENT_RET, *LPNET_DVR_SEARCH_EVENT_RET;

//SDK_V35  2009-10-26

// �궨��������
typedef enum tagCALIBRATE_TYPE
{
    PDC_CALIBRATE  = 0x01,  // PDC �궨
    BEHAVIOR_OUT_CALIBRATE  = 0x02, //��Ϊ���ⳡ���궨  
    BEHAVIOR_IN_CALIBRATE = 0x03,    // ��Ϊ���ڳ����궨 
    ITS_CALBIRETE       = 0x04      //  ��ͨ�¼��궨
}CALIBRATE_TYPE;

#define MAX_RECT_NUM  6
typedef struct tagNET_DVR_RECT_LIST
{	
    BYTE    byRectNum;    // ���ο�ĸ���
    BYTE    byRes1[11];  //�����ֽ� 
    NET_VCA_RECT struVcaRect[MAX_RECT_NUM]; // ���Ϊ6��Rect 
}NET_DVR_RECT_LIST, *LPNET_DVR_RECT_LIST;

// PDC �궨����
typedef struct tagNET_DVR_PDC_CALIBRATION
{
    NET_DVR_RECT_LIST struRectList;       // �궨���ο��б�
    BYTE           byRes[120];       // �����ֽ� 
}NET_DVR_PDC_CALIBRATION, *LPNET_DVR_PDC_CALIBRATION;


// �궨�ߵ��������������ʾ��ǰ�궨����ʵ�ʱ�ʾ���Ǹ߶��߻��ǳ����ߡ�
typedef enum tagLINE_MODE
{
    HEIGHT_LINE,        //�߶�������
    LENGTH_LINE        //����������
}LINE_MODE;
/*
�����ñ궨��Ϣ��ʱ�������Ӧλ������ʹ�ܣ���������ز�����
��û������ʹ�ܣ���궨����Ի�ȡ��ص����������
*/
typedef struct tagNET_DVR_CAMERA_PARAM
{
    BYTE    byEnableHeight;     // �Ƿ�ʹ������������߶���
    BYTE    byEnableAngle;      // �Ƿ�ʹ����������������Ƕ�
    BYTE    byEnableHorizon;    // �Ƿ�ʹ�������������ƽ��
    BYTE    byRes[5];   // �����ֽ� 
    float   fCameraHeight;    // ������߶�
    float   fCameraAngle;     // ����������Ƕ�
    float   fHorizon;         // �����еĵ�ƽ��
}NET_DVR_CAMERA_PARAM, *LPNET_DVR_CAMERA_PARAM;
/*
��fValue��ʾĿ��߶ȵ�ʱ��struStartPoint��struEndPoint�ֱ��ʾĿ��ͷ����ͽŲ��㡣
��fValue��ʾ�߶γ��ȵ�ʱ��struStartPoint��struEndPoint�ֱ��ʾ�߶���ʼ����յ㣬
mode��ʾ��ǰ�����߱�ʾ�߶��߻��ǳ����ߡ�
*/
typedef struct tagNET_DVR_LINE_SEGMENT
{
    BYTE            byLineMode;     // ���� LINE_MODE
    BYTE            byRes[3];       // �����ֽ� 
    NET_VCA_POINT   struStartPoint;  
    NET_VCA_POINT   struEndPoint;
    float           fValue;
}NET_DVR_LINE_SEGMENT, *LPNET_DVR_LINE_SEGMENT;

#define  MAX_LINE_SEG_NUM 8

/*
�궨������Ŀǰ��Ҫ4-8�������ߣ��Ի�ȡ�������ز���
*/
typedef struct tagNET_DVR_BEHAVIOR_OUT_CALIBRATION
{
    DWORD                   dwLineSegNum;          // �����߸���
    NET_DVR_LINE_SEGMENT    struLineSegment[MAX_LINE_SEG_NUM];    // ������������
    NET_DVR_CAMERA_PARAM    struCameraParam;    // ���������
    BYTE byRes[20];
}NET_DVR_BEHAVIOR_OUT_CALIBRATION, *LPNET_DVR_BEHAVIOR_OUT_CALIBRATION;

/*
�ýṹ���ʾIAS���ܿ�궨������
���а���һ��Ŀ����һ����Ӧ�ĸ߶ȱ궨�ߣ�
Ŀ���Ϊվ����������Ӿ��ο򣻸߶���������ʶ����ͷ���㵽�ŵ�ı궨�ߣ�
�ù�һ�������ʾ��
*/
typedef struct tagNET_DVR_IN_CAL_SAMPLE
{
    NET_VCA_RECT struVcaRect;   // Ŀ���
    NET_DVR_LINE_SEGMENT struLineSegment;    // �߶ȱ궨��
}NET_DVR_IN_CAL_SAMPLE, *LPNET_DVR_IN_CAL_SAMPLE;

#define  MAX_SAMPLE_NUM 5

typedef struct tagNET_DVR_BEHAVIOR_IN_CALIBRATION 
{
    DWORD    dwCalSampleNum;      //  �궨��������
    NET_DVR_IN_CAL_SAMPLE  struCalSample[MAX_SAMPLE_NUM]; // �궨����������
    NET_DVR_CAMERA_PARAM    struCameraParam;    // ���������
    BYTE byRes[16];
}NET_DVR_BEHAVIOR_IN_CALIBRATION, *LPNET_DVR_BEHAVIOR_IN_CALIBRATION;

#define  CALIB_PT_NUM 4
typedef struct tagNET_DVR_ITS_CALIBRATION
{
    DWORD dwPointNum; //�궨����
    NET_VCA_POINT struPoint[CALIB_PT_NUM]; //ͼ������
    float       fWidth;
    float       fHeight;
    BYTE        byRes1[100];        // �����ֽ�
}NET_DVR_ITS_CALIBRATION, *LPNET_DVR_ITS_CALIBRATION;

// �궨����������
// ��������ر궨�������Է��ڸýṹ����
typedef union tagNET_DVR_CALIBRATION_PRARM_UNION
{
    BYTE byRes[240];                    //������ṹ��С
    NET_DVR_PDC_CALIBRATION struPDCCalibration;  //PDC �궨����
    NET_DVR_BEHAVIOR_OUT_CALIBRATION  struBehaviorOutCalibration;  //  ��Ϊ���ⳡ���궨  ��ҪӦ����IVS��
    NET_DVR_BEHAVIOR_IN_CALIBRATION  struBehaviorInCalibration;     // ��Ϊ���ڳ����궨����ҪӦ��IAS�� 
    NET_DVR_ITS_CALIBRATION struITSCalibration;
}NET_DVR_CALIBRATION_PRARM_UNION, *LPNET_DVR_CALIBRATION_PRARM_UNION;


// �궨���ýṹ
typedef struct tagNET_DVR_CALIBRATION_CFG
{
    DWORD   dwSize;               //�궨�ṹ��С
    BYTE    byEnable;           // �Ƿ����ñ궨
    BYTE    byCalibrationType;    // �궨���� ���ݲ�ͬ��������������ѡ��ͬ�ı궨 �ο�CALIBRATE_TYPE
    BYTE    byRes1[2];
    NET_DVR_CALIBRATION_PRARM_UNION uCalibrateParam;  // �궨����������
    BYTE    byRes2[12];
}NET_DVR_CALIBRATION_CFG, *LPNET_DVR_CALIBRATION_CFG; 

//����ͳ�Ʒ���ṹ��
typedef struct  tagNET_DVR_PDC_ENTER_DIRECTION
{
    NET_VCA_POINT struStartPoint; //����ͳ�Ʒ�����ʼ��
    NET_VCA_POINT struEndPoint;    // ����ͳ�Ʒ�������� 
}NET_DVR_PDC_ENTER_DIRECTION, *LPNET_DVR_PDC_ENTER_DIRECTION;

typedef struct tagNET_DVR_PDC_RULE_CFG
{
    DWORD           dwSize;              //�ṹ��С
    BYTE            byEnable;             // �Ƿ񼤻����;
    BYTE            byRes1[23];       // �����ֽ� 
    NET_VCA_POLYGON          struPolygon;            // �����
    NET_DVR_PDC_ENTER_DIRECTION  struEnterDirection;    // �������뷽��
} NET_DVR_PDC_RULE_CFG, *LPNET_DVR_PDC_RULE_CFG;

//����������ͳ�Ʋ���  ������Ϊ�ڲ��ؼ��ֲ��� 
// HUMAN_GENERATE_RATE
// Ŀ�������ٶȲ���������PDC������Ŀ����ٶȡ��ٶ�Խ�죬Ŀ��Խ�������ɡ���������Ƶ���������ϲ�ԱȶȽϵ�ʱ���������õĹ��������Сʱ��Ӧ�ӿ�Ŀ�������ٶȣ� ����Ŀ���©�죻��������Ƶ�жԱȶȽϸ�ʱ�����߹�������ϴ�ʱ��Ӧ�ý���Ŀ�������ٶȣ��Լ�����졣Ŀ�������ٶȲ�������5����1���ٶ�������5����죬Ĭ�ϲ���Ϊ3��
// 
// DETECT_SENSITIVE
// Ŀ���������ȿ��Ʋ���������PDC����һ���������򱻼��ΪĿ��������ȡ�������Խ�ߣ���������Խ���ױ����ΪĿ�꣬������Խ����Խ�Ѽ��ΪĿ�ꡣ��������Ƶ���������ϲ�ԱȶȽϵ�ʱ��Ӧ��߼�������ȣ� ����Ŀ���©�죻��������Ƶ�жԱȶȽϸ�ʱ��Ӧ�ý��ͼ�������ȣ��Լ�����졣��Ӧ��������5��������1��������ͣ�5����ߣ�Ĭ�ϼ���Ϊ3��
// TRAJECTORY_LEN
// �켣���ɳ��ȿ��Ʋ�������ʾ���ɹ켣ʱҪ��Ŀ������λ�����ء���Ӧ��������5��������1�����ɳ�������켣����������5�����ɳ�����̣��켣������죬Ĭ�ϼ���Ϊ3��
// TRAJECT_CNT_LEN
// �켣�������ȿ��Ʋ�������ʾ�켣����ʱҪ��Ŀ������λ�����ء���Ӧ��������5��������1������Ҫ�󳤶�����켣����������5������Ҫ�󳤶���̣��켣������죬Ĭ�ϼ���Ϊ3��
// PREPROCESS
// ͼ��Ԥ������Ʋ�����0 - ������1 - ����Ĭ��Ϊ0��
// CAMERA_ANGLE
// ������Ƕ���������� 0 - ��б�� 1 - ��ֱ��Ĭ��Ϊ0��
typedef enum tagPDC_PARAM_KEY
{
    HUMAN_GENERATE_RATE = 50,              // Ŀ�������ٶ� ��50��ʼ
    DETECT_SENSITIVE    = 51,               // ���������
}PDC_PARAM_KEY;

typedef struct tagNET_DVR_PDC_TARGET_INFO
{
    DWORD       dwTargetID;                 // Ŀ��id 
    NET_VCA_RECT struTargetRect;               // Ŀ���
    BYTE      byRes1[8];        // �����ֽ�
}NET_DVR_PDC_TARGET_INFO, *LPNET_DVR_PDC_TARGET_INFO;

typedef struct tagNET_DVR_PDC_TARGET_IN_FRAME
{
    BYTE           byTargetNum;                   //Ŀ�����
    BYTE            byRes1[3];
        NET_DVR_PDC_TARGET_INFO  struTargetInfo[MAX_TARGET_NUM];   //Ŀ����Ϣ����
    BYTE    byRes2[8];                  // �����ֽ�
}NET_DVR_PDC_TARGET_IN_FRAME, *LPNET_DVR_PDC_TARGET_IN_FRAME;

typedef struct tagNET_DVR_PDC_ALRAM_INFO
{
    DWORD                       dwSize;           // PDC�����������ϴ��ṹ���С
    BYTE                        byMode;            // 0 ��֡ͳ�ƽ�� 1��Сʱ���ͳ�ƽ��  
    BYTE                        byChannel;           // �����ϴ�ͨ����
    BYTE                        byRes1[2];         // �����ֽ�   
    NET_VCA_DEV_INFO  	 struDevInfo;		        //ǰ���豸��Ϣ
    union		
    {
        struct   // ��֡ͳ�ƽ��ʱʹ��
        {
            DWORD   dwRelativeTime;     // ���ʱ��
            DWORD   dwAbsTime;          // ����ʱ��
            BYTE    byRes[92];            
        }struStatFrame;
        struct
        {
            NET_DVR_TIME                      tmStart; // ͳ����ʼʱ�� 
            NET_DVR_TIME                      tmEnd;  //  ͳ�ƽ���ʱ�� 
            BYTE byRes[92];
        }struStatTime;
    }uStatModeParam;  // ��Ϊһ�������� ��֡��ʱ�����֡��Ŀ����Ϣ ��Сʱ���ͳ�ƽ����Ҫͳ��ʱ�� ����
    DWORD                       dwLeaveNum;        // �뿪����
    DWORD                       dwEnterNum;        // ��������
    BYTE                        byRes2[40];           // �����ֽ�
}NET_DVR_PDC_ALRAM_INFO, *LPNET_DVR_PDC_ALRAM_INFO;


//  ��������Ϣ��ѯ 
typedef struct tagNET_DVR_PDC_QUERY
{
    NET_DVR_TIME tmStart;
    NET_DVR_TIME tmEnd;
    DWORD       dwLeaveNum;
    DWORD       dwEnterNum; 
    BYTE        byRes1[256];
}NET_DVR_PDC_QUERY, *LPNET_DVR_PDC_QUERY;

typedef struct    tagNET_DVR_PTZ_POSITION
{
    // �Ƿ����ó����������ó�����Ϊ�����ʱ����ֶ���Ч������������������ó���λ����Ϣʱ��Ϊʹ��λ
    BYTE byEnable;
    BYTE byRes1[3];  //����
    BYTE byPtzPositionName[NAME_LEN]; //����λ������
    NET_DVR_PTZPOS struPtzPos; //ptz ����
    BYTE byRes2[40];
}NET_DVR_PTZ_POSITION, *LPNET_DVR_PTZ_POSITION;

typedef struct tagNET_DVR_POSITION_RULE_CFG
{
    DWORD                   dwSize;             // �ṹ��С 
    NET_DVR_PTZ_POSITION    struPtzPosition;    // ����λ����Ϣ
    NET_VCA_RULECFG         struVcaRuleCfg;     //��Ϊ��������
    BYTE                    byRes2[80];         // �����ֽ�
}NET_DVR_POSITION_RULE_CFG, *LPNET_DVR_POSITION_RULE_CFG;

typedef struct tagNET_DVR_POSITION_RULE_CFG_V41
{
    DWORD                   dwSize;             // �ṹ��С 
    NET_DVR_PTZ_POSITION    struPtzPosition;    // ����λ����Ϣ
	NET_VCA_RULECFG_V41         struVcaRuleCfg;     //��Ϊ��������
	BYTE  byTrackEnable; //�Ƿ����ø���
	BYTE  byRes1;
	WORD wTrackDuration; //���ٳ���ʱ�䣬��λs
    BYTE                    byRes2[76];         // �����ֽ�
}NET_DVR_POSITION_RULE_CFG_V41, *LPNET_DVR_POSITION_RULE_CFG_V41;


typedef struct tagNET_DVR_LIMIT_ANGLE
{
    BYTE                byEnable;	// �Ƿ����ó�����λ����
    BYTE				byRes1[3];
    NET_DVR_PTZPOS      struUp;     // ����λ
    NET_DVR_PTZPOS      struDown;   // ����λ
    NET_DVR_PTZPOS      struLeft;   // ����λ
    NET_DVR_PTZPOS      struRight;  // ����λ
    BYTE                byRes2[20];
}NET_DVR_LIMIT_ANGLE, *LPNET_DVR_LIMIT_ANGLE;

typedef struct tagNET_DVR_POSITION_INDEX
{
    BYTE    byIndex;    // ��������
    BYTE    byRes1;
    WORD	wDwell;	// ͣ��ʱ�� 
    BYTE    byRes2[4];   // �����ֽ�
}NET_DVR_POSITION_INDEX, *LPNET_DVR_POSITION_INDEX;

#define  MAX_POSITION_NUM 10
typedef struct tagNET_DVR_POSITION_TRACK_CFG
{
    DWORD dwSize;
    BYTE    byNum; // ��������
    BYTE    byRes1[3];
    NET_DVR_POSITION_INDEX   struPositionIndex[MAX_POSITION_NUM];
    BYTE    byRes2[8];
}NET_DVR_POSITION_TRACK_CFG, *LPNET_DVR_POSITION_TRACK_CFG;

//Ѳ��·��������Ϣ
typedef struct tagNET_DVR_PATROL_SCENE_INFO
{
    WORD   wDwell;         // ͣ��ʱ�� 30-300
    BYTE   byPositionID;   // ������1-10��Ĭ��0��ʾ��Ѳ���㲻��ӳ���
    BYTE   byRes[5];
}NET_DVR_PATROL_SCENE_INFO, *LPNET_DVR_PATROL_SCENE_INFO;

// ����Ѳ������������Ϣ
typedef struct tagNET_DVR_PATROL_TRACKCFG
{
    DWORD  dwSize;                                 // �ṹ��С
    NET_DVR_PATROL_SCENE_INFO struPatrolSceneInfo[10];    // Ѳ��·��
    BYTE   byRes[16];                              // �����ֽ�
}NET_DVR_PATROL_TRACKCFG, *LPNET_DVR_PATROL_TRACKCFG;

//������ع���˵����ýṹ��
typedef struct tagNET_DVR_TRACK_PARAMCFG
{
    DWORD   dwSize;             // �ṹ��С
    WORD    wAlarmDelayTime;    // ������ʱʱ�䣬Ŀǰ���ֻ֧��ȫ������ ��Χ1-120��
    WORD    wTrackHoldTime;     // �������ٳ���ʱ��  ��Χ0-300��
    BYTE    byTrackMode;        //  ���� IPDOME_TRACK_MODE
    BYTE	 byPreDirection;	// ���ٷ���Ԥ�� 0-������ 1-����
    BYTE 	 byTrackSmooth;	    // ��������  0-������ 1-����
    BYTE	 byZoomAdjust;	// ����ϵ������ �μ��±�
    BYTE	byMaxTrackZoom;	//�����ٱ���ϵ��,0-��ʾĬ�ϱ���ϵ��,�ȼ�6-�궨ֵ*1.0(Ĭ��),1-5Ϊ��С�궨ֵ��ֵԽС����С�ı���Խ��,7-15Ϊ�Ŵ�ֵԽ�󣬷Ŵ�ı���Խ��
    BYTE   byRes[11];          //  �����ֽ�                
}NET_DVR_TRACK_PARAMCFG, *LPNET_DVR_TRACK_PARAMCFG;

// �����о����
typedef struct tagNET_DVR_DOME_MOVEMENT_PARAM
{
    WORD wMaxZoom;   // ��������ϵ��
    BYTE    byRes[42];  // �����ֽ�
}NET_DVR_DOME_MOVEMENT_PARAM, *LPNET_DVR_DOME_MOVEMENT_PARAM;

/********************************���ܽ�ͨ�¼� begin****************************************/
#define  MAX_REGION_NUM			8       // �����б������Ŀ
#define  MAX_TPS_RULE			8       // ������������Ŀ
#define  MAX_AID_RULE			8      // ����¼�������Ŀ
#define  MAX_LANE_NUM			8		// ��󳵵���Ŀ

//��ͨ�¼����ͣ�
typedef enum tagTRAFFIC_AID_TYPE
{
    CONGESTION          = 0x01,    //ӵ��
    PARKING             = 0x02,    //ͣ��  
    INVERSE             = 0x04,    //����
    PEDESTRIAN          = 0x08,    //����                      
    DEBRIS              = 0x10,    //������ ��������Ƭ 
    SMOKE                = 0x20     //����  
}TRAFFIC_AID_TYPE;

typedef enum tagTRAFFIC_SCENE_MODE
{
	FREEWAY = 0,	//  ���ٻ��ⳡ��
	TUNNEL,         //  �����������
	BRIDGE          //  ������������
}TRAFFIC_SCENE_MODE;

typedef enum tagITS_ABILITY_TYPE
{
    ITS_CONGESTION_ABILITY = 0x01,      //ӵ��
    ITS_PARKING_ABILITY = 0x02,      //ͣ��  
    ITS_INVERSE_ABILITY                = 0x04,      //����
    ITS_PEDESTRIAN_ABILITY             = 0x08,      //����                      
    ITS_DEBRIS_ABILITY                 = 0x10,      //������ ��������Ƭ
    ITS_SMOKE_ABILITY                    = 0x20,      //����-���

    ITS_LANE_VOLUME_ABILITY            = 0x010000,  //��������
    ITS_LANE_VELOCITY_ABILITY          = 0x020000,  //����ƽ���ٶ�
    ITS_TIME_HEADWAY_ABILITY           = 0x040000,  //��ͷʱ��
    ITS_SPACE_HEADWAY_ABILITY          = 0x080000,  //��ͷ���
    ITS_TIME_OCCUPANCY_RATIO_ABILITY   = 0x100000,  //����ռ���ʣ���ʱ����)
    ITS_SPACE_OCCUPANCY_RATIO_ABILITY  = 0x200000,  //����ռ���ʣ��ٷֱȼ��㣨�ռ���)
    ITS_LANE_QUEUE_ABILITY             = 0x400000   //�Ŷӳ���
}ITS_ABILITY_TYPE;

// ��ͨͳ�Ʋ���
typedef enum tagITS_TPS_TYPE
{
    LANE_VOLUME           = 0x01,    //��������
    LANE_VELOCITY         = 0x02,    //�����ٶ�
    TIME_HEADWAY          = 0x04,    //��ͷʱ��
    SPACE_HEADWAY         = 0x08,    //��ͷ���
    TIME_OCCUPANCY_RATIO  = 0x10,    //����ռ���� (ʱ����)
    SPACE_OCCUPANCY_RATIO = 0x20,    //����ռ���ʣ��ٷֱȼ���(�ռ���)
    QUEUE                 = 0x40     //�Ŷӳ���
}ITS_TPS_TYPE; 

typedef struct tagNET_DVR_REGION_LIST 
{
	DWORD	dwSize;	// �ṹ���С
	BYTE    byNum;      // �������
	BYTE    byRes1[3];    // �����ֽ�
	NET_VCA_POLYGON struPolygon[MAX_REGION_NUM]; // ����
	BYTE	byRes2[20];	// �����ֽ�
}NET_DVR_REGION_LIST,*LPNET_DVR_REGION_LIST;


// ����ṹ��
typedef struct tagNET_DVR_DIRECTION
{
    NET_VCA_POINT struStartPoint;   // ������ʼ��
    NET_VCA_POINT struEndPoint;     // ��������� 
}NET_DVR_DIRECTION, *LPNET_DVR_DIRECTION;

// ��������
typedef struct tagNET_DVR_ONE_LANE
{
	BYTE	byEnable; // �����Ƿ�����
	BYTE	byRes1[11];	// �����ֽ�
	BYTE    byLaneName[NAME_LEN];       // ������������
	NET_DVR_DIRECTION struFlowDirection;	// �����ڳ�������
	NET_VCA_POLYGON struPolygon;		// ��������
}NET_DVR_ONE_LANE, *LPNET_DVR_ONE_LANE;

// ��������
typedef struct tagNET_DVR_LANE_CFG
{
	DWORD	dwSize;	// �ṹ���С
	NET_DVR_ONE_LANE struLane[MAX_LANE_NUM];	// �������� �����±���Ϊ����ID��
	BYTE	byRes1[40];	 // �����ֽ�
}NET_DVR_LANE_CFG, *LPNET_DVR_LANE_CFG;

// ��ͨ�¼�����
typedef struct tagNET_DVR_AID_PARAM
{
	WORD    wParkingDuration;       // ͣ������ʱ�� 10-120s
	WORD    wPedestrianDuration;    // ���˳���ʱ�� 1-120s
	WORD    wDebrisDuration;        // ���������ʱ�� 10-120s
	WORD    wCongestionLength;      // ӵ�³�����ֵ  ��Χ��5-200���ף�
	WORD    wCongestionDuration;    // ӵ�³������� 10-120s
	WORD    wInverseDuration;       // ���г���ʱ�� 1-10s
	WORD    wInverseDistance;       // ���о�����ֵ ��λm ��Χ[2-100] Ĭ�� 10��
	WORD    wInverseAngleTolerance; // ����Ƕ�ƫ�� 90-180��  ��������������ļн�
	BYTE    byRes1[28];             //  �����ֽ�
}NET_DVR_AID_PARAM, *LPNET_DVR_AID_PARAM;

// ������ͨ�¼�����ṹ��
typedef struct tagNET_DVR_ONE_AID_RULE
{   
    BYTE    byEnable;   // �Ƿ������¼�����
    BYTE    byRes1[3];  // �����ֽ�
    BYTE    byRuleName[NAME_LEN];   // �������� 
    DWORD   dwEventType;    // ��ͨ�¼�������� TRAFFIC_AID_TYPE
    NET_VCA_SIZE_FILTER struSizeFilter; // �ߴ������
    NET_VCA_POLYGON     struPolygon;    // ��������
    NET_DVR_AID_PARAM struAIDParam; //  �¼�����
    NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
    NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
	BYTE byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    BYTE    byRes2[20];
}NET_DVR_ONE_AID_RULE, *LPNET_DVR_ONE_AID_RULE;

// ��ͨ�¼�����
typedef struct tagNET_DVR_AID_RULECFG
{
    DWORD   dwSize;     // �ṹ���С 
    BYTE    byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
    BYTE    byRes1[3];  // �����ֽ�
    NET_DVR_JPEGPARA struPictureParam; 		//ͼƬ���ṹ
    NET_DVR_ONE_AID_RULE  struOneAIDRule[MAX_AID_RULE];
    BYTE    byRes2[32];
}NET_DVR_AID_RULECFG, *LPNET_DVR_AID_RULECFG;

// ��ͨͳ�Ʋ����ṹ��
typedef struct tagNET_DVR_ONE_TPS_RULE
{
    BYTE    byEnable;       // �Ƿ�ʹ�ܳ�����ͨ�������
	BYTE	byLaneID;		// ����ID
    BYTE    byRes1[2];
    DWORD   dwCalcType;     // ͳ�Ʋ�������ITS_TPS_TYPE
    NET_VCA_SIZE_FILTER struSizeFilter; // �ߴ������ 
    NET_VCA_POLYGON struVitrualLoop;    // ������Ȧ
    NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
    NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	//����ʽ һ��Ϊ�����Ƿ��ϴ����ģ��������ܲ���Ҫ
    BYTE    byRes2[20];  // �����ֽ�
}NET_DVR_ONE_TPS_RULE, *LPNET_DVR_ONE_TPS_RULE;

// ��ͨ����ͳ�ƹ������ýṹ��
typedef struct tagNET_DVR_TPS_RULECFG
{
	DWORD   dwSize;              // �ṹ��С
	NET_DVR_ONE_TPS_RULE struOneTpsRule[MAX_TPS_RULE]; // �±��Ӧ��ͨ����ID
	BYTE    byRes2[40];     // �����ֽ�
}NET_DVR_TPS_RULECFG, *LPNET_DVR_TPS_RULECFG;

// ��ͨ�¼���Ϣ
typedef struct tagNET_DVR_AID_INFO
{
    BYTE            byRuleID;   // ������ţ�Ϊ�������ýṹ�±꣬0-16
    BYTE            byRes1[3];
    BYTE            byRuleName[NAME_LEN]; //  ��������
    DWORD           dwAIDType;  // �����¼�����
    NET_DVR_DIRECTION   struDirect; // ����ָ������   
    BYTE            byRes2[40];  // �����ֽ� 
}NET_DVR_AID_INFO, *LPNET_DVR_AID_INFO;

// ��ͨ�¼����� 
typedef struct tagNET_DVR_AID_ALARM
{
    DWORD               dwSize;         // �ṹ����
    DWORD               dwRelativeTime;	// ���ʱ��
    DWORD               dwAbsTime;		// ����ʱ��
    NET_VCA_DEV_INFO  	struDevInfo;	// ǰ���豸��Ϣ
    NET_DVR_AID_INFO    struAIDInfo;    // ��ͨ�¼���Ϣ
    DWORD               dwPicDataLen;   // ����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����
    BYTE                *pImage;        // ָ��ͼƬ��ָ�� 
    BYTE                byRes[40];      // �����ֽ�  
}NET_DVR_AID_ALARM, *LPNET_DVR_AID_ALARM;

// �������нṹ�� 
typedef struct tagNET_DVR_LANE_QUEUE
{
    NET_VCA_POINT   struHead;       //����ͷ
    NET_VCA_POINT   struTail;       //����β
    DWORD           dwLength;      //ʵ�ʶ��г��� ��λΪ�� [0-500]
}NET_DVR_LANE_QUEUE, *LPNET_DVR_LANE_QUEUE; 

typedef enum tagTRAFFIC_DATA_VARY_TYPE
{
    NO_VARY,         //�ޱ仯 
    VEHICLE_ENTER,   //��������������Ȧ
    VEHICLE_LEAVE,   //�����뿪������Ȧ 
    UEUE_VARY       //���б仯             
}TRAFFIC_DATA_VARY_TYPE; 

typedef struct tagNET_DVR_LANE_PARAM
{
    BYTE    byRuleName[NAME_LEN];                 //������������ 
    BYTE    byRuleID;               // ������ţ�Ϊ�������ýṹ�±꣬0-7 
    BYTE    byVaryType;             // ������ͨ�����仯���� ���� TRAFFIC_DATA_VARY_TYPE
	BYTE	byLaneType;			// �������л�����
	BYTE	byRes1;
    DWORD    dwLaneVolume;	// �������� ��ͳ���ж��ٳ���ͨ��
    DWORD   dwLaneVelocity;      //�����ٶȣ��������
    DWORD   dwTimeHeadway ;      //��ͷʱ�࣬�������
    DWORD   dwSpaceHeadway;      //��ͷ��࣬����������
    float   fSpaceOccupyRation; //����ռ���ʣ��ٷֱȼ��㣨�ռ���)
    NET_DVR_LANE_QUEUE  struLaneQueue;         //�������г���
    NET_VCA_POINT       struRuleLocation;     //��Ȧ��������ĵ�λ��
    BYTE    byRes2[32];
}NET_DVR_LANE_PARAM, *LPNET_DVR_LANE_PARAM;


typedef struct tagNET_DVR_TPS_INFO
{
    DWORD   dwLanNum;   // ��ͨ�����ĳ�����Ŀ
    NET_DVR_LANE_PARAM  struLaneParam[MAX_TPS_RULE];
}NET_DVR_TPS_INFO, *LPNET_DVR_TPS_INFO;

typedef struct tagNET_DVR_TPS_ALARM
{
    DWORD dwSize;   // �ṹ���С
    DWORD       dwRelativeTime;				// ���ʱ��
    DWORD       dwAbsTime;						// ����ʱ��
    NET_VCA_DEV_INFO  	struDevInfo;		// ǰ���豸��Ϣ
    NET_DVR_TPS_INFO  struTPSInfo;     // ��ͨ�¼���Ϣ
	BYTE        byRes1[32];         // �����ֽ�
}NET_DVR_TPS_ALARM, *LPNET_DVR_TPS_ALARM;

// ������������ 
typedef struct tagNET_DVR_FACEDETECT_RULECFG
{
    DWORD          dwSize;              // �ṹ���С
    BYTE           byEnable;            // �Ƿ�����
    BYTE           byEventType;			//�����¼����ͣ� 0-�쳣����; 1-��������;2-�쳣����&��������;
	BYTE           byUpLastAlarm;       //2011-04-06 �Ƿ����ϴ����һ�εı���
	BYTE           byUpFacePic; //�Ƿ��ϴ�������ͼ��0-��1-��	
    BYTE           byRuleName[NAME_LEN];
    NET_VCA_POLYGON     struVcaPolygon;    // ��������������
    BYTE           byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
    BYTE           bySensitivity;   // ����������
    WORD            wDuration;      // ������������ʱ����ֵ
    NET_DVR_JPEGPARA    struPictureParam; 		//ͼƬ���ṹ
    NET_VCA_SIZE_FILTER struSizeFilter;         //�ߴ������
    NET_DVR_SCHEDTIME   struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_2];//����ʱ��
    NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
    BYTE           byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE           byPicRecordEnable;  /*2012-3-1�Ƿ�����ͼƬ�洢, 0-������, 1-����*/
    BYTE            byRes2[39];         //�����ֽ�
}NET_DVR_FACEDETECT_RULECFG, *LPNET_DVR_FACEDETECT_RULECFG;

typedef struct tagNET_DVR_FACE_PIPCFG
{	
	BYTE byEnable; //�Ƿ������л�
	BYTE byBackChannel; //����ͨ���ţ����ͨ����
	BYTE byPosition; //����λ�ã�0-����,1-����,2-����,3-����
	BYTE byPIPDiv; //����ϵ��(��������:��廭��)��0-1:4,1-1:9,2-1:16
	BYTE byRes[4];
}NET_DVR_FACE_PIPCFG, *LPNET_DVR_FACE_PIPCFG;

typedef struct tagNET_DVR_FACEDETECT_RULECFG_V41
{
    DWORD dwSize;              // �ṹ���С
    BYTE  byEnable;            // �Ƿ�����
    BYTE  byEventType;			//�����¼����ͣ� 0-�쳣����; 1-��������;2-�쳣����&��������;
	BYTE  byUpLastAlarm;       //2011-04-06 �Ƿ����ϴ����һ�εı���
	BYTE  byUpFacePic; //�Ƿ��ϴ�������ͼ��0-��1-��	
    BYTE  byRuleName[NAME_LEN];
    NET_VCA_POLYGON struVcaPolygon;    // ��������������
    BYTE  byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
    BYTE  bySensitivity;   // ����������
    WORD  wDuration;      // ������������ʱ����ֵ
    NET_DVR_JPEGPARA    struPictureParam; 		//ͼƬ���ṹ
    NET_VCA_SIZE_FILTER struSizeFilter;         //�ߴ������
    NET_DVR_SCHEDTIME   struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30];//����ʱ��
    NET_DVR_HANDLEEXCEPTION_V30 struHandleType;	  //����ʽ 
	BYTE  byRelRecordChan[MAX_CHANNUM_V30];			//����������¼��ͨ��,Ϊ1��ʾ������ͨ��
	BYTE  byPicRecordEnable;  /*2012-10-22�Ƿ�����ͼƬ�洢, 0-������, 1-����*/
	BYTE  byRes1;
	WORD  wAlarmDelay; //2012-10-22���ܱ�����ʱ��0-5s,1-10,2-30s,3-60s,4-120s,5-300s,6-600s
    NET_DVR_FACE_PIPCFG struFacePIP; //2012-11-7���л�����
    BYTE  byRes[28];         //�����ֽ�
}NET_DVR_FACEDETECT_RULECFG_V41, *LPNET_DVR_FACEDETECT_RULECFG_V41;

typedef struct tagNET_DVR_FACEDETECT_ALARM
{
    DWORD  dwSize;     		// �ṹ��С
    DWORD 	dwRelativeTime; // ���ʱ��
    DWORD	dwAbsTime;			// ����ʱ��
    BYTE        byRuleName[NAME_LEN];   // ��������
    NET_VCA_TARGET_INFO  struTargetInfo;	//����Ŀ����Ϣ
    NET_VCA_DEV_INFO  	 struDevInfo;		//ǰ���豸��Ϣ
    DWORD dwPicDataLen;						//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����*/
    BYTE		byAlarmPicType;			// 0-�쳣��������ͼƬ 1- ����ͼƬ,2-�������� 
	BYTE     byPanelChan;        /*2012-3-1����ͨ�����������ͨ��*/
    BYTE byRes1[2];
	DWORD dwFacePicDataLen;			//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����*/
    BYTE   byRes[48];              // �����ֽ�
    BYTE  *pFaceImage; //ָ������ͼָ��
    BYTE  *pImage;   						//ָ��ͼƬ��ָ��
}NET_DVR_FACEDETECT_ALARM, *LPNET_DVR_FACEDETECT_ALARM;

typedef struct tagNET_DVR_EVENT_PARAM_UNION
{
    DWORD   uLen[3];        	// �������СΪ12�ֽ�
    DWORD  dwHumanIn;  	//�����˽ӽ� 0 - ���� 1- ����  
    float       fCrowdDensity;  // ��Ա�ۼ�ֵ
}NET_DVR_EVENT_PARAM_UNION, *LPNET_DVR_EVENT_PARAM_UNION;

// Ŀǰֻ�����������¼�����Ա�ۼ��¼�ʵʱ�����ϴ�
typedef struct tagNET_DVR_EVENT_INFO
{
    BYTE   byRuleID;				// Rule ID
    BYTE   byRes[3];				// �����ֽ�
    BYTE   byRuleName[NAME_LEN];	// ��������
    DWORD       dwEventType;    		// ����VCA_EVENT_TYPE
    NET_DVR_EVENT_PARAM_UNION uEventParam;  // 
}NET_DVR_EVENT_INFO, *LPNET_DVR_EVENT_INFO;

typedef struct tagNET_DVR_EVENT_INFO_LIST
{
    BYTE			byNum;		// �¼�ʵʱ��Ϣ����
    BYTE			byRes1[3];			// �����ֽ�
    NET_DVR_EVENT_INFO struEventInfo[MAX_RULE_NUM];	// �¼�ʵʱ��Ϣ
}NET_DVR_EVENT_INFO_LIST,*LPNET_DVR_EVENT_INFO_LIST;

typedef struct tagNET_DVR_RULE_INFO_ALARM
{
    DWORD 			dwSize;				// �ṹ���С
    DWORD 		dwRelativeTime; 	// ���ʱ��
    DWORD		dwAbsTime;			// ����ʱ��
    NET_VCA_DEV_INFO  	struDevInfo;		// ǰ���豸��Ϣ
    NET_DVR_EVENT_INFO_LIST struEventInfoList;	//�¼���Ϣ�б�
    BYTE			byRes2[40];			// �����ֽ�
}NET_DVR_RULE_INFO_ALARM, *LPNET_DVR_RULE_INFO_ALARM;


/*******************************���ܽ�ͨ�¼� end*****************************************/

#define XXX_MAJOR_VERSION      2

/* �Ӱ汾�ţ������Ż����ֲ��ṹ������ģ���ڼ�������������汾����ʱ���������31 */

#define XXX_SUB_VERSION        3

/* �����汾�ţ�����bug����������31 */

#define XXX_REVISION_VERSION   4

typedef struct tagNET_DVR_VCA_VERSION
{
	WORD    wMajorVersion;		// ���汾��
	WORD    wMinorVersion;		// �ΰ汾��
	WORD    wRevisionNumber;	// ������
	WORD    wBuildNumber;		// �����
	WORD	wVersionYear;		//	�汾����-��
	BYTE	byVersionMonth;		//	�汾����-��
	BYTE	byVersionDay;		//	�汾����-��
	BYTE	byRes[8];			// �����ֽ�
}NET_DVR_VCA_VERSION, *LPNET_DVR_VCA_VERSION;


/******************************���� end***********************************/

/******************************����ʶ�� begin******************************************/
typedef struct tagNET_DVR_PLATE_PARAM
{	
    BYTE    byPlateRecoMode;    //����ʶ���ģʽ,Ĭ��Ϊ1(��Ƶ����ģʽ)
    BYTE    byBelive;		    //�������Ŷ���ֵ, ֻ������Ƶʶ��ʽ, ���ݱ������ӳ̶�����, �󴥷��ʸ߾����, ©���ʸ߾����, ������80-90��Χ��
    BYTE    byRes[22];          //�����ֽ�
}NET_DVR_PALTE_PARAM, *LPNET_DVR_PALTE_PARAM;

typedef struct tagNET_DVR_PLATECFG
{	
    DWORD		dwSize;
    DWORD    dwEnable;				           /* �Ƿ�������Ƶ����ʶ�� 0���� 1���� */
    BYTE    byPicProType;	//����ʱͼƬ����ʽ 0-������ ��0-�ϴ�
    BYTE    byRes1[3];  // �����ֽ�
    NET_DVR_JPEGPARA struPictureParam; 		//ͼƬ���ṹ
    NET_DVR_PALTE_PARAM struPlateParam;   // ����ʶ���������
    NET_DVR_HANDLEEXCEPTION struHandleType;	   /* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];//����ʱ��
	BYTE    byRelRecordChan[MAX_CHANNUM];        //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    BYTE   byRes[20];   // �����ֽ�
}NET_DVR_PLATECFG, *LPNET_DVR_PLATECFG;

// ����ʶ�����ӽṹ
typedef struct tagNET_DVR_PLATE_INFO
{
    BYTE  byPlateType;					//��������
    BYTE  byColor;						//������ɫ
    BYTE  byBright;						//��������
    BYTE  byLicenseLen;					//�����ַ�����
    BYTE  byEntireBelieve;					//�������Ƶ����Ŷȣ�-100
    BYTE  byRes[35];					//����
    NET_VCA_RECT	struPlateRect;		//����λ��
    char sLicense[MAX_LICENSE_LEN];		//���ƺ���
    BYTE byBelieve[MAX_LICENSE_LEN];	//����ʶ���ַ������Ŷȣ����⵽����"��A12345", ���Ŷ�Ϊ,20,30,40,50,60,70�����ʾ"��"����ȷ�Ŀ�����ֻ��%��"A"�ֵ���ȷ�Ŀ�������%
}NET_DVR_PLATE_INFO, *LPNET_DVR_PLATE_INFO;

typedef struct tagNET_DVR_PLATERECO_RESULE
{
    DWORD dwSize;
    DWORD    dwRelativeTime;				//���ʱ��
    DWORD    dwAbsTime;						//����ʱ��
    NET_VCA_DEV_INFO struDevInfo;           // ǰ���豸��Ϣ
    NET_DVR_PLATE_INFO struPlateInfo;
    DWORD dwPicDataLen;						//����ͼƬ�ĳ��� Ϊ0��ʾû��ͼƬ������0��ʾ�ýṹ�������ͼƬ����*/
    DWORD dwRes[4];							//����������Ϊ0
    BYTE  *pImage;   						//ָ��ͼƬ��ָ��
}NET_DVR_PLATERECO_RESULE, *LPNET_DVR_PLATERECO_RESULE;

/******************************����ʶ�� end******************************************/

/*******************************��Ƶ�ۺ�ƽ̨***********************************/
typedef struct 
{
    NET_DVR_TIME strLogTime;
    DWORD	dwMajorType;	//Main type 1-alarm; 2-abnormal; 3-operation; 0xff-all 
    DWORD	dwMinorType;	//Hypo-Type 0-all;
    BYTE	sPanelUser[MAX_NAMELEN]; //user ID for local panel operation
    BYTE	sNetUser[MAX_NAMELEN];//user ID for network operation
    NET_DVR_IPADDR	struRemoteHostAddr;//remote host IP
    DWORD	dwParaType;//parameter type
    DWORD	dwChannel;//channel number
    DWORD	dwDiskNumber;//HD number
    DWORD	dwAlarmInPort;//alarm input port
    DWORD	dwAlarmOutPort;//alarm output port
    DWORD   dwInfoLen;
    BYTE    byDevSequence;//��λ��
    BYTE    byMacAddr[MACADDR_LEN];//MAC��ַ,6
    BYTE    sSerialNumber[SERIALNO_LEN];//���кţ�48
    char    sInfo[LOG_INFO_LEN - SERIALNO_LEN - MACADDR_LEN - 1 ];
}NET_DVR_LOG_MATRIX, *LPNET_DVR_LOG_MATRIX;

//2009-11-21 ��Ƶ�ۺ�ƽ̨
typedef struct tagVEDIOPLATLOG
{
    BYTE bySearchCondition;//����������0-����λ��������1-�����к�������2-��MAC��ַ��������
	//��λ�ţ�0-79����Ӧ��ϵͳ�Ĳ�λ�ţ�
    //0xff����ʾ�������е���־������78K������6467��
    //0xfe����ʾ����78K�ϵ���־��0xfd��������־��0xfc������־����
    BYTE byDevSequence;
    BYTE  sSerialNumber[SERIALNO_LEN];//���кţ�48
    BYTE  byMacAddr[MACADDR_LEN];//MAC��ַ,6
} NET_DVR_VEDIOPLATLOG, *LPNET_DVR_VEDIOPLATLOG;

typedef struct tagNET_DVR_CODESYSTEMABILITY
{
    DWORD dwSize;
    DWORD dwAbilityVersion;//�������汾�ţ���16λ��ʾ���汾����16λ��ʾ�ΰ汾 
    DWORD dwSupportMaxVideoFrameRate;//��λ(K)
	/*��λ:
	0:��ʱ¼��
	1:��ʱ|�¼�����¼�� 
	2:�ƶ����¼��
	3:���翪��������¼��
	4:�ƶ����|���翪��������¼��
	5:�ƶ����&���翪��������¼��
	6:�ܽ��������¼��
	7:������ⴥ��¼��
	8:����ʶ�𴥷�¼��
	9:�ֶ�¼��*/
    DWORD dwSupportRecordType;
    BYTE  bySupportLinkMode;//��λ:��0λ:��ʾ����������1λ:��ʾ������
	BYTE  bySupportStringRow;//֧���ַ���������
    BYTE  bySupportHideNum;//֧����Ƶ�ڵ�����
    BYTE  byRes1;
	/*0-DCIF��1-CIF��2-QCIF��3-4CIF��4-2CIF��6-QVGA(320*240), 16-VGA��17-UXGA��18-SVGA��19-HD720p��20-XVGA��21-HD900p��22-SXGAp��27-HD1080i��28-2560*1920��29-1600*304��30-2048*1536��31-2448*2048��32-2448*1200��33-2448*800 ��34-XGA��1024x768����35-SXGA��1280x1024��*/
	BYTE  byMainStreamSupportResolution[8];//������֧�ֵķֱ��ʣ���λ
	BYTE  bySubStreamSupportResolution[8];//������֧�ֵķֱ��ʣ���λ
	BYTE  byEventStreamSupportResolution[8];//�¼���������֧�ֵķֱ��ʣ���λ
    BYTE  byNotSupportPreview;//�Ƿ�֧��Ԥ��,1-��֧�֣�0-֧��
    BYTE  byNotSupportStorage;//�Ƿ�֧�ִ洢,1-��֧�֣�0-֧��
    BYTE  byRes2[98];//����		
}NET_DVR_CODESYSTEMABILITY, *LPNET_DVR_CODESYSTEMABILITY;

/********************************end*******************************************/

/******************************ץ�Ļ�*******************************************/
//IO��������
typedef struct tagNET_DVR_IO_INCFG
{
    DWORD   dwSize;
    BYTE    byIoInStatus;//�����IO��״̬��0-�½��أ�1-�����أ�2-�����غ��½��أ�3-�ߵ�ƽ��4-�͵�ƽ
    BYTE	byRes[3];//�����ֽ�
}NET_DVR_IO_INCFG, *LPNET_DVR_IO_INCFG;

//IO�������
typedef struct tagNET_DVR_IO_OUTCFG
{
    DWORD   dwSize;
    BYTE    byDefaultStatus;//IOĬ��״̬��0-�͵�ƽ��1-�ߵ�ƽ 
    BYTE    byIoOutStatus;//IO��Чʱ״̬��0-�͵�ƽ��1-�ߵ�ƽ��2-����
    WORD    wAheadTime;//���IO��ǰʱ�䣬��λus
    DWORD   dwTimePluse;//������ʱ�䣬��λus
    DWORD   dwTimeDelay;//IO��Ч����ʱ�䣬��λus
	BYTE    byFreqMulti;		//��Ƶ����ֵ��Χ[1,15]
	BYTE    byDutyRate;		//ռ�ձȣ�[0,40%]
    BYTE    byRes[2];
}NET_DVR_IO_OUTCFG, *LPNET_DVR_IO_OUTCFG;

//���������
typedef struct tagNET_DVR_FLASH_OUTCFG
{
    DWORD  dwSize;
    BYTE   byMode;//�������˸ģʽ��0-������1-����2-��������3-����
    BYTE   byRelatedIoIn;//����ƹ���������IO�ţ�������ʱ�˲�����Ч��
	BYTE   byRecognizedLane;  /*������IO�ţ���λ��ʾ��bit0��ʾIO1�Ƿ������0-��������1-����*/
	BYTE   byDetectBrightness;/*�Զ��������ʹ�������0-����⣻1-���*/
	BYTE   byBrightnessThreld;/*ʹ�������������ֵ����Χ[0,100],������ֵ��*/
    BYTE   byStartHour;		//��ʼʱ��-Сʱ,ȡֵ��Χ0-23
	BYTE   byStartMinute;		//��ʼʱ��-��,ȡֵ��Χ0-59
	BYTE   byEndHour;		 	//����ʱ��-Сʱ,ȡֵ��Χ0-23
	BYTE   byEndMinute;		//����ʱ��-��,ȡֵ��Χ0-59
	BYTE   byFlashLightEnable;	//���������ʱ��ʹ��:0-��;1-��
	BYTE   byRes[2];
}NET_DVR_FLASH_OUTCFG, *LPNET_DVR_FLASH_OUTCFG;

//���̵ƹ��ܣ�2��IO����һ�飩
typedef struct tagNET_DVR_LIGHTSNAPCFG
{
    DWORD   dwSize;
    BYTE	byLightIoIn;//���̵Ƶ�IO ��
    BYTE	byTrigIoIn;//������IO��
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE	byTrafficLight; //0-�ߵ�ƽ��ƣ��͵�ƽ�̵ƣ�1-�ߵ�ƽ�̵ƣ��͵�ƽ���
    BYTE 	bySnapTimes1; //���ץ�Ĵ���1��0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE 	bySnapTimes2; //�̵�ץ�Ĵ���2��0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE	byRes1[2];
    WORD	wIntervalTime1[MAX_INTERVAL_NUM];//������ļ��ʱ�䣬ms
    WORD	wIntervalTime2[MAX_INTERVAL_NUM];//�̵����ļ��ʱ�䣬ms
    BYTE	byRecord;//���������¼���־��0-��¼��1-¼��
    BYTE	bySessionTimeout;//���������¼��ʱʱ�䣨�룩
    BYTE	byPreRecordTime;//�����¼��Ƭ��Ԥ¼ʱ��(��)
    BYTE	byVideoDelay;//�����¼��Ƭ����ʱʱ�䣨�룩
    BYTE	byRes2[32];//�����ֽ�
}NET_DVR_LIGHTSNAPCFG, *LPNET_DVR_LIGHTSNAPCFG;

//���ٹ���(2��IO����һ�飩
typedef struct tagNET_DVR_MEASURESPEEDCFG
{
    DWORD   dwSize;
    BYTE	byTrigIo1;   //���ٵ�1��Ȧ
    BYTE	byTrigIo2;   //���ٵ�2��Ȧ
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE	byTestSpeedTimeOut;//����ģʽ��ʱʱ�䣬��λs
    DWORD   dwDistance;//��Ȧ����,cm
    BYTE	byCapSpeed;//����ģʽ�����ٶȣ���λkm/h
    BYTE	bySpeedLimit;//����ֵ����λkm/h
    BYTE 	bySnapTimes1; //��Ȧ1ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE 	bySnapTimes2; //��Ȧ2ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5�� 
    WORD	wIntervalTime1[MAX_INTERVAL_NUM];//��Ȧ1���ļ��ʱ�䣬ms
    WORD	wIntervalTime2[MAX_INTERVAL_NUM];//��Ȧ2���ļ��ʱ�䣬ms
    BYTE	byRes[32];//�����ֽ�
}NET_DVR_MEASURESPEEDCFG, *LPNET_DVR_MEASURESPEEDCFG;

//��Ƶ��������
typedef struct tagNET_DVR_VIDEOEFFECT
{
    BYTE byBrightnessLevel; /*0-100*/
    BYTE byContrastLevel; /*0-100*/
    BYTE bySharpnessLevel; /*0-100*/
    BYTE bySaturationLevel; /*0-100*/
    BYTE byHueLevel; /*0-100,��������*/
    BYTE byEnableFunc; //ʹ�ܣ���λ��ʾ��bit0-SMART IR(������)��bit1-���ն�,bit2-ǿ������ʹ�ܣ�0-��1-��
	BYTE byLightInhibitLevel; //ǿ�����Ƶȼ���[1-3]��ʾ�ȼ�
	BYTE byGrayLevel; //�Ҷ�ֵ��0-[0-255]��1-[16-235]
}NET_DVR_VIDEOEFFECT, *LPNET_DVR_VIDEOEFFECT;

//��������
typedef struct tagNET_DVR_GAIN
{
    BYTE byGainLevel; /*���棺0-100*/
    BYTE byGainUserSet; /*�û��Զ������棻0-100������ץ�Ļ�����CCDģʽ�µ�ץ������*/
    BYTE byRes[2];
    DWORD dwMaxGainValue;/*�������ֵ����λdB*/
}NET_DVR_GAIN, *LPNET_DVR_GAIN;

//��ƽ������
typedef struct tagNET_DVR_WHITEBALANCE
{
    BYTE byWhiteBalanceMode; /*0�ֶ���ƽ��; 1�Զ���ƽ��1����ΧС��; 2 �Զ���ƽ��2����Χ��2200K-15000K��;3������ƽ�⣬4-�׳�ƣ�5-ů��ƣ�6-��Ȼ�⣬7-�չ��*/
    BYTE byWhiteBalanceModeRGain; /*�ֶ���ƽ��ʱ��Ч���ֶ���ƽ�� R����*/
    BYTE byWhiteBalanceModeBGain; /*�ֶ���ƽ��ʱ��Ч���ֶ���ƽ�� B����*/
    BYTE byRes[5];
}NET_DVR_WHITEBALANCE, *LPNET_DVR_WHITEBALANCE;

//�ع����
typedef struct tagNET_DVR_EXPOSURE
{
    BYTE  byExposureMode; /*0 �ֶ��ع� 1�Զ��ع�*/
	BYTE  byAutoApertureLevel; /* �Զ���Ȧ������, 0-10 */ 
    BYTE  byRes[2];
    DWORD dwVideoExposureSet; /* �Զ�����Ƶ�ع�ʱ�䣨��λus��*//*ע:�Զ��ع�ʱ��ֵΪ�ع�����ֵ*/        
    DWORD dwExposureUserSet; /* �Զ����ع�ʱ��,��ץ�Ļ���Ӧ��ʱ��CCDģʽʱ��ץ�Ŀ����ٶ�*/   
    DWORD dwRes;    
} NET_DVR_EXPOSURE, *LPNET_DVR_EXPOSURE;

//��̬����
typedef struct tagNET_DVR_WDR
{
    BYTE byWDREnabled; /*��̬��0 dsibale  1 enable 2 auto*/
    BYTE byWDRLevel1; /*0-F*/
    BYTE byWDRLevel2; /*0-F*/
    BYTE byWDRContrastLevel; /*0-100*/
    BYTE byRes[16];
} NET_DVR_WDR, *LPNET_DVR_WDR;

//��ҹת����������
typedef struct tagNET_DVR_DAYNIGHT
{
    BYTE byDayNightFilterType; /*��ҹ�л���0-���죬1-ҹ��2-�Զ���3-��ʱ��4-�������봥��*/
    BYTE bySwitchScheduleEnabled; /*0 dsibale  1 enable,(����)*/
    //��ʱģʽ����
    BYTE byBeginTime; /*��ʼʱ�䣨Сʱ����0-23*/
    BYTE byEndTime; /*����ʱ�䣨Сʱ����0-23*/
    //ģʽ2
    BYTE byDayToNightFilterLevel; //0-7
    BYTE byNightToDayFilterLevel; //0-7
    BYTE byDayNightFilterTime;//(60��)
    //��ʱģʽ����
	BYTE byBeginTimeMin; //��ʼʱ�䣨�֣���0-59
	BYTE byBeginTimeSec; //��ʼʱ�䣨�룩��0-59
	BYTE byEndTimeMin; //����ʱ�䣨�֣���0-59
	BYTE byEndTimeSec; //����ʱ�䣨�룩��0-59
	//�������봥��ģʽ����
    BYTE byAlarmTrigState; //�������봥��״̬��0-���죬1-ҹ��
} NET_DVR_DAYNIGHT, *LPNET_DVR_DAYNIGHT;

//GammaУ��
typedef struct tagNET_DVR_GAMMACORRECT
{
    BYTE byGammaCorrectionEnabled; /*0 dsibale  1 enable*/
    BYTE byGammaCorrectionLevel; /*0-100*/
    BYTE byRes[6];
} NET_DVR_GAMMACORRECT, *LPNET_DVR_GAMMACORRECT;

//���ⲹ������
typedef struct tagNET_DVR_BACKLIGHT
{
    BYTE byBacklightMode; /*���ⲹ��:0 off 1 UP��2 DOWN��3 LEFT��4 RIGHT��5MIDDLE��6�Զ���*/
    BYTE byBacklightLevel; /*0x0-0xF*/
    BYTE byRes1[2];
    DWORD dwPositionX1; //��X����1��
    DWORD dwPositionY1; //��Y����1��
    DWORD dwPositionX2; //��X����2��
    DWORD dwPositionY2; //��Y����2��
    BYTE byRes2[4];
} NET_DVR_BACKLIGHT, *LPNET_DVR_BACKLIGHT;

//���ֽ��빦��
typedef struct tagNET_DVR_NOISEREMOVE
{
    BYTE byDigitalNoiseRemoveEnable; /*0-�����ã�1-��ͨģʽ���ֽ��룬2-ר��ģʽ���ֽ���*/
    BYTE byDigitalNoiseRemoveLevel; /*��ͨģʽ���ֽ��뼶��0x0-0xF*/
	BYTE bySpectralLevel;       /*ר��ģʽ�¿���ǿ�ȣ�0-100*/
    BYTE byTemporalLevel;   /*ר��ģʽ��ʱ��ǿ�ȣ�0-100*/
	BYTE byDigitalNoiseRemove2DEnable;         /* ץ��֡2D���룬0-�����ã�1-���� */	
	BYTE byDigitalNoiseRemove2DLevel;            /* ץ��֡2D���뼶��0-100 */
    BYTE byRes[2];
} NET_DVR_NOISEREMOVE, *LPNET_DVR_NOISEREMOVE;

//CMOSģʽ��ǰ�˾�ͷ����
typedef struct tagNET_DVR_CMOSMODCFG
{
	BYTE byCaptureMod;   //ץ��ģʽ��0-ץ��ģʽ1��1-ץ��ģʽ2
	BYTE byBrightnessGate;//������ֵ
	BYTE byCaptureGain1;   //ץ������1,0-100
	BYTE byCaptureGain2;   //ץ������2,0-100
	DWORD dwCaptureShutterSpeed1;//ץ�Ŀ����ٶ�1
	DWORD dwCaptureShutterSpeed2;//ץ�Ŀ����ٶ�2
	BYTE  byRes[4];
}NET_DVR_CMOSMODECFG, *LPNET_DVR_CMOSMODECFG;

//ǰ�˲�������
typedef struct tagNET_DVR_CAMERAPARAMCFG
{
    DWORD dwSize;
    NET_DVR_VIDEOEFFECT struVideoEffect;/*���ȡ��Աȶȡ����Ͷȡ���ȡ�ɫ������*/    
    NET_DVR_GAIN struGain;/*�Զ�����*/
    NET_DVR_WHITEBALANCE struWhiteBalance;/*��ƽ��*/
    NET_DVR_EXPOSURE struExposure; /*�ع����*/
    NET_DVR_GAMMACORRECT struGammaCorrect;/*GammaУ��*/
    NET_DVR_WDR struWdr;/*��̬*/
    NET_DVR_DAYNIGHT struDayNight;/*��ҹת��*/
    NET_DVR_BACKLIGHT struBackLight;/*���ⲹ��*/
    NET_DVR_NOISEREMOVE struNoiseRemove;/*���ֽ���*/
    BYTE byPowerLineFrequencyMode; /*0-50HZ; 1-60HZ*/
    BYTE byIrisMode; /*0 �Զ���Ȧ 1�ֶ���Ȧ*/    
    BYTE byMirror ;  /* ����0 off��1- leftright��2- updown��3-center */
    BYTE byDigitalZoom;  /*��������:0 dsibale  1 enable*/
    BYTE byDeadPixelDetect;   /*������,0 dsibale  1 enable*/
	BYTE byBlackPwl;/*�ڵ�ƽ���� ,  0-255*/ 
	BYTE byEptzGate;// EPTZ���ر���:0-�����õ�����̨��1-���õ�����̨
	BYTE byLocalOutputGate;//����������ر���0-��������ر�1-����BNC����� 2-HDMI����ر�  
				     //20-HDMI_720P50�����
					 //21-HDMI_720P60�����
					 //22-HDMI_1080I60�����
					 //23-HDMI_1080I50�����
					 //24-HDMI_1080P24�����
					 //25-HDMI_1080P25�����
					 //26-HDMI_1080P30�����
					 //27-HDMI_1080P50�����
			         //28-HDMI_1080P60�����
	BYTE byCoderOutputMode;//������fpga���ģʽ0ֱͨ3���ذ��
	BYTE byLineCoding; //�Ƿ����б��룺0-��1-��
	BYTE byDimmerMode; //����ģʽ��0-���Զ���1-�Զ�
	BYTE byPaletteMode; //��ɫ�壺0-���ȣ�1-���ȣ�2-��ɫ��2������8-��ɫ��8
	BYTE byEnhancedMode; //��ǿ��ʽ��̽�������ܱߣ���0-����ǿ��1-1��2-2��3-3��4-4
	BYTE byDynamicContrastEN;    //��̬�Աȶ���ǿ 0-1
	BYTE byDynamicContrast;    //��̬�Աȶ� 0-100
	BYTE byJPEGQuality;    //JPEGͼ������ 0-100
	NET_DVR_CMOSMODECFG struCmosModeCfg;//CMOSģʽ��ǰ�˲������ã���ͷģʽ����������ȡ
	BYTE byFilterSwitch; //�˲����أ�0-�����ã�1-����
	BYTE byFocusSpeed; //��ͷ�����ٶȣ�0-10
	BYTE byAutoCompensationInterval; //��ʱ�Զ����Ų�����1-120����λ������
	BYTE bySceneMode;  //����ģʽ��0-���⣬1-����
}NET_DVR_CAMERAPARAMCFG, *LPNET_DVR_CAMERAPARAMCFG;

//������ɫ
typedef enum _VCA_PLATE_COLOR_
{
	VCA_BLUE_PLATE  = 0,       //��ɫ����
	VCA_YELLOW_PLATE,          //��ɫ����
	VCA_WHITE_PLATE,          //��ɫ����
	VCA_BLACK_PLATE,           //��ɫ����
	VCA_GREEN_PLATE           //��ɫ����
}VCA_PLATE_COLOR;

//��������
typedef enum _VCA_PLATE_TYPE_
{
	VCA_STANDARD92_PLATE = 0,	//��׼���ó������
	VCA_STANDARD02_PLATE,		//02ʽ���ó��� 
	VCA_WJPOLICE_PLATE,		    //�侯�� 
	VCA_JINGCHE_PLATE,			//����
	STANDARD92_BACK_PLATE, 	    //���ó�˫��β��
	VCA_SHIGUAN_PLATE,          //ʹ�ݳ���
	VCA_NONGYONG_PLATE,         //ũ�ó�
	VCA_MOTO_PLATE              //Ħ�г�
}VCA_PLATE_TYPE;

//������Ϣ
typedef struct tagNET_DVR_VEHICLE_INFO_
{
    DWORD dwIndex;					//�������
    BYTE  byVehicleType;		//��������
    BYTE  byColorDepth;		//������ɫ��ǳ
    BYTE  byColor;					//������ɫ,0-����ɫ��1-��ɫ��2-��ɫ��3-��ɫ��4-��ɫ��5-��ɫ��6-������7-��ɫ��8-��ɫ��9-��ɫ��10-��ɫ��11-��ɫ��12-��ɫ
    BYTE  byRes1;				//����
    WORD  wSpeed;					//��λkm/h
    WORD  wLength;					//ǰһ�����ĳ�����
	BYTE  byIllegalType;           //Υ�����ͣ�0-����;1-����2-����3-���У�,4-�����,5-ѹ������,6-��������7-·��������8-��ռ�ǣ�9-Υ�����
    BYTE  byRes2[3]; //����
	BYTE  byCustomInfo[16];  //�Զ�����Ϣ
	BYTE  byRes3[16];	
}NET_DVR_VEHICLE_INFO, *LPNET_DVR_VEHICLE_INFO;

//���Ƽ����
typedef struct tagNET_DVR_PLATE_RESULT
{
    DWORD   dwSize;						//�ṹ����
    BYTE	byResultType;			//0-��Ƶʶ������1ͼ��ʶ���� 2 ����10Mʱ������·��
	BYTE    byChanIndex;			//ͨ����
    WORD    wAlarmRecordID;	//����¼��ID(���ڲ�ѯ¼�񣬽���byResultTypeΪ2ʱ��Ч)
    DWORD   dwRelativeTime;		//���ʱ���  
    BYTE    byAbsTime[32];		//����ʱ���,yyyymmddhhmmssxxx,e.g.20090810235959999�����룩
    DWORD   dwPicLen;					//ͼƬ����(����ͼ)
    DWORD	dwPicPlateLen;			//����СͼƬ����
    DWORD   dwVideoLen;					//¼�����ݳ���
    BYTE	byTrafficLight;				//0-�Ǻ��̵�ץ�ģ�1-�̵�ʱץ�ģ�2-���ʱץ��
    BYTE    byPicNum;				//���ĵ�ͼƬ���
    BYTE	byDriveChan;				//����������
    BYTE    byRes2;                      //����
    DWORD   dwBinPicLen; //���ƶ�ֵͼ����
	DWORD   dwCarPicLen;//����ԭͼ����
	DWORD   dwFarCarPicLen;  //Զ��ͼ����
	BYTE    *pBuffer3;   //���ƶ�ֵͼ
	BYTE    *pBuffer4;  //����ԭͼ
	BYTE    *pBuffer5;  //Զ��ͼ
	BYTE    byRes3[8];                      //���� 
    NET_DVR_PLATE_INFO  struPlateInfo;    //������Ϣ�ṹ
    NET_DVR_VEHICLE_INFO struVehicleInfo; //������Ϣ
    BYTE	*pBuffer1;   		        // ���ϴ�����ͼƬ(����ͼ)��ָ��ָ��ͼƬ��Ϣ�����ϴ�������Ƶ��ָ��ָ����Ƶ��Ϣ�����������ͼƬ����Ƶ��Ϣ����NULL(DVS��������ͼ)
    BYTE    *pBuffer2;                  // ���ϴ�����ͼƬ(����ͼ)ʱ��ָ����ͼƬ��ָ�루DVS���Ʋ�ͼ��
}NET_DVR_PLATE_RESULT, *LPNET_DVR_PLATE_RESULT;
//�������ͼƬ���ݺ�¼�����ݣ�ֻ��һ�֣�ͼƬ����Ϊ����ͼƬ+����СͼƬ

//ͼ�������Ϣ����        
typedef struct tagNET_DVR_IMAGEOVERLAYCFG
{
	DWORD		dwSize;
	BYTE		byOverlayInfo;//����ʹ�ܿ��أ�0-�����ӣ�1-����
	BYTE		byOverlayMonitorInfo;//�Ƿ���Ӽ�����Ϣ��0-�����ӣ�1-����
	BYTE		byOverlayTime;//�Ƿ����ʱ�䣬0-�����ӣ�1-����
	BYTE		byOverlaySpeed;//�Ƿ�����ٶȣ�0-�����ӣ�1-����
	BYTE		byOverlaySpeeding;//�Ƿ���ӳ��ٱ�����0-�����ӣ�1-����
	BYTE		byOverlayLimitFlag;//�Ƿ�������ٱ�־��0-�����ӣ�1-����
	BYTE		byOverlayPlate;//�Ƿ���ӳ��ƺţ�0-�����ӣ�1-����
	BYTE		byOverlayColor;//�Ƿ���ӳ�����ɫ��0-�����ӣ�1-����
    BYTE		byOverlayLength;//�Ƿ���ӳ�����0-�����ӣ�1-����
    BYTE		byOverlayType;//�Ƿ���ӳ��ͣ�0-�����ӣ�1-����
    BYTE		byOverlayColorDepth;//�Ƿ���ӳ�����ɫ��ǳ��0-�����ӣ�1-����
    BYTE		byOverlayDriveChan;//�Ƿ���ӳ�����0-�����ӣ�1-����
    BYTE		byOverlayMilliSec; //���Ӻ�����Ϣ 0-�����ӣ�1-����
	BYTE		byOverlayIllegalInfo; //����Υ����Ϣ 0-�����ӣ�1-����
	BYTE        byOverlayRedOnTime;  //���Ӻ������ʱ�� 0-�����ӣ�1-����
	BYTE        byFarAddPlateJpeg;      //Զ��ͼ�Ƿ���ӳ��ƽ�ͼ,0-������,1-����
	BYTE        byNearAddPlateJpeg;      //����ͼ�Ƿ���ӳ��ƽ�ͼ,0-������,1-����
	BYTE		byRes1[3];    //����
	BYTE		byMonitorInfo1[32];    //������Ϣ1
	BYTE		byMonitorInfo2[44]; //������Ϣ2
	BYTE		byRes2[52];    //����
}NET_DVR_IMAGEOVERLAYCFG, *LPNET_DVR_IMAGEOVERLAYCFG;

//��IO����ץ�Ĺ�������
typedef struct tagNET_DVR_SNAPCFG
{
    DWORD   dwSize;
    BYTE	byRelatedDriveWay;//����IO�����ĳ�����
    BYTE 	bySnapTimes; //��Ȧץ�Ĵ�����0-��ץ�ģ���0-���Ĵ�����Ŀǰ���5��  
    WORD	wSnapWaitTime;  //ץ�ĵȴ�ʱ�䣬��λms��ȡֵ��Χ[0,60000]
    WORD	wIntervalTime[MAX_INTERVAL_NUM];//���ļ��ʱ�䣬ms
    BYTE	byRes2[24];//�����ֽ�
}NET_DVR_SNAPCFG, *LPNET_DVR_SNAPCFG;

typedef enum _ITC_MAINMODE_ABILITY_
{
    ITC_MODE_UNKNOW    = 0x0,   //��
	ITC_POST_MODE  = 0x1,  //����ģʽ
	ITC_EPOLICE_MODE      = 0x2,  //�羯ģʽ
	ITC_POSTEPOLICE_MODE  = 0x4  //��ʽ�羯ģʽ
}ITC_MAINMODE_ABILITY;

typedef enum _ITC_RECOG_REGION_TYPE_
{
    ITC_REGION_RECT    = 0x0,   //����
	ITC_REGION_POLYGON  = 0x1,  //�����
}ITC_RECOG_REGION_TYPE;

typedef struct tagNET_DVR_SNAP_ABILITY
{
    DWORD dwSize;
    BYTE  byIoInNum;//IO�������
    BYTE  byIoOutNum;//IO�������
    BYTE  bySingleSnapNum;//��IO��������
    BYTE  byLightModeArrayNum;//���̵�ģʽ����
    BYTE  byMeasureModeArrayNum;//����ģʽ����
	BYTE  byPlateEnable; //����ʶ������
	BYTE  byLensMode;//��ͷģʽ0-CCD,1-CMOS
	BYTE  byPreTriggerSupport; //�Ƿ�֧��ԭ����ģʽ��0-֧�֣�1-��֧��
	DWORD dwAbilityType; //֧�ֵĴ���ģʽ��������λ��ʾ�������ITC_MAINMODE_ABILITY
	BYTE  byIoSpeedGroup; //֧�ֵ�IO��������
	BYTE  byIoLightGroup; //֧�ֵ�IO���̵�����
	BYTE  byRecogRegionType; //��ʶ����֧�ֵ����ͣ��������ITC_RECOG_REGION_TYPE
	BYTE  bySupport; //�豸��������λ��ʾ��0-��֧�֣�1-֧��
	// bySupport&0x1����ʾ�Ƿ�֧����չ���ַ���������
    BYTE  byRes[20];
} NET_DVR_SNAP_ABILITY, *LPNET_DVR_SNAP_ABILITY;

typedef struct tagNET_DVR_TRIGCOORDINATE
{
    WORD wTopLeftX; /*��Ȧ���ϽǺ����꣨2���ֽڣ�*/
    WORD wTopLeftY; /*��Ȧ���Ͻ������꣨2���ֽڣ�*/
    WORD wWdith; /*��Ȧ��ȣ�2���ֽڣ�*/
    WORD wHeight; /*��Ȧ�߶ȣ�2���ֽڣ�*/
} NET_DVR_TRIGCOORDINATE, *LPNET_DVR_TRIGCOORDINATE;

typedef enum _PROVINCE_CITY_IDX_
{
	ANHUI_PROVINCE             = 0,              //����
	AOMEN_PROVINCE             = 1,              //����
	BEIJING_PROVINCE           = 2,              //����
	CHONGQING_PROVINCE         = 3,              //����
	FUJIAN_PROVINCE            = 4,              //����
	GANSU_PROVINCE             = 5,              //����
	GUANGDONG_PROVINCE         = 6,              //�㶫
	GUANGXI_PROVINCE           = 7,              //����
	GUIZHOU_PROVINCE           = 8,              //����
	HAINAN_PROVINCE            = 9,              //����
	HEBEI_PROVINCE             = 10,             //�ӱ�
	HENAN_PROVINCE             = 11,             //����
	HEILONGJIANG_PROVINCE      = 12,             //������
	HUBEI_PROVINCE             = 13,             //����
	HUNAN_PROVINCE             = 14,             //����
	JILIN_PROVINCE             = 15,             //����
	JIANGSU_PROVINCE           = 16,             //����
	JIANGXI_PROVINCE           = 17,             //����
	LIAONING_PROVINCE          = 18,             //����
	NEIMENGGU_PROVINCE         = 19,             //���ɹ�
	NINGXIA_PROVINCE           = 20,             //����
	QINGHAI_PROVINCE           = 21,             //�ຣ
	SHANDONG_PROVINCE          = 22,             //ɽ��
	SHANXI_JIN_PROVINCE        = 23,             //ɽ��
	SHANXI_SHAN_PROVINCE       = 24,             //����
	SHANGHAI_PROVINCE          = 25,             //�Ϻ�
	SICHUAN_PROVINCE           = 26,             //�Ĵ�
	TAIWAN_PROVINCE            = 27,             //̨��
	TIANJIN_PROVINCE           = 28,             //���
	XIZANG_PROVINCE            = 29,             //����
	XIANGGANG_PROVINCE         = 30,             //���
	XINJIANG_PROVINCE          = 31,             //�½�
	YUNNAN_PROVINCE            = 32,             //����
	ZHEJIANG_PROVINCE          = 33              //�㽭
}PROVINCE_CITY_IDX;

typedef struct tagNET_DVR_GEOGLOCATION
{
	int iRes[2]; /*����*/
	DWORD dwCity; /*���У����PROVINCE_CITY_IDX */
}NET_DVR_GEOGLOCATION, *LPNET_DVR_GEOGLOCATION;

//����ģʽ
typedef enum _SCENE_MODE_
{
	UNKOWN_SCENE_MODE   = 0,            //δ֪����ģʽ
	HIGHWAY_SCENE_MODE  = 1,            //���ٳ���ģʽ
	SUBURBAN_SCENE_MODE = 2,            //��������ģʽ(����)
	URBAN_SCENE_MODE    = 3,            //��������ģʽ
	TUNNEL_SCENE_MODE   = 4             //�������ģʽ(����)
}SCENE_MODE;

typedef struct tagNET_DVR_VTPARAM
{
    DWORD   dwSize;
	BYTE    byEnable;  /* �Ƿ�ʹ��������Ȧ��0-��ʹ�ã�1-ʹ��*/
	BYTE    byIsDisplay; /* �Ƿ���ʾ������Ȧ��0-����ʾ��1-��ʾ*/
	BYTE    byLoopPos; //��䴥����Ȧ��ƫ��0-���ϣ�1-����
	BYTE    bySnapGain; /*ץ������*/
	DWORD   dwSnapShutter; /*ץ�Ŀ����ٶ�*/
    NET_DVR_TRIGCOORDINATE struTrigCoordinate; //����
    NET_DVR_TRIGCOORDINATE struRes[MAX_VL_NUM];
    BYTE    byTotalLaneNum;/*��Ƶ�����ĳ�����1*/
    BYTE    byPolarLenType; /*ƫ�����ͣ�0������ƫ�񾵣�1����ʩ�͵�ƫ�񾵡�*/
    BYTE	byDayAuxLightMode; /*���츨������ģʽ��0���޸���������1��LED��������2�����������*/
    BYTE	byLoopToCalRoadBright; /*���Լ���·�����ȵĳ���(������Ȧ)*/
    BYTE	byRoadGrayLowTh; /*·�����ȵ���ֵ��ʼ��ֵ1*/
    BYTE	byRoadGrayHighTh; /*·�����ȸ���ֵ��ʼ��ֵ140*/
    WORD	wLoopPosBias; /*��䴥����Ȧλ��30*/
    DWORD   dwHfrShtterInitValue; /*����ͼ���ع�ʱ��ĳ�ʼֵ2000*/
    DWORD   dwSnapShtterInitValue; /*ץ��ͼ���ع�ʱ��ĳ�ʼֵ500*/
    DWORD   dwHfrShtterMaxValue; /*����ͼ���ع�ʱ������ֵ20000*/
    DWORD   dwSnapShtterMaxValue; /*ץ��ͼ���ع�ʱ������ֵ1500*/
    DWORD   dwHfrShtterNightValue; /*�������ͼ���ع�ʱ�������ֵ3000*/
    DWORD   dwSnapShtterNightMinValue; /*���ץ��ͼ���ع�ʱ�����Сֵ3000*/
    DWORD   dwSnapShtterNightMaxValue; /*���ץ��ͼ���ع�ʱ������ֵ5000*/
    DWORD   dwInitAfe; /*����ĳ�ʼֵ200*/
    DWORD   dwMaxAfe; /*��������ֵ400*/
	WORD    wResolutionX;/* �豸��ǰ�ֱ��ʿ�*/
	WORD    wResolutionY;/* �豸��ǰ�ֱ��ʸ�*/
    DWORD   dwGainNightValue; /*������棬Ĭ��ֵ70*/
	DWORD   dwSceneMode; /*����ģʽ�� ���SCENE_MODE */
	DWORD   dwRecordMode; /*¼���־��0-��¼��1-¼��*/
	NET_DVR_GEOGLOCATION struGeogLocation; /*��ַλ��*/
	BYTE    byTrigFlag[MAX_VL_NUM]; /*������־��0-��ͷ������1-��β������2-��ͷ/��β������*/
	BYTE    byTrigSensitive[MAX_VL_NUM];  /*���������ȣ�1-100*/
	BYTE    byRes2[62];
}NET_DVR_VTPARAM, *LPNET_DVR_VTPARAM;

typedef struct tagNET_DVR_SNAPENABLECFG
{
	DWORD dwSize;
	BYTE  byPlateEnable;//�Ƿ�֧�ֳ���ʶ��0-��֧�֣�1-֧��
	BYTE  byRes1[2];   //����
	BYTE  byFrameFlip;   //ͼ���Ƿ�ת 0-����ת��1-��ת
	WORD  wFlipAngle;    //ͼ��ת�Ƕ� 0,90,180,270
	WORD  wLightPhase;   //��λ��ȡֵ��Χ[0, 360]
	BYTE  byLightSyncPower;  //�Ƿ��źŵƵ�Դͬ����0-��ͬ����1-ͬ��
	BYTE  byFrequency;		//�ź�Ƶ��
	BYTE  byUploadSDEnable;  //�Ƿ��Զ��ϴ�SDͼƬ��0-��1-��
    BYTE  byPlateMode; //ʶ��ģʽ����:0-��Ƶ����,1-�ⲿ����
	BYTE  byUploadInfoFTP; //�Ƿ��ϴ�ץ�ĸ�����Ϣ��FTP��0-��1-��
	BYTE  byAutoFormatSD; //�Ƿ��Զ���ʽ��SD����0-��1-��
	BYTE  byRes[58]; //����
}NET_DVR_SNAPENABLECFG, *LPNET_DVR_SNAPENABLECFG;

/*ftp�ϴ�����*/
typedef struct 
{
	DWORD	dwSize;
	DWORD	dwEnableFTP;			/*�Ƿ�����ftp�ϴ�����*/
	char	sFTPIP[16];				/*ftp ������*/
	DWORD	dwFTPPort;				/*ftp�˿�*/
	BYTE	sUserName[NAME_LEN];	/*�û���*/
	BYTE	sPassword[PASSWD_LEN];	/*����*/
	DWORD	dwDirLevel;	/*0 = ��ʹ��Ŀ¼�ṹ��ֱ�ӱ����ڸ�Ŀ¼,1 = ʹ��1��Ŀ¼,2=ʹ��2��Ŀ¼*/
	WORD 	wTopDirMode;	/* һ��Ŀ¼��0x1 = ʹ���豸��,0x2 = ʹ���豸��,0x3 = ʹ���豸ip��ַ��0x4=ʹ�ü���,0x5=ʹ��ʱ��(����)*/
	WORD 	wSubDirMode;	/* ����Ŀ¼��0x1 = ʹ��ͨ����,0x2 = ʹ��ͨ���ţ�,0x3=ʹ��ʱ��(������),0x4=ʹ�ó�����*/
	BYTE    byEnableAnony; //����������0-��1-��
	BYTE 	byRes[23];
}NET_DVR_FTPCFG, *LPNET_DVR_FTPCFG;

/*����������ͼƬ�����Ԫ�� */
#define PICNAME_ITEM_DEV_NAME 	    1		/*�豸��*/
#define PICNAME_ITEM_DEV_NO 	    2		/*�豸��*/
#define PICNAME_ITEM_DEV_IP 	    3		/*�豸IP*/
#define PICNAME_ITEM_CHAN_NAME 	    4		/*ͨ����*/
#define PICNAME_ITEM_CHAN_NO 	    5		/*ͨ����*/
#define PICNAME_ITEM_TIME 		    6		/*ʱ��*/
#define PICNAME_ITEM_CARDNO		    7		/*����*/
#define PICNAME_ITEM_PLATE_NO       8   /*���ƺ���*/
#define PICNAME_ITEM_PLATE_COLOR    9   /*������ɫ*/
#define PICNAME_ITEM_CAR_CHAN       10  /*������*/
#define PICNAME_ITEM_CAR_SPEED      11  /*�����ٶ�*/
#define PICNAME_ITEM_CARCHAN        12  /*����*/
#define PICNAME_ITEM_PIC_NUMBER     13  //ͼƬ���
#define PICNAME_MAXITEM 		    15

//ͼƬ����
typedef struct 
{
	BYTE 	byItemOrder[PICNAME_MAXITEM];	/*	�����鶨���ļ������Ĺ��� */
	BYTE 	byDelimiter;		/*�ָ�����һ��Ϊ'_'*/
}NET_DVR_PICTURE_NAME, *LPNET_DVR_PICTURE_NAME;

/* ����ץͼ����*/
typedef struct 
{
	BYTE	byStrFlag;	/*�������ݿ�ʼ��*/
	BYTE 	byEndFlag;	/*������*/
	WORD	wCardIdx;	/*���������ʼλ*/
	DWORD 	dwCardLen;	/*���ų���*/
	DWORD   dwTriggerPicChans;	/*��������ͨ���ţ���λ���ӵ�1λ��ʼ�ƣ���0x2��ʾ��һͨ��*/
}NET_DVR_SERIAL_CATCHPIC_PARA, *LPNET_DVR_SERIAL_CATCHPIC_PARA;

//DVRץͼ�������ã����ߣ�
typedef struct 
{
	DWORD	dwSize;
	NET_DVR_JPEGPARA struJpegPara[MAX_CHANNUM_V30];	/*ÿ��ͨ����ͼ�����*/
	WORD	wBurstMode;							/*ץͼ��ʽ,��λ����.0x1=�������봥����0x2=�ƶ���ⴥ�� 0x4=232������0x8=485������0x10=���紥��*/
	WORD	wUploadInterval;					/*ͼƬ�ϴ����(��)[0,65535]*/
	NET_DVR_PICTURE_NAME 	struPicNameRule;	/* ͼƬ�������� */
	BYTE	bySaveToHD;		/*�Ƿ񱣴浽Ӳ��*/
	BYTE	byRes1;
	WORD	wCatchInterval;		/*ץͼ���(����)[0,65535]*/
	BYTE	byRes2[12];
	NET_DVR_SERIAL_CATCHPIC_PARA struRs232Cfg;
	NET_DVR_SERIAL_CATCHPIC_PARA struRs485Cfg;
	DWORD dwTriggerPicTimes[MAX_CHANNUM_V30];	/* ÿ��ͨ��һ�δ������մ��� */
	DWORD dwAlarmInPicChanTriggered[MAX_ALARMIN_V30]; /*��������ץ��ͨ��,��λ���ã��ӵ�1λ��ʼ*/
}NET_DVR_JPEGCFG_V30, *LPNET_DVR_JPEGCFG_V30;

//ץ�Ĵ�������ṹ(����)
typedef struct tagNET_DVR_MANUALSNAP
{
    BYTE byRes[24]; //����
}NET_DVR_MANUALSNAP, *LPNET_DVR_MANUALSNAP;

typedef struct tagNET_DVR_SPRCFG    
{
    DWORD dwSize; 
	BYTE byDefaultCHN[MAX_CHJC_NUM]; /*�豸����ʡ�ݵĺ��ּ�д*/
	BYTE byPlateOSD;    /*0:�����ͳ��Ʋ�ɫͼ,1:���ͳ��Ʋ�ɫͼ*/
	BYTE bySendJPEG1;   /*0-�����ͽ���JPEGͼ,1-���ͽ���JPEGͼ*/
	BYTE bySendJPEG2;   /*0-������Զ��JPEGͼ,1-����Զ��JPEGͼ*/
	WORD wDesignedPlateWidth;   /*������ƿ��*/
	BYTE byTotalLaneNum;  /*ʶ��ĳ�����*/
	BYTE byRes1;      /*����*/
	WORD wRecognizedLane;  /*ʶ��ĳ����ţ���λ��ʾ��bit0��ʾ����1�Ƿ�ʶ��0-��ʶ��1-ʶ��*/
    NET_VCA_RECT struLaneRect[MAX_LANERECT_NUM];  /*����ʶ������*/
	DWORD dwRecogMode;  /*ʶ������ͣ�
	    bit0-����ʶ��0-������ʶ��1-����ʶ��(β��ʶ��) �� 
		bit1-����ʶ���С����ʶ��0-С����ʶ��1-����ʶ�� ��
		bit2-������ɫʶ��0-�����ó�����ɫʶ���ڱ���ʶ���С����ʶ��ʱ��ֹ���ã�1-������ɫʶ��
		bit3-ũ�ó�ʶ��0-������ũ�ó�ʶ��1-ũ�ó�ʶ�� 
		bit4-ģ��ʶ��0-������ģ��ʶ��1-ģ��ʶ��
		bit5-֡��λ�򳡶�λ��0-֡��λ��1-����λ��
		bit6-֡ʶ���ʶ��0-֡ʶ��1-��ʶ�� 
		bit7-���ϻ���죺0-���죬1-���� */
	BYTE  bySendPRRaw;       	//�Ƿ���ԭͼ��0-�����ͣ�1-���� 
	BYTE  bySendBinImage;  	//�Ƿ��ͳ��ƶ�ֵͼ��0-�����ͣ�1-���� 
	BYTE  byDelayCapture;  //��ʱץ�Ŀ���,��λ��֡
	BYTE  byUseLED;    //ʹ��LED���ƣ�0-��1-��
	BYTE  byRes2[68];    //����
}NET_DVR_SPRCFG, *LPNET_DVR_SPRCFG;

typedef struct tagNET_DVR_PLCCFG
{
	DWORD dwSize;
	BYTE byPlcEnable;	//�Ƿ����ó������Ȳ�����Ĭ�����ã���0-�رգ�1-���� 
	BYTE byPlateExpectedBright;	//���Ƶ�Ԥ�����ȣ�Ĭ��ֵ50��, ��Χ[0, 100]
	BYTE byRes1[2];	//���� 
	BYTE byTradeoffFlash;     //�Ƿ�������Ƶ�Ӱ��: 0 - ��;  1 - ��(Ĭ��); 
	//ʹ������Ʋ���ʱ, ������Ǽ�������Ƶ�������ǿЧӦ, ����Ҫ��Ϊ1;����Ϊ0
	BYTE byCorrectFactor;     //����ϵ��, ��Χ[0, 100], Ĭ��ֵ50 (��tradeoff_flash�л�ʱ,�ָ�Ĭ��ֵ��
	WORD wLoopStatsEn;  //�Ƿ����Ȧ�����ȣ���λ��ʾ��0-��ͳ�ƣ�1-ͳ��
	BYTE byRes[20];
}NET_DVR_PLCCFG, *LPNET_DVR_PLCCFG;


typedef struct tagNET_DVR_DEVICESTATECFG
{
	DWORD dwSize;
	WORD wPreviewNum; //Ԥ�����Ӹ���
	WORD wFortifyLinkNum; //�������Ӹ���
	NET_DVR_IPADDR struPreviewIP[MAX_LINK];  //Ԥ�����û�IP��ַ
	NET_DVR_IPADDR struFortifyIP[MAX_FORTIFY_NUM]; //�������ӵ��û�IP��ַ
	DWORD dwVideoFrameRate;	//֡�ʣ�0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; 14-15; 15-18; 16-22;
	BYTE byResolution;  	//�ֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5��������,16-VGA��640*480��, 17-UXGA��1600*1200��, 18-SVGA ��800*600��,19-HD720p��1280*720��,20-XVGA,  21-HD900p, 27-HD1080i, 28-2560*1920, 29-1600*304, 30-2048*1536, 31-2448*2048
	BYTE bySnapResolution;  	//ץ�ķֱ���0-DCIF 1-CIF, 2-QCIF, 3-4CIF, 4-2CIF 5��������,16-VGA��640*480��, 17-UXGA��1600*1200��, 18-SVGA ��800*600��,19-HD720p��1280*720��,20-XVGA,  21-HD900p, 27-HD1080i, 28-2560*1920, 29-1600*304, 30-2048*1536, 31-2448*2048
	BYTE byStreamType; //�������ͣ�0-��������1-������
	BYTE byTriggerType; //����ģʽ��0-��Ƶ������1-��ͨ����
	DWORD dwSDVolume;  //SD������
	DWORD dwSDFreeSpace; //SD��ʣ��ռ�
	BYTE byDetectorState[MAX_DRIVECHAN_NUM][MAX_COIL_NUM];  //������״̬��0-δʹ�ã�1-������2-�쳣
	BYTE byDetectorLinkState; //����������״̬��0-δ���ӣ�1-����
	BYTE bySDStatus;    //SD��״̬ 0�����1�����ߣ�2���쳣��3-��sd��
	BYTE byFortifyLevel[MAX_FORTIFY_NUM]; //�����ȼ���0-�ޣ�1-һ�ȼ����ߣ���2-���ȼ����У���3-���ȼ����ͣ�
	BYTE byRes2[116]; //����
}NET_DVR_DEVICESTATECFG, *LPNET_DVR_DEVICESTATECFG;

typedef struct tagNET_DVR_POSTEPOLICECFG
{
	DWORD dwSize;
	DWORD dwDistance;//��Ȧ����,��λcm��ȡֵ��Χ[0,20000]
	DWORD dwLightChan[MAX_SIGNALLIGHT_NUM];	//�źŵ�ͨ����
	BYTE  byCapSpeed;//��־���٣���λkm/h��ȡֵ��Χ[0,255]
	BYTE  bySpeedLimit;//����ֵ����λkm/h��ȡֵ��Χ[0,255]
	BYTE  byTrafficDirection;//��������0-�ɶ�������1-�����򶫣�2-�����򱱣�3-�ɱ�����
	BYTE  byRes1; //����
	WORD  wLoopPreDist;        /*�����ӳپ��� ����λ������*/
	WORD  wTrigDelay;             /*����Ӳ��ʱʱ�� ����λ������*/
	BYTE  byRes[124];//�����ֽ�
}NET_DVR_POSTEPOLICECFG, *LPNET_DVR_POSTEPOLICECFG;
/***************************** end *********************************************/

#define IPC_PROTOCOL_NUM      50   //ipc Э��������

//Э������
typedef struct tagNET_DVR_PROTO_TYPE
{ 
    DWORD dwType;               /*ipcЭ��ֵ*/    
    BYTE  byDescribe[DESC_LEN]; /*Э�������ֶ�*/    
}NET_DVR_PROTO_TYPE, LPNET_DVR_PROTO_TYPE;

//Э���б�
typedef struct tagNET_DVR_IPC_PROTO_LIST
{    
	DWORD   dwSize; 
	DWORD   dwProtoNum;           /*��Ч��ipcЭ����Ŀ*/   
    NET_DVR_PROTO_TYPE struProto[IPC_PROTOCOL_NUM];   /*��Ч��ipcЭ��*/    
    BYTE    byRes[8];
}NET_DVR_IPC_PROTO_LIST, *LPNET_DVR_IPC_PROTO_LIST;

//������������
typedef struct tagNET_DVR_SMART_SEARCH_PARAM
{
	BYTE	  byChan;					//ͨ����
    BYTE      byRes1[3];
	NET_DVR_TIME struStartTime;		//¼��ʼ��ʱ��
	NET_DVR_TIME struEndTime;		//¼��ֹͣ��ʱ��
    BYTE byMotionScope[64][96];		//�������,0-96λ,��ʾ64��,����96*64��С���,Ϊ1��ʾ���ƶ��������,0-��ʾ����
    BYTE  bySensitivity;   			//����������,1	>80%  2 40%~80%  3 1%~40%
	
    BYTE byRes2[11];
}NET_DVR_SMART_SEARCH_PARAM, *LPNET_DVR_SMART_SEARCH_PARAM;

typedef struct tagNET_DVR_SMART_SEARCH_RET
{
	NET_DVR_TIME struStartTime;	//�ƶ���ⱨ����ʼ��ʱ��
	NET_DVR_TIME struEndTime;   //�¼�ֹͣ��ʱ��
	BYTE byRes[64];
}NET_DVR_SMART_SEARCH_RET, *LPNET_DVR_SMART_SEARCH_RET;

// IPSAN �ļ�Ŀ¼����
typedef struct tagNET_DVR_IPSAN_SERACH_PARAM
{
    NET_DVR_IPADDR  struIP;     // IPSAN IP��ַ
    WORD            wPort;      // IPSAN  �˿�
    BYTE            byRes[10];  // �����ֽ�
}NET_DVR_IPSAN_SERACH_PARAM, *LPNET_DVR_IPSAN_SERACH_PARAM;

typedef struct tagNET_DVR_IPSAN_SERACH_RET
{
    BYTE byDirectory[128];  // ���ص��ļ�Ŀ¼
    BYTE byRes[20];
}NET_DVR_IPSAN_SERACH_RET, *LPNET_DVR_IPSAN_SERACH_RET;

//DVR�豸����
typedef struct
{
	DWORD dwSize;
	BYTE sDVRName[NAME_LEN];     //DVR����
	DWORD dwDVRID;				//DVR ID,����ң���� //V1.4(0-99), V1.5(0-255)
	DWORD dwRecycleRecord;		//�Ƿ�ѭ��¼��,0:����; 1:��
	//���²��ɸ���
	BYTE sSerialNumber[SERIALNO_LEN];  //���к�
	DWORD dwSoftwareVersion;			//����汾��,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwSoftwareBuildDate;			//�����������,0xYYYYMMDD
	DWORD dwDSPSoftwareVersion;		    //DSP����汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwDSPSoftwareBuildDate;		// DSP�����������,0xYYYYMMDD
	DWORD dwPanelVersion;				// ǰ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	DWORD dwHardwareVersion;	// Ӳ���汾,��16λ�����汾,��16λ�Ǵΰ汾
	BYTE byAlarmInPortNum;		//DVR�����������
	BYTE byAlarmOutPortNum;		//DVR�����������
	BYTE byRS232Num;			//DVR 232���ڸ���
	BYTE byRS485Num;			//DVR 485���ڸ��� 
	BYTE byNetworkPortNum;		//����ڸ���
	BYTE byDiskCtrlNum;			//DVR Ӳ�̿���������
	BYTE byDiskNum;				//DVR Ӳ�̸���
	BYTE byDVRType;				//DVR����, 1:DVR 2:ATM DVR 3:DVS ......
	BYTE byChanNum;				//DVR ͨ������
	BYTE byStartChan;			//��ʼͨ����,����DVS-1,DVR - 1
	BYTE byDecordChans;			//DVR ����·��
	BYTE byVGANum;				//VGA�ڵĸ��� 
	BYTE byUSBNum;				//USB�ڵĸ���
    BYTE byAuxoutNum;			//���ڵĸ���
    BYTE byAudioNum;			//�����ڵĸ���
	BYTE byIPChanNum;			//�������ͨ����  
	BYTE byZeroChanNum;			//��ͨ���������
    BYTE bySupport;        //������λ����Ϊ0��ʾ��֧�֣�1��ʾ֧�֣�
    //bySupport & 0x1, ��ʾ�Ƿ�֧����������
    //bySupport & 0x2, ��ʾ�Ƿ�֧�ֱ���
    //bySupport & 0x4, ��ʾ�Ƿ�֧��ѹ������������ȡ
    //bySupport & 0x8, ��ʾ�Ƿ�֧�ֶ�����
    //bySupport & 0x10, ��ʾ֧��Զ��SADP
    //bySupport & 0x20, ��ʾ֧��Raid������
    //bySupport & 0x40, ��ʾ֧��IPSAN����
	//bySupport & 0x80, ��ʾ֧��rtp over rtsp
	BYTE byEsataUseage;		//Esata��Ĭ����;��0-Ĭ�ϱ��ݣ�1-Ĭ��¼��
    BYTE byIPCPlug;			//0-�رռ��弴�ã�1-�򿪼��弴��
	BYTE byStorageMode;		//0-����ģʽ,1-�������, 2��֡ģʽ
	BYTE bySupport1;		//������λ����Ϊ0��ʾ��֧�֣�1��ʾ֧��
	//bySupport1 & 0x1, ��ʾ�Ƿ�֧��snmp v30
	//bySupport1 & 0x2, ֧�����ֻطź�����
	//bySupport1 & 0x4, �Ƿ�֧�ֲ������ȼ�	
	//bySupport1 & 0x8, �����豸�Ƿ�֧�ֲ���ʱ�����չ
	//bySupport1 & 0x10, ��ʾ�Ƿ�֧�ֶ������������33����
	//bySupport1 & 0x20, ��ʾ�Ƿ�֧��rtsp over http	
	WORD wDevType;//�豸�ͺ�
	BYTE  byDevTypeName[24];//�豸�ͺ����� 
	BYTE bySupport2; //��������չ��λ����Ϊ0��ʾ��֧�֣�1��ʾ֧��
	//bySupport2 & 0x1, ��ʾ�Ƿ�֧����չ��OSD�ַ�����(�ն˺�ץ�Ļ���չ����)
	BYTE byRes2[15];			//����
}NET_DVR_DEVICECFG_V40, *LPNET_DVR_DEVICECFG_V40;

#define MAX_ZEROCHAN_NUM    16
//��ͨ��ѹ�����ò���
typedef struct tagNET_DVR_ZEROCHANCFG
{
	DWORD dwSize;			//�ṹ����
	BYTE  byEnable;			//0-ֹͣ��ͨ�����룬1-��ʾ������ͨ������
	BYTE  byRes1[3];			//����
	DWORD dwVideoBitrate; 	//��Ƶ���� 0-���� 1-16K(����) 2-32K 3-48k 4-64K 5-80K 6-96K 7-128K 8-160k 9-192K 10-224K 11-256K 12-320K
	// 13-384K 14-448K 15-512K 16-640K 17-768K 18-896K 19-1024K 20-1280K 21-1536K 22-1792K 23-2048K
	//���λ(31λ)�ó�1��ʾ���Զ�������, 0-30λ��ʾ����ֵ(MIN-32K MAX-8192K)��
	DWORD dwVideoFrameRate;	//֡�� 0-ȫ��; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20, //V2.0����14-15, 15-18, 16-22;
	BYTE  byRes2[32];        //����
}NET_DVR_ZEROCHANCFG, *LPNET_DVR_ZEROCHANCFG;

//��ͨ�����Ų���
typedef struct tagNET_DVR_ZERO_ZOOMCFG
{
	DWORD dwSize;			    //�ṹ����
	NET_VCA_POINT  struPoint;	//�����е������
	BYTE byState;			    //���ڵ�״̬��0-��С��1-�Ŵ�  
    BYTE byPreviewNumber;       //Ԥ����Ŀ,0-1����,1-4����,2-9����,3-16���� �ò���ֻ��
	BYTE byPreviewSeq[MAX_WINDOW_V30];//����ͨ����Ϣ �ò���ֻ��
    BYTE byRes[30];				//���� 
}NET_DVR_ZERO_ZOOMCFG, *LPNET_DVR_ZERO_ZOOMCFG;

#define DESC_LEN_64 64
typedef struct tagNET_DVR_SNMPCFG
{
    DWORD   dwSize;			//�ṹ����
    BYTE    byEnable;			//0-����SNMP��1-��ʾ����SNMP
    BYTE    byRes1[3];			//����
    WORD    wVersion;		//snmp �汾  v1 = 1, v2 =2, v3 =3���豸Ŀǰ��֧�� v3
    WORD    wServerPort; //snmp��Ϣ���ն˿ڣ�Ĭ�� 161
    BYTE    byReadCommunity[NAME_LEN]; //����ͬ�壬���31,Ĭ��"public"
    BYTE    byWriteCommunity[NAME_LEN];//д��ͬ��,���31 �ֽ�,Ĭ�� "private"
    BYTE 	byTrapHostIP [DESC_LEN_64];	//��������ip��ַ������֧��IPV4 IPV6����������    
    WORD    wTrapHostPort;   // trap�����˿�
    BYTE    byRes2[102];        // ����
}NET_DVR_SNMPCFG, *LPNET_DVR_SNMPCFG;


typedef struct tagNET_DVR_SNMPv3_USER
{
    BYTE	byUserName[NAME_LEN];			// �û���				
    BYTE	bySecLevel;						// ��ȫ���� 1-��У�� 2-����ȨУ�� 3-��ȨУ��
    BYTE	byAuthtype;						// ��֤���� 0-MD5��֤ 1-SHA��֤ 2: none
	BYTE	byPrivtype;						// 0: DES; 1: AES; 2: none;
	BYTE	byRes[5];
    BYTE	byAuthpass[PASSWD_LEN];			// ��֤����
    BYTE	byPrivpass[PASSWD_LEN];			// ��������
}NET_DVR_SNMPv3_USER, *LPNET_DVR_SNMPv3_USER;

// snmpv30
typedef struct tagNET_DVR_SNMPCFG_V30
{
    DWORD				dwSize;			//�ṹ����
    BYTE				byEnableV1;		//0-����SNMP V1��1-��ʾ����SNMP V1
	BYTE				byEnableV2;		//0-����SNMP V2��1-��ʾ����SNMP V2
	BYTE				byEnableV3;		//0-����SNMP V3��1-��ʾ����SNMP V3
    BYTE				byRes1[3];
    WORD				wServerPort;					//snmp��Ϣ���ն˿ڣ�Ĭ�� 161
    BYTE				byReadCommunity[NAME_LEN];		//����ͬ�壬���31,Ĭ��"public"
    BYTE				byWriteCommunity[NAME_LEN];		//д��ͬ��,���31 �ֽ�,Ĭ�� "private"
    BYTE 				byTrapHostIP [DESC_LEN_64];		//��������ip��ַ������֧��IPV4 IPV6����������    
    WORD				wTrapHostPort;					// trap�����˿�
    BYTE				byRes2[2];       
	NET_DVR_SNMPv3_USER	struRWUser;    // ��д�û�
	NET_DVR_SNMPv3_USER	struROUser;    // ֻ���û�
	BYTE				byRes3[32]; 
}NET_DVR_SNMPCFG_V30, *LPNET_DVR_SNMPCFG_V30;

#define  PROCESSING          0     //���ڴ���
#define  PROCESS_SUCCESS     100   //�������
#define  PROCESS_EXCEPTION   400   //�����쳣
#define  PROCESS_FAILED      500   //����ʧ��

#define  SOFTWARE_VERSION_LEN 48
typedef struct tagNET_DVR_SADPINFO
{
    NET_DVR_IPADDR  struIP;     // �豸IP��ַ
    WORD            wPort;      // �豸�˿ں�
    WORD            wFactoryType;   // �豸��������
    char            chSoftwareVersion[SOFTWARE_VERSION_LEN];
    char            chSerialNo[16]; // ���к�
    WORD            wEncCnt;       // ����ͨ������
    BYTE	        byMACAddr[MACADDR_LEN];		// MAC ��ַ
    NET_DVR_IPADDR  struSubDVRIPMask;   // DVR IP��ַ����
    NET_DVR_IPADDR  struGatewayIpAddr;  // ����
    NET_DVR_IPADDR	struDnsServer1IpAddr;			/* ����������1��IP��ַ */
    NET_DVR_IPADDR	struDnsServer2IpAddr;			/* ����������2��IP��ַ */
    BYTE            byDns;
    BYTE            byDhcp;
    BYTE            byRes[158];     // �����ֽ�
}NET_DVR_SADPINFO, *LPNET_DVR_SADPINFO;

#define  MAX_SADP_NUM   256   // �������豸�����Ŀ
typedef struct tagNET_DVR_SADPINFO_LIST
{
    DWORD            dwSize;   //  �ṹ��С
    WORD             wSadpNum;   // �������豸��Ŀ
    BYTE             byRes[6];   // �����ֽ�
    NET_DVR_SADPINFO struSadpInfo[MAX_SADP_NUM]; // ����
}NET_DVR_SADPINFO_LIST, *LPNET_DVR_SADPINFO_LIST;

typedef struct tagNET_DVR_SADP_VERIFY
{
    char chPassword[PASSWD_LEN];
    NET_DVR_IPADDR struOldIP;
    WORD        wOldPort;
    BYTE        byRes[62];
}NET_DVR_SADP_VERIFY, *LPNET_DVR_SADP_VERIFY;

/*******************************���ݽӿ� begin********************************/
//��ȡ�����豸��Ϣ�ӿڶ���
#define DESC_LEN_32          32   //�����ֳ���
#define MAX_NODE_NUM         256  //�ڵ����

typedef struct tagNET_DVR_DESC_NODE
{ 
    int   iValue;           
    BYTE  byDescribe[DESC_LEN_32]; //�����ֶ� 
    DWORD dwFreeSpace;           //��ȡ�����б�ר��,��λΪM
    BYTE  byRes[12];			  //����  
}NET_DVR_DESC_NODE, *LPNET_DVR_DESC_NODE;

typedef struct tagNET_DVR_DISKABILITY_LIST
{ 
    DWORD     dwSize;            //�ṹ����
    DWORD     dwNodeNum;		 //����������
    NET_DVR_DESC_NODE  struDescNode[MAX_NODE_NUM];  //��������  
}NET_DVR_DISKABILITY_LIST, *LPNET_DVR_DISKABILITY_LIST;

//���ݽ����б�
#define BACKUP_SUCCESS                100  //�������
#define BACKUP_CHANGE_DEVICE          101  //�����豸�����������豸��������

#define BACKUP_SEARCH_DEVICE          300  //�������������豸
#define BACKUP_SEARCH_FILE            301  //��������¼���ļ�
#define BACKUP_SEARCH_LOG_FILE        302  //����������־�ļ�

#define BACKUP_EXCEPTION			  400  //�����쳣
#define BACKUP_FAIL					  500  //����ʧ��

#define BACKUP_TIME_SEG_NO_FILE       501  //ʱ�������¼���ļ�
#define BACKUP_NO_RESOURCE            502  //���벻����Դ
#define BACKUP_DEVICE_LOW_SPACE       503  //�����豸��������
#define BACKUP_DISK_FINALIZED         504  //��¼���̷���
#define BACKUP_DISK_EXCEPTION         505  //��¼�����쳣
#define BACKUP_DEVICE_NOT_EXIST       506  //�����豸������
#define BACKUP_OTHER_BACKUP_WORK      507  //���������ݲ����ڽ���
#define BACKUP_USER_NO_RIGHT          508  //�û�û�в���Ȩ��
#define BACKUP_OPERATE_FAIL           509  //����ʧ��
#define BACKUP_NO_LOG_FILE            510  //Ӳ��������־

//���ݹ��̽ӿڶ���
typedef struct tagNET_DVR_BACKUP_NAME_PARAM
{
    DWORD dwFileNum;   //�ļ�����
    NET_DVR_FINDDATA_V30 struFileList[MAX_RECORD_FILE_NUM]; //�ļ��б�
    BYTE byDiskDes[DESC_LEN_32];   //���ݴ�������
    BYTE byWithPlayer;      //�Ƿ񱸷ݲ�����
    BYTE byContinue;    /*�Ƿ�������� 0������ 1����*/
    BYTE byRes[34];         //����
}NET_DVR_BACKUP_NAME_PARAM, *LPNET_DVR_BACKUP_NAME_PARAM;

typedef struct tagNET_DVR_BACKUP_TIME_PARAM
{
    LONG            lChannel;        //��ʱ�䱸�ݵ�ͨ��
    NET_DVR_TIME    struStartTime;   //���ݵ���ʼʱ��
    NET_DVR_TIME    struStopTime;    //���ݵ���ֹʱ��
    BYTE            byDiskDes[DESC_LEN_32];     //���ݴ�������
    BYTE            byWithPlayer;               //�Ƿ񱸷ݲ�����
    BYTE            byContinue;                 //�Ƿ�������� 0������ 1����
	BYTE            byDrawFrame;			     //0 ����֡  1 ��֡
	BYTE            byRes[33];					 // �����ֽ� 
}NET_DVR_BACKUP_TIME_PARAM, *LPNET_DVR_BACKUP_TIME_PARAM;
/********************************* end *******************************************/

typedef enum _COMPRESSION_ABILITY_TYPE_
{
    COMPRESSION_STREAM_ABILITY = 0, //����ѹ������
	MAIN_RESOLUTION_ABILITY = 1,	//������ѹ���ֱ���
	SUB_RESOLUTION_ABILITY  = 2,	//������ѹ���ֱ���
	EVENT_RESOLUTION_ABILITY =  3,  //�¼�ѹ�������ֱ���
	FRAME_ABILITY = 4,				//֡������
	BITRATE_TYPE_ABILITY = 5,		//λ����������
	BITRATE_ABILITY = 6,			//λ������
	THIRD_RESOLUTION_ABILITY = 7,   //������ѹ���ֱ���
}COMPRESSION_ABILITY_TYPE;

//�����б�
typedef struct tagNET_DVR_ABILITY_LIST
{ 
    DWORD     dwAbilityType;	//�������� COMPRESSION_ABILITY_TYPE
    BYTE      byRes[32];        //�����ֽ�
    DWORD     dwNodeNum;		//����������
    NET_DVR_DESC_NODE  struDescNode[MAX_NODE_NUM];  //��������  
}NET_DVR_ABILITY_LIST, *LPNET_DVR_ABILITY_LIST;

#define MAX_ABILITYTYPE_NUM  12   //���������
// ѹ�����������б�
typedef struct tagNET_DVR_COMPRESSIONCFG_ABILITY
{ 
    DWORD     dwSize;            //�ṹ����
    DWORD     dwAbilityNum;		//�������͸���
    NET_DVR_ABILITY_LIST struAbilityNode[MAX_ABILITYTYPE_NUM]; //��������  
}NET_DVR_COMPRESSIONCFG_ABILITY, *LPNET_DVR_COMPRESSIONCFG_ABILITY;

/********************************9000RH begin****************************************/
#define SUPPORT_PD_NUM			16
#define SUPPORT_ARRAY_NUM		8
#define SUPPORT_VD_NUM			128

typedef enum tagRAID_MODE
{
    RAID0 = 1,
    RAID1,
    RAID10,
    RAID1E,
    RAID5,
    RAID6,
    RAID50,
    JBOD, 
    RAID60
}RAID_MODE;

typedef enum tagHD_SUPPORT_TYPE
{
    HD_TYPE_SATA    = 0x01,
    HD_TYPE_PATA    = 0x02,
    HD_TYPE_SAS     = 0x04,
    HD_TYPE_ATAPI   = 0x08,
    HD_TYPE_TAPE    = 0x10,
    HD_TYPE_SES     = 0x20
}HD_SUPPORT_TYPE;

// ��λ��ʾ λΪ0��ʾ��֧��  1��ʾ֧��
typedef enum tagSUPPORT_RAID_TYPE
{
    RAID0_ABILITY   = 0x0001,
    RAID1_ABILITY   = 0x0002,
    RAID10_ABILITY  = 0x0004,
    RAID1E_ABILITY  = 0x0008,
    RAID5_ABILITY   = 0x0010,
    RAID6_ABILITY   = 0x0020,
    RAID50_ABILITY  = 0x0040,
    JBOD_ABILITY    = 0x0080,
    RAID60_ABILITY  = 0x0100
}SUPPORT_RAID_TYPE;

// ������� 
typedef struct tagNET_DVR_PHY_DISK_INFO
{
    WORD    wPhySlot;         // Ӳ�̲�λ 
    BYTE    byType;         // Ӳ����Ϣ��0 ��ͨ��1ȫ���ȱ���2-�����ȱ� 3-������
    BYTE    byStatus;       // Ӳ��״̬��  0-���� 1-�쳣 0xff-������
    BYTE    byMode[40];   // Ӳ������ �ַ���
    DWORD   dwHCapacity;    //  ����������32λ ��λkb
    DWORD   dwLCapacity;    //  ����������32λ
    BYTE    byArrrayName[MAX_NAMELEN];
    WORD    wArrayID;          // ��������ID
    BYTE    byRes[102];         // �����ֽ�  
}NET_DVR_PHY_DISK_INFO, *LPNET_DVR_PHY_DISK_INFO;

typedef struct tagNET_DVR_PHY_DISK_LIST
{
    DWORD   dwSize;
    DWORD   dwCount;
    NET_DVR_PHY_DISK_INFO struPhyDiskInfo[SUPPORT_PD_NUM];
}NET_DVR_PHY_DISK_LIST, *LPNET_DVR_PHY_DISK_LIST;

typedef enum tagBGA_TYPE
{
    BGA_REBUILD = 0x01,            // �ؽ�
    BGA_CONSISTENCY_FIX = 0x02,    // һ���Լ�鲢�޸�
    BGA_CONSISTENCY_CHECK = 0x04,  // һ���Լ��
    BGA_INIT_QUICK = 0x08,         // ��ʼ��(��)
    BGA_INIT_BACK = 0x10,          // ��ʼ��(��ȫ)
    BGA_MIGRATION = 0x20,       // Ǩ��
    BGA_INIT_FORE = 0x40,           // ��ʼ��
    BGA_COPYBACK = 0x80             // ��Ǩ
}BGA_TYPE;

typedef enum tagBGA_STATE
{
    BGA_STATE_NONE = 0,     //  �޺�̨����
    BGA_STATE_RUNNING,       //  ��̨������������
    BGA_STATE_ABORTED,       //  ��̨����ȡ��
    BGA_STATE_PAUSED         //  ��̨������ͣ     
}BGA_STATE;
typedef struct tagNET_DVR_BGA_INFO
{
	BYTE    byBga;  // ��̨�������� 
	BYTE	byBgaState;		   /*��������ֵ--��̨����״̬*/
	WORD    wBgaPercentage;     /*��������ֵ--��̨����ִ�аٷֱ�*/
	BYTE    byRes[4];  // �����ֽ�
}NET_DVR_BGA_INFO, *LPNET_DVR_BGA_INFO;

// ������Ϣ
typedef struct tagNET_DVR_ARRAY_INFO
{
    WORD    wArrayID; // ����ID
    BYTE    byRaidMode; // raidģʽ  ����RAID_MODE
    BYTE    byStatus;  // 0-���� 1-���̶�ʧ 2-���� 3-���� 4-�쳣 5-������ 6-������  0xff-������
    DWORD   dwHCapacity; // ����������32λ
    DWORD   dwLCapacity; // ����������32λ
    DWORD   dwHFreeSpace;   // ����ʣ��ռ��32λ
    DWORD   dwLFreeSpace;   // ����ʣ��ռ��32λ
    BYTE    byArrayName[MAX_NAMELEN]; // ��������
    BYTE    byPDCount;  // ���������Ŀ
    BYTE    bySpareCount;   // �ȱ���Ŀ
    BYTE    byRes1[2];
    WORD    wPDSlots[SUPPORT_PD_NUM];	// �����������
    WORD    wSparePDSlots[SUPPORT_PD_NUM];	// �ȱ���������
    NET_DVR_BGA_INFO	struBgaInfo;	// ��̨��������״̬
    BYTE    byRes2[80]; // �����ֽ�
}NET_DVR_ARRAY_INFO, *LPNET_DVR_ARRAY_INFO;

typedef struct tagNET_DVR_ARRAY_LIST
{
    DWORD   dwSize;     // �ṹ���С
    DWORD   dwCount;    // ���и���
    NET_DVR_ARRAY_INFO struArrayInfo[SUPPORT_ARRAY_NUM];
}NET_DVR_ARRAY_LIST, *LPNET_DVR_ARRAY_LIST;

//���������Ϣ
typedef struct tagNET_DVR_VD_INFO
{
    WORD    wSlot;    //������̲�λ  
    BYTE    byStatus; // ״̬0-���� 1-���� 2-��ɾ�� 3-���̶�ʧ 4-���� 5-������ 6-���� 7-�쳣 0xff-������
    BYTE    byRaidMode; // Raid ģʽ ���� RAID_MODE
    WORD    wArrayID;      // ��������ID
    BYTE    byRepair;   // �Ƿ���Ҫ�޸� 0 ����Ҫ 1��Ҫ
    BYTE    byRes1[1];  // �����ֽ�
    BYTE	byArrayName[MAX_NAMELEN];
    BYTE    byName[MAX_NAMELEN];    // �������������
    DWORD   dwHCapacity;    // �������������32λ
    DWORD   dwLCapacity;    // �������������32λ
    DWORD   dwHFreeSpace;   // �������ʣ��ռ��32λ
    DWORD   dwLFreeSpace;   // �������ʣ��ռ��32λ
    NET_DVR_BGA_INFO	struBgaInfo;	// ��̨����״̬
    BYTE    byRes2[80];
}NET_DVR_VD_INFO, *LPNET_DVR_VD_INFO;

typedef struct tagNET_DVR_VD_LIST
{
    DWORD   dwSize;     // �ṹ���С
    DWORD   dwCount;    // ������̸���
    NET_DVR_VD_INFO struVDInfo[SUPPORT_VD_NUM];  //�����������
}NET_DVR_VD_LIST, *LPNET_DVR_VD_LIST;

typedef struct tagNET_DVR_ADAPTER_VERSION
{
    WORD    wMajorVersion;
    WORD    wMinorVersion;
    WORD    wRevisionNumber;
    WORD    wBuildNumber;
}NET_DVR_ADAPTER_VERSION, *LPNET_DVR_ADAPTER_VERSION;

typedef struct tagNET_DVR_VD_SLOT
{
    WORD  wVDSlot;
    BYTE  byAlloc;  // �Ƿ��Ѿ�����
    BYTE  byRes[5];
    DWORD dwHVDSlotSize;	// ������̿ռ��С��32λ
	DWORD dwLVDSlotSize;	// ������̿ռ��С��32λ
}NET_DVR_VD_SLOT, *LPNET_DVR_VD_SLOT;

typedef struct tagNET_DVR_ARRAY_SPACE_ALLOC_INFO
{
    BYTE    byVDSlotCount;						/*current number of slots in DG*/ 
    BYTE    byRes1[3];              // �����ֽ�
    NET_DVR_VD_SLOT struVDSlots[SUPPORT_VD_NUM];
}NET_DVR_ARRAY_SPACE_ALLOC_INFO, *LPNET_DVR_ARRAY_SPACE_ALLOC_INFO;

typedef struct tagNET_DVR_RAID_ADAPTER_INFO
{
    DWORD dwSize;    // �ṹ���С
    NET_DVR_ADAPTER_VERSION struVersion;	// �������汾��
    BYTE    bySlotCount;    //��������λ��
    BYTE    bySupportMigrate;  // Ǩ��(1-֧��  0-��֧��)
    BYTE    bySupportExpand;   // ����  (1-֧��  0-��֧��)
    BYTE    bySupportRebuild;  // �Ƿ�֧���ؽ����� (1��֧�� 0-��֧��)
    WORD    wSlotSupportType; //  ��λ��ʾ HD_SUPPORT_TYPE
    WORD    wSupportRaidType;      // ֧��Raid ���� ��λ��ʾ  
    BYTE    byAutoRebuild;      // 0 ���Զ��ؽ� 1�Զ��ؽ� ����
    BYTE    byRes[27];      // �����ֽ�
}NET_DVR_RAID_ADAPTER_INFO, *LPNET_DVR_RAID_ADAPTER_INFO;

typedef struct tagNET_DVR_OPERATE_ARRAY_PARAM
{
    //�Ƿ�һ������  ���Ϊһ���������򴴽�ʱʱ���֮��Ҫarray���ƣ�������Ҫ��������
    // �����������豸���д���
    BYTE    byRaidMode;     // ����/Ǩ��ʱRaid������
    BYTE    byPDCount;  // ���������Ŀ
    WORD    wArrayID;   // Ǩ�ƻ����ؽ�ʱ��Ҫָ������ID      
    WORD    wPDSlots[SUPPORT_PD_NUM];// ������� 
    BYTE    byName[MAX_NAMELEN];  // array ����
	BYTE    byInitMode;              //��ʼ����ʽ
    BYTE    byRes2[19];
}NET_DVR_OPERATE_ARRAY_PARAM, *LPNET_DVR_OPERATE_ARRAY_PARAM;
#define INIT_QUICK                                      0    /*���ٳ�ʼ��*/
#define INIT_FULLFOREGROUND                             1    /*��ȫ��ʼ��(ǰ̨)*/
#define INIT_FULLBACKGROUND                             2    /*��ȫ��ʼ��(��̨)*/

typedef struct tagNET_DVR_OPERATE_VD_PARAM
{
    WORD    wArrayID;		// ����ID
    BYTE    bySlot;			// �����������ָ����λ
    BYTE    byInitType;     // �����������ʱ��ʼ������ 0 - ���ٳ�ʼ�� 1 - ǰ̨��ȫ��ʼ�� 2 - ��̨��ȫ��ʼ��
	DWORD	dwHCapacity;	// ������̴�С��32λ
	DWORD	dwLCapacity;	// ������̴�С��32λ
    BYTE    byName[MAX_NAMELEN]; // �����������
    BYTE    byRes2[16];          // �����ֽ� 
}NET_DVR_OPERATE_VD_PARAM, *LPNET_DVR_OPERATE_VD_PARAM;


typedef struct tagNET_DVR_SPARE_DISK_PARAM
{
    WORD    wPDSlot;        // ������̲�λ
    WORD    wArrayID;       // ����������
    BYTE    bySpareType;    // �ȱ����� 1-ȫ���ȱ�  2 ָ������  ��Ϊָ�����е�ʱ����Ҫָ���������е�ID
    BYTE    byRes[7];       // �����ֽ�
}NET_DVR_SPARE_DISK_PARAM, *LPNET_DVR_SPARE_DISK_PARAM;

/********************************9000RH End****************************************/


#define MATRIX_MAXDECSUBSYSTEMCHAN	4//��Ƶ�ۺ�ƽ̨������ϵͳͨ����

//��ȡ������ϵͳ������Ϣ
typedef struct tagNET_DVR_DECSUBSYSTEMJIONSTATUS
{
    BYTE	byJoinStatus;//����״̬��0-û�й�����1-�Ѿ�����
    BYTE	byJoinSubSystem;//��������ϵͳ��λ��
    BYTE	byJoinDispNum;//��������ʾͨ����
    BYTE	byJoinSubWindowNum;//�������Ӵ��ں�
    BYTE	byRes[4];
}NET_DVR_DECSUBSYSTEMJIONSTATUS,LPNET_DVR_DECSUBSYSTEMJIONSTATUS;

typedef struct tagNET_DVR_SINGLESUBSYSTEMJOININFO
{
    BYTE	bySubSystemType;//��ϵͳ���ͣ�0-�ޣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ,5-�����ϵͳ��6-������ϵͳ
    BYTE	byConnectStatus;//����ϵͳ����״̬��1-����������2-���ӶϿ�
    BYTE    byMatrixNum;//������Ƶ�ۺ�ƽ̨�ţ���ϵͳ������3��4ʱ����
    BYTE	bySubSystemNum;//������ϵͳ��λ�ţ�0~79����ϵͳ������3��4ʱ����    
    NET_DVR_DECSUBSYSTEMJIONSTATUS struDecSub [MATRIX_MAXDECSUBSYSTEMCHAN];
    BYTE	byBindStatus;//��״̬��0-û�а󶨣�1-�Ѿ��󶨣�����ƴ��ʱ�õ���
    BYTE    byRes[7];
}NET_DVR_SINGLESUBSYSTEMJOININFO,LPNET_DVR_SINGLESUBSYSTEMJOININFO;

typedef struct tagNET_DVR_ALLDECSUBSYSTEMJOININFO
{
    DWORD dwSize;
    NET_DVR_SINGLESUBSYSTEMJOININFO struSingleSubSystemJoinInfo[MAX_SUBSYSTEM_NUM];//80
    BYTE  byRes[8];
}NET_DVR_ALLDECSUBSYSTEMJOININFO, *LPNET_DVR_ALLDECSUBSYSTEMJOININFO;

//2010-04-13 ����NAT�����������
typedef struct tagNET_DVR_NATASSOCIATECFG
{
	DWORD		  		dwSize;
    NET_DVR_NETCFG_V30  struNatIpAddress[2];//NAT IP��ַ 
	BYTE				byNATEnable;//�Ƿ�����NAT���ܣ�0-�����ã���0-����
	BYTE		  		byRes[63];
}NET_DVR_NATASSOCIATECFG, *LPNET_DVR_NATASSOCIATECFG;

//2010-06-01 ��Ƶ�ۺ�ƽ̨��������
typedef struct tagNET_DVR_TEMPERATUREALARMCFG
{
	BYTE	 byEnableTemperatureAlarm;//ʹ���¶ȳ��ޱ�����0-������1-������
    BYTE	 byRes1[3];
	int 	 iTemperatureUpLimited;	//��ȷ��С�������λ����1234��ʾ�¶�12.34��
	int 	 iTemperatureDownLimited;	
	NET_DVR_HANDLEEXCEPTION_V30 struTempHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*����ʱ��*/
	BYTE	 byRes2[32];
}NET_DVR_TEMPERATUREALARMCFG, *LPNET_DVR_TEMPERATUREALARMCFG;

typedef struct tagNET_DVR_BOARDALARMCFG
{
	BYTE   byEnablePullAlarm;//�Ȳ�α���ʹ�ܣ�1-������0-������
    BYTE   byRes1[3];
	NET_DVR_HANDLEEXCEPTION_V30 struBoardHandleType;	/* ����ʽ */
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT_V30]; /*����ʱ��*/
	BYTE   byRes2[32];
}NET_DVR_BOARDALARMCFG, *LPNET_DVR_BOARDALARMCFG;


typedef struct tagNET_DVR_VIDEOPLATFORMALARMCFG
{
	DWORD 						 dwSize;
	NET_DVR_TEMPERATUREALARMCFG  struTempAlarmCfg;	
	NET_DVR_BOARDALARMCFG 		 struBoardAlarmCfg;	
    NET_DVR_HANDLEEXCEPTION_V30  struHandleException[MAX_EXCEPTIONNUM];//0-�����쳣��1-��ϵͳ�쳣��2-IP��ַ��ͻ��3-���߶ϣ�4-�Ƿ����ʣ�5-�����쳣��6-ǰ����쳣
    BYTE						 byRes[32];
}NET_DVR_VIDEOPLATFORMALARMCFG,*LPNET_DVR_VIDEOPLATFORMALARMCFG;
//2010-05-17
typedef struct  tagNET_DVR_CODESPLITTERASSOCIATE
{
	DWORD		dwSize;
	NET_DVR_IPADDR   struIP;  /*������IP��ַ*/
	WORD		wPort;        //�������˿ں�
	BYTE		byRes1[6];
    BYTE		sUserName[NAME_LEN];	/* �û�����32�� */
	BYTE		sPassword[PASSWD_LEN];	/*���� ��16��*/
	BYTE        byChan;//������ͨ����
	BYTE		byRes2[15];
} NET_DVR_CODESPLITTERASSOCIATE, *LPNET_DVR_CODESPLITTERASSOCIATE;

//2010-06-01 ��Ƶ�ۺ�ƽ̨�����ϴ��ṹ
typedef struct tagNET_DVR_MATRIXSUBSYSTEMINFO
{
	BYTE   byMatrixNum;//��Ƶ�ۺ�ƽ̨��
	BYTE	bySubSystemNum;//��ϵͳ��λ��
	BYTE   byRes [14];
} NET_DVR_MATRIXSUBSYSTEMINFO, *LPNET_DVR_MATRIXSUBSYSTEMINFO;

typedef struct tagNET_DVR_VIDEOPLATFORM_ALRAMINFO
{
	DWORD  dwSize;      //�ṹ���С
	BYTE   byAlarmType;	// 0-�γ��Ӱ壬1-�����Ӱ�,2-�¶ȳ����ޱ�����3-�¶ȳ����ޱ�����4-����״̬�쳣��5-��ϵͳ�쳣,6-�Ƿ����ʣ�7-�����쳣����,8-ǰ����쳣����
	BYTE   byRes1[3];
    BYTE   bySubSystemChan[8]; //�Ӱ��λ��,һ���Ӱ�����8����ϵͳ����ֱ��Ӧ�Ĳ�λ�ţ���ϵͳ�쳣ʱ��bySubSystemChan[0]��ʾ��Ӧ��ϵͳ���        
	int    iTemperature;  //�¶ȳ��ޱ���ʱ���ã��¶�ֵ
	BYTE   byMainboardSeq;//�¶ȳ��ޱ���ʱ���ã�0-�����壬1-����
    BYTE   byRes2[3];
    BYTE   byFanSequence[32];//�����쳣ʱ���Ⱥ�    
	NET_DVR_MATRIXSUBSYSTEMINFO struInputNote;// �����쳣����ʱʹ�ã�������
	NET_DVR_MATRIXSUBSYSTEMINFO struOutputNote;//�����쳣����ʱʹ�ã�������
	BYTE   byRes3[68];	
}NET_DVR_VIDEOPLATFORM_ALRAMINFO,*LPNET_DVR_VIDEOPLATFORM_ALRAMINFO;

/***************************��ѶDVR begin *****************************/
#define MAX_INQUEST_PIP_NUM   3     //��ͨ����ʾ�Ļ��л���Ŀ
#define MAX_INQUEST_CDRW_NUM  4     //����¼����Ŀ

typedef struct 
{
	DWORD      dwSize;
    DWORD      dwNum;                       //��¼��������
	DWORD      dwRwSelectPara[MAX_CHANNUM_V30];// �Ƿ�ѡ�иù���
	DWORD      dwModeSelect;                //0��ʾѭ����¼ģʽ  1��ʾ���п�¼ģʽ(Ĭ��ģʽ)
	BYTE	   byRes[24];                   //����
	DWORD	   dwStartCDRW;                 //DVR �����Ѿ���ʼ��¼
	DWORD      dwHdExcp;                    //Ӳ������ ��
	DWORD	   dwInterval;                  //ʱ������10����(0)��20����(1)��30����(2)
	char 	   sLable[64];                  //��������
}NET_DVR_INQUEST_CDRW_CFG, *LPNET_DVR_INQUEST_CDRW_CFG;

typedef struct
{
    char      sFileName[36];			 //�ļ���
    DWORD     dwFileLen;				 //�ļ�����
}NET_DVR_INQUEST_FILEINFO, *LPNET_DVR_INQUEST_FILEINFO;

typedef struct 
{
    DWORD     dwFileNum;			         // ��Ҫ��¼����ɾ�����ļ��������һ��20��
	NET_DVR_INQUEST_FILEINFO struFileInfo[MAX_RECORD_FILE_NUM];
	//�������������ڱ�ʾ��¼���ļ�ʱʹ��
	DWORD     dwCDIndex;				    //��¼����������1:ѡ��1�ſ�¼����2:ѡ��2�ſ�¼���� 3:3�ſ�¼��,4:4�ſ�¼��,5:���п�¼��
	BOOL      bFinalizeDisc;		     	// 0=��¼��֮�󲻷��̣�1=��¼��֮�����
}NET_DVR_INQUEST_FILES, *LPNET_DVR_INQUEST_FILES;

typedef struct 
{	
	DWORD     dwEnable;			//��¼��״̬�Ƿ���Ч,0-��Ч,1-��Ч	
	DWORD     dwStatus;			/* ��dwType=0ʱ��
								0-����������1-�޹��̻�����쳣,
								��dwType=1��2ʱ��
								0-��¼������1-�޹��̻�����쳣��
								2-�����ѷ���(81��֧��)��3-���̿ռ䲻�㣬
								4-�쳣������Ѷ��ֹ(81��֧��)
								��dwType=3ʱ��
								0-��¼������1-�޹��̻�����쳣��
								2-�����ѷ���(81��֧��)��3-���̿ռ䲻��
								��dwType=4ʱ��
								0-��¼������1-�޹��̻�����쳣��
								2-�����ѷ���(81��֧��)��3-���̿ռ䲻��
								��dwType=5ʱ,
								0-���������� 1-�޹��̻�����쳣,
								2-�����ѷ���(81��֧��)
								��dwType=6��7ʱ,
								0-��¼����, 1-�޹��̻�����쳣,
	2-�����ѷ���(81��֧��), 3-���̿ռ䲻��*/		
	DWORD    dwVolumn;      //��������,��λM
	DWORD    dwFreeSpace;   //����ʣ������,��λM    
	BYTE     byRes[8];      //�����ֽ�
}NET_DVR_INQUEST_CDRW, *LPNET_DVR_INQUEST_CDRW;

typedef struct 
{	
     /*����״̬��0-��Ѷ��ʼ��
	1-��Ѷ�����п�¼��2-��Ѷֹͣ��
	3-��¼��Ѷ�ļ�, 
	4-����(�º󱸷ݺͱ��ر���)
	5-����
	6-��ʼ��Ӳ��
	7-�ָ���Ѷ*/
    DWORD    dwType;        	
    NET_DVR_INQUEST_CDRW   strCDRWNum[MAX_INQUEST_CDRW_NUM];   //����0��ʾ��¼��1	
    BYTE     byRes[24];      //����	
}NET_DVR_INQUEST_CDRW_STATUS, *LPNET_DVR_INQUEST_CDRW_STATUS;

typedef struct
{
	BYTE     byPipChan;			  //���л���ʾ��ͨ�� 0xFF�ر�
	BYTE     byRes[3];			  //�����ֽ�
	WORD     wTopLeftX;			  //���л���x����
	WORD     wTopLeftY;			  //���л���Y����
}NET_DVR_INQUEST_PIP_PARAM, *LPNET_DVR_INQUEST_PIP_PARAM;

typedef struct 
{
	BYTE     byBaseChan;          //��ʾ���л����ڵ�ͨ��
	BYTE     byBackChan;          //��ʾ���л�����ͨ��
	BYTE     byPIPMode;           /*�Ƿ���, 
									0 ��ǰ������С����
									1 ��ǰ������1��С����
									2 ��ǰ������2��С����
									3 ��ǰ������3��С����
                                  */
	BYTE     byRes;               //�����ֽ�
	NET_DVR_INQUEST_PIP_PARAM  strPipPara[MAX_INQUEST_PIP_NUM];  //����λ�õĲ���    
}NET_DVR_INQUEST_PIP_STATUS, *LPNET_DVR_INQUEST_PIP_STATUS;

typedef struct 
{
	BYTE	sSecretKey[16];        /*����������Կ*/
	BYTE	byRes[64];             /*�����ֽ�*/
}NET_DVR_INQUEST_SECRET_INFO, *LPNET_DVR_INQUEST_SECRET_INFO;


/***************************��ѶDVR end *****************************/


/********************************�ӿڲ����ṹ(end)*********************************/
#define		MAX_BIGSCREENNUM	100//������ƴ����

typedef struct tagNET_DVR_SINGLESCREENCFG
{
    BYTE	byScreenSeq;//��Ļ��ţ�0xff��ʾ���ô���,64-T��������һ����ʾ����
    BYTE	bySubSystemNum;//������ϵͳ��λ��,��������ֵû����
    BYTE	byDispNum;//������ϵͳ�϶�Ӧ��ʾͨ���ţ�64-T�������и�ֵ��ʾ����������ʾͨ����
    BYTE	byRes[9];
}NET_DVR_SINGLESCREENCFG, *LPNET_DVR_SINGLESCREENCFG;

typedef struct tagNET_DVR_BIGSCREENCFG
{
    DWORD   dwSize;
	BYTE	byEnable;//����ƴ��ʹ�ܣ�0-��ʹ�ܣ�1-ʹ��
    BYTE	byModeX;/*����ƴ��ģʽ*/
    BYTE	byModeY;
    BYTE	byMainDecodeSystem;//�ۺ�ƽ̨�Ľ�����и�ֵ��ʾ������λ�ţ�64-T�������и�ֵ��ʾ����ͨ����
    BYTE	byMainDecoderDispChan;//����������ʾͨ���ţ�1.1netra�汾������netra��������������ʾͨ�������ܹ���Ϊ������64-T�и�ֵ��Ч
	BYTE	byVideoStandard;      //����ÿ��������ʽ��ͬ 1:NTSC,2:PAL
    BYTE	byRes1[2];
	DWORD  dwResolution;         //����ÿ�������ֱ�����ͬ
    //����ƴ�Ӵ���Ļ��Ϣ
    NET_DVR_SINGLESCREENCFG struFollowSingleScreen[MAX_BIGSCREENNUM]; 
    BYTE	byRes2[16];
}NET_DVR_BIGSCREENCFG, *LPNET_DVR_BIGSCREENCFG;

 
#define	DECODEPIC_LEFTADJUST			1		/*ͼ������*/
#define	DECODEPIC_RIGHTADJUST			2		/*ͼ������*/
#define	DECODEPIC_UPADJUST				3		/*ͼ������*/
#define	DECODEPIC_DOWNADJUST			4		/*ͼ������*/
#define	DECODEPIC_REDUCEADJUST			5		/*ͼ����С*/     

#define 	MAX_UNITEDMATRIX_NUM		8//�����������Ƶ�ۺ�ƽ̨����
#define 	MAX_SUBDOMAIN_NUM		    4//�����������������
typedef struct tagNET_DVR_SUBSERVERINFO
{
	BYTE		bySequence;//��ţ���������������ţ�������Ƶ�ۺ�ƽ̨����ƽ̨�ţ�0��ʾ�޴�ƽ̨\����
	BYTE		byBelongSubDomain;//����ƽ̨��Ч����ʾ�����ĸ�����
	BYTE		byRes1[6];
	DWORD       dwMaxIpcNums;//���ӵ����IPC����
    NET_DVR_IPADDR struSubMatrixIP;		/*IP��ַ*/
    WORD		wSubMatrixPort;        /*��ϵͳ�˿ں�*/
    BYTE		byRes2[6];
}NET_DVR_SUBSERVERINFO, *LPNET_DVR_SUBSERVERINFO;

typedef struct tagNET_DVR_UNITEDMATRIXINFO
{
	DWORD dwSize;
	NET_DVR_SUBSERVERINFO struDomainInfo;
	NET_DVR_SUBSERVERINFO struSubDomainInfo[MAX_SUBDOMAIN_NUM];//������Ϣ
	NET_DVR_SUBSERVERINFO struMatrixInfo[MAX_UNITEDMATRIX_NUM];//��Ƶ�ۺ�ƽ̨��Ϣ
    BYTE  byRes[32];
}NET_DVR_UNITEDMATRIXINFO, *LPNET_DVR_UNITEDMATRIXINFO;		

typedef struct tagNET_DVR_REGCALLBACKPARAM
{
	char sDeviceID[NAME_LEN];//�豸ID��
	char sPassword[PASSWD_LEN];
	BYTE sSerialNumber[SERIALNO_LEN]; /* �豸���к� */
	DWORD dwDeviceType;//�豸����
	BYTE nStatus;// ������״̬��0���ߣ�1���ߣ�
	/* net type, 0: unknow; 1: 2G wireless networks; 2: 3G wireless networks; 3: line networks */
	BYTE byNetType;	
	BYTE byRes[14];
}NET_DVR_REGCALLBACKPARAM, *LPNET_DVR_REGCALLBACKPARAM;

typedef struct tagNET_DVR_LOGONREPONSEPARAM
{
    //����ʱ��������λ����, 5�ı�����180�����ڡ�Ĭ����15�롣
	WORD wHeartbeatTime;
	BYTE byOvertimes;// �豸������ʱ������Ĭ����3��
	BYTE byRes[13];	
}NET_DVR_LOGONREPONSEPARAM, *LPNET_DVR_LOGONREPONSEPARAM;


typedef struct tagNET_DVR_PREVIEWPARAM
{
    BYTE byTransProtol;		//����Э�飬0-TCP, 1-UDP
    BYTE byTransMode;		///* ��������ģʽ 0�������� 1��������*/ 
    NET_DVR_IPADDR struCuIp; //CU��IP��ַ
    WORD wPort;/*CU�˿�*/
    WORD wUdpPort;
    BYTE bySupportQos;//�Ƿ�����QOS,1-���ã�0-������
	//�Ƿ���NATԤ������0-��1-��(ֻ��byTransMode�ֶ�)
	BYTE  byNatRequest;
    BYTE  byPreviewType;// 0-��ͨԤ�� 1-��ʱԤ��
	BYTE  byRes[7];
}NET_DVR_PREVIEWPARAM, *LPNET_DVR_PREVIEWPARAM;
typedef struct tagNET_DVR_DEVICENATINFO
{
	NET_DVR_IPADDR struPuIp; //PU������IP��ַ
	WORD	wOuterPort;/*PU�����˿�*/
	WORD	wInterPort;//PU������Ƶ�ı��ض˿�
    DWORD   nSessionID;//CMS�����sessionID
	BYTE	byRes[4];
}NET_DVR_DEVICENATINFO, *LPNET_DVR_DEVICENATINFO;


typedef struct tagNET_DVR_PREVIEWCALLBACKPARAM
{
	LONG lChannel;
	BYTE nLinkProtocol;
	BYTE nTransMode;
    BYTE byPreviewType; //0-��ͨԤ�� 1-��ʱԤ��
    BYTE byRes[5];
    DWORD nSessionID;//CMS�����sessionID
}NET_DVR_PREVIEWCALLBACKPARAM, *LPNET_DVR_PREVIEWCALLBACKPARAM;

//�ط�
typedef struct tagNET_DVR_PLAYBACKREQUESTPARAM
{
    BYTE byPlayBackMode;		/* �ط�����ģʽ 1�������� 2����ʱ�� */
    BYTE byRes1[3];
    union
    {
        char sFileName [100];		/* �طŵ��ļ��� */
        struct 
        {
            LONG	lChannel;				/*�طŵ�ͨ����*/
            NET_DVR_TIME struStartTime;			/* ��ʱ��طŵĿ�ʼʱ�� */
            NET_DVR_TIME struStopTime;			/* ��ʱ��طŵĽ���ʱ�� */
            BYTE    byRes[48];
        }struPlayBackbyTime;
    }playbackmode;
    NET_DVR_IPADDR struCuIp; //CU��IP��ַ
    WORD	wPort;/*CU�˿�*/
    BYTE	byRes2[2];
    DWORD   dwSessionID;//CMS�����sessionID,�������
    BYTE    byRes3[16];
}NET_DVR_PLAYBACKREQUESTPARAM, *LPNET_DVR_PLAYBACKREQUESTPARAM;    

//2010-10-06
typedef struct tagNET_DVR_PLAYBACKCALLBACKPARAM
{
    BYTE byPlayBackMode;		/* �ط�����ģʽ 1�������� 2����ʱ�� */
    BYTE byRes1[3];
    union
    {
        char sFileName [100];		/* �طŵ��ļ��� */
        struct 
        {
            LONG    	lChannel;				/*�طŵ�ͨ����*/
            NET_DVR_TIME struStartTime;			/* ��ʱ��طŵĿ�ʼʱ�� */
            NET_DVR_TIME struStopTime;			/* ��ʱ��طŵĽ���ʱ�� */
            BYTE       byRes[48];
        }struPlayBackbyTime;
    }playbackmode;
    DWORD nSessionID;//CMS�����sessionID
    BYTE byRes2[44];
}NET_DVR_PLAYBACKCALLBACKPARAM, *LPNET_DVR_PLAYBACKCALLBACKPARAM;  

typedef struct tagNET_DVR_VOICEREQUESETPARAM
{
    BYTE	nVoiceChannel;		//�Խ�ͨ����
    BYTE	byRes1[3];
    NET_DVR_IPADDR struCuIp; //CU��IP��ַ
    WORD	 wPort;/*CU�˿�*/
    BYTE	byRes2[10];
}NET_DVR_VOICEREQUESTPARAM, *LPNET_DVR_VOICEREQUESTPARAM;             

typedef struct tagNET_DVR_ALARMSETUPREQUESETPARAM
{
	NET_DVR_IPADDR struCuIp; //CU��IP��ַ
	WORD	 wPort;/*CU�˿�*/
	BYTE	byRes[2];
}NET_DVR_ALARMSETUPREQUESTPARAM, *LPNET_DVR_ALARMSETUPREQUESTPARAM;		
	
typedef struct tagNET_DVR_GPSALARMINFO
{
    BYTE byDeviceID[NAME_LEN];/*�豸��ID��*/
    NET_DVR_TIME_EX struGpsTime;    /*GPS�ϴ���ʱ��*/
    DWORD	dwLongitude;	/* ����*/
    DWORD	dwLatitude;  /* γ��*/
    int 	iTimeZone; /*ʱ�����÷�������ʾ��+60����1����+480����8����-60����������-480������8�������ֶκ�GPSTime����һ��������ʱ������*/ 
    DWORD dwDirection; /*��������=ʵ�ʷ����Զ�Ϊ��λ����������Ϊ��˳ʱ�뷽����㣩*100*/
    WORD  wSatellites; /*��������*/
    WORD  wPrecision; /*����*/
    DWORD dwHeight; /*�߶�:���ף�Ԥ��*/
    DWORD dwGPSSeq; /*GPS��ţ�GPS����ʱҪ�õ�*/
    WORD  wSpeed;//�ٶȣ���λ��km/h
    /* direction[0]:'E'or'W'(����/����), direction[1]:'N'or'S'(��γ/��γ)*/
    char sDirection[2]; 
    BYTE byLocateMode;/*��λģʽ(��ֵ0)��1,������λ,2,���3,����,4,������Ч*/  
    BYTE byRes[3];
}NET_DVR_GPSALARMINFO, *LPNET_DVR_GPSALARMINFO;

//ͼƬ��Ϣ�ϴ�
typedef struct tagNET_DVR_PICINFO
{
	DWORD   dwSize;				//�ṹ����
	BYTE    byChanIndex;			//ͨ����
	BYTE    byRes1[3];				//����
	BYTE 	byDeviceID[NAME_LEN];/*�豸��ID��*/
	BYTE    byAbsTime[32];		//����ʱ���, yyyymmddhhmmssxxx,
	DWORD   dwPicLen;					//ͼƬ����
	BYTE	byRes2[32];
	BYTE	*pPicBuffer;
}NET_DVR_PICTUREINFO, *LPNET_DVR_PICTUREINFO;

//ƽ̨����
typedef struct tagNET_DVR_CMSPARAM
{
	DWORD   dwSize;
	NET_DVR_IPADDR struCmsAddr;
	WORD   wCmsPort;
	BYTE   byRes1[2];
	BYTE   sDeviceID[NAME_LEN];
	BYTE   byPassword[PASSWD_LEN];
	NET_DVR_IPADDR struPicServerAddr;
	WORD   wPicServerPort;
	WORD   wCmsUdpPort;//CMS����UDP������ѯ�Ķ˿�
	BYTE   byRes2[12];
}NET_DVR_CMSPARAM, *LPNET_DVR_CMSPARAM;

///���Ź���
#define DIALPASSWD_LEN  32 //�������볤��

typedef struct tagNET_DVR_QOSPARAM
{
	WORD wMaxBitUL;	/* the maximum number of kbits/s in up-link traffic */
	WORD wMaxBitDL;	/* the maximum number of kbits/s in down-link traffic */
	BYTE byTrafficClass;	/* 0: conversationnal; 1: streaming; 2: interactive;3: background; 4: subscribed value(default) */
	BYTE byRes[7];
}NET_DVR_QOSPARAM, *LPNET_DVR_QOSPARAM;


typedef struct tagNET_DVR_PPPDPARAM
{
	BYTE byDialNum[NAME_LEN];		/* dial number, eg. "#777" */
	BYTE byUserName[NAME_LEN];	/* user name, eg. "card" */
	BYTE byPassword[DIALPASSWD_LEN];	/* password, eg. "card" */
	BYTE byApn[NAME_LEN];		/* access point name, eg. "cmnet" */
	NET_DVR_IPADDR struLocalIp;/* local IP address */
	NET_DVR_IPADDR struRemoteIp;/* remote IP address */
	WORD wMtuSize;		/* max transfer unit of ppp interface */
	BYTE byVerifyProtocal;	/* IPCP verify protocal: 0: auto; 1: CHAP; 2: PAP */
	BYTE byRes[25];	
}NET_DVR_PPPDPARAM, *LPNET_DVR_PPPDPARAM;

#define MAX_PHONE_NUM		        32//����볤��

typedef struct tagNET_DVR_DIALPARAM
{
	DWORD dwSize;
	BYTE bEnable3G;		/* 0: disable; 1: enable 3g */
	BYTE byDialMethod;		/* dial methold: 0: auto dial; 1: manual dial; */
	BYTE bySwitchMethod;	/* switch methold: 0: auto switch;1��3G���ȣ�2: manual switch to 2G; 3: manual switch to 3G; */
    BYTE byEnaAlarmInDial;   /* ʹ�ܱ������봥������; 0: disable; 1: enable */
    BYTE byRes1[10];
	WORD wOffLineTime;		/* auto off line when no connection exist,��λ�����ӣ���Χ��5~65535���� */	
	NET_DVR_PPPDPARAM struPppdParam;
    NET_DVR_QOSPARAM struQosParam;
    BYTE byUimNumber[MAX_PHONE_NUM];
    BYTE byRes2[24];
}NET_DVR_DIALPARAM, *LPNET_DVR_DIALPARAM;

typedef struct tagNET_DVR_DIALREQUEST
{
	BYTE byConnNum;		/*�������*/
	BYTE byNetType;		/* ָ�����ĳ�������Ĭ�ϲ��Ų���������ʱ�˲���û�á�0���Զ���1��CDMA��2��EVDO��3��WCDMA��4��TD-SCDMA */
	BYTE byRes[6];
} NET_DVR_DIALREQUEST, *LPNET_DVR_DIALREQUEST;
			 
			 
/* UIM card information */
typedef enum
{
	UIM_UNKNOWN = 0,
	UIM_VALID = 1,
	UIM_NOVALID = 4,
	UIM_ROAM = 11,
	UIM_NOEXIST = 255
}UIM_INFO;

/* real 3g mode */
typedef enum
{
	 /* evdo */
	RMODE_CDMA1X = 12,
	RMODE_EVDO = 14,
	RMODE_CDMAHYBRID = 18,
	/* wcdma */
	RMODE_GSM = 21,
	RMODE_GPRS = 22,
	RMODE_EDGE = 23,
	RMODE_WCDMA = 24,
	RMODE_HSDPA = 25,
	RMODE_HSUPA = 26,
	RMODE_HSPA = 27,
	/* tdscdma */
	RMODE_TGSM = 31,
	RMODE_TGPRS = 32,
	RMODE_TEDGE = 33,
	RMODE_TDSCDMA = 34,
	RMODE_TDHSDPA = 35,
	RMODE_TDHSUPA = 36,
	RMODE_TDHSPA = 37
}REAL_MODE;

typedef struct tagNET_DVR_DIALSTATUS
{
	 BYTE byRealMode;		/* REAL_MODE ,real 3g mode networks */
	 BYTE byUimCard;		/* UIM_INFO ,UIM card information */
	 BYTE byRes1[6];
	 DWORD dwSignal;			/* signal RSSI */
	 DWORD dwDialStatus;		/* dial status */
	 NET_DVR_IPADDR struLocalIp;	/* wireless networks IP address */
	 NET_DVR_IPADDR struRemoteIp;	/* wireless networks gateway */
	 NET_DVR_IPADDR struNetMask;	/* wireless networks netmask */
	 NET_DVR_IPADDR struDns;		/* wireless networks DNS */	 
	 BYTE  byRes2[16];
}NET_DVR_DIALSTATUS, *LPNET_DVR_DIALSTATUS;

//���Ź���
#define MAX_WHITELIST_NUM	        8 //����������

#define HARDDISKFULL_EXCEPTION      0x0     /*Ӳ����*/
#define HARDDISKERROR_EXCEPTION     0x1     /*Ӳ�̴�*/
#define ETHERNETBROKEN_EXCEPTION    0x2     /*���߶�*/
#define IPADDRCONFLICT_EXCEPTION    0x3     /*IP��ַ��ͻ*/
#define ILLEGALACCESS_EXCEPTION     0x4     /*�Ƿ�����*/
#define VI_EXCEPTION                0x5     /*��Ƶ�ź��쳣*/
#define VS_MISMATCH_EXCEPTION       0x6     /*����/�����Ƶ��ʽ��ƥ�� */
#define VIDEOCABLELOSE_EXCEPTION    0x7     /*��Ƶ���ź�*/
#define AUDIOCABLELOSE_EXCEPTION    0x8     /*��Ƶ���ź�*/
#define ALARMIN_EXCEPTION           0x9     /*��������*/
#define MASKALARM_EXCEPTION         0xa     /*�ڵ�����*/
#define MOTDET_EXCEPTION            0xb     /*�ƶ����*/
#define RECORDING_EXCEPTION         0xc     /*¼���쳣*/

#define PHONECFG_RECEIVE_SMS        0x0  /* ֧�ֽ��ձ������� */
#define PHONECFG_SMS_CONTROL        0x1  /* ֧�ֶ��ſ��������� */
#define PHONECFG_CALL_CONTROL       0x2  /* ֧�ֺ��п������� */

typedef struct tagNET_DVR_PHONECFG
{
    BYTE byWhiteList[MAX_PHONE_NUM];
    BYTE byPhonePerssion[32]; /*���ֽڱ�ʾ�Ƿ�ʹ�ܸú����ĳ���ܣ�����λ����ĺ���
                                ��PHONECFG_RECEIVE_SMS�ȶ��� */
    BYTE byAlarmHandler[32];   /*���ֽڱ�ʾ�Ƿ�ʹ�ܶ�ĳ���������͵Ķ��ŷ���*/
    BYTE byRes[128];
} NET_DVR_PHONECFG, *LPNET_DVR_PHONECFG;

typedef struct tagNET_DVR_SMSRELATIVEPARAM
{
	 DWORD dwSize;
	 BYTE bEnableSmsAlarm;	/* 0: disable; 1: enable 3g */
	 BYTE byRes1[7];
	 NET_DVR_PHONECFG struWhiteList[MAX_WHITELIST_NUM];
	 BYTE byRes2[32];
}NET_DVR_SMSRELATIVEPARAM, *LPNET_DVR_SMSRELATIVEPARAM;


typedef struct tagNET_DVR_SMSLISTINFO
{
	 DWORD  dwSize;
	 DWORD dwTotalSmsNum;//��������
	 BYTE  byRes[8];
	 BYTE  *pSmsParam;
	 DWORD dwBufLen;//������ָ�볤�ȣ��������
}NET_DVR_SMSLISTINFO, *LPNET_DVR_SMSLISTINFO;

typedef struct tagNET_DVR_SMSPARAM
{
	 DWORD dwIndex;			/* the index of sms */
	 BYTE byStatus;			/* read yet or not */
	 BYTE byRes[7];
	 NET_DVR_TIME_EX struRecvTime;		/* sms receive time */
}NET_DVR_SMSPARAM, *LPNET_DVR_SMSPARAM;
				 
#define	MAX_SMSCONTENT_LEN		140//�������ݳ���
typedef struct tagNET_DVR_SMSCONTENT
{
	BYTE byPhoneNum[MAX_PHONE_NUM];
	BYTE byMsg[MAX_SMSCONTENT_LEN];
}NET_DVR_SMSCONTENT, *LPNET_DVR_SMSCONTENT; 	
			  
//pin������
typedef enum
{
	CPIN_READY = 1,
	CPIN_PIN = 2,
	CPIN_PUK = 3,
	CPIN_PIN2 = 4,
	CPIN_PUK2 = 5
}PIN_READY;

typedef struct tagNET_DVR_PINSTATUS
{
	DWORD dwSize;
	BYTE byStatus;		/* PIN status, defination see enum: PIN_READY */
	BYTE byPinTimes;	/* remain input PIN times */
	BYTE byPukTimes;	/* remain input PUK times */	
	BYTE bEnableLock;	/* now the PIN locking function is enabled or not: 0, not enabled lock; 1, lock enabled */
	BYTE byRes[4];
}NET_DVR_PINSTATUS, *LPNET_DVR_PINSTATUS;

typedef enum
{
	PIN_ENABLE = 1,
	PIN_DISABLE = 2,
	PIN_VERIFY = 3,
	PUK_VERIFY = 4,
	PIN_CHANGE = 5
}PIN_CMD;
#define MAX_PIN_LEN		12  //PIN����󳤶�
typedef struct tagNET_DVR_PINCODEPARAM
{
	 DWORD dwSize;
	 BYTE byPinCmd;		/* PIN command, defination see enum: PIN_CMD */
	 BYTE byRes1[3];
	 BYTE byPinCode[MAX_PIN_LEN];		/* pin/puk code */
	 BYTE byNewPinCode[MAX_PIN_LEN];	/* new pin code */
	 BYTE byRes2[16];
}NET_DVR_PINCODEPARAM, *LPNET_DVR_PINCODEPARAM;


//ͼƬ����
typedef struct 
{
	/* 0=CIF, 1=QCIF, 2=D1 3=UXGA(1600x1200), 4=SVGA(800x600), 5=HD720p(1280x720),6=VGA*/
	WORD	wPicSize;
	WORD	wPicQuality; /* ͼƬ����ϵ�� 0-��� 1-�Ϻ� 2-һ�� */
	//ץͼͼƬ����ʽ��1-�ϴ����ģ�2-�豸���ر��棬3-�ϴ�����ͬʱ�豸���ر���
	BYTE	byPicTackleMode; 
	BYTE   byRes[11];
}NET_DVR_PUSHJPEGPARA, *LPNET_DVR_PUSHJPEGPARA;


#define	COM_PUSHALARM		0x1200	//�豸����������Ϣ�ϴ�����ģʽ�豸ʹ��
#define	COM_PUSHALARM_V30	0x1201	//�豸����������Ϣ�ϴ�v30����ģʽ�豸ʹ��
typedef struct tagNET_DVR_PUSHALARMINFO
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����*/
	DWORD dwAlarmInputNumber;/*��������˿�*/
	DWORD dwAlarmOutputNumber[MAX_ALARMOUT];/*����������˿ڣ���һλΪ1��ʾ��Ӧ��һ�����*/
	DWORD dwAlarmRelateChannel[MAX_CHANNUM];/*������¼��ͨ������һλΪ1��ʾ��Ӧ��һ·¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	DWORD dwChannel[MAX_CHANNUM];/*dwAlarmTypeΪ2��3,6ʱ����ʾ�ĸ�ͨ����dwChannel[0]��Ӧ��1��ͨ��*/
	DWORD dwDiskNumber[MAX_DISKNUM];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]λ��Ӧ��1��Ӳ��*/
	BYTE byDeviceID[NAME_LEN];/*�豸��ID��*/
	BYTE byRes[4];
}NET_DVR_PUSHALARMINFO, *LPNET_DVR_PUSHALARMINFO;

typedef struct 
{
	DWORD dwAlarmType;/*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-��Ƶ�ź��쳣��10-¼���쳣 11- ���ܳ����仯  12-�����쳣 */
	DWORD dwAlarmInputNumber;/*��������˿�*/
	BYTE byAlarmOutputNumber[MAX_ALARMOUT_V30];/*����������˿ڣ�Ϊ1��ʾ��Ӧ���*/
	BYTE byAlarmRelateChannel[MAX_CHANNUM_V30];/*������¼��ͨ����Ϊ1��ʾ��Ӧ¼��, dwAlarmRelateChannel[0]��Ӧ��1��ͨ��*/
	BYTE byChannel[MAX_CHANNUM_V30];/*dwAlarmTypeΪ2��3,6��9��10ʱ����ʾ�ĸ�ͨ����dwChannel[0]��Ӧ��1��ͨ��*/
	BYTE byDiskNumber[MAX_DISKNUM_V30];/*dwAlarmTypeΪ1,4,5ʱ,��ʾ�ĸ�Ӳ��, dwDiskNumber[0]��Ӧ��1��Ӳ��*/
	BYTE byDeviceID[NAME_LEN];/*�豸��ID��*/
	BYTE byRes[7];
}NET_DVR_PUSHALARMINFO_V30, *LPNET_DVR_PUSHALARMINFO_V30;

//2011-04-20
//��������
typedef struct tagNET_DVR_MB_AUTOWORKPARA
{
	/*��ǰ�������Ʒ�ʽ 0:  Ԥ��,  1:  ��ʱ�ػ�,  2:  �Զ����ػ�*/
	BYTE	byCurPowerCtrlType;   
    BYTE	byRes[3];
	NET_DVR_SCHEDTIME	struWorkTime[MAX_DAYS][2];	
}NET_DVR_MB_AUTOWORKPARA, *LPNET_DVR_MB_AUTOWORKPARA;

typedef struct tagNET_DVR_MB_POWERCTRLPARA
{
    DWORD    dwSize;
	DWORD	 dwHaltDelay; /* �ػ��ӳ�ʱ��,��λmin */
	NET_DVR_MB_AUTOWORKPARA  struAutoWorkPara;/*����������ز�������*/
	BYTE     byRes[36];
}NET_DVR_MB_POWERCTRLPARA, *LPNET_DVR_MB_POWERCTRLPARA;
/*ע��1�����ػ��ӳ�ʱ��, ��ѡʱ��Ϊ 0��5���ӣ�10���� ��20���� 25���� 30���� 35���� 40���� ��45 ���� 50���� ��60���� ��60*2���� ��60*3  60 *4   60*5  60*6 */

//�Զ�����
typedef struct tagNET_DVR_MB_AUTOBACKUPPARA
{
    DWORD dwSize;
	BYTE  byEnableAutoBackup; /* �Ƿ����Զ����� 0 �ر� ��1 ���� */
	BYTE  byRes1[3];
	BYTE  byBackupChannel[MAX_CHANNUM_V30]; 	/*��Ҫ���ݵ�ͨ��*/
	BYTE  byBackupDays[MAX_CHANNUM_V30];/*��������*/
	/* �����ļ����� 
	{0,ALL_RECORD_TYPE,ȫ��},
	{1,TIMING_REC,��ʱ},
	{2,MOTION_DETECT_REC,�ƶ���� },
	{3,ALARM_REC,���� },
	{4,MANUAL_REC,�ֶ�¼��}*/
	BYTE  byBackupFileType[MAX_CHANNUM_V30];
	NET_DVR_SCHEDTIME struBackupTime[MAX_CHANNUM_V30][2];	/* �Զ�����ʱ���*/				
	BYTE  byRes2[36];						/* �����ֽ�*/
}NET_DVR_MB_AUTOBACKUPPARA, *LPNET_DVR_MB_AUTOBACKUPPARA;


typedef struct tagNET_DVR_MB_GPSPARA
{
	DWORD dwSize;
	BYTE  byEnableGPS;	/*�Ƿ�����GPS */
	BYTE  byGpsInterface;/*gps���սӿ�0-rs232, 1-rs485, 2-frontpanel, 3-lcd */
	BYTE  bySpeedUnit;  /*�ٶȵ�λ��0������/Сʱ��1 ��Ӣ��/Сʱ*/
	BYTE  byEnableRetrieve; /* ä������(1���ã�0������) */
	int	  iAdjustTime;/*ʱ��*/
	BYTE  byEnableAdjustTime;/*�Ƿ�����GPSУʱ�� 1-����, 0-������*/
	BYTE  byRes1[5];
	WORD  wGpsUploadInterval;	/* GPS�ϴ����, ��*/
	BYTE  byGpsOsdChannel[MAX_CHANNUM_V30];/*OSD ��ʾ��ÿ�ֽڴ���һ· */
	DWORD dwSpeedLimit;	/* ���ٱ���*/
	NET_DVR_HANDLEEXCEPTION_V30  struGpsAlarm; 
	BYTE  byRes2[36];
}NET_DVR_MB_GPSPARA, *LPNET_DVR_MB_GPSPARA;
/*ע��1��������λΪ����/Сʱ ʱ��ΧΪ��0 ,965����������Ӣ��/Сʱ����λ��ʱ�� ������ٶȷ�ΧΪ��0-600*/

#define 		SENSOR_IN_NUMBER  		8
typedef struct tagNET_DVR_MB_SENSORINPARA
{
	DWORD dwSize;
	BYTE  byTriggerType[SENSOR_IN_NUMBER];/*�г�״̬��ش�����������ֻ�ú�4�����ֱ����ɲ������ת����ת��������0-�ߵ�ƽ��1-�͵�ƽ*/
	BYTE  byTriggerChannel [SENSOR_IN_NUMBER];
	BYTE  byOsdDisplay [MAX_CHANNUM_V30];/*OSD��ʾ,ÿλ����һ·*/
	BYTE  byRes[32];
}NET_DVR_MB_SENSORINPARA, *LPNET_DVR_MB_SENSORINPARA;


typedef struct tagNET_DVR_ACCELERATIONCFG
{
	DWORD	dwMaxXAcc;	/* X����ٶȱ���ֵ ����ȡֵΪʵ����ֵ����10,��СΪ0*/
	DWORD	dwMaxYAcc;	/* Y����ٶȱ���ֵ ����ȡֵΪʵ����ֵ����10.��СΪ0*/
	DWORD	dwMaxZAcc;	/* Z����ٶȱ���ֵ�� ��ȡֵΪʵ����ֵ����10,��СΪ0*/
	BYTE	byRes[4];
}NET_DVR_ACCELERATIONCFG,*LPNET_DVR_ACCERATIONCFG;

typedef struct tagNET_DVR_GSENSORPARA
{
    DWORD dwSize;
	NET_DVR_ACCELERATIONCFG struAccelerationCfg;
	BYTE  byModuleSelect;/*ģ��ѡ��0����/1����*/
    BYTE  byRes1[3];
	NET_DVR_HANDLEEXCEPTION_V30 struHandleException;
	BYTE  byRes2[24];	/*������չ�ֽ�*/
}NET_DVR_GSENSORPARA, *LPNET_DVR_GSENSORPARA;

typedef struct tagNET_DVR_MB_DOWNLOADSVRPARA
{
    DWORD dwSize;
	NET_DVR_IPADDR	struDownloadSvrIp;		/* �Զ����ط�������ַ */
    BYTE  byRes[64];
}NET_DVR_MB_DOWNLOADSVRPARA,*LPNET_DVR_MB_DOWNLOADSVRPARA;

/* ����ʶ�����ز���*/
typedef struct tagNET_DVR_PLATERECOG_PARA
{
	DWORD dwSize;
	BYTE byPrMode; /* ����ʶ���ģʽ, ��̬ͼ��0/��̬��Ƶ1 */
	BYTE byPrScene; /* ����ʶ��ĳ���, ���ٳ���0/���ٳ���1 */
	BYTE byPrDetRect; /* 0:ȫ��Ļ;1:�������� */
	BYTE byPrPicQuality; /* ����ʶ�𷵻ص�ͼƬ����, 0:���/3:��� */	
	BYTE byPrPicMode;/*����ʶ�𷵻ص�ͼƬ�ֱ���: JPEG_MODE_D1, JPEG_MODE_CIF, JPEG_MODE_QCIF */
	BYTE byPlateOsdDisplay; /* ����OSD�Ƿ���ʾ 0:����ʾ/1:��ʾ */
	BYTE byPrProvCharIndex;	/* ����ʶ��ʡ���׺��ֶ�Ӧ������ */
	BYTE byPrProvCharIndex1;	/* ����ʶ�𳣼��׺���1��Ӧ������ */
	BYTE byPrProvCharIndex2;	/* ����ʶ�𳣼��׺���2��Ӧ������ */
	BYTE byRes[7];
}NET_DVR_PLATERECOG_PARA, *LPNET_DVR_PLATERECOG_PARA;


/* ��̬ȡ֤ϵͳ,�������ò����Ľṹ*/
typedef struct tagNET_DVR_SPEEDLMT_PARA
{
	BYTE	bStartMaxSpeedLimit;		/* ������������ */
	BYTE	bStartMinSpeedLimit;		/* ������������ */
	BYTE	byRes[6];
	DWORD	dwMaxSpeedLimit;				/* ������� */
	DWORD	dwMinSpeedLimit;				/* ������� */
}NET_DVR_SPEEDLMT_PARA, *LPNET_DVR_SPEEDLMT_PARA;

/* ��̬ȡ֤ϵͳ,���ƱȶԲ����Ľṹ*/
typedef struct tagNET_DVR_PLATECHECK_PARA
{
	BYTE	bAlarmWhenChecked;			/* ����ɹ��Ƿ񱨾� */
	BYTE	bInformWhenChecked;			/* ����ɹ��Ƿ�Ի�����ʾ */
	BYTE	byRes[6];
	NET_DVR_IPADDR struBlackFtpServer;			/* ������FTP��������ַ */
}NET_DVR_PLATECHECK_PARA, *LPNET_DVR_PLATECHECK_PARA;

typedef struct tagNET_DVR_ENFORCESYS_PARA
{
	DWORD dwSize;
	NET_DVR_SPEEDLMT_PARA	struSpeedLmtPara;	/*��������*/
	NET_DVR_PLATECHECK_PARA struPlateCheckPara;	/*���Ʊȶ�*/
	BYTE	bySelPeccType;	/*�Ƿ�ѡ��Υ������*/
	BYTE	byEnfOptHabit; /*ȡ֤����ϰ��, 0:����ȡ֤;1:�̰�����ȡ֤*/
	/*Ԥ��֡�ʵ���ģʽ�����֣�
	A �ر� adjPrevFpsMode=0
	�Թ̶���֡��(25FPS)Ԥ��
	B ��׼ adjPrevFpsMode=1
	�Թ̶���֡��(6FPS)Ԥ��
	C ����Ӧ adjPrevFpsMode=2
	����GPS�ٶ���Ϣ��̬����Ԥ��֡�ʣ�
	3������ЧGPS������£��Թ̶���֡��Ԥ��*/
	BYTE	byAdjPrevFpsMode;		
	BYTE	byRes1;
	NET_DVR_IPADDR  struUploadServerIp; //�ϴ���������ַ
	WORD	wUploadServerPort;
	BYTE	byRes2[18];
}NET_DVR_ENFORCESYS_PARA, *LPNET_DVR_ENFORCESYS_PARA;

typedef struct tagNET_DVR_PUSHMODEPARAM
{
    //ֱ��ģʽ��UDPԤ��ģʽ��1-ͬ�˿ڶ�·����2-һ�˿�һ·��
    BYTE byUdpPreviewMode; 
    //�����Խ�����ģʽ��0-�����Խ���1-����ת����SDK�����������Ĳɼ��Ͳ��ţ�
    BYTE byVoiceWorkMode; 
    BYTE byRes[18];	
}NET_DVR_PUSHMODEPARAM, *LPNET_DVR_PUSHMODEPARAM;

#define MAX_ALARMHOST_ALARMIN_NUM	        512//���籨��������󱨾��������
#define MAX_ALARMHOST_ALARMOUT_NUM	        512//���籨��������󱨾��������

#define ALARMHOST_MAX_AUDIOOUT_NUM		    32//���籨������������������
#define ALARMHOST_MAX_ELECTROLOCK_NUM		32//���籨��������������
#define ALARMHOST_MAX_MOBILEGATE_NUM		32//���籨����������ƶ�����
#define ALARMHOST_MAX_SIREN_NUM             8 // ��󾯺���Ŀ
#define MAX_ALARMHOST_SUBSYSTEM             32//�������������ϵͳ��

typedef enum tagSENSOR_TYPE
{
	SENSOR_TYPE_NONE = 0,       //��
	SENSOR_TYPE_TEMPERATURE = 1, // �¶�
	SENSOR_TYPE_HUMIDITY ,      // ʪ��
	SENSOR_TYPE_WINDSPEED,      // ����
	SENSOR_TYPE_GAS,            //����
	SENSOR_TYPE_UNKNOW = 255    //δ����
}SENSOR_TYPE;

typedef struct tagNET_DVR_SENSOR_INFO
{
	DWORD  dwSize;                 // �ṹ���С
	BYTE    byName[NAME_LEN];    // ����������
	BYTE    byEnable;               // �Ƿ����� 
	BYTE    byValid;                // �Ƿ���Ч ����������������(�ò���ֻ�ܻ�ȡ���ܸ�����)
	BYTE    byType;                 // ģ�������� ����SENSOR_TYPE
	BYTE	byAlarmMode;//����ģʽ�����֣�15-HHHH��14-HHHL��12-HHLL��8HLLL��0-LLLL������1111���������ϣ���1110���������£���1100���������£���1000(��������)��0000(��������)
	float   fMeasureHigh;           // ��������
	float   fMeasureLow;            // ��������
	float	fAlarm1;           //������1,������1-4 ��������
	float	fAlarm2;           //������2
	float	fAlarm3;           //������3
	float	fAlarm4;           //������4
	DWORD   dwOsdCfg;          //ģ�����ַ����ӣ���λ��ʾ0-15��Ӧ��Ƶͨ��1-16
	float	fSensitive;			// �����ȱ�ʾ��ʵʱֵ�ı仯���������ȵķ�Χʱ�����ʾʵʱֵ�����˱仯��������Ϊû�з����仯���磺������Ϊ0.1�����ʾǰ���������ֵ֮�����0.1ʱ������Ϊ���ݷ����仯����0.1����Ҫ�ϴ������Ϊ1�����ʾ�仯����1ʱ�ϱ���
	BYTE    byRes3[116];            // �����ֽ�
}NET_DVR_SENSOR_INFO, *LPNET_DVR_SENSOR_INFO;

typedef struct tagNET_DVR_SIREN_PARAM
{
	DWORD   dwSize;     // �ṹ��С
    BYTE    byName[NAME_LEN];   // ����
	WORD    wDelay;     // ����ӳ� ��λΪ��, ��Χ 0~5599s 0��ʾһֱ�����
    BYTE	byRes1[2];
    BYTE    byAssociateAlarmIn[MAX_ALARMHOST_ALARMIN_NUM];   //��ʾ���Ÿ���ı�������ͨ�� �������������ͬʱ����һ����������������±�0��ʾ��������1���������� 0-������ 1-����
    BYTE    byRes2[68];  // �����ֽڡ�
}NET_DVR_SIREN_PARAM, *LPNET_DVR_SIREN_PARAM;

typedef struct tagNET_DVR_AIR_CONDITION_PARAM
{
	DWORD	dwSize;		// �ṹ���С
	BYTE	byEnable;	// 0--�ػ� 1--����
	BYTE	byMode;		// �յ�ģʽ
	BYTE	byTemperature;	// �¶ȣ�����ֵ��ʾ ͨ��Ϊ16-30��
	BYTE	byRes[9];		// �����ֽ�
}NET_DVR_AIR_CONDITION_PARAM, *LPNET_DVR_AIR_CONDITION_PARAM;

typedef enum tagDETECTOR_TYPE
{
    PANIC_BUTTON = 0,               // ��������
    MAGNETIC_CONTACT,               // �Ŵſ���
    SMOKE_DETECTOR,                 // �̸�̽����
    ACTIVE_INFRARED_DETECTOR,       // ��������̽����
    PASSIVE_INFRARED_DETECTOR,      // ��������̽����
    GLASS_BREAK_DETECTOR,           // ��������̽����
    VIBRATION_DETECTOR,             // ��̽����
    DUAL_TECHNOLOGY_PIR_DETECTOR,   // ˫���ƶ�̽����
    TRIPLE_TECHNOLOGY_PIR_DETECTOR, // ������̽����
    HUMIDITY_DETECTOR,              // ʪ��̽����
    TEMPERATURE_DETECTOR,           // �¸�̽����
    COMBUSTIBLE_GAS_DETECTOR,        // ��ȼ����̽����
    OTHER_DETECTOR = 0xffff          // ����̽����   
}DETECTOR_TYPE;

typedef struct tagNET_DVR_ALARMIN_PARAM
{
	DWORD   dwSize;
	BYTE    byName[NAME_LEN];
	WORD    wDetectorType; // DETECTOR_TYPE
	BYTE    byType;     //�������ͣ�0:��ʱ����,1-24Сʱ����,2-��ʱ���� ,3-�ڲ�������4-Կ�׷��� 5-�𾯷��� 6-�ܽ���� 7-24Сʱ�������� 0xff-��
	BYTE    byRes1;    
	DWORD	dwParam;    // ��������  ��ʱ������ʱ�೤ʱ��, �������������������б�����������ʱʱ��ͨ��������������� , �������������÷�ʽͨ���������е�bySupportAlarmInDelay�ֶ�������
    NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS][MAX_TIMESEGMENT];/*����ʱ��ʱ���*/
	BYTE    byAssociateAlarmOut[MAX_ALARMHOST_ALARMOUT_NUM];  // ������������������
    BYTE	byAssociateSirenOut[8];		//  ������� ����0 ��ʾ����1 ֵΪ1��ʾ��� 0 ��ʾ�����
    BYTE	bySensitivityParam;//���������Ȳ���, 0-10ms��1-250ms��2-500ms��3-750ms
    BYTE	byArrayBypass;//�Ƿ������·��,0-��֧������·,1-֧������·
	BYTE	byJointSubSystem; //������������ϵͳ�ţ��ò���ֻ�ܻ�ȡ  
	BYTE    byModuleStatus;	//ģ��״̬ 1-���� 2-����
	WORD	wModuleAddress;	//ģ���ַ����չģ���0~255��0xFFFF��ʾ��Ч
	BYTE	byModuleChan;	//ģ��ͨ���ţ���1��ʼ�����ֵ����ģ��������������0xFF��ʾ��Ч
	BYTE	byModuleType;	//ģ�����ͣ�1-���ط�����2-��������3-˫������4-8������5-8·ģ��������
	WORD	wZoneIndex;		//�����ţ��ò���ֻ�ܻ�ȡ	  
    BYTE    byRes2[42];      // �����ֽ�
}NET_DVR_ALARMIN_PARAM, *LPNET_DVR_ALARMIN_PARAM;

typedef struct tagNET_DVR_ALARMOUT_PARAM
{
	DWORD   dwSize;             // �ṹ���С
	BYTE    byName[NAME_LEN];   // ����
	WORD    wDelay;             // ����ӳ� ��λs, ��Χ��0~3599s 0 ��ʾһֱ�����
	WORD	wTriggerIndex;		//�������ţ��ò���ֻ�ܻ�ȡ
	BYTE    byAssociateAlarmIn[MAX_ALARMHOST_ALARMIN_NUM];   //��ʾ���Ÿ���ı�������ͨ�� �������������ͬʱ����һ����������������±�0��ʾ��������1���������� 0-������ 1-����
	BYTE	byModuleType;	//��Ӵ��������ͣ�1-���ش������� 2-4·��������3-8·������
	BYTE	byModuleStatus;	//��Ӵ�����״̬ 1-���� 2-����
	WORD	wModuleAddress;	//��Ӵ�������ַ����չģ���0~255��0xFFFF��ʾ��Ч
	BYTE	byModuleChan;	//��Ӵ�����ͨ���ţ���1��ʼ�����ֵ����ģ��������������0xFF��ʾ��Ч
	BYTE   	byRes2[55]; 			//�����ֽ�
}NET_DVR_ALARMOUT_PARAM, *LPNET_DVR_ALARMOUT_PARAM;

typedef struct tagNET_DVR_ALARMIN_SETUP
{
    BYTE byAssiciateAlarmIn[MAX_ALARMHOST_ALARMIN_NUM];//��������ͨ�� �����±�0��Ӧ���������1����������
    BYTE byRes[100];//�����ֽ�
}NET_DVR_ALARMIN_SETUP, *LPNET_DVR_ALARMIN_SETUP;

typedef struct tagNET_DVR_ALARMHOST_MAIN_STATUS
{
	DWORD  dwSize; 
	BYTE   bySetupAlarmStatus[MAX_ALARMHOST_ALARMIN_NUM];//��������ڲ���״̬��(���֧��512����������ڲ�ѯ)��0-��Ӧ��������ڴ��ڳ���״̬��1-��Ӧ��������ڴ��ڲ���״̬
	BYTE   byAlarmInStatus[MAX_ALARMHOST_ALARMIN_NUM];//��������ڱ���״̬��(���֧��512����������ڲ�ѯ)��0-��Ӧ��������ڵ�ǰ�ޱ�����1-��Ӧ��������ڵ�ǰ�б���
	BYTE   byAlarmOutStatus[MAX_ALARMHOST_ALARMOUT_NUM];//���������״̬��(���֧��512����������ڲ�ѯ)��0-��Ӧ����������ޱ�����1-��Ӧ����������б���
    BYTE   byBypassStatus[MAX_ALARMHOST_ALARMIN_NUM];  // ��·״̬ �����±��ʾ0��Ӧ���������1 0-��ʾ���������û����· 1-��ʾ�����������·
	BYTE   bySubSystemGuardStatus[MAX_ALARMHOST_SUBSYSTEM]; //��ϵͳ����״̬,0-��Ӧ��ϵͳ���ڳ���״̬��1-��Ӧ��ϵͳ���ڲ���״̬
    BYTE   byAlarmInFaultStatus[MAX_ALARMHOST_ALARMIN_NUM];//��������ڹ���״̬��0-��Ӧ��������ڴ�������״̬��1-��Ӧ��������ڴ��ڹ���״̬
    BYTE   byRes[56];      //  �����ֽ�
}NET_DVR_ALARMHOST_MAIN_STATUS, *LPNET_DVR_ALARMHOST_MAIN_STATUS;

typedef struct tagNET_DVR_ALARMHOST_OTHER_STATUS
{
	DWORD  dwSize;
    BYTE   bySirenStatus[ALARMHOST_MAX_SIREN_NUM];    // �������״̬ 0-���Ŵ����ޱ���״̬��1-���Ŵ����б���״̬
    BYTE   byRes[92];             // �����ֽ�
}NET_DVR_ALARMHOST_OTHER_STATUS, *LPNET_DVR_ALARMHOST_OTHER_STATUS;

//ʹ��״̬����
typedef struct tagNET_DVR_ALARMHOST_ENABLECFG
{
	DWORD dwSize;
	BYTE  byAudioOutEnable[ALARMHOST_MAX_AUDIOOUT_NUM];//�������ʹ�ܣ�0-���ܣ�1-ʹ��
	BYTE  byElectroLockEnable[ALARMHOST_MAX_ELECTROLOCK_NUM];//����ʹ�ܣ�0-���ܣ�1-ʹ��
	BYTE  byMobileGateEnable[ALARMHOST_MAX_MOBILEGATE_NUM];//�ƶ���ʹ�ܣ�0-���ܣ�1-ʹ��
	BYTE  bySirenEnable[ALARMHOST_MAX_SIREN_NUM];//����ʹ�ܣ� 0-���ܣ�1-ʹ��
	BYTE  bySerialPurpose;//������;��0-���ڼ�������������1-����PTZ����
	BYTE  byRes[63];	
}NET_DVR_ALARMHOST_ENABLECFG, *LPNET_DVR_ALARMHOST_ENABLECFG;

typedef struct tagNET_DVR_ALARMHOST_ABILITY
{
	DWORD   dwSize;					  // �ṹ���С
	WORD    wTotalAlarmInNum;         // �������������(����),��������
	WORD    wLocalAlarmInNum;         // ���ر��������
	WORD    wExpandAlarmInNum;        // ����չ�ı��������
	WORD    wTotalAlarmOutNum;        // ������������� ���豸֧�ֵ�������
	WORD    wLocalAlarmOutNum;        // ���ر�������ڸ���
	WORD    wExpandAlarmOutNum;       // ����չ�ı��������
	WORD    wTotalRs485Num;           // ������������� ���豸֧�ֵ�������
	WORD    wLocalRs485Num;           // ����485����
	WORD    wExpandRs485Num;          // ����չ��485����
	WORD	wFullDuplexRs485Num;    // ȫ˫����485����
	WORD    wTotalSensorNum;          // ģ���������� (�豸֧�ֵ�����)
	WORD	wLocalSensorNum;		// ����ģ��������
	WORD    wExpandSensorNum;         // ����չ��ģ��������
	WORD    wAudioOutNum;			    //�����������
	WORD    wGatewayNum;			//�Ž�����
	WORD    wElectroLockNum;		    //��������
	WORD    wSirenNum;     			// ����������Ŀ
	WORD    wSubSystemNum;			// �ɻ�����ϵͳ��Ŀ
    WORD    wNetUserNum;            // �����û���
    WORD    wKeyboardNum;           // ������
    WORD    wOperatorUserNum;           // �����û���
	BYTE    bySupportDetector;//�Ƿ�֧�ֳ���������̽������1-֧�֣�0-��֧��
    BYTE    bySupportSensitivity;//�Ƿ�֧�ַ��������ȣ�1-֧�֣�0-��֧��
    BYTE    bySupportArrayBypass;//�Ƿ�֧������·��1-֧�֣�0-��֧��
    BYTE    bySupportAlarmInDelay;//�Ƿ�֧�ַ����ӳ�,1-֧�֣�0-��֧��
	//���bySupportAlarmInDelayΪ1ʱ����ʾ�ͻ���Ӧ��ʹ��NET_DVR_ALARMIN_PARAM �е�dwParam��������ʱʱ�䣬�������������������б�������ʹ������������ʱ��ʽ;
	//���bySupportAlarmInDelayΪ0ʱ����ʾͨ��NET_DVR_ALARMSUBSYSTEMPARAM �е�wEnterDelay ��wExitDelay ������
    BYTE    bySupportAlarmInType[16];//֧�ֵķ�������,����0:��ʱ����,1-24Сʱ����,2-��ʱ���� ,3-�ڲ�������4-Կ�׷��� 5-�𾯷��� 6-�ܽ���� 7-24Сʱ�������� 15-��
	BYTE	byTelNum;		//֧�ֵ绰����
	BYTE	byCenterGroupNum;	//���������
	BYTE	byGPRSNum;		//GPRS�����������4��
	BYTE	byNetNum;		//���������������4��
	BYTE	byAudioNum;		//��Ƶ����
	BYTE	by3GNum;		//3Gģ�����
	BYTE	byAnalogVideoChanNum;		//ģ����Ƶͨ������
	BYTE	byDigitalVideoChanNum;		//������Ƶͨ������
	BYTE	bySubSystemArmType;		//��ϵͳ�������ͣ�0-��ʾ��֧�֣�1-��ʾ֧�֡�bit0-��ͨ������ע������С����ֻ֧����ͨ���������������м�����ֶε�ʱ������С�����Ѿ���������������С�����и��ֶ�Ϊ0��������0��ʾ֧�֣�1��ʾ��֧�֡�����ӿ���SDK�ڲ��������ݣ���bit1-��ʱ������bit2-���ز�����	
	BYTE	byPublicSubSystemNum;	//������ϵͳ����
	DWORD	dwSupport1;	//��λ��ʾ�������0��ʾ֧�֣�0��ʾ��֧��
	// bit0: 	�Ƿ�֧����ϵͳ�����þ������ʱ�䣬���֧���򾯺����ʱ����ÿ����ϵͳ�����ã������֧�֣�����ʱ���ھ��Ų���������������
	// bit1:	�Ƿ�֧���¼����������������
	// bit2:	�Ƿ�֧���¼�������������ر�
	// bit3:	�Ƿ�֧����ϵͳʹ��
	// bit4;	�Ƿ�֧�ַ�������
	// bit5;	�Ƿ�֧����ϵͳ�Զ�������
	// bit6:	�Ƿ�֧�־�����Ϲ����������
	// bit7:	�Ƿ�֧�ֹ���״̬��ѯ
	// bit8:	�Ƿ�֧����ϵͳ��չ����
	// bit9:    �Ƿ�֧��Կ�׷���������ϵͳ
	// bit10:   �Ƿ�֧��"������ʾ�ɹ����ͱ���"����
	// bit11:   �Ƿ�֧�ֵ��뵼����������
    // bit12:   �Ƿ�֧��LED��Ļ��������
	DWORD	dwSubSystemEvent;		//��ϵͳ�¼�����λ��ʾ��0��ʾ��֧�֣���0��ʾ֧��,bit0-������ʱ��bit1-�˳���ʱ��bit2-������bit3-������bit4-������bit5-������������
	DWORD	dwOverallEvent;			//ȫ���¼�����λ��ʾ��0��ʾ��֧�֣���0��ʾ֧�֣�bit0-��������磬bit1-��ص�ѹ�ͣ�bit2-�绰�ߵ��ߣ�bit3-���������쳣��bit4-���������쳣
	DWORD	dwFaultType;			//�豸֧�ֵĹ������ͣ�bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣	
	BYTE	byPublicSubsystemAssociateSubsystemNum;	//������ϵͳ�ɹ�������ϵͳ����
	BYTE	byOverallKeyboard;	//ȫ�ּ��̸���
    WORD    wSafetyCabinSupport; //�����տ�������������λ��ʾ�������0��ʾ֧�֣�0��ʾ��֧��	
    //bit0: �Ƿ�֧�ַ����տ���������ģʽ����
    //bit1: �Ƿ�֧�����źŴ�������������
    //bit2: �Ƿ�֧��Ļ���������������ã�̽���ӳ�ʱ�䡢��״̬�仯��Ӧʱ�䣩
    //bit3: �Ƿ�֧�ֺ�����䴫�����������ã��˲���
	//bit4: �Ƿ�֧�ַ�����ʹ�ó�ʱʱ������
	BYTE	byRes[122];			//  �����ֽ�
}NET_DVR_ALARMHOST_ABILITY, *LPNET_DVR_ALARMHOST_ABILITY;

typedef struct tagNET_DVR_ALARM_RS485CFG
{
	DWORD   dwSize;                 // �ṹ���С
	BYTE    sDeviceName[NAME_LEN];  // ǰ���豸���� 
	WORD    wDeviceType;            // ǰ���豸����ALARM_FRONT_DEVICE _TYPE
	WORD    wDeviceProtocol;        // ǰ���豸Э�� ͨ����ȡЭ���б��ȡ	
	DWORD   dwBaudRate;             //������(bps)��0-50��1-75��2-110��3-150��4-300��5-600��6-1200��7-2400��8-4800��9-9600��10-19200��11-38400��12-57600��13-76800��14-115.2k 
	BYTE    byDataBit;              // �����м�λ��0-5λ��1-6λ��2-7λ��3-8λ 
	BYTE    byStopBit;              // ֹͣλ��0-1λ��1-2λ 
	BYTE    byParity;               //�Ƿ�У�飺0-��У�飬1-��У�飬2-żУ�� 
	BYTE    byFlowcontrol;           // �Ƿ����أ�0-�ޣ�1-������,2-Ӳ���� 
	BYTE	byDuplex;				// 0 - ��˫��1- ȫ˫��  ֻ��ͨ��1������ȫ˫��������ֻ���ǰ�˫��
    BYTE    byWorkMode;				// ����ģʽ 0-����̨ 1-͸��ͨ��
    BYTE    byRes[38];              // �����ֽ�
}NET_DVR_ALARM_RS485CFG, *LPNET_DVR_ALARM_RS485CFG;

#define MAX_DEVICE_PROTO_NUM       256
#define MAX_DEVICE_TYPE_NUM			256

// 485ǰ���豸֧��Э���б�
typedef struct tagNET_DVR_DEVICE_PROTO_LIST
{
    DWORD   dwSize;             // �ṹ���С
    DWORD   dwProtoNum;         // Э�����
    NET_DVR_PROTO_TYPE struProtoType[MAX_DEVICE_PROTO_NUM];  // Э������
    BYTE    byRes[12];          // �����ֽ�
}NET_DVR_DEVICE_PROTO_LIST, *LPNET_DVR_DEVICE_PROTO_LIST;

typedef struct tagNET_DVR_DEVICE_TYPE
{
	DWORD	dwType;
	BYTE	byDescribe[DESC_LEN];
}NET_DVR_DEVICE_TYPE, *LPNET_DVR_DEVICE_TYPE;

typedef struct tagNET_DVR_DEVICE_TYPE_LIST
{
	DWORD	dwSize;				// �ṹ���С
	DWORD	dwTypeNum;			// ���͸���
	NET_DVR_DEVICE_TYPE struDeviceType[MAX_DEVICE_TYPE_NUM];
	BYTE	byRes[12];
}NET_DVR_DEVICE_TYPE_LIST, *LPNET_DVR_DEVICE_TYPE_LIST;

#define	MAX_ALARMHOST_VIDEO_CHAN	64
typedef struct tagNET_DVR_ALARM_DEVICE_USER
{
	DWORD  dwSize;                 // �ṹ���С
	BYTE   sUserName[NAME_LEN];    // �û���
	BYTE   sPassword[PASSWD_LEN];	// ����
    NET_DVR_IPADDR	struUserIP;					/* �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ) */
    BYTE   byMACAddr[MACADDR_LEN];			/* �����ַ */
    BYTE   byUserType; // 0-��ͨ�û� 1-����Ա�û�
	BYTE   byAlarmOnRight;         // ����Ȩ��
	BYTE   byAlarmOffRight;        // ����Ȩ��
	BYTE   byBypassRight;          // ��·Ȩ��
	BYTE   byOtherRight[MAX_RIGHT];  // ����Ȩ��
    // 0 -- ��־Ȩ��
    // 1 -- �����ػ�
    // 2 -- ��������Ȩ��
    // 3 --	������ȡȨ��
    // 4 -- �ָ�Ĭ�ϲ���Ȩ��
    // 5 -- �������Ȩ��
    // 6 -- PTZ ����Ȩ��
	// 7 -- Զ������Ȩ��
	// 8 -- Զ��Ԥ��
	// 9 -- Զ���ֶ�¼��
	// 10 -- Զ�̻ط�
	BYTE	byNetPreviewRight[MAX_ALARMHOST_VIDEO_CHAN/8];	// Զ�̿���Ԥ����ͨ������λ��ʾ��ͨ����bit0-channel 1����1-��Ȩ�ޣ�0-��Ȩ��
	BYTE	byNetRecordRight[MAX_ALARMHOST_VIDEO_CHAN/8];	// Զ�̿���¼���ͨ������λ��ʾ��ͨ����bit0-channel 1����1-��Ȩ�ޣ�0-��Ȩ��
	BYTE	byNetPlaybackRight[MAX_ALARMHOST_VIDEO_CHAN/8]; // Զ�̿��Իطŵ�ͨ������λ��ʾ��ͨ����bit0-channel 1����1-��Ȩ�ޣ�0-��Ȩ��
	BYTE	byNetPTZRight[MAX_ALARMHOST_VIDEO_CHAN/8];		// Զ�̿���PTZ��ͨ������λ��ʾ��ͨ����bit0-channel 1����1-��Ȩ�ޣ�0-��Ȩ��
	//BYTE	byPriority;										// ���ȼ���0xff-�ޣ�0--�ͣ�1--�У�2--��
	//�ޣ���ʾ��֧�����ȼ������ã�
	//�ͣ�Ĭ��Ȩ�ޣ�����Զ�̻طţ�Զ�̲鿴��־��״̬��Զ�̹ػ�/������
	//�У�����Զ�̿�����̨��Զ���ֶ�¼��Զ�̻طţ������Խ���Զ��Ԥ�������ر��ݣ�����/Զ�̹ػ�/������
	//�ߣ�����Ա��
	BYTE	byRes2[168];              // �����ֽ�
}NET_DVR_ALARM_DEVICE_USER, *LPNET_DVR_ALARM_DEVICE_USER;

typedef struct tagNET_DVR_KEYBOARD_USER
{
	DWORD 	dwSize; 	// �ṹ���С
	DWORD	dwID;		// �����û�ID
	BYTE	byDefanceArea[MAX_ALARMHOST_ALARMIN_NUM]; //����Ȩ��  �������±��ʾ ���֧��512������ 0 - ��Ȩ�� 1- ��Ȩ��
	BYTE	byRes[560];		// �����ֽ�
}NET_DVR_KEYBOARD_USER, *LPNET_DVR_KEYBOARD_USER;

typedef struct tagNET_DVR_OPERATE_USER
{
	DWORD	 dwSize;		// �ṹ���С
	BYTE    sUserName[NAME_LEN];    // �û���
    BYTE    sPassword[PASSWD_LEN];  // ����
    BYTE   bySubSystemPermission;/*0-��װԱȨ�� ����ԱȨ�ޣ�������ϵͳ�����£� 1-���������޲������棬������· 2-���������޳������棬������· 3-���������޲��������棬������· 
	4-���������в�//�����棬������· 5-���������г������棬������· 6-���������в��������棬������·  7-���������޲��������棬������· 
	8-���������޲��������棬������· 9-���������޲��������棬������· 10-���������в������棬������· 11-���������г������棬������· 1
	2-���������в��������棬������·*/
    BYTE    byRes[63];             //  �����ֽ�
}NET_DVR_OPERATE_USER, *LPNET_DVR_OPERATE_USER;

typedef struct tagNET_DVR_GATEWAY_CFG
{
    DWORD	dwSize;		// �ṹ���С
    BYTE	byName[NAME_LEN];	//  �Ž�����	
    BYTE	byEnable;	// �Ƿ�����
    BYTE    byLocalEnable;  //  �����Ƿ�����
    WORD    wDelayTime;	// ������ʱʱ��	��λΪ��0-65535 0Ϊһֱ����
	BYTE	byLockWorkMode;//��������ģʽ��0-ͨ��������1-�ϵ�����
    BYTE	byRes[31];	// �����ֽ�
}NET_DVR_GATEWAY_CFG, *LPNET_DVR_GATEWAY_CFG;

typedef struct tagNET_DVR_SENSOR_ALARM
{
    DWORD   dwSize;		        // �ṹ���С
    DWORD   dwAbsTime;	        // ����ʱ����Ϣ  OSD��ʾ��Ϣ
    BYTE    byName[NAME_LEN]; 	// sensor ����
    BYTE    bySensorChannel;    // ģ����ͨ��
    BYTE    byType;             // ģ��������
    BYTE	byAlarmType;	    // 1-��4��2-��3��3-��2��4-��1��5-��1��6-��2��7-��3��8-��4 �͵�ǰģʽ�й�
                                // ���統Ϊ1000ʱ,����1��1��2��3�������ֱ���
    BYTE	byAlarmMode;        //����ģʽ�����֣�-HHHH��-HHHL��-HHLL��HLLL��-LLLL�� ��Ϊƽ̨�����̶��жϹ���,����1111���������ϣ���1110���������£���1100���������£���1000(��������)��0000(��������) 
    float	fValue;		        // ��ǰģ������ֵ
    BYTE	byRes2[32];		    // �����ֽ�
}NET_DVR_SENSOR_ALARM, *LPNET_DVR_SENSOR_ALARM;

typedef struct 
{
    /*Ԥ����Ŀǰ���������ı���û������(���������򣬼���������)*/
    DWORD  dwAlarmType;             
    /*����0��Ӧ��1������˿�*/
    BYTE   byAlarmInputNumber[MAX_ALARMHOST_ALARMIN_NUM];
    BYTE	byRes[160];
}NET_DVR_ALARMHOST_ALARMINFO,*LPNET_DVR_ALARMHOST_ALARMINFO;
// �����������ϴ�
typedef struct tagNET_DVR_SWITCH_ALARM
{
    DWORD dwSize;
    BYTE   byName[NAME_LEN]; 	// switch ����
    WORD  wSwitchChannel;     // ������ͨ��, 0-255
    BYTE	byAlarmType;		// �������� 0--������1--��·��2--��·,3-�쳣 
    BYTE	byEventType;//�¼�����0-������1-����������������
    DWORD  dwRelativeTime;  //���ʱ���
    NET_DVR_TIME_EX struOperateTime; 
    BYTE 	byRes[28];			// �����ֽ�
}NET_DVR_SWITCH_ALARM, *LPNET_DVR_SWITCH_ALARM;

typedef union tagNET_DVR_ALARMHOST_EXCEPTION_PARAM
{
    DWORD   dwUnionSize[20];        // �������С    
}NET_DVR_ALARMHOST_EXCEPTION_PARAM, *LPNET_DVR_ALARMHOST_EXCEPTION_PARAM;

typedef struct tagNET_DVR_ALARMHOST_EXCEPTION_ALARM
{
    DWORD   dwSize;             // �ṹ���С
    // �쳣����  1-�豸���𱨾� 2-�豸������ָ����� 3-����Դ���籨�� 4-����Դ�����ָ����� 5-�ڲ�ͨ�Ź��ϱ��� 
    // 6-�ڲ�ͨ�Ź��Ϻ�ָ�����  7-�绰�߶��� 8-�绰�߶��߻ָ� 9-�Լ�ʧ�ܱ���  10-�Լ�ʧ�ܺ�ָ�����    
    // 11����Ƿѹ  12���ص�ѹ�ָ�������13-���ع��ϣ�14-MBUSģ����ߣ�15-MBUSģ����߻ָ���16-���̵��ߣ�
    //17-���̵��߻ָ���18-�豸���ƶ���19-�豸���ƶ���λ  20-485������·�ϱ���  21-485������·�Ϻ�ָ�����
    DWORD   dwExceptionType;    
    NET_DVR_ALARMHOST_EXCEPTION_PARAM uExceptionParam;
    DWORD  dwRelativeTime;  //���ʱ���
    NET_DVR_TIME_EX struOperateTime; 
    BYTE   byRes[4];          // ����
}NET_DVR_ALARMHOST_EXCEPTION_ALARM, *LPNET_DVR_ALARMHOST_EXCEPTION_ALARM;

//�����в��Ų������ü����÷�ʽ����
#define MAX_CENTERNUM			4		//G1,G2 G3 G4����N1��N2��N3��N4����T1��T2��T3��T4
typedef struct tagNET_DVR_PHONECENTERDIALCFG
{
    BYTE sCenterName[NAME_LEN];
    BYTE byPhoneNum[MAX_PHONE_NUM/*32*/];  //���ĺ���  
    BYTE byRepeatCall;          //�ظ����Ŵ�����1~15��
    BYTE byPstnProtocol;        //ͨ��Э�飬0-CID��
    BYTE byDialDelay;           //������ʱ�����150s, 0-150
    BYTE byPstnTransMode;       //���䷽ʽ��0-DTMF 5/S��1-DTMF 10/S��
    BYTE byRes1[6];
    BYTE byReceiverId[6];     	//���ջ�ʶ���˺ţ�
    BYTE byRes2[32];
}NET_DVR_PHONECENTERDIALCFG, *LPNET_DVR_PHONECENTERDIALCFG;

typedef struct tagNET_DVR_ALARMHOSTDIALCFG
{
    DWORD dwSize;
    NET_DVR_PHONECENTERDIALCFG struPhoneCenterParam[MAX_CENTERNUM];//�����Ĳ���
	WORD wReportPeriod;      //���Ա����ϴ����ڣ�Сʱ�������ֵ֧��7�죬��168Сʱ), ��Χ��1-168
	WORD wFirstReportTime;	 //���豸��������һ�����Ա����ϴ���1~3600����
	BYTE  byReportValid;	//0-�����ò��Ա����ϴ� 1-���ò��Ա����ϴ�
    BYTE  byRes[19];
}NET_DVR_ALARMHOSTDIALCFG, *LPNET_DVR_ALARMHOSTDIALCFG;

typedef struct tagNET_DVR_ALARMHOSTDIALSETUPMODE
{
	DWORD dwSize;
	BYTE byEnableMode;//���÷�ʽ��0�������ã�1��һֱ���ã�2:���߶����ã�����ʱ�رգ�
    BYTE byCallType; //�ϴ����ķ�ʽ��1-�����ģ�2-˫���ģ�3��һ��һ��
    BYTE byRes1[14];
}NET_DVR_ALARMHOSTDIALSETUPMODE, *LPNET_DVR_ALARMHOSTDIALSETUPMODE;

#define  MAX_PU_CHAN_NUM    512

typedef struct tagNET_DVR_PU_CHAN_INFO
{
    NET_DVR_IPADDR  struIpAddr;     // ip��ַ
    WORD            wPort;          // �˿�
    WORD            wChannel;       // ͨ��     
    BYTE            byRes[24];      // 
}NET_DVR_PU_CHAN_INFO, *LPNET_DVR_PU_CHAN_INFO;

typedef struct tagNET_DVR_PU_CHAN_LIST
{
    DWORD   dwSize;     // �ṹ��
    DWORD   dwNum;      // ǰ��ͨ������
    NET_DVR_PU_CHAN_INFO struPuChanInfo[MAX_PU_CHAN_NUM];
}NET_DVR_PU_CHAN_LIST, *LPNET_DVR_PU_CHAN_LIST;

#define  MAX_ALARM_CAM_NUM	32		// ��������CAM������

typedef struct tagNET_DVR_PTZ_CTRL
{
	BYTE    byEnable;   // �Ƿ�����PTZ����
	BYTE    byType;     // PTZ ���Ƶ����� 1- Ԥ�õ� 2 -Ѳ��  3-�켣
	BYTE    byPtzNo;    //  ptz ���Ƶ�Ԥ�õ� Ѳ�� �켣��
	BYTE    byRes[5];    // �����ֽ�
}NET_DVR_PTZ_CTRL, *LPNET_DVR_PTZ_CTRL;

typedef struct tagNET_DVR_ALARM_CAM_INFO
{
	DWORD			dwCamID;      // ������CAMͨ������
	DWORD           dwRecordTime;   // ����¼��ʱ�� ��λΪs  -1��ʾһֱ¼�� 0 ��ʾ��¼��
	DWORD           dwMonID;      // ����Cam��Mon����ʾ
	DWORD           dwResidentTime; // ��Ѳͣ��ʱ�䵥λΪs  -1��ʾһֱͣ�� 0 ��ʾ��ͣ��
	NET_DVR_PTZ_CTRL struPtzCtrl;    // PTZ������Ϣ
    BYTE			byAlarmOffMode;		// �����л���ǽȡ��ģʽ   0-����ȡ����1-�Զ�ȡ����2-�ֶ�ȡ�� ����ȡ��������ȡ��ʱ����ȡ��������ǽ   �Զ�ȡ��������ȡ��ʱ�ȴ�һ��ʱ���ȡ��������ǽ������Լ����20��  �ֶ�ȡ�����û�ͨ���ֶ��ķ�ʽȡ��
    BYTE            byDevType;		// ���豸Ϊ�����豸ʱ����Ч��ʾ���ܱ����豸ȡ��Դ 1-���뿨	 2-���뿨
    BYTE            byDecChan;		// ��Ϊ����ͨ��Ϊ����ͨ����
    BYTE            byRes[17];      // �����ֽ�
}NET_DVR_ALARM_CAM_INFO, *LPNET_DVR_ALARM_CAM_INFO;

typedef struct tagNET_DVR_ALARM_CAM_CFG
{
	DWORD		dwSize;			// �ṹ���С
	BYTE        byEnable;       // �Ƿ����ñ�������CAM���� �豸Ĭ�ϲ�����
	BYTE        byRes[7];       // �����ֽ�
	DWORD		dwNum;			// ����CAM�����ĸ��� ��ȡ�����ǰ������Ч����  
	NET_DVR_ALARM_CAM_INFO struAlarmCam[MAX_ALARM_CAM_NUM];
}NET_DVR_ALARM_CAM_CFG, *LPNET_DVR_ALARM_CAM_CFG;

#define MAX_GATEWAY_NUM 		8  // ����Ž�����
typedef struct tagNET_DVR_ALARMHOST_AUDIO_ASSOCIATE_ALARM
{
	DWORD 		dwSize;
	BYTE		byEnterDoor[8];	// �±��ʾ�Ž��ţ�Ԫ����ֵ��ʾ������Ϣ��0��ʾ�������� 1-8��ʾ��������Ƶ��
	BYTE		byExitDoor[8]; 	// �±��ʾ�Ž��ţ�Ԫ����ֵ��ʾ������Ϣ��0��ʾ�������� 1-8��ʾ��������Ƶ��
	BYTE 		byAlarmIn[MAX_ALARMHOST_ALARMIN_NUM/*512*/];  //�����������룬�±��ʾ��������ţ�Ԫ����ֵ��ʾ������Ϣ��0��ʾ�������� 1-8��ʾ��������Ƶ��
	BYTE 		byRes[128];
}NET_DVR_ALARMHOST_AUDIO_ASSOCIATE_ALARM, *LPNET_DVR_ALARMHOST_AUDIO_ASSOCIATE_ALARM;

//�����ϴ����أ������ϴ����ص���չ��
typedef struct tagNET_DVR_UPLOAD_PARAM
{
	DWORD 		dwSize;
	BYTE		byUploadType;	/*�ϴ���ʽ��1-�����ļ������Ե�ַ��ȡ�����ļ��ϴ��� 2-�ӻ�������ȡ�����ϴ�*/
	BYTE		byDataType;		//�������ͣ�1-��Ƶ����
	BYTE		byDataNum;		//���ݱ�ţ��磺�ϴ���������ò�����ʾ������
	BYTE		byAudioType;		//������ʽ��0-wave
	char		sFileName[260];		//�����ļ���ȫ·��
	char		*lpBuffer;			//���ݻ�����
	DWORD		dwBufferSize;		//��������С
	BYTE		byRes2[128];
}NET_DVR_UPLOAD_PARAM, *LPNET_DVR_UPLOAD_PARAM;

typedef void (CALLBACK *DATADOWNLOAD)(LONG nDownloadHandle, DWORD dwDataType, void* pBuffer, DWORD dwBufSize, void *pUser);
typedef struct tagNET_DVR_ALARMHOST_PARAM
{
	DWORD 		dwSize;
	BYTE		byDownType;		/*���ص����ݱ��淽ʽ��1-�����ļ������Ե�ַ�������ݣ� 2-ͨ���ص�������ȡ����*/
	BYTE		byDataType;		//�������ͣ�1-��Ƶ����
	BYTE		byDataNum;		//���ݱ�ţ��磺������������ò�����ʾ������
	BYTE		byRes1;
	char		sFileName[260];		//�����ļ���ȫ·��
	DATADOWNLOAD lpDataCallBack; //����ʱ�Ļص��������
	void*		pUserData;	//�û����ݣ����ڻص������д���
	BYTE		byRes2[128];
}NET_DVR_DOWNLOAD_PARAM, *LPNET_DVR_DOWNLOAD_PARAM;

/*************************************�����б�������V2.0 begin***********************************/
//LED��Ļ����
typedef  struct tagNET_DVR_LED_SCREEN_CFG
{
	DWORD 		dwSize;
	BYTE		sLEDName[NAME_LEN/*32*/];	// LED��Ļ����
	BYTE		byTransMode; 				// ��ֻ֧�ִ���ͨѶ 1-����ͨ��
	BYTE		byProtocolType;				// Э�����ͣ���ӦLED���ĳ���
	BYTE		byLEDColor; 				// 1-��ɫ�� 2-˫ɫ�� 3-256���Ҷ�˫��ɫ�� 4- ȫ��ɫ��Ŀǰֻ�õ�ɫ��
	BYTE		byDataPolarity;				// ���ݼ��� .0-������1-����
	BYTE		byOEPolarity;				// 0-����Ч 1-����Ч
	BYTE		byScanMode; 				// 1-1/16,  2-1/8,  3-1/4,  4-1/2,  5-��̬
	BYTE		byRes1[2];
	//��Ļ��Ⱥ͸߶���С��16*16�㣬�����8����	
	WORD		wLEDWidth;	 				// 16~2048
	WORD 		wLEDHeight;					// 16~2048
	BYTE		byRes2[64];
}NET_DVR_LED_SCREEN_CFG, *LPNET_DVR_LED_SCREEN_CFG;

//LED��������
#define  MAX_CONTENT_LEN  512
typedef  struct tagNET_DVR_LED_CONTENT_CFG
{
	DWORD 		dwSize;
	BYTE		sLEDContent[MAX_CONTENT_LEN];	// LED��Ļ��ʾ����
	BYTE		byContentAct;					// 1-��̬��2-���ٴ����3-�����ƶ���4-�����ƶ��� 5-�����ƶ��� 6-�����ƶ�
	BYTE		byContentSpeed;					// 1-24��1��죬24������	
	BYTE		byContentStayTime; 				// 0-127.5s(����0.5s�� SDK����ʱ��*2����������ֵ0-255���豸����ʹ�õ�ʱ�������2)
	BYTE		byRes[33];
}NET_DVR_LED_CONTENT_CFG, *LPNET_DVR_LED_CONTENT_CFG;

//LED��ʱ���ػ�
#define 	LED_TIMER_NUM 			3			// LED�������ػ�ʱ������
#define		TIME_SEGMENT_A_DAY		48			// ʱ��θ�����һ��24Сʱ����Сʱһ����

typedef struct tagNET_DVR_SWITCH_TIME
{
	BYTE	byValid;				// ���鶨ʱʱ���Ƿ���Ч��ʱ���ǳɶ����õ�
	BYTE	byRes[3];
	NET_DVR_TIME_EX struTimeOn; 	// ����ʱ��
	NET_DVR_TIME_EX struTimeOff; 	// �ػ�ʱ��
}NET_DVR_SWITCH_TIME, *LPNET_DVR_SWITCH_TIME;


typedef struct tagNET_DVR_LED_SWITCH_TIME
{
	DWORD		dwSize;
	NET_DVR_SWITCH_TIME struTimer[LED_TIMER_NUM /*3*/]; 		//��ʱ���ػ�ʱ�䣬�ṹ����ֻ��Сʱ�ͷ�������������Ч��ÿ�鿪��ʱ��Ҫ���ڸ���Ĺػ�ʱ�䣬����ǰһ��Ĺػ�ʱ��Ҫ�����磺struTimer[0]�Ĺػ�ʱ����10��00��ô��struTimer[0]�Ŀ���ʱ��������Ϊ10:00֮ǰ�� struTimer[1]�Ŀ���ʱ��������Ϊ10��:00�Ժ�
	BYTE		byRes[64];
}NET_DVR_LED_SWITCH_TIME, *LPNET_DVR_LED_SWITCH_TIME;

//��ʱ���ȵ���
typedef struct tagNET_DVR_LED_BRIGHTNESS_STEP
{
	DWORD 		dwSize;
	BYTE		byValid;		//��ʱ���ȵ����Ƿ���Ч
	BYTE		byRes1[3];
	BYTE 		byBrightnessStep[TIME_SEGMENT_A_DAY /*48*/]; 	//��ȫ��24��Сʱ��Ϊ48��ʱ�Σ�ÿ30����һ��ʱ�Σ���48���ֽڱ�ʾÿ��ʱ�ε����ȼ������ȹ�16������0~15��ʾ��
	BYTE		byRes2[48];
}NET_DVR_LED_BRIGHTNESS_STEP, *LPNET_DVR_LED_BRIGHTNESS_STEP;

typedef struct tagNET_DVR_LED_STATUS
{
	DWORD	dwSize;
	BYTE	bySwitchState;		//1-����״̬ 2-�ػ�״̬
	BYTE	byBrightness;		//����ֵ����Χ0-15
	BYTE	byRes[62];
}NET_DVR_LED_STATUS, *LPNET_DVR_LED_STATUS;

/*************************************�����б�������V2.0 end***********************************/


//2010-12-28 ������뿨������ begin
//�µĽ��뿨������������
#define		MAX_DECODE_CARD_NUM			6   //��������뿨��
/********************������뿨���ģʽ�궨��********************/
typedef enum _HD_DISPLAY_FORMAT
{
	HD_DISPLAY_FORMAT_INVALID = 0x00000000,
	HD_DISPLAY_FORMAT_CVBS = 0x00000001,
	HD_DISPLAY_FORMAT_DVI = 0x00000002,
	HD_DISPLAY_FORMAT_VGA = 0x00000004, 
	HD_DISPLAY_FORMAT_HDMI = 0x00000008, 
	HD_DISPLAY_FORMAT_YPbPr = 0x00000010
}HD_DISPLAY_FORMAT,*LPHD_DISPLAY_FORMAT;

/********************������뿨���ģʽ�궨��********************/
typedef struct tagNET_DVR_DECCARD_ABILITY      /*������뿨������*/
{
    BYTE byCardType;      //���뿨����(0:MD,1:MD+,2:HD)
    BYTE byDecNums;      //����ͨ����
    BYTE byDispNums;      //��ʾͨ����
    BYTE byDecStartIdx;     //�׸�����ͨ�������н���ͨ���е�����
    BYTE byDispStartIdx;     //�׸���ʾͨ����������ʾͨ���е�����
    BYTE byDispResolution[80]; //���ģʽ֧�ֵķֱ���
    BYTE byDispFormat[8];     //֧�ֵ����ģʽ(��HD_DISPLAY_FORMAT)
    BYTE byWindowMode[4][8]; //֧�ֵĴ���ģʽ(����1,2,4,9,16))
    BYTE byRes[35];
} NET_DVR_DECCARD_ABILITY,*LPNET_DVR_DECCARD_ABILITY;

typedef struct tagNET_DVR_DECODESVR_ABILITY
{
    DWORD dwSize;      /* �ṹ���С */
    BYTE byCardNums;      /* ���뿨�� */
    BYTE byStartChan;     /* ��ʼͨ���� */
    BYTE byRes1[2];
    NET_DVR_DECCARD_ABILITY struDecCardAbility[MAX_DECODE_CARD_NUM];
	BYTE byRes2[64];
}NET_DVR_DECODESVR_ABILITY, *LPNET_DVR_DECODESVR_ABILITY;

typedef struct tagNET_MATRIX_DEV_CHAN_INFO
{
    NET_DVR_IPADDR 	struIP;		    //DVR IP��ַ
    WORD 	wDVRPort;			 	//�˿ں�
    BYTE 	byChannel;				//ͨ����
    BYTE	byTransProtocol;		//����Э������0-TCP��1-UDP
    BYTE	byTransMode;			//��������ģʽ 0�������� 1��������
    BYTE	byFactoryType;			/*ǰ���豸��������,ͨ���ӿڻ�ȡ*/
    BYTE	byUsedSlotNum;			//�Ƿ�ʹ�ò�λ�ţ�0-��ʹ�ã�1-ʹ��
    BYTE	bySlotNum;//��λ��
    BYTE	byRes[68];
    BYTE	sUserName[NAME_LEN];	//���������½�ʺ�
    BYTE	sPassword[PASSWD_LEN];	//�����������
}NET_MATRIX_DEV_CHAN_INFO,*LPNET_MATRIX_DEV_CHAN_INFO;

typedef struct tagNET_MATRIX_PU_STREAM_CFG
{
    DWORD							dwSize;
    NET_DVR_STREAM_MEDIA_SERVER_CFG	struStreamMediaSvrCfg;
    NET_MATRIX_DEV_CHAN_INFO		struDevChanInfo;
} NET_MATRIX_PU_STREAM_CFG,LPNET_MATRIX_PU_STREAM_CFG;

/*camera���õ�Ԫ�ṹ*/
typedef struct tagNET_DVR_MATRIX_CAMERACFG
{
    DWORD					dwGlobalIndex;//ȫ�ֱ��
    DWORD					dwInterIndex;//�ֲ����
	BYTE					sCamName[NAME_LEN];
    NET_MATRIX_PU_STREAM_CFG struPuStreamCfg;
} NET_DVR_MATRIX_CAMERACFG,*LPNET_DVR_MATRIX_CAMERACFG;

typedef struct tagNET_DVR_MATRIX_CAMERALIST
{
	DWORD			dwSize;
	BYTE			byRes[12];
	DWORD			dwCamNum;//CAM����
	BYTE  			*pBuffer;
	DWORD 			dwBufLen;//������ָ�볤�ȣ��������
} NET_DVR_MATRIX_CAMERALIST,*LPNET_DVR_MATRIX_CAMERALIST;

typedef struct tagNET_DVR_DISP_CHAN_INFO
{
    NET_DVR_IPADDR	struIP;				/* ������ IP��ַ */
    WORD 	wDVRPort;			 	/* �˿ں� */
    BYTE 	byDispChannel;			/* ��ʾͨ���� */
    BYTE	byUsedSlotNum;			//�Ƿ�ʹ�ò�λ�ţ�0-ʹ�ã�1-��ʹ��
    BYTE	bySlotNum;//��λ��
    BYTE	byRes[7];
    BYTE	sUserName[NAME_LEN];	/*��½�ʺ� */
    BYTE	sPassword[PASSWD_LEN];	/*���� */
}NET_DVR_DISP_CHAN_INFO,*LPNET_DVR_DISP_CHAN_INFO;

/*monitor���õ�Ԫ�ṹ*/
typedef struct tagNET_DVR_MATRIX_MONITORCFG
{
    DWORD						dwGlobalIndex;//ȫ�ֱ��
    DWORD						dwInterIndex;
	BYTE						sMonName[NAME_LEN];
    NET_DVR_DISP_CHAN_INFO		struDispChanCfg;
} NET_DVR_MATRIX_MONITORCFG,*LPNET_DVR_MATRIX_MONITORCFG;
typedef struct tagNET_DVR_MATRIX_MONITORLIST
{
    DWORD		dwSize;
	BYTE		byRes[12];
	DWORD		dwMonNum;//MON����
	BYTE  		*pBuffer;
	DWORD 		dwBufLen;//������ָ�볤�ȣ��������
} NET_DVR_MATRIX_MONITORLIST,*LPNET_DVR_MATRIX_MONITORLIST;

#define 	MAX_SUBMATRIX_NUM		8//������������ϵͳ����
typedef struct tagNET_DVR_SUBMATRIXINFO
{
	BYTE		byMainMatrix;//�Ƿ�����ϵͳ��1-�ǣ�0-��
	BYTE		bySubMatrixSequence;//��������Ƶ�ۺ�ƽ̨ϵͳ���
	BYTE		byLoginType;//ע�����ͣ�1-ֱ����2-DNS��3-������
	BYTE		byRes1[9];
	NET_DVR_IPADDR  struSubMatrixIP;		/*IP��ַ�����޸ģ�*/
	WORD		wSubMatrixPort;        /*��ϵͳ�˿ںţ����޸ģ�*/
	BYTE		byRes2[6];
	NET_DVR_IPADDR  struSubMatrixIPMask;    /*IP��ַ����*/
	NET_DVR_IPADDR	struGatewayIpAddr;		 /* ���ص�ַ */    
	BYTE		sUserName[NAME_LEN];	/* �û��� ���˲���ֻ�ܻ�ȡ��*/
	BYTE		sPassword[PASSWD_LEN];	/*���� ���˲���ֻ�ܻ�ȡ��*/
	char		sDomainName[MAX_DOMAIN_NAME];//����(���޸�)
	char 		sDnsAddress[MAX_DOMAIN_NAME];/*DNS������IP��ַ*/
	BYTE		sSerialNumber[SERIALNO_LEN];//���кţ��˲���ֻ�ܻ�ȡ��
	BYTE		byRes3[16];
}NET_DVR_SUBMATRIXINFO, *LPNET_DVR_SUBMATRIXINFO;

typedef struct tagNET_DVR_ALLUNITEDMATRIXINFO
{
	DWORD dwSize;
	NET_DVR_SUBMATRIXINFO struSubMatrixInfo[MAX_SUBMATRIX_NUM];
	BYTE  byRes2[32];
}NET_DVR_ALLUNITEDMATRIXINFO, *LPNET_DVR_ALLUNITEDMATRIXINFO;
		 
#define	MAX_GATEWAYTRUNKNUM		1024 //������Ƶ�ۺ�ƽ̨�����·�ɸ�����
	 
typedef struct tagNET_DVR_MATRIXGATEWAYNOTE
{
	 WORD	wTrunkInToOutAbility;//���ߴ�����D1�ı�׼��������4��ʾ֧��4��D1
	 WORD	wTrunkOutToInAbility;//���ߴ�����D1�ı�׼��������4��ʾ֧��4��D1��˫�����ʱ�õ���ֵ
	 BYTE    byRes[4];
	 NET_DVR_MATRIXSUBSYSTEMINFO struInputNote;
	 NET_DVR_MATRIXSUBSYSTEMINFO struOutputNote;
}NET_DVR_MATRIXGATEWAYNOTE, *LPNET_DVR_MATRIXGATEWAYNOTE;

typedef struct tagNET_DVR_MATRIXGATEWAYINFO
{
	 DWORD dwSize;
	 NET_DVR_MATRIXGATEWAYNOTE struGatewayNote[MAX_GATEWAYTRUNKNUM];
	 BYTE  byRes [32];
}NET_DVR_MATRIXGATEWAYINFO, *LPNET_DVR_MATRIXGATEWAYINFO;

typedef struct tagNET_DVR_MATRIXCODESYSTEMINFO
{
	 BYTE   byMatrixNum;//��Ƶ�ۺ�ƽ̨��
	 BYTE	bySubSystemNum;//��ϵͳ��λ��
	 BYTE	byChan;//����ͨ��
	 BYTE   byRes [13];
}NET_DVR_MATRIXCODESYSTEMINFO,*LPNET_DVR_MATRIXCODESYSTEMINFO;
typedef struct tagNET_DVR_MATRIXDECODESYSTEMINFO
{
	 BYTE    byMatrixNum;//��Ƶ�ۺ�ƽ̨��
	 BYTE	bySubSystemNum;//��ϵͳ��λ��
	 BYTE	byDispChan;//��ʾͨ��
	 BYTE	bySubDispChan;//��ʾͨ����ͨ����
	 BYTE    byRes [12];
}NET_DVR_MATRIXDECODESYSTEMINFO,*LPNET_DVR_MATRIXDECODESYSTEMINFO;

typedef struct tagNET_DVR_MATRIXSWITCH
{
	 NET_DVR_MATRIXCODESYSTEMINFO struInputNote;
	 NET_DVR_MATRIXDECODESYSTEMINFO struOutputNote;
	 BYTE	byRes[32];
}NET_DVR_MATRIXSWITCH, *LPNET_DVR_MATRIXSWITCH;

typedef enum {
	ENC_CARD = 0,
	DEC_CARD,
	SD_DEC_CARD,
	FPGA_CARD,
	CS_CARD,
	ALERTOR_CARD,
	NAT_0,
	NAT_1,
	VCA_CARD,
	VGA_DEC_CARD,
	VGA_ENC_CARD,
	ERR_CARD,
} DEV_TYPE;

typedef struct tagNET_DVR_MATRIXSWITCHCTRL
{
	DWORD dwCamId;//�����ȫ�ֱ��
	DWORD dwMonId;//������ȫ�ֱ��
	BYTE  bySubWindowNum;//��������Ӧ�Ӵ��ں�
	BYTE   bySwitchType;/*�л����ͣ�0:�����л���1:���������л���2:����ȡ����0xff:��ʾ��MON�����б���ȫ��ȡ��*/
	WORD   wAlarmType;//�����豸���ͣ�1:����������2�������豸
	DWORD  dwResidentTime;/* ��ʾפ��ʱ�䣬0xFFFFFFFF ʱ Ϊ��פ�����������ʾ*/
	BYTE   byVcaDevType;//�������豸������"�����豸"ʱ����DEV_TYPE����
	BYTE   byRes[19];
}NET_DVR_MATRIXSWITCHCTRL, *LPNET_DVR_MATRIXSWITCHCTRL;

typedef struct tagNET_DVR_MATRIXDATABASE
{
    //�����ļ����ͣ�1-�����ݿ������ļ���2-�������ݿ������ļ���3-ƽ̨���ݿ������ļ���4-���������ļ���0xff���һ��ʧ�ܵ����ݿ����
    DWORD dwDevType; 
	DWORD dwParam; //������������š�����š�ƽ̨�ţ����������ļ�ʱ��ֵ����
	BYTE  byFileType;//�ļ����ͣ�1-sql��䣬2-db��䣬3-���������ļ�
    BYTE  byRes [3];
} NET_DVR_MATRIXDATABASE, *LPNET_DVR_MATRIXDATABASE;

typedef struct tagNET_DVR_SUBSYSTEMINFO_V40
{
	/*��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ��5-�������ϵͳ��6-����������ϵͳ��7-������ϵͳ��8-V6������ϵͳ��9-V6��ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��*/
	BYTE		bySubSystemType;
	//��ϵͳͨ���������������ϵͳ������485�����������˲���ֻ�ܻ�ȡ��
	BYTE		byChan;
	BYTE		byLoginType;//ע�����ͣ�1-ֱ����2-DNS��3-������
	BYTE		bySlotNum ;//��λ�ţ��˲���ֻ�ܻ�ȡ
    BYTE		byRes1[4];
	NET_DVR_IPADDR   struSubSystemIP;		/*IP��ַ�����޸ģ�*/
	NET_DVR_IPADDR   struSubSystemIPMask;//��������
	NET_DVR_IPADDR	 struGatewayIpAddr;	/* ���ص�ַ */
	WORD		wSubSystemPort;        //��ϵͳ�˿ںţ����޸ģ�
	BYTE		byRes2[6];
    BYTE		sUserName[NAME_LEN];	/* �û��� ���˲���ֻ�ܻ�ȡ��*/
	BYTE		sPassword[PASSWD_LEN];	/*����(���޸�)*/
	char		sDomainName[MAX_DOMAIN_NAME];//����(���޸�)
	char 		sDnsAddress[MAX_DOMAIN_NAME];/*DNS������IP��ַ*/
	BYTE		sSerialNumber[SERIALNO_LEN];//���кţ��˲���ֻ�ܻ�ȡ��
	BYTE		byBelongBoard;//�����Ӱ�ţ���1��ʼ��0xff��ʾ��Ч
	BYTE		byInterfaceType;//�ӿ����ͣ�1-BNC��2-VGA��3-HDMI��4-DVI��5-SDI��6-���ˣ�0xff��ʾ��Ч
	BYTE		byInterfaceNums;//�ӿڸ�����0xff��ʾ��Ч
	BYTE		byInterfaceStartNum;//�ӿ���ʼ�ţ�0xff��ʾ��Ч
	BYTE        byDeviceName[20];//��ϵͳ����
	BYTE		byRes3[36];
}NET_DVR_SUBSYSTEMINFO_V40, *LPNET_DVR_SUBSYSTEMINFO_V40;

#define  MAX_SUBSYSTEM_NUM_V40  120
typedef struct tagNET_DVR_ALLSUBSYSTEMINFO_V40
{
	DWORD dwSize;
	NET_DVR_SUBSYSTEMINFO_V40 struSubSystemInfo[MAX_SUBSYSTEM_NUM_V40];
	BYTE  byBoardNum;//�Ӱ���
	BYTE  byBoardStartNum;//�Ӱ���ʼ��
	BYTE byRes[6];
}NET_DVR_ALLSUBSYSTEMINFO_V40, *LPNET_DVR_ALLSUBSYSTEMINFO_V40;

typedef struct tagNET_DVR_SINGLESUBSYSTEMJOININFO_V40
{
	/*��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ��5-�������ϵͳ��6-����������ϵͳ��7-������ϵͳ��8-V6������ϵͳ��9-V6��ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��*/
	BYTE   bySubSystemType; 
	BYTE   byConnectStatus;//����ϵͳ����״̬��1-����������2-���ӶϿ�
	BYTE   byMatrixNum;//������Ƶ�ۺ�ƽ̨�ţ���ϵͳ������3��4ʱ����
	BYTE   bySubSystemNum;//������ϵͳ��λ�ţ�0~79����ϵͳ������3��4ʱ����
	NET_DVR_DECSUBSYSTEMJIONSTATUS struDecSub [MATRIX_MAXDECSUBSYSTEMCHAN];
	BYTE   byBindStatus;//��״̬��0-û�а󶨣�1-�Ѿ��󶨣�����ƴ��ʱ�õ���
	BYTE   bySlotNum ;//��λ�ţ��˲���ֻ�ܻ�ȡ
    //��ϵͳ����Ϊ1��ʱ���ã�0-δ������1-D1��2-720��3-1080
    BYTE   byDecodeAbility; 
    BYTE   byUsedTrunk;
	BYTE   byRes[64];
}NET_DVR_SINGLESUBSYSTEMJOININFO_V40,LPNET_DVR_SINGLESUBSYSTEMJOININFO_V40;

typedef struct tagNET_DVR_ALLDECSUBSYSTEMJOININFO_V40
{
	DWORD dwSize;
	NET_DVR_SINGLESUBSYSTEMJOININFO_V40 struSingleSubSystemJoinInfo[MAX_SUBSYSTEM_NUM_V40];
	BYTE  byRes[48];
}NET_DVR_ALLDECSUBSYSTEMJOININFO_V40, *LPNET_DVR_ALLDECSUBSYSTEMJOININFO_V40;

#define  MAX_OPTICALFIBER_NUM  16
typedef struct tagNET_DVR_SUBSYSTEM_ABILITY
{
	/*��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ��5-�������ϵͳ��6-����������ϵͳ��7-������ϵͳ��8-V6������ϵͳ��9-V6��ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��*/
	BYTE  bySubSystemType;
	BYTE  byChanNum;//��ϵͳͨ����
	BYTE  byStartChan;//��ϵͳ��ʼͨ����
	BYTE  bySlotNum ;//��λ�� 
	BYTE  byRes1[4];
	union
	{
		BYTE byRes[200];		
		struct
		{
            BYTE byDecode;        //�Ƿ��Ǵ����빦�ܵ����ܰ�,1-�ǣ�0-��
			BYTE byRes[199];
		}struVACSystemAbility;
		struct
		{
			BYTE  byVGANums;//VGA��ʾͨ����������1��ʼ��
			BYTE  byBNCNums;//BNC��ʾͨ����������9��ʼ��
			BYTE  byHDMINums;//HDMI��ʾͨ����������25��ʼ��
			BYTE  byDVINums;//DVI��ʾͨ����������29��ʼ��
			BYTE  byLayerNums ;//����ƴ���У�������ʱ��֧��ͼ����
			BYTE  bySpartan;//���Թ��ܣ�0-��֧�֣�1-֧��
            BYTE  byDecType; //������ϵͳ���ͣ�0-��ͨ��,1-��ǿ��(��ͨ�ͷ���ʱǰ4������ʹ��������Դ����ǿ���޴����ƣ���ǿ�����ɱ�������ϵͳ��16·D1������Դ
			                  //��ǿ�ͱ���������Ϊ��������Դ�ɱ����ã���ͨ�����ܱ�����)
			BYTE  byOutputSwitch;//�Ƿ�֧��HDMI/DVI�����л���0-��֧�֣�1-֧��
            BYTE  byRes1[36];
            BYTE  byBelongBoard;//�����Ӱ��
            BYTE  byDispChanNums ;//��ʾ�������
            BYTE  byDsipStartChan;//��ʾ��������Ӱ��е���ʼ��
			BYTE	byDecoderType ; //���������  0-��ͨ����� 1-���ܽ����
            BYTE  byRes2[152];
		}struDecoderSystemAbility;
		struct
		{
			BYTE  byCoderType;//���������ͣ�0-���壬1-����, 2-ģ�����
			BYTE  byOptical;//��˻����룬0-��1-��
            BYTE  byOpticalSubChan; //ÿ������ŵ���			
            BYTE  bySupportAVSeparate;//�Ƿ�֧������Ƶ���룬0-��֧�֣�1-֧��
            BYTE  byRes1[36];
            BYTE  byBelongBoard ;//�����Ӱ��
            BYTE  byChanNum;//��ϵͳͨ����
            BYTE  byStartChan;//����ͨ�����Ӱ��е���ʼ��
            BYTE  byRes[157];
		}struCoderSystemAbility;
        struct
        {
            WORD	wTrunkAbility;//���ߴ�����D1�ı�׼��������4��ʾ֧��4��D1
			BYTE    byOpticalFiberNum;//��������
            BYTE	byBelongBoard ;//�����Ӱ��
            BYTE	byFiberStartChan;//�������Ӱ��е���ʼ��
			BYTE    byRes[195];
        }struInputSystemAbility;
        struct
        {
            WORD	wTrunkAbility;//���ߴ�����D1�ı�׼��������4��ʾ֧��4��D1
            BYTE    byOpticalFiberNum;//��������
            BYTE	byBelongBoard ;//�����Ӱ��
            BYTE	byFiberStartChan;//�������Ӱ��е���ʼ��
            BYTE  byRes[195];
        }struOutputSystemAbility;
		struct
		{
			BYTE	by485Num;//�����ϵͳ��485����
			BYTE	bySlotNum;//ÿ��485��λ��
			BYTE    byRes[198];
		}struCodeSpitterSystemAbility;
        struct
        {
            WORD	wAlarmInNums;
            WORD	wAlarmOutNums;
            /* ��ʶ�������Ƿ����ӣ� 1��ʾ�����ӣ� Ϊ0 ��ʾδ���� */
            BYTE  byAlarmBoxEnable[4][8];
            BYTE  bySupportContact; /* ��Ƶ�ۺ�ƽ̨�ڲ�����������0-��֧��,1-֧�� */
            BYTE  byRes[163];
		}struAlarmHostSystemAbility;
		struct
		{
			BYTE  byOpticalFiberNum;//��������
			BYTE  byRes1[3];
			//���˴�����D1�ı�׼��������4��ʾ֧��4��D1
			WORD	wTrunkAbility[MAX_OPTICALFIBER_NUM/*16*/];
			BYTE  byRes2[164];
		}struInOutputSystemAbility;
	}struAbility;
}NET_DVR_SUBSYSTEM_ABILITY, *LPNET_DVR_SUBSYSTEM_ABILITY;

typedef struct tagNET_DVR_VIDEOPLATFORM_ABILITY_V40
{
    DWORD   dwSize;
	BYTE    byCodeSubSystemNums;//������ϵͳ����
	BYTE    byDecodeSubSystemNums;//������ϵͳ����
	BYTE    bySupportNat;//�Ƿ�֧��NAT��0-��֧�֣�1-֧��
	BYTE    byInputSubSystemNums;//����������ϵͳ����
	BYTE	byOutputSubSystemNums;//���������ϵͳ����
	BYTE	byCodeSpitterSubSystemNums;//�����ϵͳ����
	BYTE	byAlarmHostSubSystemNums;//������ϵͳ����
	BYTE	bySupportBigScreenNum;//��֧�������ɴ����ĸ���
	BYTE	byVCASubSystemNums;//������ϵͳ����
	BYTE	byV6SubSystemNums;//V6��ϵͳ����
	BYTE	byV6DecoderSubSystemNums;//V6������ϵͳ����
    BYTE	bySupportBigScreenX;/*����ƴ�ӵ�ģʽ��m��n*/
    BYTE	bySupportBigScreenY;
    BYTE	bySupportSceneNums;//֧�ֳ���ģʽ�ĸ���
    BYTE    byVcaSupportChanMode;//����֧�ֵ�ͨ��ʹ��ģʽ��0-ʹ�ý���ͨ����1-ʹ����ʾͨ������ͨ����
    BYTE    bySupportScreenNums;//��֧�ֵĴ�������Ļ������
    BYTE    bySupportLayerNums;//��֧�ֵ�ͼ����
    BYTE    byNotSupportPreview;//�Ƿ�֧��Ԥ��,1-��֧�֣�0-֧��
    BYTE    byNotSupportStorage;//�Ƿ�֧�ִ洢,1-��֧�֣�0-֧��
    BYTE    byUploadLogoMode;//�ϴ�logoģʽ��0-�ϴ�������ͨ����1-�ϴ�����ʾͨ��
	NET_DVR_SUBSYSTEM_ABILITY struSubSystemAbility[MAX_SUBSYSTEM_NUM_V40];
	BYTE	by485Nums;//485���ڸ���
    BYTE	by232Nums;//232���ڸ���
    BYTE	bySerieStartChan;//��ʼͨ��
    BYTE	byScreenMode;//����ģʽ��0-�����ɿͻ��˷��䣬1-�������豸�˷���
    BYTE	byDevVersion;//�豸�汾��0-B10/B11/B12��1-B20
    BYTE	bySupportBaseMapNums;//��֧�ֵĵ�ͼ������ͼ�Ŵ�1��ʼ
    WORD    wBaseLengthX;//ÿ������С�Ļ�׼ֵ��B20ʹ��
    WORD    wBaseLengthY;
    BYTE    bySupportPictureTrans;  //�Ƿ�֧��ͼƬ���ԣ�0-��֧�֣�1-֧��	
    BYTE    byRes2[629];
}NET_DVR_VIDEOPLATFORM_ABILITY_V40, *LPNET_DVR_VIDEOPLATFORM_ABILITY_V40;

typedef struct tagNET_DVR_VIDEOPLATFORM_ABILITY
{
    DWORD dwSize;
	BYTE  byCodeSubSystemNums;//������ϵͳ����
	BYTE  byDecodeSubSystemNums;//������ϵͳ����
	BYTE  bySupportNat;//�Ƿ�֧��NAT��0-��֧�֣�1-֧��
    BYTE  byInputSubSystemNums;//����������ϵͳ����
    BYTE  byOutputSubSystemNums;//���������ϵͳ����
    BYTE  byCodeSpitterSubSystemNums;//�����ϵͳ����
    BYTE  byAlarmHostSubSystemNums;//������ϵͳ����
    BYTE  bySupportBigScreenNum;//��֧��������ƴ������
    BYTE  byVCASubSystemNums;//������ϵͳ����
	BYTE  byRes1[11];   
	NET_DVR_SUBSYSTEM_ABILITY struSubSystemAbility[MAX_SUBSYSTEM_NUM];
    BYTE  by485Nums;//485���ڸ���
    BYTE  by232Nums;//485���ڸ���
    BYTE  bySerieStartChan;//��ʼͨ��
    BYTE  byRes2[637];    
}NET_DVR_VIDEOPLATFORM_ABILITY, *LPNET_DVR_VIDEOPLATFORM_ABILITY;
//��ȡ�������ӿ�

/*********************************9000 2.0 begin***************************************/
//  ģʽA 
typedef struct tagNET_DVR_HOLIDATE_MODEA
{
    BYTE    byStartMonth;	// ��ʼ�� ��1��ʼ
    BYTE	byStartDay;		// ��ʼ�� ��1��ʼ
    BYTE	byEndMonth;		// ������ 
    BYTE	byEndDay;		// ������
    BYTE	byRes[4];		// �����ֽ�
}NET_DVR_HOLIDATE_MODEA, *LPNET_DVR_HOLIDATE_MODEA;

typedef struct tagNET_DVR_HOLIDATE_MODEB
{
    BYTE	byStartMonth;	// ��1��ʼ
    BYTE	byStartWeekNum;	// �ڼ������� ��1��ʼ 
    BYTE	byStartWeekday;	// ���ڼ�
    BYTE	byEndMonth;		// ��1��ʼ
    BYTE	byEndWeekNum;	// �ڼ������� ��1��ʼ 
    BYTE	byEndWeekday;	// ���ڼ�	
    BYTE	byRes[2];		// �����ֽ� 
}NET_DVR_HOLIDATE_MODEB, *LPNET_DVR_HOLIDATE_MODEB;

typedef struct tagNET_DVR_HOLIDATE_MODEC
{
    WORD	wStartYear;		// ��
    BYTE	byStartMon;		// ��
    BYTE	byStartDay;		// ��
    WORD	wEndYear;		// ��
    BYTE	byEndMon;		// ��
    BYTE	byEndDay;		// ��
}NET_DVR_HOLIDATE_MODEC, *LPNET_DVR_HOLIDATE_MODEC;

typedef union tagNET_DVR_HOLIDATE_UNION
{	
    // �������С 12�ֽ�
    DWORD				    dwSize[3];
    NET_DVR_HOLIDATE_MODEA	struModeA;	// ģʽA
    NET_DVR_HOLIDATE_MODEB	struModeB;	// ģʽB
    NET_DVR_HOLIDATE_MODEC	struModeC;	// ģʽC
}NET_DVR_HOLIDATE_UNION, *LPNET_DVR_HOLIDATE_UNION;

typedef enum tagHOLI_DATE_MODE
{
    HOLIDATE_MODEA = 0,
    HOLIDATE_MODEB,
    HOLIDATE_MODEC
}HOLI_DATE_MODE;

typedef struct tagNET_DVR_HOLIDAY_PARAM
{
    BYTE	byEnable;			// �Ƿ�����
    BYTE	byDateMode;			// ����ģʽ 0-ģʽA 1-ģʽB 2-ģʽC
    BYTE	byRes1[2];			// �����ֽ�
    NET_DVR_HOLIDATE_UNION uHolidate;	// ��������
    BYTE	byName[NAME_LEN];	// ��������
    BYTE	byRes2[20];			// �����ֽ�
}NET_DVR_HOLIDAY_PARAM, *LPNET_DVR_HOLIDAY_PARAM;

#define  MAX_HOLIDAY_NUM	32

typedef struct tagNET_DVR_HOLIDAY_PARAM_CFG
{
    DWORD	dwSize;			// �ṹ���С
    NET_DVR_HOLIDAY_PARAM struHolidayParam[MAX_HOLIDAY_NUM];	// ���ղ���
    DWORD	byRes[40];		// ��������
}NET_DVR_HOLIDAY_PARAM_CFG, *LPNET_DVR_HOLIDAY_PARAM_CFG;

// ���ձ�������ʽ
typedef struct tagNET_DVR_HOLIDAY_HANDLE
{
    DWORD	dwSize;				// �ṹ���С
    NET_DVR_SCHEDTIME              struAlarmTime[MAX_TIMESEGMENT_V30];	// ����ʱ���
    BYTE	byRes2[240];		// �����ֽ�
}NET_DVR_HOLIDAY_HANDLE, *LPNET_DVR_HOLIDAY_HANDLE;

typedef struct tagNET_DVR_HOLIDAY_RECORD
{
    DWORD           dwSize;
    NET_DVR_RECORDDAY     struRecDay;     // ¼�����
    NET_DVR_RECORDSCHED   struRecordSched[MAX_TIMESEGMENT_V30]; // ¼��ʱ���
    BYTE      byRes[20];      //  �����ֽ�
}NET_DVR_HOLIDAY_RECORD, *LPNET_DVR_HOLIDAY_RECORD;

#define  MAX_LINK_V30  128

typedef struct tagNET_DVR_ONE_LINK
{
    NET_DVR_IPADDR  struIP;     // �ͻ���IP
    LONG            lChannel;   // ͨ����
    BYTE            byRes[32];  // �����ֽ�
}NET_DVR_ONE_LINK, *LPNET_DVR_ONE_LINK;

typedef struct tagNET_DVR_LINK_STATUS
{
    DWORD   dwSize;      // �ṹ���С
    WORD    wLinkNum;    // ���ӵ���Ŀ
    BYTE    byRes1[2];  // �����ֽ�
    NET_DVR_ONE_LINK struOneLink[MAX_LINK_V30];   // ���ӵĿͻ�����Ϣ
    BYTE    byRes[32];  // �����ֽ�
}NET_DVR_LINK_STATUS, *LPNET_DVR_LINK_STATUS;

#define MAX_BOND_NUM  2

typedef struct tagNET_DVR_ONE_BONDING
{
    BYTE    byMode;				// ����ģʽ0 - �����ݴ� 1 - ���ؾ���
    BYTE	byUseDhcp;			// �Ƿ�ʹ��dhcp
    BYTE	byMasterCard;	    //  ָ����������Ϊ������		
    BYTE    byStatus;           // BONDING��״̬  0 - �쳣 1-���� ֻ�ܻ�ȡ��������
    BYTE	byBond[MAX_NETWORK_CARD];// byBond[0]== 1 ��ʾʹ��eh0  0��ʾ��ʹ��eh0
    NET_DVR_ETHERNET_V30	struEtherNet;		// ��������
    NET_DVR_IPADDR	struGatewayIpAddr;  // ���ص�ַ
    BYTE	byRes[20];			// �����ֽ�
}NET_DVR_ONE_BONDING, *LPNET_DVR_ONE_BONDING;

typedef struct tagNET_DVR_NETWORK_BONDING
{
    DWORD   dwSize;         // �ṹ���С
    BYTE    byEnable;       // �Ƿ�����bonding����
    BYTE    byNum;          // Bonding�����ĸ���
    BYTE    byRes1[2];         //  �����ֽ�
    NET_DVR_ONE_BONDING struOneBond[MAX_BOND_NUM];
    BYTE	byRes2[40];		// �����ֽ�
}NET_DVR_NETWORK_BONDING, *LPNET_DVR_NETWORK_BONDING;


// �������
typedef struct tagNET_DVR_DISK_QUOTA 
{
	BYTE	byQuotaType;	 // �����������,1 - ������ 
    BYTE    byRes1[7];       // �����ֽ�
    DWORD   dwHCapacity;     // ����Ĵ���������32λ ��λMB
    DWORD   dwLCapacity;     // ����Ĵ���������32λ ��λMB
    DWORD   dwHUsedSpace;    // ��ʹ�õĴ��̴�С��32λ ��λMB
    DWORD   dwLUsedSpace;    // ��ʹ�õĴ��̴�С��32λ ��λMB
	BYTE    byQuotaRatio;    //	����Ĵ��̱���,��λ:%
    BYTE    byRes2[21];      // �����ֽ�
}NET_DVR_DISK_QUOTA, *LPNET_DVR_DISK_QUOTA;

typedef struct tagNET_DVR_DISK_QUOTA_CFG
{
    DWORD   dwSize;         // �ṹ���С
    NET_DVR_DISK_QUOTA    struPicQuota;    //  ͼƬ���
    NET_DVR_DISK_QUOTA    struRecordQuota;    //  ¼�����
    BYTE    byRes[60];      //�����ֽ�
}NET_DVR_DISK_QUOTA_CFG, *LPNET_DVR_DISK_QUOTA_CFG;


typedef struct tagNET_DVR_TIMING_CAPTURE
{
    NET_DVR_JPEGPARA  struJpegPara;   // ��ʱץͼͼƬ����
	DWORD      dwPicInterval;  // ��ʱץͼʱ����,��λs   1-1s 2-2s 3-3s 4-4s 5-5s 
                                //	6-10m 7-30m 8-1h 9-12h 10-24h
    BYTE       byRes[12];      // �����ֽ�
}NET_DVR_TIMING_CAPTURE, *LPNET_DVR_TIMING_CAPTURE;

typedef struct tagNET_DVR_REL_CAPTURE_CHAN
{
    BYTE    byChan[16];    // ��λ��ʾ
    BYTE    byRes[20];          // �����ֽ�
}NET_DVR_REL_CAPTURE_CHAN, *LPNET_DVR_REL_CAPTURE_CHAN;

#define MAX_PIC_EVENT_NUM      32
#define MAX_ALARMIN_CAPTURE   16
typedef struct tagNET_DVR_EVENT_CAPTURE
{
    NET_DVR_JPEGPARA  struJpegPara;   // �¼�ץͼͼƬ����
    DWORD       dwPicInterval;  // �¼�ץͼʱ����  ��λΪ��  1-1s 2-2s 3-3s 4-4s 5-5s 
	//	6-10m 7-30m 8-1h 9-12h 10-24h
    NET_DVR_REL_CAPTURE_CHAN struRelCaptureChan[MAX_PIC_EVENT_NUM]; // �����±� 0 �ƶ���ⴥ��ץͼ 1 ��Ƶ�ڵ�����ץͼ,2 ��Ƶ��ʧ����ץͼ,����3��ʾPIR����ץͼ������4��ʾ���߱���ץͼ������5��ʾ���ȱ���ץͼ
    NET_DVR_REL_CAPTURE_CHAN struAlarmInCapture[MAX_ALARMIN_CAPTURE];    // �������봥��ץͼ���±�0 ����������1 ��������
	BYTE       byCapTimes; //ץͼ����
    BYTE       byRes[59];
}NET_DVR_EVENT_CAPTURE, *LPNET_DVR_EVENT_CAPTURE;

typedef struct tagNET_DVR_JPEG_CAPTURE_CFG
{
    DWORD      dwSize;         // �ṹ���С
    NET_DVR_TIMING_CAPTURE struTimingCapture;    
    NET_DVR_EVENT_CAPTURE struEventCapture;
    BYTE       byRes3[20];     // �����ֽ�
}NET_DVR_JPEG_CAPTURE_CFG, *LPNET_DVR_JPEG_CAPTURE_CFG;  

typedef struct tagNET_DVR_CAPTURE_DAY
{
    BYTE	byAllDayCapture;	// �Ƿ�ȫ��ץͼ
    BYTE	byCaptureType;		// ץͼ���ͣ�0-��ʱץͼ��1-�ƶ����ץͼ��2-����ץͼ��3-�ƶ����򱨾�ץͼ��4-�ƶ����ͱ���ץͼ��6-���ܱ���ץͼ
    BYTE	byRes[2];
}NET_DVR_CAPTURE_DAY, *LPNET_DVR_CAPTURE_DAY;

typedef struct tagNET_DVR_CAPTURE_SCHED
{
    NET_DVR_SCHEDTIME struCaptureTime;        // ץͼʱ���
    BYTE        byCaptureType;       // ץͼ���ͣ�0-��ʱץͼ��1-�ƶ����ץͼ��2-����ץͼ��3-�ƶ����򱨾�ץͼ��4-�ƶ����ͱ���ץͼ��6-���ܱ���ץͼ
    BYTE        byRes[3];           // �����ֽ�
}NET_DVR_CAPTURE_SCHED, *LPNET_DVR_CAPTURE_SCHED;

// ͨ��ץͼ�ƻ�
typedef struct tagNET_DVR_SCHED_CAPTURECFG
{
    DWORD  dwSize;     // �ṹ��
    BYTE	byEnable;	// �Ƿ�ץͼ
    BYTE	byRes1[3];	// �����ֽ�
    NET_DVR_CAPTURE_DAY	struCaptureDay[MAX_DAYS];	// ȫ��ץͼ�ƻ�
    NET_DVR_CAPTURE_SCHED	struCaptureSched[MAX_DAYS][MAX_TIMESEGMENT_V30];	// ʱ���ץͼ�����ƻ�
    NET_DVR_CAPTURE_DAY	struCaptureHoliday;			// ����ץͼ�ƻ�
    NET_DVR_CAPTURE_SCHED	struHolidaySched[MAX_TIMESEGMENT_V30];	// ʱ��μ���ץͼ�����ƻ�
    DWORD	dwRecorderDuration;	// ץͼ�����ʱ�� 0xffffffff��ʾ��ֵ��Ч 
    BYTE	byRes[40];			// �����ֽ�
}NET_DVR_SCHED_CAPTURECFG, *LPNET_DVR_SCHED_CAPTURECFG;


typedef struct tagNET_DVR_FLOW_TEST_PARAM
{
	DWORD  dwSize;              //�ṹ��С
    LONG   lCardIndex;         //��������
    DWORD  dwInterval;         //�豸�ϴ�����ʱ����, ��λ:100ms
    BYTE   byRes[8];           //�����ֽ�
}NET_DVR_FLOW_TEST_PARAM, *LPNET_DVR_FLOW_TEST_PARAM;

typedef struct tagNET_DVR_FLOW_INFO
{
	DWORD  dwSize;             //�ṹ��С
	DWORD  dwSendFlowSize;     //����������С,��λkbps
	DWORD  dwRecvFlowSize;     //����������С,��λkbps
    BYTE   byRes[20];          //���� 
}NET_DVR_FLOW_INFO, *LPNET_DVR_FLOW_INFO;

//  ¼���ǩ
#define LABEL_NAME_LEN 40
typedef struct tagNET_DVR_RECORD_LABEL
{
    DWORD  dwSize;					// �ṹ���С
    NET_DVR_TIME  struTimeLabel;			// ��ǩ��ʱ�� 
    BYTE	byQuickAdd;				// �Ƿ������� �������ʱ��ǩ������Ч
    BYTE	byRes1[3];				// �����ֽ�
    BYTE	sLabelName[LABEL_NAME_LEN];	// ��ǩ������ ����Ϊ40�ֽ�  
    BYTE	byRes2[40];				// �����ֽ�
}NET_DVR_RECORD_LABEL, *LPNET_DVR_RECORD_LABEL;

#define  LABEL_IDENTIFY_LEN     64
typedef struct tagNET_DVR_LABEL_IDENTIFY
{
    BYTE    sLabelIdentify[LABEL_IDENTIFY_LEN];    // 64�ֽڱ�ʶ
    BYTE    byRes[8];               // �����ֽ�
}NET_DVR_LABEL_IDENTIFY, *LPNET_DVR_LABEL_IDENTIFY;

#define MAX_DEL_LABEL_IDENTIFY  20// ɾ��������ǩ��ʶ����

typedef struct tagNET_DVR_DEL_LABEL_PARAM
{
    DWORD   dwSize;       // �ṹ���С
    BYTE    byMode;   // ��λ��ʾ,0x01��ʾ����ʶɾ��
    BYTE    byRes1;
    WORD    wLabelNum;      // ��ǩ��Ŀ      
    NET_DVR_LABEL_IDENTIFY struIndentify[MAX_DEL_LABEL_IDENTIFY]; // ��ǩ��ʶ
    BYTE    byRes2[160];   //�����ֽ�    
}NET_DVR_DEL_LABEL_PARAM, *LPNET_DVR_DEL_LABEL_PARAM;

typedef struct tagNET_DVR_LABEL_PARAM
{
	NET_DVR_LABEL_IDENTIFY struIndentify; //Ҫ�޸ĵı�ǩ��ʶ
	BYTE byRes1[24];
	BYTE sLabelName[LABEL_NAME_LEN];	//�޸ĺ�ı�ǩ����
	BYTE byRes2[40];				
}NET_DVR_MOD_LABEL_PARAM, *LPNET_DVR_MOD_LABEL_PARAM;

// ��ǩ�����ṹ��
typedef struct tagNET_DVR_FIND_LABEL
{
    DWORD       dwSize;          // �ṹ���С
    LONG	    lChannel;		// ���ҵ�ͨ��
    NET_DVR_TIME	struStartTime;	// ��ʼʱ��
    NET_DVR_TIME	struStopTime;	// ����ʱ��
    BYTE	    sLabelName[LABEL_NAME_LEN];	//  ¼���ǩ���� �����ǩ����Ϊ�գ���������ֹʱ�����б�ǩ
	BYTE		byDrawFrame;		//0:����֡��1����֡
    BYTE	    byRes[39];		// �����ֽ�
}NET_DVR_FIND_LABEL, *LPNET_DVR_FIND_LABEL;

// ��ǩ��Ϣ�ṹ��
typedef struct tagNET_DVR_FINDLABEL_DATA
{
    BYTE	sLabelName[LABEL_NAME_LEN];	// ��ǩ����
    NET_DVR_TIME struTimeLabel;		// ��ǩʱ��
    NET_DVR_LABEL_IDENTIFY struLabelIdentify; // ��ǩ��ʶ
    BYTE	byRes1[32];			// �����ֽ�
}NET_DVR_FINDLABEL_DATA, *LPNET_DVR_FINDLABEL_DATA;

#define CARDNUM_LEN_V30 40
typedef struct tagNET_DVR_FIND_PICTURE_PARAM
{
    DWORD  dwSize;         // �ṹ���С 
    LONG   lChannel;       // ͨ����
    BYTE   byFileType;     // ���ҵ�ͼƬ����:0��ʱץͼ1 �ƶ����ץͼ 2 ����ץͼ3  ���� | �ƶ����ץͼ 4 ���� & �ƶ����ץͼ 6 �ֶ�ץͼ  10- PIR������11- ���߱�����12- ���ȱ�����0xa Ԥ��ʱ��ͼ0xffȫ������
    BYTE   byNeedCard;     // �Ƿ���Ҫ����
    BYTE   byRes1[2];      // �����ֽ�
    BYTE   sCardNum[CARDNUM_LEN_V30];     // ����
    NET_DVR_TIME  struStartTime;//����ͼƬ�Ŀ�ʼʱ��
    NET_DVR_TIME  struStopTime;// ����ͼƬ�Ľ���ʱ��
    BYTE   byRes2[40];     // �����ֽ�
}NET_DVR_FIND_PICTURE_PARAM, *LPNET_DVR_FIND_PICTURE_PARAM;

#define PICTURE_NAME_LEN 64

typedef struct
{
    char    sFileName[PICTURE_NAME_LEN];//ͼƬ��
    NET_DVR_TIME struTime;//ͼƬ��ʱ��
    DWORD dwFileSize;//ͼƬ�Ĵ�С
    char    sCardNum[CARDNUM_LEN_V30];	//����
    BYTE byRes[32];		//  �����ֽ�
}NET_DVR_FIND_PICTURE,*LPNET_DVR_FIND_PICTURE;

#define MAX_RECORD_PICTURE_NUM  50      //  ��󱸷�ͼƬ����  

typedef struct tagNET_DVR_BACKUP_PICTURE_PARAM
{
	DWORD  dwSize;         // �ṹ���С   
	DWORD  dwPicNum;
	NET_DVR_FIND_PICTURE struPicture[MAX_RECORD_PICTURE_NUM];
	BYTE   byDiskDes[DESC_LEN_32];
	BYTE   byWithPlayer;
	BYTE   byContinue;    /*�Ƿ�������� 0������ 1����*/
	BYTE   byRes[34];
}NET_DVR_BACKUP_PICTURE_PARAM, *LPNET_DVR_BACKUP_PICTURE_PARAM;

typedef struct 
{	
	DWORD dwSize;           //�ṹ���С
	DWORD dwChannel;        //ͨ����
	BYTE  byCompressType;   //����ȡ��ѹ����������1,������2,������3,�¼�
	BYTE  byRes[15];        //����
	NET_DVR_COMPRESSIONCFG_V30  struCurrentCfg; //��ǰѹ����������
}NET_DVR_COMPRESSION_LIMIT, *LPNET_DVR_COMPRESSION_LIMIT;

#define   STEP_RECV_DATA   1    //��������������
#define   STEP_UPGRADE     2    //����ϵͳ
#define   STEP_BACKUP      3    //����ϵͳ
#define   STEP_SEARCH      255  //���������ļ�

typedef struct tagNET_DVR_VIDEO_EFFECT
{
	DWORD dwBrightValue;      //����[0,255]
	DWORD dwContrastValue;    //�Աȶ�[0,255]
	DWORD dwSaturationValue;  //���Ͷ�[0,255]
	DWORD dwHueValue;         //ɫ��[0,255]
	DWORD dwSharpness;		  //���[0,255]
	DWORD dwDenoising;		  //ȥ��[0,255]
	BYTE  byRes[12];
}NET_DVR_VIDEO_EFFECT, *LPNET_DVR_VIDEO_EFFECT;

typedef struct tagNET_DVR_VIDEO_INPUT_EFFECT
{	
	DWORD					dwSize;				//�ṹ���С
	WORD					wEffectMode;        //ģʽ 0-��׼ 1-���� 2-���� 3-���� 255-�Զ���
	BYTE					byRes1[146];        //����
	NET_DVR_VIDEO_EFFECT	struVideoEffect;	//��ƵЧ������
	BYTE					byRes2[60];			//����
}NET_DVR_VIDEO_INPUT_EFFECT, *LPNET_DVR_VIDEO_INPUT_EFFECT;


typedef struct tagNET_DVR_VIDEOPARA_V40
{
	DWORD	dwChannel;			// ͨ����
	DWORD	dwVideoParamType;  	// ��Ƶ�������� 0-���� 1-�Աȶ� 2-���Ͷ� 3-ɫ�� 4-��� 5-ȥ��
	DWORD	dwVideoParamValue;  //��Ӧ����Ƶ����ֵ����Χ����������
	BYTE 	byRes[12];
}NET_DVR_VIDEOPARA_V40, *LPNET_DVR_VIDEOPARA_V40;

typedef struct tagNET_DVR_DEFAULT_VIDEO_COND
{
	DWORD	dwSize;			// �ṹ���С
	DWORD	dwChannel;		// ͨ����
	DWORD	dwVideoMode;	// ģʽ
	BYTE	byRes[32];      // ����
}NET_DVR_DEFAULT_VIDEO_COND, *LPNET_DVR_DEFAULT_VIDEO_COND;

/*********************************9000 2.0 end***************************************/

typedef struct tagNET_DVR_ENCODE_JOINT_PARAM
{
    DWORD	dwSize;			// �ṹ���С
    BYTE	byJointed;		//  0 û�й��� 1 �Ѿ�����
    BYTE	byDevType;		// ���������豸����  1 ���������豸
    BYTE	byRes1[2];		// �����ֽ�
    NET_DVR_IPADDR	struIP;			// �����ı�ȡ���豸IP��ַ
    WORD	wPort;			// �����ı�ȡ���豸�˿ں�
    WORD	wChannel;		// �����ı�ȡ���豸ͨ����
    BYTE	byRes2[20];			// �����ֽ�
}NET_DVR_ENCODE_JOINT_PARAM, *LPNET_DVR_ENCODE_JOINT_PARAM;	

typedef struct tagNET_DVR_VCA_CHAN_WORKSTATUS
{
    BYTE	byJointed;				// 0-û�й���  1-�Ѿ�����
    BYTE	byRes1[3];
    NET_DVR_IPADDR	struIP;					// ������ȡ���豸IP��ַ
    WORD	wPort;					// ������ȡ���豸�˿ں�
    WORD	wChannel;				// ������ȡ���豸ͨ����
    BYTE	byVcaChanStatus;		// 0 - δ���� 1 - ����
    BYTE	byRes2[19];				// �����ֽ�
}NET_DVR_VCA_CHAN_WORKSTATUS, *LPNET_DVR_VCA_CHAN_WORKSTATUS;

typedef struct tagNET_DVR_VCA_DEV_WORKSTATUS
{
    DWORD	dwSize;			// �ṹ���С
    BYTE	byDeviceStatus;	// �豸��״̬0 - �������� 1- ����������
    BYTE	byCpuLoad;		// CPUʹ����0-100 �ֱ����ʹ�ðٷ���
    NET_DVR_VCA_CHAN_WORKSTATUS struVcaChanStatus[MAX_VCA_CHAN];
    DWORD	byRes[40];		// �����ֽ�
}NET_DVR_VCA_DEV_WORKSTATUS, *LPNET_DVR_VCA_DEV_WORKSTATUS;

typedef struct tagNET_DVR_VGA_DISP_CHAN_CFG_V40
{        
    DWORD	dwSize; 
    BYTE   byAudio;			/*��Ƶ�Ƿ���*/
    BYTE   byAudioWindowIdx;      /*��Ƶ�����Ӵ���*/
    BYTE 	byVgaResolution;      /*�ֱ��ʣ�����������ȡ*/
    BYTE	byVedioFormat;         /*1:NTSC,2:PAL��0-NULL*/
    DWORD	dwWindowMode;		/*����ģʽ����������ȡ*/       
    BYTE  	byJoinDecChan[MAX_WINDOWS];/*�����Ӵ��ڹ����Ľ���ͨ��*/
	BYTE	byEnlargeStatus;          /*�Ƿ��ڷŴ�״̬��0�����Ŵ�1���Ŵ�*/
	BYTE    byEnlargeSubWindowIndex;//�Ŵ���Ӵ��ں�
	BYTE	byScale; /*��ʾģʽ��0---��ʵ��ʾ��1---������ʾ( ���BNC )*/
	/*���ֹ����壬0-��Ƶ�ۺ�ƽ̨�ڲ���������ʾͨ�����ã�1-������������ʾͨ������*/
	BYTE	byUnionType;
	union
	{
		BYTE byRes[160];
		struct
		{
			/*�����Ӵ��ڶ�Ӧ����ͨ������Ӧ�Ľ�����ϵͳ�Ĳ�λ��(������Ƶ�ۺ�ƽ̨�н�����ϵͳ��Ч)*/
			BYTE	byJoinDecoderId[MAX_WINDOWS];
			//��ʾ����������Ƶ�ֱ��ʣ�1-D1,2-720P,3-1080P���豸����Ҫ���ݴ�//�ֱ��ʽ��н���ͨ���ķ��䣬��1�������ó�1080P�����豸���4������ͨ
			//����������˽���ͨ��
			BYTE	byDecResolution;
			BYTE	byRes[143];
		}struVideoPlatform;
		struct
		{
			BYTE	byRes[160];
		}struNotVideoPlatform;
	}struDiff;
	BYTE	byRes[120];
}NET_DVR_VGA_DISP_CHAN_CFG_V40,*LPNET_DVR_VGA_DISP_CHAN_CFG_V40;

typedef struct tagNET_DVR_V6SUBSYSTEMPARAM
{
	BYTE		bySerialTrans;//�Ƿ�͸����0-��1-��
    BYTE		byRes[35];
}NET_DVR_V6SUBSYSTEMPARAM, *LPNET_DVR_V6SUBSYSTEMPARAM;

#define		NET_DVR_V6PSUBSYSTEMARAM_GET	1501//��ȡV6��ϵͳ����
#define		NET_DVR_V6PSUBSYSTEMARAM_SET	1502//����V6��ϵͳ����


typedef struct tagNET_DVR_CORRECT_DEADPIXEL_PARAM
{
	DWORD dwSize;
	DWORD dwCommand; //���0-���뻵��ģʽ��1-��ӻ��㣬2-���滵�㣬3-�˳�����
	DWORD dwDeadPixelX; //����X����
	DWORD dwDeadPixelY; //����Y����
	BYTE byRes[12]; //����
}NET_DVR_CORRECT_DEADPIXEL_PARAM, *LPNET_DVR_CORRECT_DEADPIXEL_PARAM;

#define MAX_REDAREA_NUM   6   //�����̵��������
typedef struct tagNET_DVR_REDAREACFG
{
	DWORD dwSize;
	DWORD dwCorrectEnable; //�Ƿ���У�����ܣ�0-�رգ�1-����
	DWORD dwCorrectLevel; //У������1(У�������)-10(У�������),Ĭ��Ϊ5
	DWORD dwAreaNum; //У���������
	NET_VCA_RECT struLaneRect[MAX_REDAREA_NUM]; //У������
	BYTE   byRes2[32]; //����
}NET_DVR_REDAREACFG, *LPNET_DVR_REDAREACFG;

typedef struct tagNET_DVR_HISTORICDATACFG
{
    DWORD dwSize;
	DWORD dwTotalNum;  //��ʷ���ݸ���
	BYTE byRes[16];
}NET_DVR_HISTORICDATACFG, *LPNET_DVR_HISTORICDATACFG;


/***********************************81 ��ѶDVR*****************************/
#define INQUEST_MESSAGE_LEN     44    //��Ѷ�ص�����Ϣ����
#define INQUEST_MAX_ROOM_NUM    2     //�����Ѷ�Ҹ���
#define MAX_RESUME_SEGMENT      2     //֧��ͬʱ�ָ���Ƭ����Ŀ

typedef struct tagNET_DVR_INQUEST_ROOM
{
	BYTE		byRoomIndex;     //��Ѷ�ұ��
    BYTE		byRes[23];       //����
}NET_DVR_INQUEST_ROOM, *LPNET_DVR_INQUEST_ROOM;

typedef struct tagNET_DVR_INQUEST_MESSAGE
{
	char 		sMessage[INQUEST_MESSAGE_LEN]; //�ص�����Ϣ
    BYTE	byRes[46];                     //����
}NET_DVR_INQUEST_MESSAGE, *LPNET_DVR_INQUEST_MESSAGE;

typedef struct tagNET_DVR_INQUEST_SENSOR_DEVICE
{
	WORD	wDeviceType;	//���ݲɼ��豸�ͺ�:1:���� 2:�ز� 3:����
	WORD	wDeviceAddr;	//���ݲɼ��豸��ַ	
	BYTE 	byRes[28];	    //����
}NET_DVR_INQUEST_SENSOR_DEVICE, *LPNET_DVR_INQUEST_SENSOR_DEVICE;

typedef struct tagNET_DVR_INQUEST_SENSOR_INFO
{
	NET_DVR_INQUEST_SENSOR_DEVICE struSensorDevice[INQUEST_MAX_ROOM_NUM];
	DWORD   dwSupportPro;      //֧��Э������,��λ��ʾ
							   //0x1:���� 0x2:�ز� 0x4:����
	BYTE    byRes[120];        //����
}NET_DVR_INQUEST_SENSOR_INFO, *LPNET_DVR_INQUEST_SENSOR_INFO;

typedef struct tagNET_DVR_INQUEST_SYSTEM_INFO
{
	DWORD  dwRecordMode;         //��¼ģʽ:1 ����˫��ģʽ 2 �����ֿ�ģʽ 3 ˫��˫��ģʽ
    DWORD  dwWorkMode;           //����ģʽ:0 ��׼ģʽ 1 ͨ��ģʽ
	DWORD  dwResolutionMode;     //�豸�ֱ��ʣ�0:���� 1:D1 2:720P 3:1080P
	NET_DVR_INQUEST_SENSOR_INFO struSensorInfo;  //��ʪ�ȴ���������	
	BYTE    byRes[120];	
}NET_DVR_INQUEST_SYSTEM_INFO, *LPNET_DVR_INQUEST_SYSTEM_INFO;

typedef struct tagNET_DVR_INQUEST_RESUME_SEGMENT
{
	NET_DVR_TIME  struStartTime; //�¼���ʼʱ��
	NET_DVR_TIME  struStopTime;  //�¼���ֹʱ��
	BYTE	byRoomIndex;         //��Ѷ�ұ��,��1��ʼ
	BYTE    byDriveIndex;        //��¼�����,��1��ʼ
	WORD    wSegmetSize;         //��Ƭ�ϵĴ�С, ��λM 
	DWORD   dwSegmentNo;         //��Ƭ���ڱ�����Ѷ�е����,��1��ʼ 
	BYTE    byRes[24];           //����
}NET_DVR_INQUEST_RESUME_SEGMENT, *LPNET_DVR_INQUEST_RESUME_SEGMENT;

typedef struct tagNET_DVR_INQUEST_RESUME_EVENT
{
	DWORD   dwResumeNum;       //��ָ����¼�����
	NET_DVR_INQUEST_RESUME_SEGMENT struResumeSegment[MAX_RESUME_SEGMENT];
	BYTE    byRes[200];        //����
}NET_DVR_INQUEST_RESUME_EVENT, *LPNET_DVR_INQUEST_RESUME_EVENT;

typedef struct tagNET_DVR_INQUEST_DEVICE_VERSION
{
	BYTE  byMainVersion;         /*�������汾.
								   0 : δ֪
								   1 : 8000��ѶDVR
								       �ΰ汾: 1 : 8000HD-S
								   2 : 8100��ѶDVR 
									   �ΰ汾: 1 : ��Ѷ81SNL
											   2 : ��Ѷ81SH
											   3 : ��Ѷ81SFH
									  */
	BYTE  bySubVersion;          //���ߴΰ汾
    BYTE  byUpgradeVersion;      //�����汾,δ����Ϊ0
	BYTE  byCustomizeVersion;     //���ư汾,�Ƕ���Ϊ0
	BYTE  byRes[60];             //����
}NET_DVR_INQUEST_DEVICE_VERSION, *LPNET_DVR_INQUEST_DEVICE_VERSION;

//********************************nvr/dvr/dvs****************************//
//64·NVR����ȡ����������Ϣ


typedef struct tagNET_DVR_DISK_RAID_INFO 
{
    DWORD dwSize;   //�ṹ���С
	BYTE byEnable;  //����Raid�Ƿ����
    BYTE byRes[35];  //�����ֽ�
}NET_DVR_DISK_RAID_INFO, *LPNET_DVR_DISK_RAID_INFO;


typedef struct tagNET_DVR_SYNCHRONOUS_IPC
{
	DWORD dwSize;    //�ṹ���С
	BYTE  byEnable;  //�Ƿ����ã�Ϊǰ��IPCͬ���豸����
	BYTE  byRes[7];  //����
}NET_DVR_SYNCHRONOUS_IPC, *LPNET_DVR_SYNCHRONOUS_IPC;

typedef struct tagNET_DVR_IPC_PASSWD
{
	DWORD dwSize;    //�ṹ���С
	char sOldPasswd[PASSWD_LEN];  //IPC�ľ����룬����DVR��DVR��֤
	char sNewPasswd[PASSWD_LEN];  //IPC��������
	BYTE byRes[32];
}NET_DVR_IPC_PASSWD, *LPNET_DVR_IPC_PASSWD;

//ͨ����ȡDVR������״̬����λbps
typedef struct tagNET_DEVICE_NET_USING_INFO 
{
	DWORD dwSize;    //�ṹ���С
    DWORD dwPreview;   //Ԥ��
    DWORD dwPlayback;  //�ط�
    DWORD dwIPCModule; //IPC����
	DWORD dwNetDiskRW; //���̶�д
    BYTE res[32];
}NET_DVR_DEVICE_NET_USING_INFO, *LPNET_DVR_DEVICE_NET_USING_INFO;

//ͨ��DVR����ǰ��IPC��IP��ַ
typedef struct tagNET_DVR_IPC_NETCFG
{
	DWORD dwSize;      //�ṹ���С
	NET_DVR_IPADDR struIP;       //IPC��IP��ַ
	WORD wPort;       //IPC�Ķ˿�
	char res[126];  
}NET_DVR_IPC_NETCFG, *LPNET_DVR_IPC_NETCFG;

//��ʱ������
typedef struct tagNET_DVR_TIME_LOCK
{
	DWORD dwSize;      //�ṹ���С
	NET_DVR_TIME strBeginTime;
	NET_DVR_TIME strEndTime;
	DWORD   dwChannel;        //ͨ����, 0xff��ʾ����ͨ��
	DWORD   dwRecordType;     //¼������:  0xffffffff��ȫ����0����ʱ¼��1-�ƶ���⣬2������������3-�����������ƶ���⣬4-�����������ƶ���⣬5-�������6-�ֶ�¼��7-����¼��(ͬ�ļ�����)
	DWORD   dwLockDuration;   //��������ʱ��,��λ��,0xffffffff��ʾ��������
	BYTE    byRes[12];
}NET_DVR_TIME_LOCK, *LPNET_DVR_TIME_LOCK;

typedef struct tagNET_DVR_LOCK_RETURN
{
	DWORD dwSize;      //�ṹ���С
	NET_DVR_TIME strBeginTime; 
	NET_DVR_TIME strEndTime;
	BYTE    byRes[20];
}NET_DVR_LOCK_RETURN, *LPNET_DVR_LOCK_RETURN;

//67DVS
//֤����������
typedef enum 
{
    UPGRADE_CERT_FILE = 0, 
	UPLOAD_CERT_FILE = 1,
	TRIAL_CERT_FILE = 2 
}NET_SDK_UPLOAD_TYPE;  
typedef enum 
{
	DOWNLOAD_CERT = 0,
	DOWNLOAD_ALARM_RECORD = 1 //���ر���¼��
}NET_SDK_DOWNLOAD_TYPE;

typedef struct tagNET_DVR_BONJOUR_CFG
{
    DWORD	dwSize;				// �ṹ���С
	BYTE	byEnableBonjour;		// Bonjourʹ�� 0 ������ 1���ر�
    BYTE 	byRes1[3];				
    BYTE 	byFriendlyName[MAX_DOMAIN_NAME]; 	// ������
	BYTE 	byRes2[128];
}NET_DVR_BONJOUR_CFG, *LPNET_DVR_BONJOUR_CFG;

typedef struct tagNET_DVR_SOCKS_CFG
{
	DWORD			dwSize;				// �ṹ���С
    BYTE			byEnableSocks;  		// ʹ�� 0���ر� 1������
	BYTE 			byVersion;  			// SOCKS�汾 4��SOCKS4   5��SOCKS5
	WORD			wProxyPort;				// ����˿ڣ�Ĭ��1080
	BYTE			byProxyaddr[MAX_DOMAIN_NAME];  	// ����IP��ַ������������
    BYTE 			byUserName[MAX_DOMAIN_NAME]; 	// �û��� SOCKS����
    BYTE 			byPassword[NAME_LEN];			// ����SOCKS5����
	BYTE 			byLocalAddr[MAX_LOCAL_ADDR_LEN];  //��ʹ��socks��������Σ���ʽΪ"ip/netmask;ip/netmask;��"
    BYTE 			byRes[128];
}NET_DVR_SOCKS_CFG, *LPNET_DVR_SOCKS_CFG;



typedef struct tagNET_DVR_QOS_CFG
{
	DWORD		dwSize;
    BYTE		byManageDscp;   // �������ݵ�DSCPֵ [0-63]
    BYTE		byAlarmDscp;    // �������ݵ�DSCPֵ [0-63]
    BYTE		byVideoDscp;    // ��Ƶ���ݵ�DSCPֵ [0-63]��byFlagΪ0ʱ����ʾ����Ƶ
	BYTE		byAudioDscp;    // ��Ƶ���ݵ�DSCPֵ [0-63]��byFlagΪ1ʱ��Ч
	BYTE		byFlag;			// 0������Ƶ��һ��1������Ƶ�ֿ�
	BYTE		byEnable;
    BYTE 		byRes[126];
}NET_DVR_QOS_CFG, *LPNET_DVR_QOS_CFG;

typedef struct tagNET_DVR_HTTPS_CFG
{
	DWORD		dwSize;
	WORD		wHttpsPort;		// HTTPS�˿�
	BYTE		byEnable;		// ʹ�� 0���ر� 1������
	BYTE		byRes[125];
}NET_DVR_HTTPS_CFG, *LPNET_DVR_HTTPS_CFG;

//֤�����
typedef struct tagNET_DVR_CERT_NAME
{
    BYTE	byCountry[MAX_COUNTRY_NAME_LEN];  			//���Ҵ��� CN��
    BYTE 	byState[MAX_DOMAIN_NAME];				//�޻�ʡ
    BYTE 	byLocality[MAX_DOMAIN_NAME];			//����
    BYTE 	byOrganization[MAX_DOMAIN_NAME];		//��֯
    BYTE 	byUnit[MAX_DOMAIN_NAME];				//��λ
    BYTE 	byCommonName[MAX_DOMAIN_NAME];
	BYTE 	byEmail[MAX_DOMAIN_NAME];  
	BYTE 	byRes[128];
}NET_DVR_CERT_NAME, *LPNET_DVR_CERT_NAME ;

typedef struct tagNET_DVR_CERT_PARAM
{
	DWORD dwSize;
	WORD wCertFunc; //֤�����࣬0-802.1x,1-HTTPS
	WORD wCertType; //֤�����ͣ�0-CA��1-Certificate,2-˽Կ�ļ�
	BYTE byFileType; //֤���ļ����ͣ�0-PEM,1-PFX
	BYTE  byRes[35]; 
}NET_DVR_CERT_PARAM, *LPNET_DVR_CERT_PARAM;

#define UPLOAD_CERTIFICATE  1 //�ϴ�֤��


typedef struct tagNET_DVR_CERT_INFO
{
	DWORD 				dwSize;
	NET_DVR_CERT_PARAM 	struCertParam;	//֤�����
	DWORD				dwValidDays;   //��Ч����������Ϊ��ǩ��ʱ��Ч
	BYTE     			byPasswd[NAME_LEN];   //˽Կ����
	NET_DVR_CERT_NAME 	struCertName;    // ֤������
	NET_DVR_CERT_NAME 	struIssuerName;    // ֤�鷢�������ƣ���ǩ��֤����Ϣ��ȡʱ��Ч��
	NET_DVR_TIME_EX     	struBeginTime;   //֤�鴴��ʱ�䣨��ǩ��֤����Ϣ��ȡʱ��Ч��
	NET_DVR_TIME_EX     	struEndTime;   //֤���ֹʱ�䣨��ǩ��֤����Ϣ��ȡʱ��Ч��
	BYTE     			serialNumber[NAME_LEN];   //֤���ʶ�루��ǩ��֤����Ϣ��ȡʱ��Ч��
	BYTE 				byVersion; 
	BYTE     			byKeyAlgorithm;			//�������� 0-RSA  1-DSA
	BYTE      			byKeyLen;				//���ܳ��� 0-512  1-1024�� 2-2048
	BYTE     			bySignatureAlgorithm; //ǩ���㷨���ͣ���ǩ��֤����Ϣ��ȡʱ��Ч��
	BYTE 				byRes[128];
}NET_DVR_CERT_INFO, *LPNET_DVR_CERT_INFO;


//channel record status
//***ͨ��¼��״̬*****//
typedef struct tagNET_DVR_CHANS_RECORD_STATUS
{
	BYTE byValid;       //�Ƿ���Ч
	BYTE byRecord;      //(ֻ��)¼������, ��λ��ʾ:0: ����¼��1����¼��
	WORD wChannelNO;   //ͨ����
	DWORD dwRelatedHD;  //��������
	BYTE byRes[8];      //�����ֽ�
}NET_DVR_CHANS_RECORD_STATUS, *LPNET_DVR_CHANS_RECORD_STATUS;


typedef struct tagNET_DVR_IP_ALARM_GROUP_NUM
{
	DWORD dwSize; 
	DWORD dwIPAlarmInGroup;      //IPͨ��������������
	DWORD dwIPAlarmInNum;       //IPͨ�������������
	DWORD dwIPAlarmOutGroup;     //IPͨ�������������
	DWORD dwIPAlarmOutNum;      //IPͨ�������������
	BYTE byRes[64];  
}NET_DVR_IP_ALARM_GROUP_NUM, *LPNET_DVR_IP_ALARM_GROUP_NUM;
//****NVR end***//

typedef struct tagNET_DVR_CHAN_GROUP_RECORD_STATUS
{
	DWORD dwSize; //�ṹ���С
	NET_DVR_CHANS_RECORD_STATUS struChanStatus[MAX_CHANNUM_V30]; //һ��64��
}NET_DVR_CHAN_GROUP_RECORD_STATUS, *LPNET_DVR_CHAN_GROUP_RECORD_STATUS;


typedef struct tagNET_DVR_RECTCFG
{
	WORD wXCoordinate; /*�������Ͻ���ʼ��X����*/
	WORD wYCoordinate; /*�������Ͻ�Y����*/
	WORD wWidth;       /*���ο��*/
	WORD wHeight;      /*���θ߶�*/
}NET_DVR_RECTCFG, *LPNET_DVR_RECTCFG;
/*������Ϣ*/
typedef struct tagNET_DVR_WINCFG
{
	DWORD dwSize;
	BYTE  byVaild;
	BYTE  byInputIdx;          /*����Դ����*/
    BYTE  byLayerIdx;          /*ͼ�㣬0Ϊ��ײ�*/
	BYTE  byTransparency; //͸���ȣ�0��100 
	NET_DVR_RECTCFG  struWin;//Ŀ�Ĵ���(�����ʾǽ)
    WORD wScreenHeight;//������
    WORD wScreenWidth;//������
	BYTE  byRes[20];
}NET_DVR_WINCFG, *LPNET_DVR_WINCFG;

#define  MAX_LAYERNUMS	32

typedef struct tagNET_DVR_ALLWINCFG
{
    DWORD dwSize;
    NET_DVR_WINCFG struWinCfg[MAX_LAYERNUMS];
    BYTE  byRes2[24];
}NET_DVR_ALLWINCFG, *LPNET_DVR_ALLWINCFG;

typedef struct tagNET_DVR_SCREENZOOM
{
	DWORD dwSize;
	DWORD dwScreenNum;//������
	NET_DVR_POINT_FRAME struPointFrame;
	BYTE  byLayer;//ͼ���
	BYTE  byRes[11];
}NET_DVR_SCREENZOOM, *LPNET_DVR_SCREENZOOM;

//2011-04-18
/*�������Ϣ,���9999������1��ʼ */
typedef struct tagNET_MATRIX_CAMERAINFO
{  
    DWORD dwGlobalCamId;      /* cam��ȫ�ֱ��*/
    BYTE  sCamName[NAME_LEN]; /*cam������*/
    DWORD dwMatrixId;          /*cam��Ӧ����ı��*/
    DWORD dwLocCamId;         /*cam��Ӧ������ڲ����*/ 
    BYTE  byValid;    /*�Ƿ���Ч��0-��1-��*/
    BYTE  byPtzCtrl; /* �Ƿ�ɿأ�0-��1-��*/
    BYTE  byUseType; //*ʹ�����ͣ�0-����Ϊ����ʹ�ã�1-BNC��2-SP3,3-V6���ˣ�4-��������*/ 
	BYTE  byUsedByTrunk;//��ǰʹ��״̬��0-û�б�ʹ�ã�1-������ʹ�� 
	BYTE  byTrunkReq; /*������ֱ���,��D1Ϊ��λ��1 - 1��D1��2- 2��D1����Ϊ����ʹ��ʱ��ָ���Ǹ��ߵĴ���*/
	BYTE  byRes1[3];
	NET_DVR_TIME struInstallTime;//��װʱ��
    BYTE  sPurpose[NAME_LEN];/*��;����*/
	BYTE  byRes2[20];  
}NET_MATRIX_CAMERAINFO, *LPNET_MATRIX_CAMERAINFO;

/*��������Ϣ�����2048��*/
typedef struct tagNET_MATRIX_MONITORINFO 
{
    DWORD	dwGloalMonId; /*mon ��ͳһ���*/
    BYTE	sMonName[NAME_LEN];
    DWORD	dwMatrixId;  /*mon���ھ���ı��*/
    DWORD	dwLocalMonId; /*mon���ڲ����*/
    BYTE	byValid;    /*�Ƿ���Ч��0-��1-��*/
	BYTE	byTrunkType; /*ʹ�����ͣ�0-����Ϊ����ʹ�ã�1-BNC��2-SP3,3-V6���ˣ�4-��������*/ 
	BYTE	byUsedByTrunk;//��ǰʹ��״̬��0-û�б�ʹ�ã�1-������ʹ�� 
	BYTE	byTrunkReq; /*�ֱ���, ��D1Ϊ��λ��1- 1��D1��2- 2��D1����Ϊ����ʹ��ʱ��ָ���Ǹ��ߵĴ���*/
	NET_DVR_TIME struInstallTime;//��װʱ��
    BYTE	sPurpose[NAME_LEN];/*��;����*/
    BYTE	byRes[20];  
}NET_MATRIX_MONITORINFO, *LPNET_MATRIX_MONITORINFO;

typedef struct tagNET_MATRIX_DIGITALMATRIX
{
	NET_DVR_IPADDR  struAddress; /*�豸Ϊ�����豸ʱ��IP��Ϣ*/
	WORD	wPort;
	BYTE	byNicNum; /*0 - eth0, 1 - eth1, ����˫�������ͨ�ż���󶨵�����*/
	BYTE	byRes[69];   
}NET_MATRIX_DIGITALMATRIX, *LPNET_MATRIX_DIGITALMATRIX;
typedef struct tagNET_MATRIX_ANALOGMATRIX
{
	BYTE	bySerPortNum;   /*���ӵĴ��ں�*/
	BYTE    byMatrixSerPortType;/* ����������صĴ�����ģ�����ļ��̿�(����Э��)���ӻ��������ͨ�ſڣ�����Э�飩���� ��0 --- ����Э��ͨѶ�� 1 --- ����ͨѶ��*/
	BYTE	byRes1[2];
	NET_DVR_SINGLE_RS232 struRS232;	//232���ڲ���
	BYTE	byRes2[200];      
}NET_MATRIX_ANALOGMATRIX, *LPNET_MATRIX_ANALOGMATRIX;

typedef union tagNET_MATRIX_UNION
{
	NET_MATRIX_DIGITALMATRIX struDigitalMatrix;
	NET_MATRIX_ANALOGMATRIX struAnalogMatrix;
}NET_MATRIX_UNION, *LPNET_MATRIX_UNION;
/*����������Ϣ�����20��*/
typedef struct tagNET_MATRIX_MATRIXINFO 
{
	DWORD   dwSize;
	DWORD	dwMatrixId;  /*������*/
	BYTE	sDevName[NAME_LEN];
	BYTE	byCtrlType; /*ָͨѶ��ʽ�Ǵ���ͨ��, ��������ͨ��*/
	BYTE	byProtocolType;/*����ͨ�ſ���Э��*/
	BYTE	byRes1[6];   /*Ԥ��*/
	NET_MATRIX_UNION struMatrixUnion;
	DWORD	dwMaxPortsIn; /*����������*/
	DWORD	dwMaxPortsOut;/*���������*/
	BYTE	sUserName[NAME_LEN];   /*��¼�û���*/
	BYTE	sPassword[PASSWD_LEN];  /*��¼����*/        
	NET_DVR_TIME struInstallTime;//��װʱ��
	BYTE	sPurpose[NAME_LEN];/*��;����*/
	BYTE	byRes2[20];   /*Ԥ��*/
}NET_MATRIX_MATRIXINFO, *LPNET_MATRIX_MATRIXINFO;


typedef struct tagNET_DVR_MATRIXLIST
{
	DWORD	dwSize;
	BYTE	byRes[12];
	DWORD	dwMatrixNum;//�豸���صľ�������
	BYTE    *pBuffer;//������Ϣ������
	DWORD   dwBufLen;//������ָ�볤�ȣ��������
}NET_DVR_MATRIXLIST,*LPNET_DVR_MATRIXLIST;
 
/*����������Ϣ*/
typedef struct tagNET_MATRIX_UARTPARAM
{	
	DWORD dwSize;
	BYTE  byPortName[NAME_LEN];
	WORD  wUserId; /*�û���ţ��������豸Ϊ����ʱ����һ���û�������Ȩ�޹���*/
	BYTE  byPortType;    /*�������ͣ�����0-RS232/1-RS485/2-RS422*/
	BYTE  byFuncType; /*�������ӵ��豸������0-���У�1-���̣�2-����͸��ͨ��(485���ڲ������ó�͸��ͨ��),3-ģ�����*/     
	BYTE  byProtocolType;  /*����֧�ֵ�Э������, �����Ӽ����豸ʱ��Ҫ����Ϣ,��ȡ����֧��Э��ı�ż�������*/
	BYTE  byBaudRate;
	BYTE  byDataBits;
	BYTE  byStopBits;   /*ֹͣλ*/
	BYTE  byParity;      /*У��*/
	BYTE  byFlowCtrl;   /*���أ�������أ�������*/
	BYTE  byRes[22];     /*Ԥ��*/
}NET_MATRIX_UARTPARAM, *LPNET_MATRIX_UARTPARAM;

//���256���û���1��256
typedef struct tagNET_MATRIX_USERPARAM 
{
	DWORD dwSize;
    BYTE	sUserName[NAME_LEN];
    BYTE	sPassword[PASSWD_LEN/*16*/];
    BYTE	byRole;/*�û���ɫ:0-����Ա,1-����Ա��ֻ��һ��ϵͳ����Ա��255������Ա*/
    BYTE	byLevel;  /*ͳһ�������ڲ����������,1- 255*/
    BYTE	byRes[18];
}NET_MATRIX_USERPARAM, *LPNET_MATRIX_USERPARAM;

//���255����Դ��
typedef struct tagNET_MATRIX_RESOURSEGROUPPARAM
{
    DWORD dwSize;
    BYTE  byGroupName[NAME_LEN];
	BYTE  byGroupType;/*0-�����CAM�飬1-������MON��*/
	BYTE  byRes1;
    WORD  wMemNum;
    DWORD dwGlobalId[512];
    BYTE  byRes2[20];
}NET_MATRIX_RESOURCEGROUPPARAM,*LPNET_MATRIX_RESOURSEGROUPPARAM;

//���255���û���
typedef struct tagNET_MATRIX_USERGROUPPARAM
{
	DWORD dwSize;
	BYTE  sGroupName[NAME_LEN];
	WORD  wUserMember[255];  /*�������û���Ա*/
	WORD  wResorceGroupMember[255]; /*��������Դ���Ա*/
	BYTE  byPermission[32];//Ȩ�ޣ�����0-ptzȨ�ޡ��л�Ȩ�ޡ���ѯȨ��
	BYTE  byRes[20];
} NET_MATRIX_USERGROUPPARAM, *LPNET_MATRIX_USERGROUPPARAM;

typedef struct tagNET_MATRIX_TRUNKPARAM
{
	DWORD	dwSize;
    DWORD	dwTrunkId;
    BYTE	sTrunkName[NAME_LEN];
    DWORD	dwSrcMonId;
    DWORD	dwDstCamId;
	BYTE	byTrunkType;  /*ʹ������  1-BNC��2-SP3���˸��壬3-SP3����D1�� 4-V6���ˣ�5-��������*/
	BYTE	byAbility;     /*��ʾ���˵Ĵ������Դ��伸·*/
	BYTE	bySubChan;   /*��Թ��˸��߶��ԣ���ʾ��ͨ����*/
	BYTE    byLevel;		/* ���߼��� 1-255*/
	WORD	wReserveUserID;	//Ԥ�����û�ID�� 1~256 ��0��ʾ�ͷ�Ԥ��
	BYTE   byRes[18]; 
} NET_MATRIX_TRUNKPARAM, *LPNET_MATRIX_TRUNKPARAM;

typedef struct tagNET_DVR_MATRIX_TRUNKLIST
{
	DWORD	dwSize;
	BYTE	byRes[12];
	DWORD	dwTrunkNum;//�豸���صĸ�������
	BYTE    *pBuffer;//������Ϣ������
	DWORD   dwBufLen;//������ָ�볤�ȣ��������
}NET_DVR_MATRIX_TRUNKLIST,*LPNET_DVR_MATRIX_TRUNKLIST;

#define MATRIX_PROTOCOL_NUM    20    //֧�ֵ�������Э����
#define KEYBOARD_PROTOCOL_NUM  20    //֧�ֵ�������Э����
typedef struct tagNET_DVR_PROTO_TYPE_EX
{ 
	WORD wType;               /*ipcЭ��ֵ*/  
	WORD wCommunitionType;		/*0��ģ�� 1������ 2������ģ�⡢����*/
	BYTE  byDescribe[DESC_LEN]; /*Э�������ֶ�*/    
}NET_DVR_PROTO_TYPE_EX, LPNET_DVR_PROTO_TYPE_EX;

typedef struct tagNET_DVR_MATRIXMANAGE_ABIILITY
{
	DWORD	dwSize;
	DWORD	dwMaxCameraNum;//���Camera����
	DWORD	dwMaxMonitorNum;//������������
	WORD	wMaxMatrixNum;//����������
	WORD	wMaxSerialNum;//��������
	WORD	wMaxUser;//����û���
	WORD	wMaxResourceArrayNum;//�����Դ����
	WORD	wMaxUserArrayNum;//����û�����
	WORD	wMaxTrunkNum;//��������
	BYTE	nStartUserNum;//��ʼ�û���
	BYTE	nStartUserGroupNum;//��ʼ�û����
	BYTE	nStartResourceGroupNum;//��ʼ��Դ���
	BYTE	nStartSerialNum;//��ʼ���ں�
	DWORD   dwMatrixProtoNum;     /*��Ч�ľ���Э����Ŀ����0��ʼ*/
	NET_DVR_PROTO_TYPE_EX struMatrixProto[MATRIX_PROTOCOL_NUM];/*���Э���б���*/    
    DWORD   dwKeyBoardProtoNum;     /*��Ч�ļ���Э����Ŀ����0��ʼ*/
    NET_DVR_PROTO_TYPE_EX struKeyBoardProto[KEYBOARD_PROTOCOL_NUM];/*���Э���б���*/   
	BYTE    byRes[32];
} NET_DVR_MATRIXMANAGE_ABILITY, *LPNET_DVR_MATRIXMANAGE_ABILITY;

//********************************nvr/dvr/dvs end**************************//

/********************************��������ʶ��****************************/
//����ץ�Ĺ���(����)
typedef struct tagNET_VCA_SINGLE_FACESNAPCFG
{
	BYTE byActive;				//�Ƿ񼤻����0-��1-��
	BYTE byRes[3];     //����
    NET_VCA_SIZE_FILTER struSizeFilter;   //�ߴ������
	NET_VCA_POLYGON     struVcaPolygon;		//����ʶ������
}NET_VCA_SINGLE_FACESNAPCFG, *LPNET_VCA_SINGLE_FACESNAPCFG;

//����ץ�Ĺ������
typedef struct tagNET_VCA_FACESNAPCFG
{
	DWORD dwSize;
	BYTE bySnapTime;					//����Ŀ��������ץ�Ĵ���0-10
	BYTE bySnapInterval;                 //ץ�ļ������λ��֡
	BYTE bySnapThreshold;               //ץ����ֵ��0-100
	BYTE byGenerateRate; 		//Ŀ�������ٶ�,��Χ[1, 5]	
	BYTE bySensitive;			//Ŀ���������ȣ���Χ[1, 5]
	BYTE byReferenceBright; //2012-3-27�ο�����[0,100]
	BYTE byMatchType;         //2012-5-3�ȶԱ���ģʽ��0-Ŀ����ʧ�󱨾���1-ʵʱ����
    BYTE byMatchThreshold;  //2012-5-3ʵʱ�ȶ���ֵ��0~100
	NET_DVR_JPEGPARA  struPictureParam; //ͼƬ���ṹ
	NET_VCA_SINGLE_FACESNAPCFG struRule[MAX_RULE_NUM]; //����ץ�Ĺ���
	BYTE byRes2[100];
}NET_VCA_FACESNAPCFG, *LPNET_VCA_FACESNAPCFG;

//����ץ�Ľ��
typedef struct tagNET_VCA_FACESNAP_RESULT
{
	DWORD   dwSize;     		// �ṹ��С
	DWORD 	dwRelativeTime;     // ���ʱ��
	DWORD	dwAbsTime;			// ����ʱ��
    DWORD   dwFacePicID;       //����ͼID
	DWORD   dwFaceScore;		//��������,0-100
	NET_VCA_TARGET_INFO  struTargetInfo;	//����Ŀ����Ϣ
    NET_VCA_RECT         struRect;      //������ͼ����
	NET_VCA_DEV_INFO  	 struDevInfo;		//ǰ���豸��Ϣ
	DWORD   dwFacePicLen;		//������ͼ�ĳ��ȣ�Ϊ0��ʾû��ͼƬ������0��ʾ��ͼƬ
    DWORD   dwBackgroundPicLen; //����ͼ�ĳ��ȣ�Ϊ0��ʾû��ͼƬ������0��ʾ��ͼƬ(����)
	BYTE    byRes[60];              // �����ֽ�
	BYTE*   pBuffer1;  //������ͼ��ͼƬ����
	BYTE*   pBuffer2;  //����ͼ��ͼƬ���ݣ�������ͨ�����ұ���ͼ�ӿڿ��Ի�ȡ����ͼ��
}NET_VCA_FACESNAP_RESULT, *LPNET_VCA_FACESNAP_RESULT;

typedef struct tagNET_VCA_FD_IMAGE_CFG
{
    DWORD   dwWidth;                  //�Ҷ�ͼ�����ݿ��
	DWORD   dwHeight;                 //�Ҷ�ͼ��߶�
	DWORD   dwImageLen;  //�Ҷ�ͼ�����ݳ���
	BYTE     byRes[20];  //����
	BYTE     *pImage;    //�Ҷ�ͼ������
}NET_VCA_FD_IMAGE_CFG, *LPNET_VCA_FD_IMAGE_CFG;

typedef struct tagNET_VCA_FD_PROCIMG_CFG
{
    DWORD    dwSize;           //�ṹ��С
    BYTE     byEnable;         //�Ƿ񼤻����;
    BYTE     bySensitivity;      //��������ȣ�[0,5]
    BYTE     byRes1[22];       //�����ֽ� 
    NET_VCA_SIZE_FILTER  struSizeFilter;  //�ߴ������
    NET_VCA_POLYGON   struPolygon;    //�����
    NET_VCA_FD_IMAGE_CFG struFDImage;  //ͼƬ��Ϣ
    BYTE     byRes2[20];    //����
}NET_VCA_FD_PROCIMG_CFG, *LPNET_VCA_FD_PROCIMG_CFG;

typedef struct tagNET_VCA_SUB_PROCIMG
{
	DWORD dwImageLen;  //ͼƬ���ݳ���
	DWORD dwFaceScore;		//��������,0-100
	NET_VCA_RECT struVcaRect; //������ͼ����
	BYTE  byRes[20];  //����
	BYTE  *pImage;  //ͼƬ����
}NET_VCA_SUB_PROCIMG, *LPNET_VCA_SUB_PROCIMG;

typedef struct tagNET_VCA_FD_PROCIMG_RESULT
{
	DWORD dwSize;   //�ṹ��С
	DWORD dwImageId; //��ͼID
	BYTE byRes[20]; //����
	DWORD dwSubImageNum;  //������ͼ����
	NET_VCA_SUB_PROCIMG  struProcImg[MAX_TARGET_NUM];  //������ͼ��Ϣ
}NET_VCA_FD_PROCIMG_RESULT, *LPNET_VCA_FD_PROCIMG_RESULT;

typedef struct tagNET_VCA_PICMODEL_RESULT
{
	DWORD dwImageLen;  //ͼƬ���ݳ���
	DWORD dwModelLen;  //ģ�����ݳ���
	BYTE  byRes[20]; //����
	BYTE  *pImage;  //����ͼƬ����ָ��
	BYTE  *pModel;  //ģ������ָ��
}NET_VCA_PICMODEL_RESULT, *LPNET_VCA_PICMODEL_RESULT;

typedef struct tagNET_VCA_REGISTER_PIC
{
	DWORD dwImageID; //��ͼID
	DWORD dwFaceScore;		//��������,0-100
	NET_VCA_RECT struVcaRect;  //������ͼ����
	BYTE  byRes[20];  //����
}NET_VCA_REGISTER_PIC, *LPNET_VCA_REGISTER_PIC;

#define MAX_HUMAN_PICTURE_NUM  10   //�����Ƭ��
#define MAX_HUMAN_BIRTHDATE_LEN 10   //���������³���

typedef struct tagNET_DVR_AREAINFOCFG
{ 
	WORD wNationalityID; //����
	WORD wProvinceID; //ʡ
	WORD wCityID; //��
	WORD wCountyID; //��
	BYTE byRes[4]; //����
}NET_DVR_AREAINFOCFG, *LPNET_DVR_AREAINFOCFG;

typedef struct tagNET_VCA_HUMAN_ATTRIBUTE
{
	BYTE   bySex; //�Ա�0-�У�1-Ů
	BYTE   byCertificateType; //֤�����ͣ�0-���֤��1-����֤
	BYTE   byBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //�������£��磺201106
	BYTE   byName[NAME_LEN]; //����
	NET_DVR_AREAINFOCFG struNativePlace; //�������
	BYTE   byCertificateNumber[NAME_LEN];  //֤����
	BYTE   byRes2[20];
}NET_VCA_HUMAN_ATTRIBUTE, *LPNET_VCA_HUMAN_ATTRIBUTE;

typedef struct tagNET_VCA_HUMANATTRIBUTE_COND
{
	BYTE   bySex; //�Ա�0-�����ã�1-�У�2-Ů
	BYTE   byCertificateType; //֤�����ͣ�0-�����ã�1-���֤��2-����֤
	BYTE   byStartBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ʼ�������£��磺201106
	BYTE   byEndBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ֹ�������£���201106
	BYTE   byName[NAME_LEN]; //����
	NET_DVR_AREAINFOCFG struNativePlace; //�������
	BYTE   byCertificateNumber[NAME_LEN];  //֤����
	BYTE   byRes[20];
}NET_VCA_HUMANATTRIBUTE_COND, *LPNET_VCA_HUMANATTRIBUTE_COND;


typedef struct tagNET_VCA_BLACKLIST_INFO
{
	DWORD  dwSize;   //�ṹ��С
	DWORD  dwRegisterID;  //����ע��ID�ţ�ֻ����
	DWORD  dwGroupNo; //�����
	BYTE   byType; //�ڰ�������־��0-ȫ����1-��������2-������
	BYTE   byLevel; //�������ȼ���0-ȫ����1-�ͣ�2-�У�3-��
	BYTE   byRes1[2];  //����
	NET_VCA_HUMAN_ATTRIBUTE struAttribute;  //��Ա��Ϣ
	BYTE   byRemark[NAME_LEN]; //��ע��Ϣ
	BYTE   byRes2[20];
}NET_VCA_BLACKLIST_INFO, *LPNET_VCA_BLACKLIST_INFO;

typedef struct tagNET_VCA_BLACKLIST_PARA
{
    DWORD dwSize;   //�ṹ��С
	NET_VCA_BLACKLIST_INFO struBlackListInfo;  //��������������
	DWORD dwRegisterPicNum;  //������ͼ����
	NET_VCA_PICMODEL_RESULT struRegisterPic[MAX_HUMAN_PICTURE_NUM];  //������ͼƬ��Ϣ
	BYTE  byRes[40]; //����
}NET_VCA_BLACKLIST_PARA, *LPNET_VCA_BLACKLIST_PARA;

typedef struct tagNET_VCA_BLACKLIST_COND
{
    LONG  lChannel; //ͨ����
	DWORD dwGroupNo; //�����
	BYTE  byType; //�ڰ�������־��0-ȫ����1-��������2-������
	BYTE  byLevel; //�������ȼ���0-ȫ����1-�ͣ�2-�У�3-��
	BYTE  byRes1[2];  //����
	NET_VCA_HUMAN_ATTRIBUTE struAttribute; //��Ա��Ϣ
	BYTE  byRes[20];
}NET_VCA_BLACKLIST_COND, *LPNET_VCA_BLACKLIST_COND;

typedef struct tagNET_VCA_BLACKLIST_PIC
{
    DWORD dwSize;   //�ṹ��С
	DWORD dwFacePicNum;  //����ͼ����
	BYTE  byRes[20]; //����
	NET_VCA_PICMODEL_RESULT  struBlackListPic[MAX_HUMAN_PICTURE_NUM];  //������Ƭ��Ϣ
}NET_VCA_BLACKLIST_PIC, *LPNET_VCA_BLACKLIST_PIC;

typedef struct tagNET_VCA_FIND_PICTURECOND
{
    LONG lChannel;//ͨ����
    NET_DVR_TIME struStartTime;//��ʼʱ��
	NET_DVR_TIME struStopTime;//����ʱ��
	BYTE byRes[12]; //����
}NET_VCA_FIND_PICTURECOND, *LPNET_VCA_FIND_PICTURECOND;

#define MAX_FACE_PIC_LEN   6144   //�������ͼƬ���ݳ���
typedef struct tagNET_VCA_SUB_SNAPPIC_DATA
{
	DWORD dwFacePicID; //����ͼID
	DWORD dwFacePicLen;  //����ͼ���ݳ���
	NET_DVR_TIME struSnapTime;  //ץ��ʱ��
	DWORD dwSimilarity; //���ƶ�
	BYTE  byRes[16];  //����
	char  sPicBuf[MAX_FACE_PIC_LEN];  //ͼƬ����
}NET_VCA_SUB_SNAPPIC_DATA, *LPNET_VCA_SUB_SNAPPIC_DATA;

typedef struct tagNET_VCA_ADVANCE_FIND
{
	DWORD dwFacePicID; //����ͼƬID
	BYTE  byRes[36];
}NET_VCA_ADVANCE_FIND, *LPNET_VCA_ADVANCE_FIND;

typedef struct tagNET_VCA_NORMAL_FIND
{
	DWORD dwImageID; //��ͼID
	DWORD dwFaceScore;  //��������
	NET_VCA_RECT struVcaRect; //������ͼ����
	BYTE byRes[20];
}NET_VCA_NORMAL_FIND, *LPNET_VCA_NORMAL_FIND;

typedef union tagNET_VCA_FIND_SNAPPIC_UNION
{
	NET_VCA_NORMAL_FIND  struNormalFind; //��ͨ����
    NET_VCA_ADVANCE_FIND struAdvanceFind; //�߼�����
}NET_VCA_FIND_SNAPPIC_UNION, *LPNET_VCA_FIND_SNAPPIC_UNION;

typedef enum _VCA_FIND_SNAPPIC_TYPE_
{
    VCA_NORMAL_FIND  = 0x00000000,   //��ͨ����
	VCA_ADVANCE_FIND  = 0x00000001  //�߼�����
}VCA_FIND_SNAPPIC_TYPE;

typedef struct tagNET_VCA_FIND_PICTURECOND_ADVANCE
{
    LONG lChannel;//ͨ����
    NET_DVR_TIME struStartTime;//��ʼʱ��
	NET_DVR_TIME struStopTime;//����ʱ��
	BYTE byThreshold;  //��ֵ��0-100
	BYTE byRes[23]; //����
	VCA_FIND_SNAPPIC_TYPE dwFindType;//�������ͣ����VCA_FIND_SNAPPIC_TYPE
	NET_VCA_FIND_SNAPPIC_UNION uFindParam; //��������
}NET_VCA_FIND_PICTURECOND_ADVANCE, *LPNET_VCA_FIND_PICTURECOND_ADVANCE;

typedef struct tagNET_VCA_FACESNAP_INFO_ALARM
{
	DWORD dwRelativeTime;     // ���ʱ��
	DWORD dwAbsTime;			// ����ʱ��
    DWORD dwSnapFacePicID;       //ץ������ͼID
	DWORD dwSnapFacePicLen;		//ץ��������ͼ�ĳ��ȣ�Ϊ0��ʾû��ͼƬ������0��ʾ��ͼƬ
	NET_VCA_DEV_INFO struDevInfo;		//ǰ���豸��Ϣ
   	BYTE  byRes[20];              // �����ֽ�
	BYTE  *pBuffer1;  //ץ��������ͼ��ͼƬ����
}NET_VCA_FACESNAP_INFO_ALARM, *LPNET_VCA_FACESNAP_INFO_ALARM;

typedef struct tagNET_VCA_BLACKLIST_INFO_ALARM
{
	NET_VCA_BLACKLIST_INFO struBlackListInfo; //������������Ϣ
    DWORD dwBlackListPicLen;       //������������ͼ�ĳ��ȣ�Ϊ0��ʾû��ͼƬ������0��ʾ��ͼƬ
   	BYTE  byRes[20];              // �����ֽ�
	BYTE  *pBuffer1;  //������������ͼ��ͼƬ����
}NET_VCA_BLACKLIST_INFO_ALARM, *LPNET_VCA_BLACKLIST_INFO_ALARM;

typedef struct tagNET_VCA_FACESNAP_MATCH_ALARM
{
	DWORD dwSize;     		// �ṹ��С
    float fSimilarity; //���ƶȣ�[0.001,1]
	NET_VCA_FACESNAP_INFO_ALARM  struSnapInfo; //ץ����Ϣ
    NET_VCA_BLACKLIST_INFO_ALARM struBlackListInfo; //��������Ϣ
	BYTE  byRes[60];              // �����ֽ�
}NET_VCA_FACESNAP_MATCH_ALARM, *LPNET_VCA_FACESNAP_MATCH_ALARM;


typedef struct tagNET_VCA_BLACKLIST_INFO_ALARM_LOG
{
	NET_VCA_BLACKLIST_INFO struBlackListInfo; //������������Ϣ
    DWORD dwBlackListPicID;       //������������ͼID�����ڲ���ͼƬ
   	BYTE  byRes[20];              // �����ֽ�
}NET_VCA_BLACKLIST_INFO_ALARM_LOG, *LPNET_VCA_BLACKLIST_INFO_ALARM_LOG;

typedef struct tagNET_VCA_FACESNAP_INFO_ALARM_LOG
{
	DWORD dwRelativeTime;     // ���ʱ��
	DWORD dwAbsTime;			// ����ʱ��
    DWORD dwSnapFacePicID;       //ץ������ͼID
	NET_VCA_DEV_INFO  	 struDevInfo;		//ǰ���豸��Ϣ
   	BYTE  byRes[20];              // �����ֽ�
}NET_VCA_FACESNAP_INFO_ALARM_LOG, *LPNET_VCA_FACESNAP_INFO_ALARM_LOG;

typedef struct tagNET_VCA_FACESNAP_MATCH_ALARM_LOG
{
	DWORD dwSize;     		// �ṹ��С
    float fSimilarity; //���ƶȣ�[0.001,1]
	NET_VCA_FACESNAP_INFO_ALARM_LOG  struSnapInfoLog; //ץ����Ϣ
    NET_VCA_BLACKLIST_INFO_ALARM_LOG struBlackListInfoLog; //��������Ϣ
	BYTE  byRes[60];              // �����ֽ�
}NET_VCA_FACESNAP_MATCH_ALARM_LOG, *LPNET_VCA_FACESNAP_MATCH_ALARM_LOG;

typedef struct tagNET_VCA_FACEMATCH_PICCOND
{
	DWORD dwSize;     		// �ṹ��С
   	DWORD dwSnapFaceID; //ץ��������ͼID
	DWORD dwBlackListID; //ƥ��ĺ�����ID
	DWORD dwBlackListFaceID; //�ȶԵĺ�����������ͼID
	BYTE  byRes[20];              // �����ֽ�
}NET_VCA_FACEMATCH_PICCOND, *LPNET_VCA_FACEMATCH_PICCOND;

typedef struct tagNET_VCA_FACEMATCH_PICTURE
{
	DWORD dwSize;     		// �ṹ��С
   	DWORD dwSnapFaceLen; //ץ��������ͼ����
	DWORD dwBlackListFaceLen; //�ȶԵĺ�����������ͼ����
	BYTE  byRes[20];              //�����ֽ�
	BYTE *pSnapFace;  //ץ��������ͼ��ͼƬ����
	BYTE *pBlackListFace;  //�ȶԵĺ�����������ͼ����
}NET_VCA_FACEMATCH_PICTURE, *LPNET_VCA_FACEMATCH_PICTURE;

typedef struct tagNET_VCA_BLACKLIST_FASTREGISTER_PARA
{
    DWORD dwSize;   //�ṹ��С
	NET_VCA_BLACKLIST_INFO struBlackListInfo;  //��������������
	DWORD dwImageLen;  //ͼ�����ݳ���
	BYTE  byRes[124];  //����
	BYTE  *pImage;    //ͼ������
}NET_VCA_BLACKLIST_FASTREGISTER_PARA, *LPNET_VCA_BLACKLIST_FASTREGISTER_PARA;

//������������
typedef struct tagNET_VCA_SINGLE_PATH
{
	BYTE  byActive;  // �Ƿ����,0-��,1-�� 
	BYTE  byType;   //0-�洢ץ�ģ�1-�洢�������ȶԱ�����2-�洢ץ�ĺͺ������ȶԱ���
	BYTE  byRes1[6]; //����
	DWORD dwDiskDriver;   //�̷��ţ���0��ʼ
	DWORD dwLeftSpace;   //Ԥ����������λΪG��
	BYTE  byRes2[8]; //����
}NET_VCA_SINGLE_PATH, *LPNET_VCA_SINGLE_PATH;

//�洢·������
typedef struct tagNET_VCA_SAVE_PATH_CFG
{ 
	DWORD dwSize;   //�ṹ��С
	NET_VCA_SINGLE_PATH  struPathInfo[MAX_DISKNUM_V30]; //��������
	BYTE  byRes[40]; //����
}NET_VCA_SAVE_PATH_CFG, *LPNET_VCA_SAVE_PATH_CFG;

typedef struct tagNET_DVR_DEV_ACCESS_CFG
{
    DWORD   dwSize;
    NET_DVR_IPADDR 	struIP;		//�����豸��IP��ַ
    WORD 	wDevicePort;			 	//�˿ں�
	BYTE	byEnable;		         //�Ƿ����ã�0-��1-��
	BYTE 	byRes1;				//����
    BYTE	sUserName[NAME_LEN];	//�����豸�ĵ�¼�ʺ�
	BYTE	sPassword[PASSWD_LEN];	//�����豸�ĵ�¼����
	BYTE	byRes2[60];
}NET_DVR_DEV_ACCESS_CFG,*LPNET_DVR_DEV_ACCESS_CFG;

/********************************��������ʶ�� end****************************/
/////***********************************64-T������*************************************//////
//�ֱ���
#define MAKE_RESOLUTION(_interlace_, _width_, _height_, _fps_) \
	(((_interlace_)<<28) \
	|((((_width_)>>3)&0x1ff)<<19)| \
	((((_height_)>>1)&0x7ff)<<8)| \
((_fps_)&0xff))
#define GET_RES_INTERLACE(_res_) \
(((_res_)>>28)&0x1)
#define GET_RES_WIDTH(_res_) \
((((_res_)>>19)&0x1ff)<<3)
#define GET_RES_HEIGHT(_res_) \
((((_res_)>>8)&0x7ff)<<1)
#define GET_RES_FPS(_res_) \
((_res_)&0xff)

#define NOT_AVALIABLE	MAKE_RESOLUTION (0,0,0,0)
#define SVGA_60HZ 		MAKE_RESOLUTION(0, 800, 600, 60)
#define SVGA_75HZ 		MAKE_RESOLUTION(0, 800, 600, 75)
#define XGA_60HZ 		MAKE_RESOLUTION(0, 1024, 768, 60) 
#define XGA_75HZ 		MAKE_RESOLUTION(0, 1024, 768, 75)
#define SXGA_60HZ  		MAKE_RESOLUTION(0, 1280, 1024, 60)
#define SXGA2_60HZ  	MAKE_RESOLUTION(0, 1280, 960, 60) 
#define _720P_60HZ  	MAKE_RESOLUTION(0, 1280, 720, 60)
#define _720P_50HZ  	MAKE_RESOLUTION(0, 1280, 720, 50) 
#define _1080I_60HZ 	MAKE_RESOLUTION(1, 1920, 1080, 60)
#define _1080I_50HZ  	MAKE_RESOLUTION(1, 1920, 1080, 50)
#define _1080P_60HZ 	MAKE_RESOLUTION(0, 1920, 1080, 60)
#define _1080P_50HZ 	MAKE_RESOLUTION(0, 1920, 1080, 50)
#define _1080P_30HZ 	MAKE_RESOLUTION(0, 1920, 1080, 30)
#define _1080P_25HZ 	MAKE_RESOLUTION(0, 1920, 1080, 25)
#define _1080P_24HZ 	MAKE_RESOLUTION(0, 1920, 1080, 24)
#define UXGA_60HZ  		MAKE_RESOLUTION(0, 1600, 1200, 60)
#define UXGA_30HZ  		MAKE_RESOLUTION(0, 1600, 1200, 30)
#define WSXGA_60HZ 		MAKE_RESOLUTION(0, 1680, 1050, 60)
#define WUXGA_60HZ  	MAKE_RESOLUTION(0, 1920, 1200, 60)
#define WUXGA_30HZ 		MAKE_RESOLUTION(0, 1920, 1200, 30)
//����������ʹ��
#define WXGA_60HZ  		MAKE_RESOLUTION(0, 1360, 768, 60)
#define SXGA_PLUS_60HZ	MAKE_RESOLUTION(0, 1400, 1050, 60)


//��ʾͨ������ָ�ģʽ
#define  MAX_WINDOWS_NUM 12		//����ָ�ģʽ������
#define  MAX_SUPPORT_RES 32
#define  MAX_DISPNUM_V41 32

typedef struct tagNET_DVR_DISPWINDOWMODE
{
    BYTE byDispChanType;//��ʾͨ�����ͣ�0-BNC, 1-VGA, 2-HDMI, 3-DVI
    BYTE byDispChanSeq;//��ʾͨ�����,��1��ʼ�����������VGA�����ʾ�ڼ���VGA
    BYTE byRes[2];
    BYTE byDispMode[MAX_WINDOWS_NUM/*12*/];
}NET_DVR_DISPWINDOWMODE, *LPNET_DVR_DISPWINDOWMODE;

typedef struct tagNET_DVR_DISPINFO
{
    BYTE  byChanNums;//ͨ������
    BYTE  byStartChan;//��ʼͨ��
    BYTE  byRes[2];
    DWORD	dwSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֱַ���
}NET_DVR_DISPINFO, *LPNET_DVR_DISPINFO;

//����ƴ����Ϣ
typedef struct tagNET_DVR_SCREENINFO
{
	BYTE  bySupportBigScreenNums;//������ƴ������
	BYTE  byStartBigScreenNum;//����ƴ����ʼ��
	BYTE  byMaxScreenX;//����ƴ��ģʽ
	BYTE  byMaxScreenY;
	BYTE  byRes[8];
}NET_DVR_SCREENINFO, *LPNET_DVR_SCREENINFO;

typedef struct tagNET_DVR_MATRIX_ABILITY_V41
{
	DWORD dwSize;
	BYTE  byDspNums;//DSP����  
    BYTE  byDecChanNums;//����ͨ����
	BYTE  byStartChan;//��ʼ����ͨ��
	BYTE  byRes1[5];
	NET_DVR_DISPINFO struVgaInfo;//VGA��ʾͨ����Ϣ
	NET_DVR_DISPINFO struBncInfo;//BNC��ʾͨ����Ϣ
	NET_DVR_DISPINFO struHdmiInfo;//HDMI��ʾͨ����Ϣ
	NET_DVR_DISPINFO struDviInfo;//DVI��ʾͨ����Ϣ
	NET_DVR_DISPWINDOWMODE struDispMode[MAX_DISPNUM_V41/*32*/];
	NET_DVR_SCREENINFO struBigScreenInfo;
	BYTE  bySupportAutoReboot; //�Ƿ�֧���Զ�������0-��֧�֣�1-֧��
	BYTE  byRes2[119];
} NET_DVR_MATRIX_ABILITY_V41, *LPNET_DVR_MATRIX_ABILITY_V41;

//��ʾͨ������
#define  MAX_WINDOWS			    16
#define  MAX_WINDOWS_V41			36

#define  STARTDISPCHAN_VGA		1
#define  STARTDISPCHAN_BNC		9
#define  STARTDISPCHAN_HDMI		25
#define  STARTDISPCHAN_DVI		29

typedef union tagNET_DVR_VIDEO_PLATFORM
{
	BYTE byRes[160];
	struct
	{
		/*�����Ӵ��ڶ�Ӧ����ͨ������Ӧ�Ľ�����ϵͳ�Ĳ�λ��(������Ƶ�ۺ�ƽ̨�н�����ϵͳ��Ч)*/
		BYTE	byJoinDecoderId[MAX_WINDOWS_V41];
		//��ʾ����������Ƶ�ֱ��ʣ�1-D1,2-720P,3-1080P���豸����Ҫ���ݴ˷ֱ��ʽ��н���ͨ���ķ��䣬��1�������ó�1080P�����豸���4������ͨ����������˽���ͨ��
		BYTE	byDecResolution[MAX_WINDOWS_V41];
		BYTE	byRes[88];
	}struVideoPlatform;
	struct
	{
		BYTE	byRes[160];
	}struNotVideoPlatform;
}NET_DVR_VIDEO_PLATFORM, LPNET_DVR_VIDEO_PLATFORM;


typedef struct tagNET_DVR_MATRIX_VOUTCFG
{        
    DWORD	dwSize; 
    BYTE	byAudio;			/*��Ƶ�Ƿ���*/
    BYTE	byAudioWindowIdx;      /*��Ƶ�����Ӵ���*/
    BYTE	byDispChanType;      /*��ʾͨ�����ͣ�0-BNC��1-VGA��2-HDMI��3-DVI��4-YPbPr(���뿨������DECODER_SERVERר��)*/   
    BYTE	byVedioFormat;         /*1:NTSC,2:PAL��0-NULL*/
	DWORD	dwResolution;//�ֱ���
    DWORD	dwWindowMode;		/*����ģʽ����������ȡ*/       
    BYTE	byJoinDecChan[MAX_WINDOWS_V41];/*�����Ӵ��ڹ����Ľ���ͨ��*/
	BYTE	byEnlargeStatus;          /*�Ƿ��ڷŴ�״̬��0�����Ŵ�1���Ŵ�*/
	BYTE	byEnlargeSubWindowIndex;//�Ŵ���Ӵ��ں�
	BYTE	byScale; /*��ʾģʽ��0---��ʵ��ʾ��1---������ʾ( ���BNC )*/
	BYTE	byUnionType;/*���ֹ�����,0-��Ƶ�ۺ�ƽ̨�ڲ���������ʾͨ�����ã�1-������������ʾͨ������*/
	NET_DVR_VIDEO_PLATFORM		struDiff;
    BYTE	byRes2[80];
}NET_DVR_MATRIX_VOUTCFG,*LPNET_DVR_MATRIX_VOUTCFG;

/*�������豸״̬*/
typedef struct tagNET_DVR_DISP_CHAN_STATUS_V41
{
    BYTE  byDispStatus;      /*��ʾ״̬��0��δ��ʾ��1��������ʾ*/
    BYTE  byBVGA;              /*0-BNC��1-VGA�� 2-HDMI��3-DVI��0xff-��Ч*/
    BYTE  byVideoFormat;     /*��Ƶ��ʽ��1:NTSC,2:PAL,0-NON*/
    BYTE  byWindowMode;       /*����ģʽ*/
    BYTE  byJoinDecChan[MAX_WINDOWS_V41];   /*�����ӻ�������Ľ���ͨ��*/
    BYTE  byFpsDisp[MAX_WINDOWS_V41];        /*ÿ���ӻ������ʾ֡��*/
    BYTE  byScreenMode;		/*��Ļģʽ0-��ͨ 1-����*/
    BYTE  byRes1[31];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
}NET_DVR_DISP_CHAN_STATUS_V41, *LPNET_DVR_DISP_CHAN_STATUS_V41;

/*�������豸״̬*/
typedef struct tagNET_DVR_DECODER_WORK_STATUS_V41
{
    DWORD dwSize;
	NET_DVR_MATRIX_CHAN_STATUS struDecChanStatus[32];     /*����ͨ��״̬*/
	/*��ʾͨ��״̬*/
    NET_DVR_DISP_CHAN_STATUS_V41   struDispChanStatus[MAX_DISPNUM_V41/*32*/];     
    BYTE byAlarmInStatus[32];         /*��������״̬*/
    BYTE byAlarmOutStatus[32];       /*�������״̬*/
    BYTE byAudioInChanStatus;          /*�����Խ�״̬*/
    BYTE byRes[127];
}NET_DVR_DECODER_WORK_STATUS_V41,*LPNET_DVR_DECODER_WORK_STATUS_V41;
/*******************************�ļ��ط�-Զ�̻ط�����*******************************/
typedef struct tagNET_DVR_MATRIX_DEC_REMOTE_PLAY_V41
{
    DWORD	dwSize;
    NET_DVR_IPADDR	struIP;		/* DVR IP��ַ */	
    WORD	wDVRPort;			/* �˿ں� */	
    BYTE	byChannel;			/* ͨ���� */
    BYTE 	byReserve;
    BYTE	sUserName[NAME_LEN];		/* �û��� */
    BYTE	sPassword[PASSWD_LEN];		/* ���� */
    DWORD	dwPlayMode;   	/* 0�����ļ� 1����ʱ��*/        	
    NET_DVR_TIME StartTime;
    NET_DVR_TIME StopTime;
    char    sFileName[128];
    BYTE	byRes[64];		/*����*/
}NET_DVR_MATRIX_DEC_REMOTE_PLAY_V41, *LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_V41;

/////***********************************64-T������end*************************************//////

#define  MAX_BIGSCREENNUM_SCENE 100
#define  MAX_LAYERNUMS	32

//��ʾͨ�����ýṹ
typedef struct tagNET_DVR_RECTCFG_SCENE
{
	WORD wXCoordinate; /*�������Ͻ���ʼ��X����*/
	WORD wYCoordinate; /*�������Ͻ�Y����*/
	WORD wWidth;       /*���ο��*/
	WORD wHeight;      /*���θ߶�*/
}NET_DVR_RECTCFG_SCENE, *LPNET_DVR_RECTCFGSCENE;

typedef struct tagNET_DVR_SCENEDISPCFG
{       
	BYTE	byEnable;//�Ƿ����ã�0-�����ã�1-����
	BYTE	bySoltNum;//��λ��
	BYTE	byRes1[2]; 
    BYTE	byDispChanNum; 
    BYTE	byAudio;				/*��Ƶ�Ƿ���,0-��1-��*/
    BYTE	byAudioWindowIdx;      /*��Ƶ�����Ӵ���*/
	BYTE	byVedioFormat;          /*1:NTSC,2:PAL��0-NULL*/
	BYTE	byWindowMode;			/*����ģʽ������������ȡ*/   
	BYTE	byEnlargeStatus;         /*�Ƿ��ڷŴ�״̬��0�����Ŵ�1���Ŵ�*/
	BYTE    byEnlargeSubWindowIndex;//�Ŵ���Ӵ��ں�    
	BYTE	byScale; /*��ʾģʽ��0-��ʵ��ʾ��1-������ʾ( ���BNC )*/
	DWORD   dwResolution;//�ֱ���
	BYTE	byJoinDecChan[MAX_WINDOWS_V41];/*�����Ӵ��ڹ����Ľ���ͨ��*/
	BYTE	byJoinDecoderId[MAX_WINDOWS_V41];/*��λ��*/
	//��ʾ����������Ƶ�ֱ��ʣ�1-D1,2-720P,3-1080P���豸����Ҫ���ݴ�//�ֱ��ʽ��н���ͨ���ķ��䣬��1�������ó�1080P�����豸���4������ͨ����������˽���ͨ��
	BYTE	byDecResolution[MAX_WINDOWS_V41];
	BYTE	byRow;//�������ڵ��е����
	BYTE	byColumn;//�������ڵ��е����
    BYTE	byRes2[5];
	NET_DVR_RECTCFG struDisp; //����ǽ��ʾλ��
} NET_DVR_SCENEDISPCFG,*LPNET_DVR_SCENEDISPCFG;

typedef struct tagDEV_CHAN_INFO_SCENE
{
	NET_DVR_IPADDR struIP;				/* DVR IP��ַ */
	WORD 	wDVRPort;			 	/* �˿ں� */
	BYTE 	byChannel;		/* ͨ���ţ�����9000���豸��IPC���룬ͨ���Ŵ�33��ʼ */
	BYTE	byTransProtocol;		/* ����Э������0-TCP��1-UDP ��2-MCAST��3-RTP*/
	BYTE	byTransMode;			/* ��������ģʽ 0�������� 1��������*/
	BYTE	byFactoryType;				/*ǰ���豸��������*/
	BYTE	byDeviceType;			//�豸���ͣ�1-IPC��2- ENCODER
    BYTE	byRes[5];
	BYTE	sUserName[NAME_LEN];	/* ���������½�ʺ� */
	BYTE	sPassword[PASSWD_LEN];	/* ����������� */
} NET_DVR_DEV_CHAN_INFO_SCENE,*LPNET_DVR_DEV_CHAN_INFO_SCENE;

/*��ý���������������*/
typedef struct tagSTREAM_MEDIA_SERVER_CFG_SCENE
{
	BYTE	byValid;			/*�Ƿ�������ý�������ȡ��,0��ʾ��Ч*/
	BYTE	byRes1[3];
	NET_DVR_IPADDR struDevIP;	/*��ý���������ַ*/
	WORD	wDevPort;			/*��ý��������˿�*/
	BYTE	byTransmitType;		/*����Э������0-TCP��1-UDP */
	BYTE	byRes2[5];
}NET_DVR_STREAM_MEDIA_SERVER_CFG_SCENE,*LPNET_DVR_STREAM_MEDIA_SERVER_CFG_SCENE;

typedef struct tagPU_STREAM_CFG_SCENE
{
	NET_DVR_STREAM_MEDIA_SERVER_CFG_SCENE	streamMediaServerCfg;
	NET_DVR_DEV_CHAN_INFO_SCENE				struDevChanInfo;
}NET_DVR_PU_STREAM_CFG_SCENE,*LPNET_DVR_PU_STREAM_CFG_SCENE;

typedef struct  tagNET_DVR_CYC_SUR_CHAN_ELE_SCENE
{
	BYTE							byEnable;	/* �Ƿ����� 0���� 1������*/
	BYTE							byRes[3];
	NET_DVR_STREAM_MEDIA_SERVER_CFG_SCENE	struStreamMediaSvrCfg;	
    NET_DVR_DEV_CHAN_INFO_SCENE			struDecChanInfo;	/*��Ѳ����ͨ����Ϣ*/
}NET_DVR_CYC_SUR_CHAN_ELE_SCENE,*LPNET_DVR_CYC_SUR_CHAN_ELE_SCENE;

//��Ѳ����ṹ
typedef struct  tagNET_DVR_MATRIX_LOOP_DECINFO_SCENE
{
	WORD	wPoolTime;		/*��ѯ���*/
	BYTE	byRes1[2];
    NET_DVR_CYC_SUR_CHAN_ELE_SCENE	struChanArray[MAX_CYCLE_CHAN/*16*/];
    BYTE    byRes2[4];
} NET_DVR_MATRIX_LOOP_DECINFO_SCENE,*LPNET_DVR_MATRIX_LOOP_DECINFO_SCENE;

//��������ͨ�����ýṹ��
typedef struct tagNET_DVR_DECODECHANCFG_SCENE/*struct size : 2064*/
{
	BYTE	byDecodeEnable;//������ͣ��־��0-ֹͣ��1-���ö�̬���룬2-������Ѳ����
	BYTE	bySlotNum;//��λ��
	BYTE	byDecChan;
	BYTE	byJointAllDecodeChan;		//�Ƿ�������ܽ���ͨ�� 0-��������1-����
	BYTE	byJointSlotNum;			//�����Ĳ�λ�ţ����ܽ����Ĳ�λ�ţ�
	BYTE	byJointChanNum;		//������ͨ���ţ����ܽ����ͨ���ţ�
	BYTE    byRes[2];
	union
	{
		NET_DVR_PU_STREAM_CFG_SCENE struSceneDynamicDecCfg; 
		NET_DVR_MATRIX_LOOP_DECINFO_SCENE struSceneCycDecCfg;
	 } struDecCfg;
}NET_DVR_DECODECHANCFG_SCENE,*LPNET_DVR_DECODECHANCFG_SCENE;

typedef struct tagNET_DVR_BIGSCREENCFG_SCENE
{
    BYTE byAllValid; /*����ʹ�ܱ�־ */
    BYTE byAssociateBaseMap;//�����ĵ�ͼ��ţ�0��������
    BYTE byEnableSpartan;//��������ʹ�ܣ�1-����0-��
	BYTE byRes;
    NET_DVR_WINCFG struWinCfg[MAX_LAYERNUMS];
    NET_DVR_BIGSCREENCFG struBigScreen;
}NET_DVR_BIGSCREENCFG_SCENE, *LPNET_DVR_BIGSCREENCFG_SCENE;

typedef struct tagNET_DVR_MATRIX_SCENECFG
{
    DWORD dwSize;
    BYTE  sSceneName[NAME_LEN];
    BYTE  byBigScreenNums;//�����ĸ��������ֵͨ����������ȡ
    BYTE  byRes1[3];
    WORD  wDecChanNums;//�����н���ͨ���ĸ���
    WORD  wDispChanNums;//��������ʾͨ���ĸ���
    BYTE  byRes2[12];
    BYTE  *pBigScreenBuffer;//�������û�����, byBigScreenNums��sizeof(NET_DVR_BIGSCREENCFG_SCENE)
    BYTE  *pDecChanBuffer;//����ͨ�����û�����, wDecChanNums��sizeof(NET_DVR_DECODECHANCFG_SCENE)
    BYTE  *pDispChanBuffer;//��ʾͨ�����û�����, wDispChanNums��sizeof(NET_DVR_SCENEDISPCFG)
}NET_DVR_MATRIX_SCENECFG, *LPNET_DVR_MATRIX_SCENECFG;

/********************************���������� begin****************************/
#define	NET_DVR_GET_ALLWINCFG		            1503 //���ڲ�����ȡ

typedef struct tagNET_DVR_BIGSCREENASSOCIATECFG
{
    DWORD dwSize;
    BYTE  byEnableBaseMap;//ʹ�ܵ�ͼ��ʾ
    BYTE  byAssociateBaseMap;//�����ĵ�ͼ��ţ�0��������
	BYTE  byEnableSpartan;//��������ʹ�ܣ�1-����0-��
    BYTE  byRes[21];
} NET_DVR_BIGSCREENASSOCIATECFG, *LPNET_DVR_BIGSCREENASSOCIATECFG;
/*******************************��������*******************************/
#define MAX_WIN_COUNT  224 //֧�ֵ���󿪴���

typedef struct tagNET_DVR_SCREEN_WINCFG
{
	DWORD	dwSize;
	BYTE	byVaild;
	BYTE	byInputType;		//��CAM_MDOE
	WORD	wInputIdx;			/*����Դ����*/
    DWORD	dwLayerIdx;			/*ͼ�㣬0Ϊ��ײ�*/
	NET_DVR_RECTCFG  struWin;	//Ŀ�Ĵ���(�����ʾǽ)
	BYTE	byWndIndex;			//���ں�
	BYTE	byCBD;				//0-�ޣ�1-��������2-��������
	BYTE	bySubWnd;			//0���ǣ�1��
	BYTE	byDeviceID[16];		//�豸��ʶ��ΨһID
	BYTE	byRes[5];
}NET_DVR_SCREEN_WINCFG, *LPNET_DVR_SCREEN_WINCFG;

typedef struct tagNET_DVR_WINLIST
{
	DWORD	dwSize;
	WORD	wScreenSeq;	//�豸���
	BYTE	byRes[10];
	DWORD	dwWinNum;	//�豸���صĴ�������
	BYTE    *pBuffer;	//������Ϣ�����������Ϊ224*sizeof(NET_DVR_WINCFG)
	DWORD   dwBufLen;	//������ָ�볤��
}NET_DVR_WINLIST,*LPNET_DVR_WINLIST;

#define MAX_LAYOUT_COUNT 16		//��󲼾���
typedef struct tagNET_DVR_LAYOUTCFG
{
	DWORD dwSize;
    BYTE  byValid;								//�����Ƿ���Ч
    BYTE  byRes1[3];
    BYTE  byLayoutName[NAME_LEN/*32*/];			//��������			
	NET_DVR_SCREEN_WINCFG struWinCfg[MAX_WIN_COUNT/*224*/];	//�����ڴ��ڲ���
	BYTE  byRes2[16];
}NET_DVR_LAYOUTCFG, *LPNET_DVR_LAYOUTCFG;

typedef struct tagNET_DVR_LAYOUT_LIST
{
    DWORD dwSize;
    NET_DVR_LAYOUTCFG struLayoutInfo[MAX_LAYOUT_COUNT/*16*/];   //���в���
    BYTE byRes[4];
}NET_DVR_LAYOUT_LIST, *LPNET_DVR_LAYOUT_LIST;

#define MAX_CAM_COUNT  224

typedef enum tagNET_DVR_CAM_MODE
{
	NET_DVR_UNKNOW  = 0,//��Ч
	NET_DVR_CAM_BNC,
	NET_DVR_CAM_VGA,
	NET_DVR_CAM_DVI,
	NET_DVR_CAM_HDMI,
	NET_DVR_CAM_IP,
	NET_DVR_CAM_RGB,
    NET_DVR_CAM_DECODER,
	NET_DVR_CAM_MATRIX,		
}NET_DVR_CAM_MODE;

typedef struct tagNET_DVR_INPUTSTREAMCFG
{
	DWORD	dwSize ;
	BYTE	byValid ;
	BYTE	byCamMode;						//�ź�����Դ���ͣ���NET_DVR_CAM_MODE
    WORD	wInputNo;						//�ź�Դ���0-224
    BYTE	sCamName[NAME_LEN] ;			//�ź�����Դ����
	NET_DVR_VIDEOEFFECT struVideoEffect;	//��Ƶ����
	NET_DVR_PU_STREAM_CFG	struPuStream;	//ip����ʱʹ��
	WORD	wBoardNum ;						//�ź�Դ���ڵİ忨��
	WORD	wInputIdxOnBoard;				//�ź�Դ�ڰ忨�ϵ�λ��
	WORD	wResolutionX;					//�ֱ���
	WORD	wResolutionY;
	BYTE	byVideoFormat;					//��Ƶ��ʽ��0-�ޣ�1-NTSC��2-PAL
    BYTE	byNetSignalResolution;	//; 1-CIF 2-4CIF 3-720P 4-1080P 5-500wp �������ź�Դ�ķֱ��ʣ�����������ź�Դʱ�����豸���豸��������ֱ��������������Դ��
    BYTE	sGroupName[NAME_LEN/*32*/];	//�����ź�Դ���� ����
	BYTE	byJointMatrix;			//  �������� ��0-������  1-����
	BYTE	byRes;  
}NET_DVR_INPUTSTREAMCFG, *LPNET_DVR_INPUTSTREAMCFG;

typedef struct tagNET_DVR_INPUTSTREAM_LIST
{
    DWORD dwSize;
    NET_DVR_INPUTSTREAMCFG struInputStreamInfo[MAX_CAM_COUNT]; //�����ź�Դ
    BYTE byRes[4];
}NET_DVR_INPUTSTREAM_LIST, *LPNET_DVR_INPUTSTREAM_LIST;

/*******************************�����������*******************************/
/*���ͨ������*/
typedef struct tagNET_DVR_OUTPUTPARAM
{
	DWORD  dwSize;
	BYTE   byMonMode;		/*�������ģʽ,1-BNC,2-VGA,3-DVI,4-HDMI*/
	BYTE   byRes1[3];
	DWORD  dwResolution;	/*�ֱ��ʣ�������������ȡ��֧�ֵĽ�������*/;
	NET_DVR_VIDEOEFFECT  struVideoEffect;	/*���ͨ����Ƶ��������*/
	BYTE	byRes2[32];
}NET_DVR_OUTPUTPARAM, *LPNET_DVR_OUTPUTPARAM;

typedef struct tagNET_DVR_OUTPUTCFG
{
	DWORD dwSize;
	BYTE byScreenLayX;						//��������-������
	BYTE byScreenLayY;						//��������-������
	BYTE byRes1[6];
	NET_DVR_OUTPUTPARAM  struOutputParam;	/*���ͨ����Ƶ��������*/
	BYTE byRes2[24];
}NET_DVR_OUTPUTCFG, *LPNET_DVR_OUTPUTCFG;

/*******************************������*******************************/
#define SCREEN_PROTOCOL_NUM  	20    //֧�ֵ�������������Э����
//����������������
typedef struct tagNET_DVR_SCREENSERVER_ABILITY
{
    DWORD dwSize;   			/*�ṹ����*/
    BYTE byIsSupportScreenNum; /*��֧�ִ�������������Ŀ*/
    BYTE bySerialNums;			//���ڸ���
    BYTE byMaxInputNums;
    BYTE byMaxLayoutNums;
    BYTE byMaxWinNums;
    BYTE byRes1[19];
    BYTE byMaxScreenLayX;//��������-�������������
    BYTE byMaxScreenLayY;//��������-��������������
    WORD wMatrixProtoNum; /*��Ч�Ĵ���Э����Ŀ*/
    NET_DVR_PROTO_TYPE struScreenProto[SCREEN_PROTOCOL_NUM];/*���Э���б�*/
    BYTE byRes2[24];
}NET_DVR_SCREENSERVER_ABILITY, *LPNET_DVR_SCREENSERVER_ABILITY;

//����������������
typedef struct tagNET_DVR_SCREENCONTROL_ABILITY
{
    DWORD dwSize;   		/*�ṹ����*/
	BYTE byLayoutNum; 		/* ���ָ���*/
	BYTE byWinNum; 			/*��Ļ���ڸ���*/
	BYTE byOsdNum;  		/*OSD����*/
	BYTE byLogoNum; 		/*Logo����*/
	BYTE byInputStreamNum;  //����Դ���� ---�豸֧���������ͨ��������������������Դ����������Դ��
	BYTE byOutputChanNum;	//���ͨ������---�豸֧��������ͨ������
	BYTE byCamGroupNum;		/*�������*/
	BYTE byPlanNum;    		/*Ԥ������*/
    BYTE byIsSupportOSD;	/*�Ƿ�֧��OSD*/
    BYTE byIsSupportLogo;   /*�Ƿ�֧��logo*/
    BYTE byIsSupportPlan;   /*�Ƿ�֧Ԥ��*/
    BYTE byIsSupportGroup;  /*�Ƿ�֧����*/
    BYTE byIsSupportLayout; /*�Ƿ�֧���ֹ���*/
    BYTE byIsSupportPlayBack;  /*�Ƿ�֧�ֻط�*/	
    BYTE byMatrixInputNum;  //֧���������������
    BYTE byMatrixOutputNum; //֧���������������
    NET_DVR_DISPINFO struVgaInfo;//VGA�����Ϣ
	NET_DVR_DISPINFO struBncInfo;//BNC�����Ϣ
	NET_DVR_DISPINFO struHdmiInfo;//HDMI�����Ϣ
	NET_DVR_DISPINFO struDviInfo;//DVI�����Ϣ
	BYTE byWinLayer;		//������Ļ�����Ĵ��ڲ���
	BYTE byPicSpan;		//��ͼ��ȣ�һ�ŵ�ͼ���ɸ��ǵ���Ļ��
	WORD wDVCSDevNum;	//�ֲ�ʽ��������������豸��
    WORD wNetSignalNum;	//�����������Դ����
	BYTE bySupportVCSUserCfg;	//�Ƿ�֧�ֶ������������û���������
    BYTE byRes[53];
}NET_DVR_SCREENCONTROL_ABILITY, *LPNET_DVR_SCREENCONTROL_ABILITY;

/*******************************�����ź�״̬*******************************/
typedef struct tagNET_DVR_ANALOGINPUTSTATUS
{
	DWORD	dwLostFrame;		/*��Ƶ���붪֡��*/
	BYTE	byHaveSignal;		/*�Ƿ�����Ƶ�ź�����*/
	BYTE	byVideoFormat;		/*��Ƶ��ʽ��1��NTSC,2��PAL,0����*/
	BYTE	byRes[46];
} NET_DVR_ANALOGINPUTSTATUS, *LPNET_DVR_ANALOGINPUTSTATUS;

typedef union tagNET_DVR_INPUTSTATUS_UNION
{
	NET_DVR_MATRIX_CHAN_STATUS struIpInputStatus;
	NET_DVR_ANALOGINPUTSTATUS struAnalogInputStatus;
} NET_DVR_INPUTSTATUS_UNION, *LPNET_DVR_INPUTSTATUS_UNION;

typedef struct tagNET_DVR_INPUTSTATUS
{
	WORD	wInputNo;		/*�ź�Դ���*/
	BYTE	byInputType;	//��NET_DVR_CAM_MODE
	BYTE	byRes1[9];
	NET_DVR_INPUTSTATUS_UNION struStatusUnion;
	BYTE	byRes2[16];
} NET_DVR_INPUTSTATUS, *LPNET_DVR_INPUTSTATUS;

typedef struct tagNET_DVR_SCREENINPUTSTATUS
{
	DWORD	dwSize;
	BYTE	byRes[12];
	DWORD	dwNums;		//�豸���ص�����Դ״̬������
	BYTE    *pBuffer;	//������
	DWORD   dwBufLen;	//������ָ�볤�ȣ��������
}NET_DVR_SCREENINPUTSTATUS,*LPNET_DVR_SCREENINPUTSTATUS;

typedef struct tagNET_DVR_SCREENALARMCFG
{
	DWORD	dwSize;
    BYTE	byAlarmType;	//�������ͣ�1-�Ӱ�γ���2-�Ӱ���룬3-��ϵͳ״̬�쳣��4-��ϵͳ�ָ��ָ� 5-����Դ�쳣   6-�¶ȱ��� 7-FPGA�汾��ƥ�� 8-Ԥ����ʼ 9-Ԥ������
	BYTE	byBoardType;	// 1-����� 2-����� 
	BYTE	bySubException;	//�����쳣ʱ�������쳣 1- �ֱ��������ı� 2-����˿����͸ı�3-�ֱ��ʴ���4-�ֱ��ʸı䵼�½�����Դ���㣬�رո�����Դ��Ӧ���ڡ�5-�ֱ��ʸı䣬�����ѿ��������ű�������1/8��8����Χ��6-�ֱ��ʻָ�����,7-�ֱ��ʸı䵼�����������������,�豸�رմ��� 
	BYTE	byRes1;
    WORD	wStartInputNum; // �쳣����Դ���쳣��㣩 
	WORD	wEndInputNum;	// �쳣����Դ���쳣�յ㣩 
    BYTE	byRes2[16];	   
}NET_DVR_SCREENALARMCFG, *LPNET_DVR_SCREENALARMCFG;

typedef struct tagNET_DVR_MATRIX_CFG
{
    BYTE  byValid;				//�ж��Ƿ���ģ������Ƿ���Ч��
    BYTE  byCommandProtocol;	//ģ������ָ�4�֣�
    BYTE  byScreenType;			//����	
    BYTE  byRes1;
    BYTE  byScreenToMatrix[32];	//ģ�������������Ļ�Ķ�Ӧ��ϵ
    BYTE  byRes2[4];
}NET_DVR_MATRIX_CFG, *LPNET_DVR_MATRIX_CFG;

typedef struct tagNET_DVR_DIGITALSCREEN
{
    NET_DVR_IPADDR  struAddress;/*�豸Ϊ�����豸ʱ��IP��Ϣ*/
    WORD			wPort;		//ͨ����
    BYTE			byRes[26];  //����
}NET_DVR_DIGITALSCREEN, *LPNET_DVR_DIGITALSCREEN;
typedef struct tagNET_DVR_ANALOGSCREEN
{
    BYTE	byDevSerPortNum;   /*�����豸�Ĵ��ں�*/
	BYTE    byScreenSerPort;  /*���Ӵ����Ĵ��ں�*/
    BYTE	byRes[130];   
    NET_DVR_MATRIX_CFG struMatrixCfg;
}NET_DVR_ANALOGSCREEN, *LPNET_DVR_ANALOGSCREEN;

typedef union tagNET_DVR_SCREEN_UNION
{
    NET_DVR_DIGITALSCREEN struDigitalScreen;
    NET_DVR_ANALOGSCREEN struAnalogScreen;
}NET_DVR_SCREEN_UNION, *LPNET_DVR_SCREEN_UNION;
typedef struct tagNET_DVR_SCREEN_SCREENINFO
{
    DWORD dwSize;
    BYTE byValid;				//�Ƿ���Ч
    BYTE nLinkMode;				//���ӷ�ʽ��0-���ڣ�1-����
    BYTE byDeviceType;			//�豸�ͺţ���������ȡ
    BYTE byScreenLayX;			//��������-������
    BYTE byScreenLayY;			//��������-������
    BYTE byRes1[3];
    BYTE sUserName[NAME_LEN];	/*��¼�û���*/
    BYTE sPassword[PASSWD_LEN]; /*��¼����*/   
	BYTE sDevName[NAME_LEN];	/*�豸����*/
    NET_DVR_SCREEN_UNION struScreenUnion;
    BYTE byInputNum;			// ����Դ����
	BYTE byOutputNum;			// ���Դ����
	BYTE byCBDNum;				//CBD����
	BYTE byRes2[29];
} NET_DVR_SCREEN_SCREENINFO, *LPNET_DVR_SCREEN_SCREENINFO;

/*******************************��ͼ�ϴ�*******************************/
typedef struct tagNET_DVR_BASEMAP_CFG
{	
    BYTE byScreenIndex;         //��Ļ�����
	BYTE byMapNum;				/*���ָ���˶��ٿ� */
    BYTE res[2];
	WORD wSour_width;			/* ԭͼƬ�Ŀ�� */
	WORD wSour_height;			/* ԭͼƬ�ĸ߶� */
}NET_DVR_BASEMAP_CFG, LPNET_DVR_BASEMAP_CFG;


typedef struct tagNET_DVR_PICCFG
{
	DWORD	dwSize;		//��С
	BYTE	byUseType;	//1-ͼƬ����ͼʹ��
    BYTE    bySequence;//���
	BYTE	byRes1[2];
	NET_DVR_BASEMAP_CFG	struBasemapCfg;
	BYTE	byRes2[64];
}NET_DVR_PICTURECFG, *LPNET_DVR_PICTURECFG;

/*******************************OSD*******************************/
#define MAX_OSDCHAR_NUM 256
typedef struct tagNET_DVR_OSDCFG
{
	DWORD   dwSize;
	BYTE    byValid;    /*�Ƿ���Ч 0��Ч 1��Ч*/
    BYTE    	byDispMode;  //��ʾģʽ��1-͸����2-��͸����3-��������ģʽ
    BYTE    uByFontColor_y; /*������ɫY    0-255*/
    BYTE    uByFontColor_u; /*������ɫU    0-255*/
    BYTE    uByFontColor_v; /*������ɫV    0-255*/
    BYTE    uByBackColor_y; /*������ɫY    0-255*/
    BYTE    uByBackColor_u; /*������ɫU    0-255*/
	BYTE    uByBackColor_v; /*������ɫV    0-255*/
    WORD    wXCoordinate;         /*OSD����Ļ���Ͻ�λ��x*/
    WORD    wYCoordinate;        /*OSD����Ļ���Ͻ�λ��y*/
    WORD    wWidth;       /*OSD���*/
	WORD    wHeight;      /*OSD�߶�*/
	DWORD   dwCharCnt;     /*�ַ��ĸ���*/
    WORD    wOSDChar[MAX_OSDCHAR_NUM];       /*OSD�ַ�����*/
	BYTE    byRes[32];
}NET_DVR_OSDCFG, *LPNET_DVR_OSDCFG;


/*******************************��ȡ������Ϣ*******************************/
typedef struct tagNET_DVR_SERIAL_CONTROL
{ 
	DWORD	dwSize ;
	BYTE    bySerialNum;        // ���ڸ���
	BYTE	byRes1[3];
	BYTE    bySerial[32];
	BYTE    byRes2[32];
}NET_DVR_SERIAL_CONTROL, *LPNET_DVR_SERIAL_CONTROL;

/*******************************��Ļ����*******************************/
//��Ļ����Դ����
typedef enum tagINPUT_INTERFACE_TYPE
{
	INTERFACE_VGA = 0,
	INTERFACE_SVIDEO, // 2046NL��֧�֣�2046NH֧��
	INTERFACE_YPBPR,
	INTERFACE_DVI ,
	INTERFACE_BNC , 
	INTERFACE_DVI_LOOP,//(��ͨ) 2046NH��֧�֣�2046NL֧��
	INTERFACE_BNC_LOOP, //(��ͨ) 2046NH��֧�֣�2046NL.֧��
}INPUT_INTERFACE_TYPE;
typedef struct tagNET_DVR_INPUT_INTERFACE_CTRL
{
	BYTE	byInputSourceType;	//��INPUT_INTERFACE_TYPE
	BYTE	byRes[15];
}NET_DVR_INPUT_INTERFACE_CTRL, *LPNET_DVR_INPUT_INTERFACE_CTRL;
//��ʾ��Ԫ��ɫ����
typedef struct tagNET_DVR_DISPLAY_COLOR_CTRL
{
	BYTE	byColorType;		//1-���� 2-�Աȶ� 3-���Ͷ� 4-������
	char	byScale;			//-1 ��0��+1����ֵ
	BYTE	byRes[14];
}NET_DVR_DISPLAY_COLOR_CTRL, *LPNET_DVR_DISPLAY_COLOR_CTRL;
//��ʾ��Ԫλ�ÿ���
typedef struct tagNET_DVR_DISPLAY_POSITION_CTRL
{
	BYTE	byPositionType;	//1-ˮƽλ�� 2-��ֱλ�ã�
	char	byScale;			//-1 ��0��+1����ֵ
	BYTE	byRes[14];
}NET_DVR_DISPLAY_POSITION_CTRL, *LPNET_DVR_DISPLAY_POSITION_CTRL;

typedef  union tagNET_DVR_SCREEN_CONTROL_PARAM
{
	NET_DVR_INPUT_INTERFACE_CTRL 	struInputCtrl;
	NET_DVR_DISPLAY_COLOR_CTRL 		struDisplayCtrl;
	NET_DVR_DISPLAY_POSITION_CTRL 	struPositionCtrl;
	BYTE		byRes[16];
}NET_DVR_SCREEN_CONTROL_PARAM, *LPNET_DVR_SCREEN_CONTROL_PARAM;

typedef struct tagNET_DVR_SCREEN_CONTROL
{ 	
	DWORD 	dwSize;			 
	DWORD  	dwCommand ;      /* ���Ʒ��� 1-�� 2-�� 3-��Ļ����Դѡ�� 4-��ʾ��Ԫ��ɫ���� 5-��ʾ��Ԫλ�ÿ���*/
	BYTE   	byProtocol;      //����Э������,1:LCD-S1,2:LCD-S2
	BYTE	byRes1[3];
	NET_DVR_SCREEN_CONTROL_PARAM	struControlParam;
	BYTE   	byRes2[52];	
}NET_DVR_SCREEN_CONTROL, *LPNET_DVR_SCREEN_CONTROL;

/*******************************Ԥ������*******************************/
#define		MAX_PLAN_ACTION_NUM 	32 	//Ԥ����������
#define		DAYS_A_WEEK				7	//һ��7��
#define		MAX_PLAN_COUNT			16	//Ԥ������


typedef enum
{
	NET_DVR_SWITCH_LAYOUT = 1, 		// �����л� Ĭ��
	NET_DVR_SCREEN_POWER_OFF,  		// �رմ���Ļ��ʾ
	NET_DVR_SCREEN_POWER_ON,   		// �򿪴���Ļ��ʾ
}NET_DVR_PLAN_OPERATE_TYPE;

/*Ԥ������Ϣ*/
typedef struct  tagNET_DVR_PLAN_INFO
{
	BYTE  	byValid;      	// �����Ƿ���Ч
	BYTE  	byType;       	// ������NET_DVR_PLAN_OPERATE_TYPE
	WORD  	wLayoutNo;  	// ���ֺ�
	BYTE	byScreenStyle;    //��Ļ�ͺţ����ػ����ã�1�ǵ�����2�Ǹ���
	BYTE	byRes1[3];
	DWORD  	dwDelayTime;  	// һ���������ʱ��, ��λ��
	BYTE	byRes2[32];
} NET_DVR_PLAN_INFO, *LPNET_DVR_PLAN_INFO;
typedef struct tagNET_DVR_CYCLE_TIME
{
	BYTE	byValid; 
	BYTE	byRes[3];
	NET_DVR_TIME_EX struTime;
}NET_DVR_CYCLE_TIME, *LPNET_DVR_CYCLE_TIME;
/*Ԥ������*/
typedef struct tagNET_DVR_PLAN_CFG
{
	DWORD 	dwSize;
	BYTE  	byValid;      	// ��Ԥ���Ƿ���Ч
	BYTE  	byWorkMode;  	// Ԥ������ģʽ 1��ʾ�ֶ���2�Զ���3Ԥ��ѭ��
	BYTE	byRes1[2];
	BYTE  	byPlanName[NAME_LEN/*32*/]; //Ԥ������
	NET_DVR_TIME_EX struTime; // ����ģʽΪ�Զ�ʱʹ��
	NET_DVR_CYCLE_TIME struTimeCycle[DAYS_A_WEEK/*7*/]; /*ѭ��ʱ�䣬����Ϊһ�����ڣ��ꡢ�¡�������������ʹ�á��磺struTimeCycle[0]�е�byValid��ֵ��1����ʾ������ִ�и�Ԥ��������ȡֵ����Ϊ[0,6]������0���������죬1��������һ���Դ�����*/
	DWORD 	dwWorkCount;  	// Ԥ������ִ�д�����0Ϊһֱѭ�����ţ�����ֵ��ʾ����
	NET_DVR_PLAN_INFO strPlanEntry[MAX_PLAN_ACTION_NUM/*32*/];  // Ԥ��ִ�е�����
	BYTE	byRes2[64];
}NET_DVR_PLAN_CFG, *LPNET_DVR_PLAN_CFG;


/*******************************��ȡ�豸״̬*******************************/
/*Ԥ���б�*/
typedef struct tagNET_DVR_PLAN_LIST
{
	DWORD		dwSize;
	DWORD		dwPlanNums;			//�豸�����ź�Դ����
	BYTE  		*pBuffer;			//ָ��dwInputSignalNums��NET_DVR_PLAN_CFG�ṹ��С�Ļ�����
	BYTE		byRes1[3];
	DWORD 		dwBufLen;			//�����仺�������ȣ�������������ڵ���dwInputSignalNums��NET_DVR_PLAN_CFG�ṹ��С��
	BYTE		byRes2[64];
} NET_DVR_PLAN_LIST,*LPNET_DVR_PLAN_LIST;


/*******************************Ԥ������*******************************/
//�ýṹ�����Ϊͨ�ÿ��ƽṹ��
typedef struct tagNET_DVR_CONTROL_PARAM
{
	DWORD	dwSize;
	BYTE	sDeviceID[NAME_LEN]; //�����豸���豸ID
	WORD	wChan;				 //����ͨ��
	BYTE	byIndex;			 //������������������ȷ�������ʾʲô����
	BYTE	byRes1;
	DWORD	dwControlParam;
	BYTE	byRes2[32];
}NET_DVR_CONTROL_PARAM, *LPNET_DVR_CONTROL_PARAM;

/*******************************��ȡ�豸״̬*******************************/
typedef struct tagNET_DVR_DEVICE_RUN_STATUS
{
	DWORD 	dwSize;
	DWORD	dwMemoryTotal;		//�ڴ�����	��λKbyte
	DWORD	dwMemoryUsage;		//�ڴ�ʹ���� ��λKbyte
	BYTE	byCPUUsage;			//CPUʹ���� 0-100
	BYTE	byRes[127];
}NET_DVR_DEVICE_RUN_STATUS, *LPNET_DVR_DEVICE_RUN_STATUS;


/********************************���������� end****************************/

// 91ϵ��HD-SDI����DVR �����Ϣ
typedef struct tagNET_DVR_ACCESS_CAMERA_INFO
{
	DWORD dwSize;
   	char  sCameraInfo[32];		// ǰ�������Ϣ
	BYTE  byInterfaceType;		// ǰ�˽���ӿ����ͣ�1:VGA, 2:HDMI, 3:YPbPr 4:SDI 5:FC
	BYTE  byRes1[3];
	DWORD dwChannel;
   	BYTE  byRes[24];
}NET_DVR_ACCESS_CAMERA_INFO, *LPNET_DVR_ACCESS_CAMERA_INFO;

typedef struct tagNET_DVR_AUDIO_INPUT_PARAM
{
    BYTE  byAudioInputType;  //��Ƶ�������ͣ�0-mic in��1-line in
	BYTE  byVolume; //volume,[0-100]
	BYTE  byres[6]; 
}NET_DVR_AUDIO_INPUT_PARAM, *LPNET_DVR_AUDIO_INPUT_PARAM;

typedef struct tagNET_DVR_CAMERA_DEHAZE_CFG
{
	DWORD dwSize;
	BYTE byDehazeMode; //0-�����ã�1-����Ӧģʽ
	BYTE byRes[7]; 
}NET_DVR_CAMERA_DEHAZE_CFG, *LPNET_DVR_CAMERA_DEHAZE_CFG;

typedef struct tagNET_DVR_INPUT_SGNAL_LIST
{
    DWORD		dwSize;
    DWORD		dwInputSignalNums;	//�豸�����ź�Դ����
    BYTE  		*pBuffer;			//ָ��dwInputSignalNums��NET_DVR_INPUTSTREAMCFG�ṹ��С�Ļ�����
    BYTE		byRes1[3];
    DWORD 		dwBufLen;			//�����仺�������ȣ�������������ڵ���dwInputSignalNums��NET_DVR_INPUTSTREAMCFG�ṹ��С��
    BYTE		byRes2[64];
} NET_DVR_INPUT_SIGNAL_LIST,*LPNET_DVR_INPUT_SIGNAL_LIST;

// ��ȫ����״̬
#define PULL_DISK_SUCCESS    	1   // ��ȫ���̳ɹ�
#define PULL_DISK_FAIL    		2   // ��ȫ����ʧ��
#define PULL_DISK_PROCESSING    3   // ����ֹͣ����
#define PULL_DISK_NO_ARRAY 		4	// ���в����� 
#define PULL_DISK_NOT_SUPPORT	5 	// ��֧�ְ�ȫ����

// ɨ������״̬
#define SCAN_RAID_SUC			1 	// ɨ�����гɹ�
#define SCAN_RAID_FAIL			2 	// ɨ������ʧ��
#define SCAN_RAID_PROCESSING	3	// ����ɨ������
#define SCAN_RAID_NOT_SUPPORT	4 	// ��֧������ɨ��

// ����ǰ���������״̬
#define SET_CAMERA_TYPE_SUCCESS    		1   // �ɹ�
#define SET_CAMERA_TYPE_FAIL    		2   // ʧ��
#define SET_CAMERA_TYPE_PROCESSING		3   // ���ڴ���

//9000 2.2
typedef struct tagNET_DVR_RECORD_TIME_SPAN_INQUIRY
{
	DWORD	dwSize;    //�ṹ���С
    BYTE    byType;    //0 ��������Ƶ¼��, 1ͼƬͨ��¼��, 2ANRͨ��¼��, 3��֡ͨ��¼��
	BYTE 	byRes[63]; //����
}NET_DVR_RECORD_TIME_SPAN_INQUIRY, *LPNET_DVR_RECORD_TIME_SPAN_INQUIRY;

typedef struct tagNET_DVR_RECORD_TIME_SPAN
{
	DWORD		  dwSize;        //�ṹ���С
	NET_DVR_TIME  strBeginTime;  //��ʼʱ��
	NET_DVR_TIME  strEndTime;    //����ʱ��
    BYTE		  byType;        //0 ��������Ƶ¼��, 1ͼƬͨ��¼��, 2ANRͨ��¼��, 3��֡ͨ��¼��
	BYTE 		  byRes[35];     //����
}NET_DVR_RECORD_TIME_SPAN, *LPNET_DVR_RECORD_TIME_SPAN;

typedef struct tagNET_DVR_DRAWFRAME_DISK_QUOTA_CFG
{
    DWORD    dwSize;					//�ṹ���С
    BYTE     byPicQuota;				//ͼƬ�ٷֱ�	 [0%,  30%]
	BYTE     byRecordQuota;				//��ͨ¼��ٷֱ� [20%, 40%]
	BYTE     byDrawFrameRecordQuota;	//��֡¼��ٷֱ� [30%, 80%]
    BYTE     byRes[61];					//�����ֽ�
}NET_DVR_DRAWFRAME_DISK_QUOTA_CFG, *LPNET_DVR_DRAWFRAME_DISK_QUOTA_CFG;

typedef struct tagNET_DVR_NAT_PORT
{
    WORD wEnable;         //�ö˿��Ƿ�ʹ��ӳ��
    WORD wExtPort;		//ӳ����ⲿ�˿ں�
	BYTE byRes[12];       //����
}NET_DVR_NAT_PORT, *LPNET_DVR_NAT_PORT;

typedef struct  tagNET_DVR_NAT_CFG
{
	DWORD dwSize;          //�ṹ���С
    WORD wEnableUpnp;     //UPNP�����Ƿ�����
    WORD wEnableNat;		//UPNP�˿�ӳ�䣨NAT�������Ƿ�����(��������wEnableUpnp����һ��)
    NET_DVR_IPADDR  struIpAddr;      //NAT·����LAN IP��ַ
    NET_DVR_NAT_PORT    struHttpPort;   //web server http�˿�ӳ������
    NET_DVR_NAT_PORT    struCmdPort; //����˿�ӳ������(8000)
    NET_DVR_NAT_PORT    struRtspPort;  //rtsp�˿�ӳ������
	BYTE byFriendName[64]; //������
	BYTE byNatType; //UPNP�˿�ӳ�����ͣ�0-�ֶ���1-�Զ�
	BYTE            byRes1[3];    //����
	NET_DVR_NAT_PORT    struHttpsPort;     //https�˿�ӳ������
	BYTE            byres[76];    //����
}NET_DVR_NAT_CFG, *LPNET_DVR_NAT_CFG;

typedef struct
{
    DWORD  dwEnabled;               //�ö˿��Ƿ�ʹ��ӳ��
    WORD   wInternalPort;           //ӳ��ǰ�Ķ˿�
    WORD   wExternalPort;           //ӳ���Ķ˿�
	DWORD  dwStatus;				 /*�˿�ӳ��״̬
									 0 δ��Ч
									 1 δ��Ч��ӳ��Դ�˿���Ŀ�Ķ˿���һ��
									 2 δ��Ч:  ӳ��˿ں��ѱ�ʹ��
									 3 ��Ч
									*/
	NET_DVR_IPADDR	struNatExternalIp;       //ӳ�����ⲿ��ַ
	NET_DVR_IPADDR	struNatInternalIp;       //NAT·����LAN IP��ַ
	BYTE   byRes[16];               //����
}NET_DVR_UPNP_PORT_STATE, *LPNET_DVR_UPNP_PORT_STATE;

typedef struct
{
	NET_DVR_UPNP_PORT_STATE strUpnpPort[12];     //�˿�ӳ��״̬,����0 web server�˿� ����1 ����˿� ����2 rtsp�˿�
	BYTE   byRes[200];              //����
}NET_DVR_UPNP_NAT_STATE, *LPNET_DVR_UPNP_NAT_STATE;

typedef struct tagNET_DVR_PLAYCOND
{
	DWORD			 dwChannel;
	NET_DVR_TIME     struStartTime;
	NET_DVR_TIME     struStopTime;
	BYTE			 byDrawFrame;  //0:����֡��1����֡
	BYTE			 byRes[63];    //����
}NET_DVR_PLAYCOND, *LPNET_DVR_PLAYCOND;

typedef struct tagNET_DVR_FILECOND_V40
{
	LONG           lChannel;
	DWORD          dwFileType;
	DWORD          dwIsLocked;
	DWORD          dwUseCardNo;
	BYTE           sCardNumber[32];
	NET_DVR_TIME   struStartTime;
	NET_DVR_TIME   struStopTime;
	BYTE           byDrawFrame; //0:����֡��1����֡
	BYTE           byRes[63];    //����
}NET_DVR_FILECOND_V40, *LPNET_DVR_FILECOND_V40;

typedef struct 
{
	BYTE	sAESKey[16];        /*����������Կ*/
	BYTE	byRes[64];          /*�����ֽ�*/
}NET_DVR_AES_KEY_INFO, *LPNET_DVR_AES_KEY_INFO;

typedef struct
{
	NET_DVR_IPADDR struIP;     //IP��ַ
	BYTE  byRes[128]; //����
}NET_DVR_POE_CFG, *LPNET_DVR_POE_CFG;

#define MAX_PRO_PATH         256    //���Э��·������

typedef struct
{
	DWORD dwSize;              //�ṹ���С
	DWORD dwEnabled;           //�Ƿ����ø�Э��0 ������ 1 ����
	char  sProtocalName[DESC_LEN];   //�Զ���Э������, 16λ
	BYTE  byRes1[64];          //����,����Э��������չ
	DWORD dwEnableSubStream;   //�������Ƿ�����0 ������ 1 ����
	
	BYTE  byMainProType;        //������Э������ 1 RTSP
	BYTE  byMainTransType;		//�������������� 0��Auto 1��udp 2��rtp over rtsp
	WORD  wMainPort;           //�������˿�	
	char  sMainPath[MAX_PRO_PATH];  //������·��
	
	BYTE  bySubProType;         //������Э������ 1 RTSP
	BYTE  bySubTransType;		//�������������� 0��Auto 1��udp 2��rtp over rtsp
	WORD  wSubPort;            //�������˿�
	char  sSubPath[MAX_PRO_PATH];   //������·�� 
	
	BYTE  byRes2[200];          //����
}NET_DVR_CUSTOM_PROTOCAL, *LPNET_DVR_CUSTOM_PROTOCAL;


//B10��֧��PSIA�豸
//ѭ����ǽ�ṹ�壨ʵʱ��
typedef struct  
{
    DWORD	dwEnable; /* �Ƿ����� 0���� 1������*/
    BYTE	byType; //�豸���� 0: DEV_SDK  1:DEV_DAHUA  2:DEV_EHOME	3:DEV_OTHERES
    BYTE	byRes[3];  //����
    NET_DVR_STREAM_MEDIA_SERVER_CFG streamMediaServerCfg; 
    NET_DVR_DEV_CHAN_INFO  struDevChanInfo; /* ��ѭ����ͨ����Ϣ */
    BYTE	sRtspUrl[128];//����ַ
}NET_DVR_MATRIX_CHAN_INFO_EX,*LPNET_DVR_MATRIX_CHAN_INFO_EX;

typedef struct
{
    DWORD	dwSize;
    DWORD	dwPoolTime;	/*��ѯ���*/
    NET_DVR_MATRIX_CHAN_INFO_EX		struchanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE    byRes[16];
}NET_DVR_MATRIX_LOOP_DECINFO_EX,*LPNET_DVR_MATRIX_LOOP_DECINFO_EX;

//ʵʱԤ����ǽ�ṹ��
typedef struct
{
    DWORD dwSize;
    BYTE byType; //�豸���� 0: DEV_SDK  1:DEV_DAHUA  2:DEV_EHOME 3:DEV_OTHERES
    BYTE byRes[3]; //����
    NET_DVR_STREAM_MEDIA_SERVER_CFG struStreamMediaSvrCfg;
    NET_DVR_DEV_CHAN_INFO struDevChanInfo;
    BYTE sRtspUrl[128];//����ַ
}NET_DVR_PU_STREAM_CFG_EX,*LPNET_DVR_PU_STREAM_CFG_EX;

typedef struct tagNET_DVR_MATRIX_TRUNKCFG
{
    DWORD     dwGlobalIndex;  //����
    DWORD     dwInterIndex;   //����ȫ�ֱ��
    BYTE      sTrunkName[NAME_LEN];
    BYTE      byType;   //�豸����1-bnc, 2-SP3, 3-V6
    BYTE      byDir;   //���߷��� 1-����2-���
    BYTE      byAbility;   //����������D1����
    BYTE      bySubsys;   //��ϵͳID
    BYTE      byChan;     //ͨ��ID
    BYTE      byRes[255];     //Ԥ��
} NET_DVR_MATRIX_TRUNKCFG,*LPNET_DVR_MATRIX_TRUNKCFG;

typedef struct tagNET_DVR_DECSUBSYSTEMJIONSTATUS_V41
{
    BYTE		byJoinStatus;//����״̬��0-û�й�����1-�Ѿ�������2-��ռ��
    BYTE		byJoinSubSystem;// ��������ռ�õ���ϵͳ��λ��
    BYTE		byJoinDispNum;// ��������ռ�õ���ʾͨ����
    BYTE		byJoinSubWindowNum;// ��������ռ�õ��Ӵ��ں�
    BYTE		byDecodeAbility;   //����ͨ���ĵ�ǰ����������0-δ������1-D1��2-720��3-1080
    BYTE		byRes[15];
}NET_DVR_DECSUBSYSTEMJIONSTATUS_V41,LPNET_DVR_DECSUBSYSTEMJIONSTATUS_V41;

typedef struct tagNET_DVR_SINGLESUBSYSTEMJOININFO_V41
{
    /*��ϵͳ���ͣ�1-��������ϵͳ��2-��������ϵͳ��3-���������ϵͳ��4-����������ϵͳ��5-�������ϵͳ��6-����������ϵͳ��7-������ϵͳ��8-V6������ϵͳ��9-V6��ϵͳ��0-NULL���˲���ֻ�ܻ�ȡ��*/
    BYTE	bySubSystemType; 
    BYTE	byConnectStatus;//����ϵͳ����״̬��1-����������2-���ӶϿ�
    BYTE    byMatrixNum;//������Ƶ�ۺ�ƽ̨�ţ���ϵͳ������3��4ʱ����
    BYTE	bySubSystemNum;//������ϵͳ��λ�ţ���ϵͳ������3��4ʱ����
    NET_DVR_DECSUBSYSTEMJIONSTATUS_V41 struSubSystem[MAX_DECODECHANNUM];
    BYTE	byBindStatus;//��״̬��0-û�а󶨣�1-�Ѿ��󶨣�����ƴ��ʱ�õ���
    BYTE	bySlotNum ;//��λ�ţ��˲���ֻ�ܻ�ȡ
    BYTE    byUsedTrunk;//�Ƿ񱻸���ʹ�ã�0-δ��ʹ�ã�1-��ʹ��
    BYTE    byRes[65];
}NET_DVR_SINGLESUBSYSTEMJOININFO_V41,LPNET_DVR_SINGLESUBSYSTEMJOININFO_V41;

typedef struct tagNET_DVR_ALLDECSUBSYSTEMJOININFO_V41
{
    DWORD dwSize;
    NET_DVR_SINGLESUBSYSTEMJOININFO_V41 struSingleSubSystemJoinInfo[MAX_SUBSYSTEM_NUM_V40];
    BYTE  byRes[48];
}NET_DVR_ALLDECSUBSYSTEMJOININFO_V41,*LPNET_DVR_ALLDECSUBSYSTEMJOININFO_V41;

/********************************����С���� begin*******************************/
//////////��ϵͳ����/////////////
#define MAX_ALARMHOSTKEYBOARD 64 //���籨��������������
typedef struct tagNET_DVR_PUBLIC_SUB_SYSTEM
{
	//������ϵͳ�ţ���λ��ʾ��bit0��ʾ�ù�����ϵͳ������ϵͳ1.
	DWORD	dwJointSubSystem;
	BYTE	byRes[16];
}NET_DVR_PUBLIC_SUB_SYSTEM, *LPNET_DVR_PUBLIC_SUB_SYSTEM;

typedef struct tagNET_DVR_NOAMAL_SUB_SYSTEM
{
	//��ʾ����Щ������ϵͳ��������λ��ʾ��bit0 ��ʾ������ϵͳ.��������������ϵͳ1
	DWORD	dwBeJoinedSubSystem;
	BYTE	byRes[16];	
}NET_DVR_NOAMAL_SUB_SYSTEM, *LPNET_DVR_NOAMAL_SUB_SYSTEM;

typedef union tagNET_DVR_JOINT_SUB_SYSTEM
{
	// byPublicAttributeEnableΪ0ʱʹ�øñ���
	NET_DVR_NOAMAL_SUB_SYSTEM 	struNormalSubSystem;
	//byPublicAttributeEnableΪ1ʱʹ�øñ���
	NET_DVR_PUBLIC_SUB_SYSTEM		struPublicSubSystem;
	BYTE	byRes[20];	
}NET_DVR_JOINT_SUB_SYSTEM,*LPNET_DVR_JOINT_SUB_SYSTEM;
typedef struct tagNET_DVR_ALARMSUBSYSTEMPARAM
{
    DWORD   dwSize;
    WORD    wEnterDelay;//������ʱ,��λ:��, ��Χ��10-150 �������������������б�����������ʱʱ���� NET_DVR_ALARMIN_PARAM �е�dwParam��������ʱʱ��
	//�������������÷�ʽͨ���������е�bySupportAlarmInDelay�ֶ�������
    WORD	wExitDelay;//�˳���ʱ,��λ:�룬 ��Χ10-300
    BYTE	byHostageReport;//Ю�ֱ��棬0���� 1ʹ��
	BYTE		bySubsystemEnable; //��ϵͳʹ��
	BYTE		byKeyToneOfArmOrDisarm;// ������ʾ�ɹ����Ͳ��������棬0-���̲���ʾ 1-���������ʾ��
	BYTE		byKeyToneOfManualTestReport;	//������ʾ�ɹ����Ͳ��Ա��棬0-���̲���ʾ 1-���������ʾ��
	WORD		wDelayTime;						//���������ʱ������������dwSupport1�е�bit0λΪ1ʱ��ʹ�øò������þ������ʱ�䡣bit0Ϊ0ʱ��ʹ��NET_DVR_SIREN_PARAM�е�wDelay�������þ������ʱ��
	BYTE		byRes1;
	BYTE 		byPublicAttributeEnable;			//�Ƿ�Ϊ������ϵͳ
	NET_DVR_JOINT_SUB_SYSTEM struJointSubSystem;		
	BYTE		byKeyZoneArm;		//�Ƿ�֧��Կ�׷�������ϵͳ���в�������
	BYTE		byKeyZoneArmReport;	//�Ƿ�֧��Կ�׷�������ϵͳ����ʱ���Ͳ�������
	BYTE		byKeyZoneDisarm;	//�Ƿ�֧��Կ�׷�������ϵͳ���г�������
	BYTE		byKeyZoneDisarmReport;	//�Ƿ�֧��Կ�׷�������ϵͳ���г�������ʱ���ͳ�������
    BYTE		byRes2[624];			// �����ֽ�
}NET_DVR_ALARMSUBSYSTEMPARAM, *LPNET_DVR_ALARMSUBSYSTEMPARAM;

//��ϵͳ����������չ
#define	MAX_KEYBOARD_USER_NUM	256
typedef struct tagNET_DVR_SUBSYSTEM_PARAM_EX
{
	DWORD 	dwSize;
	NET_DVR_SCHEDTIME struAlarmTime[MAX_DAYS/*7*/][MAX_TIMESEGMENT_V30/*8*/]; //������ʱ��
	BYTE	byAlarmInAdvance;			// ��������ǰ��ʾʱ��0~45��
	BYTE	byRes1[3];
	BYTE 	byJointAlarmIn[MAX_ALARMHOST_ALARMIN_NUM / 8];//��λ����ʾ��ϵͳ�����ı�������ͨ���ţ�0-�����룬1-����
	BYTE 	byJointKeyboard[MAX_ALARMHOSTKEYBOARD/*64*/ / 8];//��λ����ʾ֧�ֵļ��̺ţ�0-�����룬1-����
	BYTE	byJointOpetaterUser[MAX_KEYBOARD_USER_NUM/8];//��λ��ʾ��bit0��ʾ���̲����û�1 ��0-������ 1-����
    BYTE 	byRes2[512];			// �����ֽ�
}NET_DVR_SUBSYSTEM_PARAM_EX, *LPNET_DVR_SUBSYSTEM_PARAM_EX;


typedef struct tagNET_DVR_PRINTER_ENABLE
{
	DWORD 	dwSize;
	BYTE 	byPrinterEnable;		//�Ƿ����ô�ӡ��
	BYTE	byPrintTime;			//�Ƿ��ӡʱ��
	BYTE	byRes1[2];
	DWORD	dwAlarmInfo;			//������Ϣ����λ��ʾ��bit0-����������bit1-����������bit-2Ю��
	DWORD	dwDeviceInfo;			//�豸��Ϣ����λ��ʾ��bit0-�����硢bit1-���ء�bit2-�绰�ߡ�bit3-���Ա��桢bit4-����bit5-���̵��ߡ�bit6-SIM����bit7-GPRS/3G��bit8-�������硢bit9-��չ�����쳣
	DWORD	dwOperateInfo;		//������Ϣ����λ��ʾ��bit0-������bit1-������bit2-������bit3-��·��bit4-�����̡�bit5-�˳���̡�bit6-������λ
	BYTE 	byRes2[256];			// �����ֽ�
}NET_DVR_PRINTER_ENABLE, *LPNET_DVR_PRINTER_ENABLE;

//////////GPRS��������/////////////
#define	ACCOUNTNUM_LEN 			6
#define	APN_NAME_LEN			32
#define	APN_USERNAME_LEN		24
#define	APN_USERPASSWORD_LEN	16

typedef struct tagNET_DVR_ALARMHOST_NETPARAM
{ 
	DWORD dwSize;
	NET_DVR_IPADDR struIP;
	WORD	wPort;
	BYTE	byRes1[2];
	BYTE	byDomainName[MAX_DOMAIN_NAME/*64*/]; //������GPRS��������ʱ��Ч�������������ʱ���ֶβ�ʹ��
	BYTE	byReportProtocol;		//1-private 2-NAL2300
	BYTE	byDevID[ACCOUNTNUM_LEN/*6*/]; //Э��ΪNAL2300ʱ��Ч
	BYTE	byRes2[33]; //GPRS�������������ڹ̶��ķ������Ͻ��еģ����Բ���Ҫ����������������ϢԤ��һЩ�ֶ�
}NET_DVR_ALARMHOST_NETPARAM,  *LPNET_DVR_ALARMHOST_NETPARAM;

typedef struct tagNET_DVR_ALARMHOST_WIRELESS_NETWORK_CFG
{
	DWORD	dwSize;
	NET_DVR_ALARMHOST_NETPARAM struNetCenter[MAX_CENTERNUM]; //���� GPRS������ز��������� 
	BYTE 	byAPNName[APN_NAME_LEN/*32*/];
	BYTE	byAPNUserName[APN_USERNAME_LEN/*24*/];
	BYTE	byAPNPassWord[APN_USERPASSWORD_LEN/*16*/];
	BYTE	byReconnTime;	//����ʱ�䣬����ʧЧ������������ʱ�䣬10��Ϊ��λ,ȡֵ��Χ1-30
	BYTE	byOverTime;		//��ʱʱ�䣬����OverTimeʱ��û���յ���Ч��������������Χ1-254����λ30��
	BYTE	byDetectLinkTime;	//	//̽����·�Ƿ񻹱��֣���Χ1-30����λ10s
	BYTE	byRes1;
	BYTE	bySIMNum[NAME_LEN/*32*/]; //SIM���ţ��ֻ��ţ�
	NET_DVR_IPADDR	struSIMIP;	  //��½���������������IP��ַ��ֻ�ܻ�ȡ
	BYTE	byRes2[64];
}NET_DVR_ALARMHOST_WIRELESS_NETWORK_CFG, *LPNET_DVR_ALARMHOST_WIRELESS_NETWORK_CFG;


//////////�����������/////////////
typedef struct tagNET_DVR_ALARMHOST_NETCFG
{
	DWORD dwSize;
	NET_DVR_ALARMHOST_NETPARAM 	struNetCenter[MAX_CENTERNUM];
	BYTE	byRes1[32];
}NET_DVR_ALARMHOST_NETCFG,  *LPNET_DVR_ALARMHOST_NETCFG;

//////////��ľ�ϴ���ʽ/////////////
#define	MAX_REPORTCHAN_NUM		4
#define	MAX_CENTERGROUP_NUM		16
typedef struct tagNET_DVR_ALARMHOST_REPORTCENTER_CFG
{
	DWORD	dwSize;
	BYTE	byValid;				//�Ƿ�����
	BYTE	byRes[3]; //����1
	BYTE	byChanAlarmMode[MAX_REPORTCHAN_NUM/*4*/];	//�����鱨��ͨ���� 1-T1��2-T2�� 3-N1�� 4-N2��5-G1�� 6-G2
	BYTE	byDealFailCenter[MAX_CENTERGROUP_NUM/*16*/]; //��ָ�������鷢��ʧ�ܱ��棬�������±��ʾ���ĸ������飬0-��ѡ��1-ѡ��
	BYTE	byDataType;	//1-�������� 2-�Ǳ������� 3-��������
	BYTE	byRes2[15];	//����2
}NET_DVR_ALARMHOST_REPORTCENTER_CFG, *LPNET_DVR_ALARMHOST_REPORTCENTER_CFG;
/********************************����С���� end*********************************/

/********************************ATM�������տ����� begin *********************************/
//////////������״̬�ϴ�/////////////
typedef  struct tagNET_DVR_ALARMHOST_SAFETYCABINSTATE
{
	DWORD	dwSize;
	BYTE	byEnterButton;	//���Ű�ť״̬ 0-������ 1-��ť����
	BYTE	byExitButton;	//���Ű�ť״̬ 0-������ 1-��ť����
	BYTE	byDoorState;	//��״̬	0-�Źر� 1-�Ŵ�
	BYTE	byLockState;	//��״̬ 0-����	1-����
	BYTE	byUrgencyButton;	//������ť״̬	0-������ 1-��ť����
	BYTE	byManState;		//��״̬	 0-û�� 1-����
    BYTE    byAbnormal; //�쳣״̬  0-���� 1-�쳣(������ʹ�ó�ʱ�ϴ��쳣)
	BYTE	byRes[65];
}NET_DVR_ALARMHOST_SAFETYCABINSTATE,*LPNET_DVR_ALARMHOST_SAFETYCABINSTATE;

/////////��������ڣ�����״̬�ϴ�/////////////
typedef  struct tagNET_DVR_ALARMHOST_ALARMOUTSTATUS
{
	DWORD	dwSize;
	BYTE	byName[32];		//������������ƻ򾯺�����
	BYTE	byAlarmType;	//1-���������״̬�� 2-����״̬
	WORD	wChan;			//����Ǳ��������״̬����ֵ�ķ�ΧΪ0-511������Ǿ���״̬����Χ1-8��������ֻ��1�����������
	BYTE	byAlarmStatus; //����״̬ 0-�ޱ��� 1-�б���
	BYTE	byRes[32];
}NET_DVR_ALARMHOST_ALARMOUTSTATUS,*LPNET_DVR_ALARMHOST_ALARMOUTSTATUS;

//////////�����ϴ�����/////////////
typedef struct tagNET_DVR_AUDIO_PARAM
{
	DWORD		dwSize;
	BYTE		byAudioFormat;      //��Ƶ��ʽ��1-G711��2-OggVorbis 
	BYTE		byRes1;
    WORD		wChannels;          // number of channels (i.e. mono, stereo...)
    DWORD		dwSamplesPerSec;	//������
    BYTE		byRes2[20];			//����
    DWORD		dwAudioSize;		//��Ƶ���ȴ�С��ѹ����Ĵ�С
}NET_DVR_AUDIO_PARAM,*LPNET_DVR_AUDIO_PARAM;

/********************************ATM�������տ����� end *********************************/

/********************************��Ƶ�������� begin *********************************/
//Ԥ��V40�ӿ�

typedef struct tagNET_DVR_PREVIEWINFO
{
	LONG lChannel;//ͨ����
    DWORD dwStreamType;	// �������ͣ�0-��������1-��������2-����3��3-����4 ���Դ�����
	DWORD dwLinkMode;// 0��TCP��ʽ,1��UDP��ʽ,2���ಥ��ʽ,3 - RTP��ʽ��-RTP/RTSP,5-RSTP/HTTP 
	HWND hPlayWnd;//���Ŵ��ڵľ��,ΪNULL��ʾ������ͼ��
	BOOL bBlocked;  //0-������ȡ��, 1-����ȡ��, �������SDK�ڲ�connectʧ�ܽ�����5s�ĳ�ʱ���ܹ�����,���ʺ�����ѯȡ������.
	BOOL bPassbackRecord; //0-������¼��ش�,1����¼��ش�
	BYTE byPreviewMode;//Ԥ��ģʽ��0-����Ԥ����1-�ӳ�Ԥ��
	BYTE byRes[255];
}NET_DVR_PREVIEWINFO, *LPNET_DVR_PREVIEWINFO;


//�¼������������

typedef struct tagNET_DVR_TRIGGER_EVENT
{
	DWORD	dwSize;
	DWORD	dwOverallEventTriggerAlarmoutOn;	//ȫ���¼��������������������λ��bit0-��������磬bit1-��ص�ѹ�ͣ�bit2-�绰�ߵ��ߣ�bit3-���������쳣��bit4-���������쳣
	DWORD	dwOverallEventTriggerAlarmoutOff;	//ȫ���¼��������������������λ��bit0-��������磬bit1-��ص�ѹ�ͣ�bit2-�绰�ߵ��ߣ�bit3-���������쳣��bit4-���������쳣
	DWORD	dwSubSystemEventTriggerAlarmoutOn[MAX_ALARMHOST_SUBSYSTEM/*32*/]; //��ϵͳ�¼����������������,dwSubSystemEvent[0]��ʾ��ϵͳ1��dwSubSystemEvent[2]��ʾ��ϵͳ2���������ϵͳ��������������ȡ��wSubSystem����ÿ����ϵͳ���¼���λ��ʾ��bit0-������ʱ��bit1-�˳���ʱ��bit2-������bit3-������bit4-������bit5-������������
	DWORD	dwSubSystemEventTriggerAlarmoutOff[MAX_ALARMHOST_SUBSYSTEM/*32*/]; //��ϵͳ�¼�������������ر�,wSubSystemEvent[0]��ʾ��ϵͳ1��dwSubSystemEvent[2]��ʾ��ϵͳ2���������ϵͳ��������������ȡ��wSubSystem����ÿ����ϵͳ���¼���λ��ʾ��bit0-������ʱ��bit1-�˳���ʱ��bit2-������bit3-������bit4-������bit5-������������
	BYTE	byRes[128];
}NET_DVR_TRIGGER_EVENT, *LPNET_DVR_TRIGGER_EVENT;

//���ϴ�������
typedef struct  tagNET_DVR_ALARMHOST_FAULT_CFG
{
	DWORD 	dwSize;
	DWORD	dwCheckFault;	//�Ƿ�����ϣ�bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣������֧�ֵĹ������ʹ���������ȡ
	DWORD	dwOverallFaultJointLED;		//���Ϲ���ȫ�ּ���ָʾ����� bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣������֧�ֵĹ������ʹ���������ȡ
	DWORD	dwOverallFaultJointSound;	//���Ϲ���ȫ�ּ���������� bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣������֧�ֵĹ������ʹ���������ȡ
	DWORD	dwSubSystemFaultJointLED[MAX_ALARMHOST_SUBSYSTEM]; /*���Ϲ�����ϵͳ����ָʾ�������dwSubSystemFaultJointLED[0]��ʾ��ϵͳ1�Ĺ�����Ϣ��dwSubSystemFaultJointLED[0]��ÿһλ��ʾһ�й��ϣ�bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣; dwSubSystemFaultJointLED[1]��ʾ��ϵͳ2���Դ�����*/
	DWORD	dwSubSystemFaultJointSound[MAX_ALARMHOST_SUBSYSTEM];/*���Ϲ�����ϵͳ������������������ڼ����������dwSubSystemFaultJointLED[0]��ʾ��ϵͳ1�Ĺ�����Ϣ��dwSubSystemFaultJointSound [0]��ÿһλ��ʾһ�й��ϣ�bit0-������ϵ磬bit1-����Ƿѹ��bit2-�������𿪣�bit3-�绰�ߵ��ߣ�bit4-�����̵��ߣ�bit5-������ϣ�bit6-GPRS�쳣��bit7-MBUS�쳣��bit8-Ӳ���쳣; dwSubSystemFaultJointSound [1]��ʾ��ϵͳ2���Դ�����*/
	BYTE	byRes[64];
}NET_DVR_ALARMHOST_FAULT_CFG, *LPNET_DVR_ALARMHOST_FAULT_CFG;

typedef struct tagNET_DVR_LIST_INFO
{
	DWORD	dwSize;
	BYTE	byIndex;			//��ϵͳ�ţ�0xff��ʾ������ϵͳ
	BYTE   	byRes[63];      //����
}NET_DVR_LIST_INFO, *LPNET_DVR_LIST_INFO;

#define COMM_ALARMHOST_CID_ALARM 		0x1127	//���汨���ϴ�

#define CID_CODE_LEN 4
typedef enum tagNET_DVR_ALARMHOST_REPORT_TYPE
{
	NET_DVR_DEFENCE_ALARM = 1,		//��������
		NET_DVR_VIDEO_ALARM,			//��Ƶ����
		NET_DVR_VIRTUAL_DEFENCE_ALARM,	//���������
		NET_DVR_HOSTAGE_ALARM,			//Ю�ֱ���
		NET_DVR_KNOCK_DOWN_ALARM,		//���𱨾�
		NET_DVR_OPERATE_ALARM,			//��������
		NET_DVR_OHTER_ABNORMAL_ALARM	//�쳣����
}NET_DVR_ALARMHOST_REPORT_TYPE;

typedef struct tagNET_DVR_CID_ALARM
{
    DWORD	dwSize;
    BYTE	sCIDCode[CID_CODE_LEN/*4*/];	//CID�¼���
    BYTE	sCIDDescribe[NAME_LEN/*32*/];	//CID�¼���
    NET_DVR_TIME_EX struTriggerTime;			//����������ʱ���
    NET_DVR_TIME_EX struUploadTime;				//�ϴ�������ʱ���
	BYTE	sCenterAccount[ACCOUNTNUM_LEN/*6*/];	//�����ʺ�
	BYTE	byReportType;					//������NET_DVR_ALARMHOST_REPORT_TYPE
	BYTE	byUserType;						//�û����ͣ�0-�����û� 1-�����û�
	BYTE	sUserName[NAME_LEN/*32*/];		//�����û��û���
	WORD	wKeyUserNo;						//�����û���	0xFFFF��ʾ��Ч
	BYTE	byKeypadNo;						//���̺�		0xFF��ʾ��Ч
	BYTE	bySubSysNo;						//��ϵͳ��		0xFF��ʾ��Ч
	WORD	wDefenceNo;						//������		0xFFFF��ʾ��Ч
	BYTE	byVideoChanNo;					//��Ƶͨ����	0xFF��ʾ��Ч
	BYTE	byDiskNo;						//Ӳ�̺�		0xFF��ʾ��Ч
	WORD	wModuleAddr;					//ģ���ַ		0xFFFF��ʾ��Ч
    BYTE	byRes[62];
}NET_DVR_CID_ALARM, *LPNET_DVR_CID_ALARM;

typedef struct tagNET_DVR_ALARMHOST_MODULE_CFG
{
	DWORD dwSize;
	BYTE	byModuleType;	//1-������2-������      
	BYTE	byZoneType;		//�������ͣ�1-���ط�����2-��������3-˫������4-8������5-8·ģ����������0xff��ʾ�ò�����Ч
	BYTE	byTriggerType;	//���������ͣ�1-���ش������� 2-4·��������3-8·��������0xff��ʾ�ò�����Ч
	BYTE	byRes[253];
} NET_DVR_ALARMHOST_MODULE_CFG, *LPNET_DVR_ALARMHOST_MODULE_CFG;

/********************************��Ƶ�������� end *********************************/


#define MAX_DECODE_CARD_SUPPORTDISPNUMS 8//ÿ�����뿨���֧�ֵ���ʾͨ����
#define MAX_SUPPORT_RES 32
typedef struct tagNET_DVR_DECCARD_ABILITY_V41 /*������뿨������*/
{
    BYTE byCardType;      //���뿨����(0:MD,1:MD+,2:HD)
    BYTE byDecNums;      //����ͨ���� 
    BYTE byDispNums;      //��ʾͨ���� 
    BYTE byDecStartIdx;     //�׸�����ͨ�������н���ͨ���е����� 
    BYTE byDispStartIdx;     //�׸���ʾͨ����������ʾͨ���е�����
    BYTE byRes1[3]; 
    DWORD dwVgaSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwHdmiSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwDviSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwYpbprSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    BYTE byDispFormat[MAX_DECODE_CARD_SUPPORTDISPNUMS];   //֧�ֵ����ģʽ(��HD_DISPLAY_FORMAT�е�ö��) 
    BYTE byWindowMode[MAX_DECODE_CARD_SUPPORTDISPNUMS][12]; //֧�ֵĴ���ģʽ(����1,2,4,9,16))
    BYTE byRes2[36];
} NET_DVR_DECCARD_ABILITY_V41,*LPNET_DVR_DECCARD_ABILITY_V41;

#define		MAX_DECODE_CARD_NUM			6   //��������뿨��
typedef struct tagNET_DVR_DECODESVR_ABILITY_V41
{
    DWORD dwSize;      /* �ṹ���С */
    BYTE byCardNums;      /* ���뿨�� */
    BYTE byStartChan;     /* ��ʼͨ���� */
    BYTE byRes1[2];
    NET_DVR_DECCARD_ABILITY_V41 struDecCardAbility[MAX_DECODE_CARD_NUM];
    BYTE byRes2[64];
}NET_DVR_DECODESVR_ABILITY_V41, *LPNET_DVR_DECODESVR_ABILITY_V41;

// ��¼��״̬
typedef struct tagNET_DVR_STREAM_RECORD_STATUS
{
	DWORD           dwSize;
	BYTE			byRecord;         //(ֻ��)¼������, 0������¼��1����¼��
	BYTE			byRes1[3];        //�����ֽ�
	DWORD			dwRelatedHD;      //��������
	BYTE			byRes2[8];        //�����ֽ�
}NET_DVR_STREAM_RECORD_STATUS, *LPNET_DVR_STREAM_RECORD_STATUS;

typedef struct tagNET_DVR_DIRECT_CONNECT_CHAN_INFO
{
    BYTE		byEnable;					//�Ƿ�����
	BYTE		byProType;					//Э�����ͣ�0-����Э��(default), (��Ҫ���豸��ȡ����)
    BYTE		byRes1[2];					//�����ֶΣ���0
    BYTE		sUserName[NAME_LEN];		//�û���
    BYTE		sPassword[PASSWD_LEN];	    //����
    BYTE		byDomain[MAX_DOMAIN_NAME];	//�豸����
    NET_DVR_IPADDR  struIP;				        //IP��ַ
	WORD		wDVRPort;			 	    //�˿ں�
	BYTE		byStreamType;               //������:0; ��������1
	BYTE		byOnline;					//ֻ����0-������ 1-����
	DWORD		dwChannel;                  //ͨ����
	BYTE		byRes3[28];				    //�����ֶΣ���0
}NET_DVR_DIRECT_CONNECT_CHAN_INFO, *LPNET_DVR_DIRECT_CONNECT_CHAN_INFO;

typedef union tagNET_DVR_STREAM_TYPE_UNION
{
    NET_DVR_DIRECT_CONNECT_CHAN_INFO	struChanInfo;	      //IPͨ����Ϣ  ����ֵΪ0
    NET_DVR_PU_STREAM_URL				struStreamUrl;        //ͨ����ý�嵽urlȡ��������ֵΪ4
}NET_DVR_STREAM_TYPE_UNION, *LPNET_DVR_STREAM_TYPE_UNION;

typedef struct tagNET_DVR_STREAM_MODE_TYPE
{
	BYTE					byGetStreamType;	//ȡ����ʽ��0-ֱ�Ӵ��豸ȡ����1-����ý��ȡ����2-ͨ��IPServer���ip��ַ��ȡ��, 3.ͨ��IPServer�ҵ��豸����ͨ����ý��ȥ�豸���� 4-ͨ����ý����URLȥȡ��
	BYTE					byRes[3];			// �����ֽ�
    NET_DVR_STREAM_TYPE_UNION	uGetStream;			// ��ͬȡ����ʽ�ṹ��
}NET_DVR_STREAM_MODE_TYPE, *LPNET_DVR_STREAM_MODE_TYPE;

// ����Դ��Ϣ
typedef struct tagNET_DVR_STREAM_SRC_INFO
{
	DWORD					    dwSize;
	NET_DVR_STREAM_MODE_TYPE	struStreamSrcInfo;
}NET_DVR_STREAM_SRC_INFO,*LPNET_DVR_STREAM_SRC_INFO;

// ��¼����Ϣ
typedef struct 
{
	DWORD			dwSize;
	NET_DVR_RECORD_V30	struRecordInfo;
}NET_DVR_STREAM_RECORD_INFO, *LPNET_DVR_STREAM_RECORD_INFO;

// ����ID��ʱ��μ���
typedef struct tagNET_DVR_STREAM_TIME_LOCK
{
	DWORD			dwSize;				// �ṹ���С
	NET_DVR_TIME	strBeginTime;		// ��ʼʱ��
	NET_DVR_TIME	strEndTime;			// ����ʱ��
	NET_DVR_STREAM_INFO struStreamInfo;		// ����Ϣ
	DWORD			dwRecordType;		// ¼������:  0xff��ȫ��������ʱ¼��-�ƶ���⣬������������-�����������ƶ���⣬-�����������ƶ���⣬-�������-�ֶ�¼��-����¼��(ͬ�ļ�����)
	DWORD			dwLockDuration;		// ��������ʱ��,��λ�룬0xffffffff��ʾ��������
	BYTE			byRes[12];
}NET_DVR_STREAM_TIME_LOCK, *LPNET_DVR_STREAM_TIME_LOCK;

// ��ID+ʱ��طŽṹ��
typedef struct tagNET_DVR_VOD_PARA
{
	DWORD				dwSize;
	NET_DVR_STREAM_INFO struIDInfo; 
    NET_DVR_TIME		struBeginTime;
	NET_DVR_TIME		struEndTime;
	HWND				hWnd;
	BYTE				byDrawFrame; //0:����֡��1����֡
	BYTE				byRes[31];
}NET_DVR_VOD_PARA, *LPNET_DVR_VOD_PARA;

// �ֶ�¼��
typedef struct tagNET_DVR_MANUAL_RECORD_PARA
{
	NET_DVR_STREAM_INFO struStreamInfo; 
	DWORD			lRecordType;
	BYTE			byRes[32];
}NET_DVR_MANUAL_RECORD_PARA, *LPNET_DVR_MANUAL_RECORD_PARA;


// CABAC����ѹ������ѡ����������20%��ֻ��ģ��ͨ��������
typedef struct tagNET_DVR_STREAM_CABAC
{
	DWORD		dwSize;              	//�ṹ���С
	BYTE 		byCabacEnable;       	//����ѹ������ѡ��ֵ0 ������ 1 ����
	BYTE  		byRes1[31];          		//����
}NET_DVR_STREAM_CABAC, *LPNET_DVR_STREAM_CABAC;

/********************************���ܸ���IPC V3.1*********************************/
#define  MAX_IOSPEED_GROUP_NUM      4 //IO���������
#define  MAX_IOOUT_NUM              4  //���IO����ڸ���
#define  MAX_IOIN_NUM               8  //���IO����ڸ���
#define  MAX_ITC_LANE_NUM           6  //��󳵵�����
#define  MAX_LANEAREA_NUM           2  //����������������
#define  ITC_MAX_POLYGON_POINT_NUM	20	//����������֧��20����Ķ����
#define  MAX_ITC_SERIALCHECK_NUM    8 //����У�����͸���
#define  MAX_LIGHT_NUM              6 //���ͨ����
#define  MAX_VIDEO_INTERVAL_NUM     2  //���ץ�ļ����

//IO����ڲ�����3.1�汾������֮��
typedef struct tagNET_ITC_IOOUT_PARAM
{
	DWORD    dwSize;
    BYTE     byDefaultStatus;//IOĬ��״̬��0-�͵�ƽ��1-�ߵ�ƽ 
	BYTE     byIOOutStatus;//IO��Чʱ״̬��0-�͵�ƽ��1-�ߵ�ƽ��2-����
	BYTE     byMode; //����ƹ�����ʽ,��λ��ʾ��0-��ʾ������1-��ʾ��������bit0-��Ƶ��bit1-���ڣ�bit2-Υ��
	BYTE     byRes1;
	DWORD    dwTimeDelay;//IO��Ч����ʱ�䣬��λus
	WORD     wAheadTime;//���IO��ǰʱ�䣬��λus
	BYTE     byFreqMulti;		//��Ƶ����ֵ��Χ[1,15]
	BYTE     byDutyRate;		//ռ�ձȣ�[0,40%]
	BYTE     byDetectBrightness;/*�Զ��������ʹ�������0-����⣻1-���*/
	BYTE     byBrightnessThreld;/*ʹ�������������ֵ����Χ[0,100],������ֵ��*/
	BYTE     byFlashLightEnable;	//���������ʱ��ʹ��:0-��;1-��
	BYTE     byStartHour;		//��ʼʱ��-Сʱ,ȡֵ��Χ0-23
	BYTE     byStartMinute;		//��ʼʱ��-��,ȡֵ��Χ0-59
	BYTE     byEndHour;		//����ʱ��-Сʱ,ȡֵ��Χ0-23
	BYTE     byEndMinute;		//����ʱ��-��,ȡֵ��Χ0-59
    BYTE     byRes[9];
}NET_ITC_IOOUT_PARAM, *LPNET_ITC_IOOUT_PARAM;

typedef enum _ITC_TRIGGERMODE_TYPE_
{
	ITC_POST_IOSPEED_TYPE              = 0x1,  //IO���٣����ڣ�
	ITC_POST_SINGLEIO_TYPE             = 0x2,  //��IO���������ڣ�
	ITC_POST_RS485_TYPE                = 0x4,  //RS485���������������ڣ�
	ITC_POST_RS485_RADAR_TYPE          = 0x8,  //RS485�״ﴥ�������ڣ�
	ITC_POST_VIRTUALCOIL_TYPE          = 0x10,   //������Ȧ���������ڣ�
	ITC_EPOLICE_IO_TRAFFICLIGHTS_TYPE  = 0x100,  //IO���̵ƣ��羯��
	ITC_EPOLICE_RS485_TYPE             = 0x200,  //RS485�������羯�������羯��
	ITC_PE_RS485_TYPE                  = 0x10000,  //RS485��������ʽ�羯��������ʽ�羯��
	ITC_VIDEO_EPOLICE_TYPE             = 0x20000 //��Ƶ�羯��������ʽ�羯��
}ITC_TRIGGERMODE_TYPE;

//�������ӿڵ������������ӦpOutBuf����
typedef struct tagNET_ITC_TRIGGERMODE_ABILITY
{
	DWORD dwSize;
	DWORD dwTriggerType; //�������ͣ���λ��ʾ������ITC_TRIGGERMODE_ABILITY���壬����������������Ͳ�ͬ���˴����صĴ�������Ҳ��ͬ
    BYTE byRes[16]; 
}NET_ITC_TRIGGERMODE_ABILITY, *LPNET_ITC_TRIGGERMODE_ABILITY;

typedef struct tagNET_ITC_INTERVAL_PARAM    
{
    BYTE byIntervalType;	//������ͣ�Ĭ�ϰ�ʱ�䣩��0-ʱ����Ч,1-������Ч
    BYTE byRes1[3];
    WORD wInterval[MAX_INTERVAL_NUM];//���ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
    BYTE byRes[8];
}NET_ITC_INTERVAL_PARAM, *LPNET_ITC_INTERVAL_PARAM;

//��ʶ����
typedef struct tagNET_ITC_PLATE_RECOG_PARAM
{
    BYTE byDefaultCHN[MAX_CHJC_NUM]; /*�豸����ʡ�ݵĺ��ּ�д*/
    BYTE byEnable; //�Ƿ����ø�������ʶ��0-��1-��
    DWORD dwRecogMode;  /*ʶ������ͣ�
	    bit0-����ʶ��0-������ʶ��1-����ʶ��(β��ʶ��) �� 
		bit1-����ʶ���С����ʶ��0-С����ʶ��1-����ʶ�� ��
		bit2-������ɫʶ��0-�����ó�����ɫʶ���ڱ���ʶ���С����ʶ��ʱ��ֹ���ã�1-������ɫʶ��
		bit3-ũ�ó�ʶ��0-������ũ�ó�ʶ��1-ũ�ó�ʶ�� 
		bit4-ģ��ʶ��0-������ģ��ʶ��1-ģ��ʶ��
		bit5-֡��λ�򳡶�λ��0-֡��λ��1-����λ��
		bit6-֡ʶ���ʶ��0-֡ʶ��1-��ʶ�� 
		bit7-���ϻ���죺0-���죬1-���� */
    BYTE  byRes[32];
}NET_ITC_PLATE_RECOG_PARAM, *LPNET_ITC_PLATE_RECOG_PARAM;

//����ͽṹ��
typedef struct tagNET_ITC_POLYGON
{
	DWORD dwPointNum; //��Ч�� ���ڵ���3������3����һ��������Ϊ����Ч�����߽�����Ϊ����Ч���� 
	NET_VCA_POINT  struPos[ITC_MAX_POLYGON_POINT_NUM]; //����α߽��,���20�� 
}NET_ITC_POLYGON, *LPNET_ITC_POLYGON;

typedef struct tagNET_ITC_PLATE_RECOG_REGION_PARAM    
{
	BYTE byMode; //�������ͣ�0-���Σ�1-�����
	BYTE byRes1[3];
	union
	{
		NET_VCA_RECT struRect;  //��������
		NET_ITC_POLYGON struPolygon; //���������
	}uRegion;
	BYTE  byRes[16];    //����
}NET_ITC_PLATE_RECOG_REGION_PARAM, *LPNET_ITC_PLATE_RECOG_REGION_PARAM;

//����IO���ٲ���
typedef struct tagNET_ITC_SINGLE_IOSPEED_PARAM
{
    BYTE byEnable; //�Ƿ����ã�0-�����ã�1-����
    BYTE byTrigCoil1; //��һ��Ȧ����IO��0-IO1,1-IO2,2-IO3,3-IO4,4-IO5,5-IO6
    BYTE byCoil1IOStatus;//��һ��ȦIO�����״̬��0-�½��أ�Ĭ�ϣ���1-�����أ�2-�����غ��½��أ�3-�ߵ�ƽ��4-�͵�ƽ
    BYTE byTrigCoil2; //�ڶ���Ȧ����IO��0-IO1,1-IO2,2-IO3,3-IO4,4-IO5,5-IO6
    BYTE byCoil2IOStatus;//�ڶ���ȦIO�����״̬��0-�½��أ�Ĭ�ϣ���1-�����أ�2-�����غ��½��أ�3-�ߵ�ƽ��4-�͵�ƽ
    BYTE byRelatedDriveWay;//�����ĳ�����
    BYTE byTimeOut;//��ʱʱ�䣨Ĭ��10������λs
	BYTE byRes1;
    DWORD dwDistance;//��Ȧ���루Ĭ��1000��,��λ������
    BYTE byCapSpeed;//�����ٶȣ�Ĭ��30������λkm/h
    BYTE bySpeedLimit;//����ֵ��Ĭ��60������λkm/h
    BYTE bySpeedCapEn; //�Ƿ����ó���ץ�ģ�0-��1-��
    BYTE bySnapTimes1; //��Ȧ1ץ�Ĵ�����Ĭ�ϲ�ץ�ģ���0-��ץ�ģ���0-���Ĵ��������5�� 
    BYTE bySnapTimes2; //��Ȧ2ץ�Ĵ�����Ĭ��1����0-��ץ�ģ���0-���Ĵ��������5��
    BYTE byRes2[2];
    BYTE byIntervalType;	//������ͣ�Ĭ�ϰ�ʱ�䣩��0-ʱ����Ч,1-������Ч
	WORD wInterval1[MAX_INTERVAL_NUM];//��Ȧ1���ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
	WORD wInterval2[MAX_INTERVAL_NUM];//��Ȧ2���ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
    BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO�����(����ͬʱ�������)������0��ʾIO�����1������1��ʾIO�����2���Դ����ƣ�0-��������1-����
    BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
    BYTE byRes3[3];
    NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //��ʶ����(������ʶ����1��������һ��)
    BYTE  byRes[32];
}NET_ITC_SINGLE_IOSPEED_PARAM, *LPNET_ITC_SINGLE_IOSPEED_PARAM;

//����IO���ٲ���
typedef struct tagNET_ITC_POST_IOSPEED_PARAM
{
    NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
    NET_ITC_SINGLE_IOSPEED_PARAM struSingleIOSpeed[MAX_IOSPEED_GROUP_NUM]; //����IO���������
    BYTE  byRes[32];
}NET_ITC_POST_IOSPEED_PARAM, *LPNET_ITC_POST_IOSPEED_PARAM;

//��IO����
typedef struct tagNET_ITC_SINGLEIO_PARAM
{
    BYTE byDefaultStatus;//IO����Ĭ��״̬��0-�͵�ƽ��1-�ߵ�ƽ
    BYTE byRelatedDriveWay;//�����ĳ�����
    BYTE bySnapTimes; //ץ�Ĵ�����Ĭ��1����0-��ץ�ģ���0-���Ĵ��������5
	BYTE byRes1;
    NET_ITC_INTERVAL_PARAM struInterval; //ץ�ļ������
    BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO����ڣ�����ͬʱ�������
    BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
    BYTE byRes2[3];
    NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //��ʶ����
    BYTE  byRes[32];
}NET_ITC_SINGLEIO_PARAM, *LPNET_ITC_SINGLEIO_PARAM;

//��IO��������
typedef struct tagNET_ITC_POST_SINGLEIO_PARAM
{
    NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
    NET_ITC_SINGLEIO_PARAM struSingleIO[MAX_IOIN_NUM]; //����IO��������
    BYTE  byRes[32];
}NET_ITC_POST_SINGLEIO_PARAM, *LPNET_ITC_POST_SINGLEIO_PARAM;

typedef struct tagNET_ITC_LANE_PARAM
{
    BYTE byEnable; //�Ƿ����øó�����0-�����ã�1-����
    BYTE byRelatedDriveWay;//�����ĳ�����
    WORD wDistance; //��Ȧ���룬�����ٶ�
    WORD wTrigDelayTime; //�����ӳ�ʱ�䣨Ĭ��200������λ������
    BYTE byTrigDelayDistance; //�����ӳپ��루Ĭ��0������λ������
    BYTE bySpeedCapEn; //�Ƿ����ó���ץ�ģ�0-��1-��
    BYTE bySignSpeed;//��־���٣���λkm/h
	BYTE bySpeedLimit;//����ֵ����λkm/h
	BYTE bySnapTimes; //ץ�Ĵ�����Ĭ��1����0-��ץ�ģ���0-���Ĵ��������5
	BYTE byOverlayDriveWay; //OSD���ӵĳ�����
    NET_ITC_INTERVAL_PARAM struInterval; //ץ�ļ������
    BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO����ڣ�����ͬʱ�������
    BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
	BYTE byCartSignSpeed;//��־����(��)����λkm/h
	BYTE byCartSpeedLimit;//����ֵ���󳵣�����λkm/h
    BYTE byRes2;
    NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //������ʶ����
    BYTE  byRes[16];
}NET_ITC_LANE_PARAM, *LPNET_ITC_LANE_PARAM;

//����RS485��������������
typedef struct tagNET_ITC_POST_RS485_PARAM
{
    BYTE byRelatedLaneNum;//�����ĳ�������
	BYTE byTriggerSpareMode; //��������ģʽ��0-Ĭ�ϣ�1-����������Ȧģʽ
	BYTE byFaultToleranceTime;//�ݴ�ʱ��(��λ:����)�����ڼ�⳵�����Ƿ����������ʱ��
    BYTE byRes1; 
    NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
    NET_ITC_LANE_PARAM struLane[MAX_ITC_LANE_NUM]; //�����ĳ�������
    BYTE  byRes[32];
}NET_ITC_POST_RS485_PARAM, *LPNET_ITC_POST_RS485_PARAM;

typedef struct tagNET_ITC_RADAR_PARAM
{
	BYTE    byRadarType;	//�״����ͣ�0-���״�,1-�������״2-����ά�ǣ�3-����΢����0xff-��������
	BYTE    byLevelAngle;   //��ˮƽ�����ɽǶ�,Ĭ��Ϊ25��(0��90��)
	WORD    wRadarSensitivity; //�״������� 
    BYTE    byRes[20];
}NET_ITC_RADAR_PARAM, *LPNET_ITC_RADAR_PARAM;

//����RS485�״ﴥ������
typedef struct tagNET_ITC_POST_RS485_RADAR_PARAM
{
	BYTE byRelatedLaneNum;//�����ĳ�������
	BYTE byRes1[3];
    NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
    NET_ITC_LANE_PARAM struLane[MAX_ITC_LANE_NUM]; //�����ĳ�������
    NET_ITC_RADAR_PARAM struRadar;  //�״����
    BYTE  byRes[32];
}NET_ITC_POST_RS485_RADAR_PARAM, *LPNET_ITC_POST_RS485_RADAR_PARAM;

typedef struct tagNET_ITC_VTLANE_PARAM
{
	BYTE byRelatedDriveWay;//�����ĳ�����
	BYTE bySpeedCapEn; //�Ƿ����ó���ץ�ģ�0-��1-��
	BYTE bySignSpeed;//��־���٣���λkm/h
	BYTE bySpeedLimit;//����ֵ����λkm/h
	BYTE bySnapTimes; //ץ�Ĵ�����Ĭ��1����0-��ץ�ģ���0-���Ĵ��������5
	BYTE byRes1[3];
	NET_ITC_INTERVAL_PARAM struInterval; //ץ�ļ������
	BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO����ڣ�����ͬʱ�������
	BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
	BYTE byRes2[3];
	NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //������ʶ����
    BYTE  byRes[16];
}NET_ITC_VTLANE_PARAM, *LPNET_ITC_VTLANE_PARAM;

typedef struct tagNET_ITC_VTCOIL_INFO
{
	NET_VCA_RECT struLaneRect;  /*������Ȧ����*/
	BYTE byTrigFlag; //������־��0-��ͷ������1-��β������2-��ͷ/��β������
	BYTE byTrigSensitive;  //���������ȣ�1-100
	BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO�����(����ͬʱ�������)������0��ʾIO�����1������1��ʾIO�����2���Դ����ƣ�0-��������1-����
	BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
	BYTE byRes3;
	BYTE byEnableRadar; //�Ƿ������״���٣�0-��1-��
	NET_ITC_VTLANE_PARAM struLane; //�����ĳ�������
    BYTE byRes[32];
}NET_ITC_VTCOIL_INFO, *LPNET_ITC_VTCOIL_INFO;

//����������Ȧ��������
typedef struct tagNET_ITC_POST_VTCOIL_PARAM
{
    BYTE    byRelatedLaneNum;//�����ĳ�������
    BYTE    byIsDisplay; //��Ƶ���Ƿ���ʾ������Ȧ��0-����ʾ��1-��ʾ
    BYTE    byLoopPos; //��䴥����Ȧ��ƫ��Ĭ��10��
    BYTE    byPolarLenType; /*ƫ�����ͣ�0������ƫ�񾵣�1����ʩ�͵�ƫ�񾵡�*/
	BYTE    byDayAuxLightMode; /*���츨������ģʽ��0���޸���������1��LED��������2�����������*/
	BYTE    byVideoLaneNO; //��Ƶ�ο����ȵĲο�������
	BYTE    byVideoLowTh; /*��Ƶ�ο����ȵ���ֵ��ʼ��ֵ��Ĭ��40��*/
	BYTE    byVideoHighTh; /*��Ƶ�ο����ȸ���ֵ��ʼ��ֵ��Ĭ��55��*/
	BYTE    byRecordMode; //¼���־��0-��¼��1-¼��
	BYTE    byRes1[3];
	WORD    wResolutionX;/* �豸��ǰ�ֱ��ʿ�*/
	WORD    wResolutionY;/* �豸��ǰ�ֱ��ʸ�*/
	DWORD   dwDayInitExp; /*��Ƶ�����ع�ʱ��ĳ�ʼֵ2000*/
	DWORD   dwDayMaxExp; /*��Ƶ�����ع�ʱ������ֵ20000*/
	DWORD   dwNightExp; /*�����Ƶ�ع�ʱ�������ֵ3000*/
	DWORD   dwSnapExp; /*ץ���ع�ʱ��*/
	BYTE    byDayInitGain; /*��Ƶ��������ĳ�ʼֵ200*/
	BYTE    byDayMaxGain; /*��Ƶ������������ֵ400*/
	BYTE    byNightGain; /*�����Ƶ����*/
	BYTE    bySnapGain; /*ץ������*/
	DWORD   dwSceneMode; //����ģʽ�� ���SCENE_MODE
	NET_DVR_GEOGLOCATION struGeogLocation; //��ַλ��(Ĭ���㽭)
	NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
	NET_ITC_VTCOIL_INFO struVtCoil[MAX_VL_NUM]; //������Ȧ����
	NET_ITC_RADAR_PARAM struRadar;  //�״����
    BYTE  byRes[32];
}NET_ITC_POST_VTCOIL_PARAM, *LPNET_ITC_POST_VTCOIL_PARAM;

//����IO���̵Ʋ���
typedef struct tagNET_ITC_SINGLE_IOTL_PARAM
{
    BYTE byEnable; //�Ƿ����ã�0-�����ã�1-����
	BYTE byLightIO; //���̵�IO��0-IO1,1-IO2,2-IO3,3-IO4,4-IO5,5-IO6
	BYTE byTrafficLight; //���̵���Ч״̬0-�ߵ�ƽ��ƣ��͵�ƽ�̵ƣ�1-�ߵ�ƽ�̵ƣ��͵�ƽ���
	BYTE byTrigIO;//������IO�ţ�0-IO1,1-IO2,2-IO3,3-IO4,4-IO5,5-IO6
	BYTE byTrigIOStatus;//����IO�ڵ�״̬��Ĭ��0����0-�½��أ�1-�����أ�2-�����غ��½��أ�3-�ߵ�ƽ��4-�͵�ƽ
	BYTE byRelatedDriveWay;//�����ĳ�����
	BYTE byRecordEnable;//���������¼���־��0-��¼��1-¼��
	BYTE byRecordType;//�����¼�����ͣ�0-Ԥ¼��1-��ʱ¼��
	BYTE byPreRecordTime;//�����¼��Ƭ��Ԥ¼ʱ�䣨Ĭ��0������λ����
	BYTE byRecordDelayTime;//�����¼��Ƭ����ʱʱ�䣨Ĭ��0������λ����
	BYTE byRecordTimeOut;//���������¼��ʱʱ�䣨�룩
	BYTE byRedSnapTimes; //���ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5�� 
	BYTE byGreenSnapTimes; //�̵�ץ�Ĵ�����0-��ץ�ģ���0-���Ĵ��������5��
	BYTE byRes1[2];
	BYTE byIntervalType;	//������ͣ�Ĭ�ϰ�ʱ�䣩��0-ʱ����Ч,1-������Ч
	WORD wRedInterval[MAX_INTERVAL_NUM];//������ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
	WORD wGreenInterval[MAX_INTERVAL_NUM];//�̵����ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
	BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO����ڣ�����ͬʱ�������
	BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
	BYTE byRes2[3];
	NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //��ʶ�������
    BYTE  byRes[32];
}NET_ITC_SINGLE_IOTL_PARAM, *LPNET_ITC_SINGLE_IOTL_PARAM;

//�羯IO���̵Ʋ���
typedef struct tagNET_ITC_EPOLICE_IOTL_PARAM
{
	NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
	NET_ITC_SINGLE_IOTL_PARAM struSingleIOTL[MAX_IOSPEED_GROUP_NUM]; //����IO���̵Ʋ���
    BYTE  byRes[32];
}NET_ITC_EPOLICE_IOTL_PARAM, *LPNET_ITC_EPOLICE_IOTL_PARAM;

typedef enum _ITC_SERIAL_PROTOCOL_
{
	ITC_PROTOCOL_UNKNOW = 0, /*δ֪*/
	ITC_SINGLE_COIL_PROTOCOL_MODE1 = 1, /*����Ȧ������Э��ģʽ1����ʾΪ����_��1_��1_��1_1��������뿪���뿪��ʱץ�ģ��뿪��ʶ���ϴ�3�ų���ͼƬ�ͳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE1 = 2, /*˫��Ȧ������Э��ģʽ1����ʾΪ��˫_��1_��1_��2_1��������1���뿪1���뿪2ץ�ģ��뿪1��ʶ���ϴ�3�ų���ͼƬ�ͳ��ƽ����Ĭ�ϣ�*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE2 = 3, /*˫��Ȧ������Э��ģʽ2����ʾΪ��˫_��1_��2_��2_1�����뿪1���뿪2���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�3�ų���ͼƬ�ͳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE3 = 4, /*˫��Ȧ������Э��ģʽ3����ʾΪ��˫_��2_��1_��2_1��������2���뿪1���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�3�ų���ͼƬ�ͳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE4 = 5, /*˫��Ȧ������Э��ģʽ4����ʾΪ��˫/��_��2_��2_��2_1��������2���뿪2���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�3�ų���ͼƬ�ͳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE5 = 6, /*˫��Ȧ������Э��ģʽ5����ʾΪ��˫/��_��2_��2_��2_2��������2���뿪2���뿪2��ʱץ�ģ�����2���뿪1����ʶ���ϴ�3�ų���ͼƬ�����Ŷȸߵĳ��ƽ����Ĭ�ϣ�*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE6 = 7, /*˫��Ȧ������Э��ģʽ6����ʾΪ��˫/��_��1_��2_��2_2��������1���뿪2���뿪2��ʱץ�ģ�����1���뿪1����ʶ���ϴ�3�ų���ͼƬ�����Ŷȸߵĳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE7 = 8, /*˫��Ȧ������Э��ģʽ7����ʾΪ��˫_��1_��1_��2_1��������1���뿪1���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�����ͼƬ�������뿪1������Ƶ���1���뿪1���뿪2��ʱ���ͳ��ƽ��*/
	ITC_DOUBLE_COIL_PROTOCOL_MODE8 = 9, /*˫��Ȧ������Э��ģʽ8����ʾΪ��˫_��1_��1_��2_2��������1���뿪1���뿪2��ʱץ�ģ�����1���뿪1����ʶ���ϴ�����ͼƬ�������뿪1������Ƶ���1���뿪1���뿪2��ʱ�������Ŷȸߵĳ��ƽ����Ĭ�ϣ�*/
	ITC_SINGLE_COIL_PROTOCOL_MODE2 = 10, /*����Ȧ������Э��ģʽ2����ʾΪ����_��1_��1_��1_2��������뿪���뿪��ʱץ�ģ�����뿪����ʶ���ϴ�����ͼƬ�������뿪������Ƶ���뿪���뿪��ʱ�������Ŷȸߵĳ��ƽ����Ĭ�ϣ�*/
	ITC_OTHER_PROTOCOL = 0xff /*����������Э��(������demo�������ã�3.3֮��汾������demo�Ϳؼ�����֧�ִ�ֵ)*/
}ITC_SERIAL_PROTOCOL;

//���������߼�ץ������
typedef enum _ITC_NORMAL_PASS_SERIAL_PROTOCOL_
{
	ITC_NORMAL_PASS_SERIAL_UNKNOW     =  0,   //δ֪
	ITC_NORMAL_PASS_PROTOCOL_MODE1  = 1,  //����Ȧ���뿪ץ�ģ���ʶ�ϴ���Ĭ�ϣ�
	ITC_NORMAL_PASS_PROTOCOL_MODE2 =2,  //����Ȧ������뿪ץ�ģ�����ʶ�����ϴ��뿪����ͼƬ�����Ŷȸߵĳ��ƽ��
	ITC_NORMAL_PASS_PROTOCOL_MODE3 =3,  //˫��Ȧ���뿪1ץ�ģ���ʶ�ϴ���Ĭ�ϣ�
	ITC_NORMAL_PASS_PROTOCOL_MODE4 =4, //˫��Ȧ������1���뿪1ץ�ģ�����ʶ�����ϴ��뿪1����ͼƬ�����Ŷȸߵĳ��ƽ��
	ITC_NORMAL_PASS_PROTOCOL_MODE5 =5, //˫��Ȧ������2���뿪1ץ�ģ�����ʶ�����ϴ��뿪1����ͼƬ�����Ŷȸߵĳ��ƽ��
}ITC_NORMAL_PASS_SERIAL_PROTOCOL;

//����Υ���߼�ץ������
typedef enum _ITC_INVERSE_SERIAL_PROTOCOL_
{
	ITC_INVERSE_SERIAL_UNKNOW     =  0,   //δ֪
	ITC_INVERSE_PROTOCOL_MODE1  = 1,  //��ץ��
	ITC_INVERSE_PROTOCOL_MODE2 =2,  //����1��ץ2�š��뿪2ץ�ģ�����1���ž���ʶ���ϴ�3�ų���ͼƬ�����Ŷȸߵĳ��ƽ��
	ITC_INVERSE_PROTOCOL_MODE3 =3,  //����1���뿪2ץ�ģ�����1��ʶ���ϴ�2�ų���ͼƬ�ͳ��ƽ��
}ITC_INVERSE_SERIAL_PROTOCOL;

//����Υ���߼�ץ������
typedef enum _ITC_SPEED_SERIAL_PROTOCOL_
{
	ITC_SPEED_SERIAL_UNKNOW     =  0,   //δ֪
	ITC_SPEED_PROTOCOL_MODE1  = 1,  //��ץ��
	ITC_SPEED_PROTOCOL_MODE2 =2,  //˫/����Ȧ���뿪1���뿪2���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�����ͼƬ�������뿪1�������뿪1���뿪2���뿪2��ʱ���ͳ��ƽ��
	ITC_SPEED_PROTOCOL_MODE3 =3,  //˫/����Ȧ���뿪1���뿪2���뿪2��ʱץ�ģ��뿪1��ʶ���ϴ�����ͼƬ�������뿪1�������뿪1���뿪2���ͳ��ƽ��
}ITC_SPEED_SERIAL_PROTOCOL;

//����������
typedef struct tagNET_ITC_SERIAL_INFO
{
	BYTE bySerialProtocol; //������Э�����ͣ����ITC_SERIAL_PROTOCOL
	BYTE byIntervalType;	//������ͣ�Ĭ�ϰ�ʱ�䣩��0-ʱ����Ч,1-������Ч
	WORD wInterval;//���ļ��ʱ�䣨��λms�������ļ�����루��λ���ף�����byIntervalTypeΪ0ʱ����ʾ���ʱ�䣬��byIntervalTypeΪ1ʱ����ʾ����
	BYTE byNormalPassProtocol; //��������ץ��Э�����ͣ����ITC_NORMAL_PASS_SERIAL_PROTOCOL
	BYTE byInverseProtocol; //����ץ��Э�����ͣ����ITC_INVERSE_SERIAL_PROTOCOL
	BYTE bySpeedProtocol; //����ץ��Э�����ͣ����ITC_SPEED_SERIAL_PROTOCOL
    BYTE byRes[9];
}NET_ITC_SERIAL_INFO, *LPNET_ITC_SERIAL_INFO;

typedef struct tagNET_ITC_EPOLICE_LANE_PARAM
{
	BYTE byEnable; //�Ƿ����øó�����0-�����ã�1-����
	BYTE byRelatedDriveWay;//�����ĳ�����
	WORD wDistance; //��Ȧ���룬��λ����
	BYTE byRecordEnable;//���������¼���־��0-��¼��1-¼��
	BYTE byRecordType;//�����¼�����ͣ�0-Ԥ¼��1-��ʱ¼��
	BYTE byPreRecordTime;//�����¼��Ƭ��Ԥ¼ʱ�䣨Ĭ��0������λ����
	BYTE byRecordDelayTime;//�����¼��Ƭ����ʱʱ�䣨Ĭ��0������λ����
	BYTE byRecordTimeOut;//���������¼��ʱʱ�䣨�룩
	BYTE bySignSpeed;//��־����(��ʽ�羯ģʽ��Ч)����λkm/h
	BYTE bySpeedLimit;//����ֵ(��ʽ�羯ģʽ��Ч)����λkm/h
	BYTE byOverlayDriveWay; //OSD���ӵĳ�����
	NET_ITC_SERIAL_INFO struSerialInfo; //����������
	BYTE byRelatedIOOut[MAX_IOOUT_NUM]; //������IO����ڣ�����ͬʱ�������
	BYTE byFlashMode;   //�������˸ģʽ��0-ͬʱ����1-������
	BYTE bySerialType; //���������ͣ�0-˽�г�������1-˽��OEM��������2-����������
	BYTE byRes2[2];
	NET_ITC_PLATE_RECOG_REGION_PARAM struPlateRecog[MAX_LANEAREA_NUM]; //������ʶ����
    BYTE  byRes[16];
}NET_ITC_EPOLICE_LANE_PARAM, *LPNET_ITC_EPOLICE_LANE_PARAM;

//�羯/��ʽ�羯RS485��������������
typedef struct tagNET_ITC_EPOLICE_RS485_PARAM
{
	BYTE byRelatedLaneNum;//�����ĳ�������
	BYTE byRes1[3]; 
	NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
	NET_ITC_EPOLICE_LANE_PARAM struLane[MAX_ITC_LANE_NUM]; //�����ĳ�������
    BYTE  byRes[32];
}NET_ITC_EPOLICE_RS485_PARAM, *LPNET_ITC_EPOLICE_RS485_PARAM;

typedef union tagNET_ITC_TRIGGER_PARAM_UNION
{
	DWORD  uLen[1070];			//����
	NET_ITC_POST_IOSPEED_PARAM    struIOSpeed; //�����ڣ�IO���ٲ��� 
	NET_ITC_POST_SINGLEIO_PARAM   struSingleIO; //�����ڣ���IO����
	NET_ITC_POST_RS485_PARAM       struPostRs485; //�����ڣ�RS485����������
	NET_ITC_POST_RS485_RADAR_PARAM  struPostRadar; //�����ڣ�RS485�״����
	NET_ITC_POST_VTCOIL_PARAM     struVtCoil; //�����ڣ�������Ȧ����
	NET_ITC_EPOLICE_IOTL_PARAM     struIOTL;		//���羯��IO���̵Ʋ���
	NET_ITC_EPOLICE_RS485_PARAM    struEpoliceRs485; //���羯��RS485��������������
	NET_ITC_EPOLICE_RS485_PARAM  struPERs485;	//����ʽ�羯��RS485��������������
}NET_ITC_TRIGGER_PARAM_UNION, *LPNET_ITC_TRIGGER_PARAM_UNION;

//�������������ṹ
typedef struct tagNET_ITC_SINGLE_TRIGGERCFG
{
	BYTE  byEnable;	//�Ƿ����øô���ģʽ��0-��1-��
    BYTE  byRes1[3];
    DWORD dwTriggerType; //�������ͣ����ITC_TRIGGERMODE_TYPE
    NET_ITC_TRIGGER_PARAM_UNION uTriggerParam; //��������
    BYTE  byRes[64];
}NET_ITC_SINGLE_TRIGGERCFG, *LPNET_ITC_SINGLE_TRIGGERCFG;

//���������ṹ
typedef struct tagNET_ITC_TRIGGERCFG
{
	DWORD   dwSize;			//�ṹ����
	NET_ITC_SINGLE_TRIGGERCFG  struTriggerParam;  //������������
    BYTE    byRes[32];
}NET_ITC_TRIGGERCFG, *LPNET_ITC_TRIGGERCFG;

//����IO�����źŵƲ���
typedef struct tagNET_ITC_SINGLE_IO_LIGHT_PARAM
{
	BYTE byLightType; //��ͨ�Ƶ�������,0-��ת��,1-ֱ�е�,2-��ת��
	BYTE byRelatedIO; //������IO�ں�
	BYTE byRedLightState; //��Ƶ�ƽ״̬��0-�ߵ�ƽ��ƣ�1-�͵�ƽ���
    BYTE byRes[17];
}NET_ITC_SINGLE_IO_LIGHT_PARAM, *LPNET_ITC_SINGLE_IO_LIGHT_PARAM;

//IO�����źŵƲ���
typedef struct tagNET_ITC_IO_LIGHT_PARAM
{
	NET_ITC_SINGLE_IO_LIGHT_PARAM struIOLight[MAX_LIGHT_NUM]; //����IO�����źŵƲ���
    BYTE byRes[8];
}NET_ITC_IO_LIGHT_PARAM, *LPNET_ITC_IO_LIGHT_PARAM;

//����485�����źŵƲ���
typedef struct tagNET_ITC_SINGLE_RS485_LIGHT_PARAM
{
	BYTE byLightType; //��ͨ�Ƶ������ͣ�0-��ת�ƣ�1-ֱ�еƣ�2-��ת��
	BYTE byRelatedLightChan; //�����ĺ��̵Ƽ����ͨ����
	BYTE byInputLight;	//������źŵ����ͣ�0-�Ӻ�ƣ�1-���̵�
    BYTE byRes[17];
}NET_ITC_SINGLE_RS485_LIGHT_PARAM, *LPNET_ITC_SINGLE_RS485_LIGHT_PARAM;

//485�����źŵƲ���
typedef struct tagNET_ITC_RS485_LIGHT_PARAM
{
	NET_ITC_SINGLE_RS485_LIGHT_PARAM struRS485Light[MAX_LIGHT_NUM]; //����485�����źŵƲ���
    BYTE byRes[8];
}NET_ITC_RS485_LIGHT_PARAM, *LPNET_ITC_RS485_LIGHT_PARAM;

typedef struct
{
	short left;
	short top;
	short right;
	short bottom;
}NET_POS_PARAM;

//������Ƶ��⽻ͨ�źŵƲ����ṹ
typedef struct tagNET_ITC_SINGLE_VIDEO_DETECT_LIGHT_PARAM
{
	BYTE byLightNum; //��ͨ�Ƹ���
	BYTE byStraightLight; //�Ƿ���ֱ�б�־�ƣ�0-�� ��1-��
	BYTE byLeftLight; //�Ƿ�����ת��־�ƣ�0-��1-��
	BYTE byRightLight; //�Ƿ�����ת��־�ƣ�0-��1-��
	BYTE byRedLight;//�Ƿ��к�ƣ�0-��1-��
	BYTE byGreenLight; //�Ƿ����̵ƣ�0-��1-��
	BYTE byYellowLight; //�Ƿ��лƵƣ�0-��1-��
	BYTE byRes1;
	NET_POS_PARAM struLightRect; //��ͨ������
    BYTE byRes[16];
}NET_ITC_SINGLE_VIDEO_DETECT_LIGHT_PARAM, *LPNET_ITC_SINGLE_VIDEO_DETECT_LIGHT_PARAM;

#define  MAX_VIDEO_DETECT_LIGHT_NUM  12
//��Ƶ��⽻ͨ�źŵƲ����ṹ(������12�������⣬488�ֽ�)
typedef struct tagNET_ITC_VIDEO_DETECT_LIGHT_PARAM
{
	NET_ITC_SINGLE_VIDEO_DETECT_LIGHT_PARAM struTrafficLight[MAX_VIDEO_DETECT_LIGHT_NUM]; //������Ƶ����źŵƲ���
	BYTE byRes[8];
}NET_ITC_VIDEO_DETECT_LIGHT_PARAM, *LPNET_ITC_VIDEO_DETECT_LIGHT_PARAM;

//��ͨ�źŵƽ������
typedef union tagNET_ITC_LIGHT_ACCESSPARAM_UNION
{
	DWORD uLen[122];
	NET_ITC_IO_LIGHT_PARAM struIOLight; //IO�����źŵƲ���
	NET_ITC_RS485_LIGHT_PARAM struRS485Light; //485�����źŵƲ���
	NET_ITC_VIDEO_DETECT_LIGHT_PARAM struVideoDelectLight; //��Ƶ����źŵƲ���
}NET_ITC_LIGHT_ACCESSPARAM_UNION, *LPNET_ITC_LIGHT_ACCESSPARAM_UNION;

//��ͨ�źŵƲ����ṹ
typedef struct tagNET_ITC_TRAFFIC_LIGHT_PARAM
{
	BYTE bySource; //��ͨ�źŵƽ���Դ��0-IO���룬1-RS485����
	BYTE byRes1[3];
	NET_ITC_LIGHT_ACCESSPARAM_UNION struLightAccess;//�źŵƽ������
    BYTE byRes[32];
}NET_ITC_TRAFFIC_LIGHT_PARAM, *LPNET_ITC_TRAFFIC_LIGHT_PARAM;

//Υ�������ͺ궨��
typedef enum _ITC_VIOLATION_DETECT_TYPE_
{
    ITC_VIOLATION_POST = 0x01, //����ץ��
	ITC_VIOLATION_DRIVELINE = 0x02,//ѹ������ץ��
	ITC_VIOLATION_REVERSE = 0x04,//����ץ��
	ITC_VIOLATION_REDLIGHT = 0x08,//�����ץ��
	ITC_VIOLATION_DIRECTION = 0x10,//����������ʻץ��
	ITC_VIOLATION_INTERSECTION_CONGEST = 0x20,//·������ץ��
	ITC_VIOLATION_NONDRIVEWAY = 0x40,  //��ռ��ץ��
	ITC_VIOLATION_CHANGELANE = 0x80 //Υ�����
}ITC_VIOLATION_DETECT_TYPE;

//Υ��������ṹ
typedef struct tagNET_ITC_VIOLATION_DETECT_PARAM
{
    DWORD dwVioDetectType; //Υ��������, ��λ��ʾ, ���ITC_VIOLATION_DETECT_TYPE ,0-������,1-����
	BYTE byDriveLineSnapTimes; //ѹ������ץ������,2-3
	BYTE byReverseSnapTimes; //����ץ��,2-3
	WORD wStayTime; //��ռ��ͣ��ʱ�䣨��ʱ���ץ�ģ�����λs
	BYTE byRes1[28];
	WORD wStopLineDis;  //�羯��2��Υ��ͼƬ��ֹͣ�ߵ���̾��룬[0,300]��λ(����)
    BYTE byRes[14];
}NET_ITC_VIOLATION_DETECT_PARAM, *LPNET_ITC_VIOLATION_DETECT_PARAM;

//������;���Ͷ���
typedef enum _ITC_LANE_USEAGE_TYPE_
{
	ITC_LANE_USEAGE_UNKNOW     =  0,   //δ֪
	ITC_LANE_CARRIAGEWAY  = 1,  //��������
	ITC_LANE_BUS      = 2,  //������ר�õ�
	ITC_LANE_FAST  = 3,  //�쳵��
	ITC_LANE_SLOW  = 4,  //������
	ITC_LANE_MOTOR     = 5,   //Ħ�г���
	ITC_LANE_NONMOTOR  = 6,  //�ǻ�������
	ITC_LANE_REVERSE_LANE = 7, //���򳵵�
	ITC_LANE_BAN_TRUCKS  = 8 // ��ֹ��������
}ITC_LANE_USEAGE_TYPE;

//�����������Ͷ���
typedef enum _ITC_LANE_DIRECTION_TYPE_
{
	ITC_LANE_DIRECTION_UNKNOW     =  0,   //δ֪
	ITC_LANE_LEFT      = 1,  //��ת
	ITC_LANE_STRAIGHT  = 2,  //ֱ��
	ITC_LANE_LEFT_STRAIGHT = 3, //��ת+ֱ��
	ITC_LANE_RIGHT  = 4,  //��ת
	ITC_LANE_LEFT_RIGHT = 5, //��ת+��ת
	ITC_LANE_RIGHT_STRAIGHT = 6, //��ת+ֱ��
	ITC_LANE_LEFT_RIGHT_STRAIGHT = 7, //��ת+��ת+ֱ��
	ITC_LANE_LEFT_WAIT  =  9,  //��ת����
	ITC_LANE_STRAIGHT_WAIT = 10 //ֱ�д���
}ITC_LANE_DIRECTION_TYPE; 

//�������Բ����ṹ
typedef struct tagNET_ITC_LANE_LOGIC_PARAM
{
	BYTE byUseageType; //������;���ͣ����ITC_LANE_USEAGE_TYPE
	BYTE byDirectionType; //�����������ͣ����ITC_LANE_DIRECTION_TYPE
    BYTE byRes[34];
}NET_ITC_LANE_LOGIC_PARAM, *LPNET_ITC_LANE_LOGIC_PARAM;

//�����Ͷ���
typedef enum _ITC_LINE_TYPE_
{
	ITC_LINT_UNKNOW     =  0,   //δ֪
	ITC_LINE_WHITE      = 1,  //������İ�ʵ��
	ITC_LINE_STOP       = 2, //����ֹͣ��
	ITC_LINE_SINGLE_YELLOW = 3, //������
	ITC_LINE_DOUBLE_YELLOW = 4, //˫����
	ITC_LINE_GUARD_RAIL = 5, //���������л���
	ITC_LINE_NO_CROSS = 6 //�����޷���Խ�ĳ�����
}ITC_LINE_TYPE;

//��Ƶ�羯�߽ṹ
typedef struct tagNET_ITC_LINE
{
	NET_VCA_LINE struLine; //�߲���
	BYTE byLineType; //�����ͣ����ITC_LINE_TYPE
	BYTE byRes[7];
}NET_ITC_LINE, *LPNET_ITC_LINE;

//Υ�����߲����ṹ
typedef struct tagNET_ITC_VIOLATION_DETECT_LINE
{
	NET_ITC_LINE  struLaneLine; //�����߲���
	NET_ITC_LINE  struStopLine; //ֹͣ�߲���
	NET_ITC_LINE  struRedLightLine; //����ƴ����߲���
	NET_ITC_LINE  struCancelLine; //ֱ�д���λ��ȡ����
	NET_ITC_LINE struWaitLine; //������ֹͣ�߲���
    NET_ITC_LINE struRes[8];
}NET_ITC_VIOLATION_DETECT_LINE, *LPNET_ITC_VIOLATION_DETECT_LINE;

//����������Ƶ�羯���������ṹ
typedef struct tagNET_ITC_LANE_VIDEO_EPOLICE_PARAM
{
	BYTE byLaneNO; //�����ĳ�����
    BYTE bySensitivity; //��Ȧ�����ȣ�[1,100]
	BYTE byRes1[2];
	NET_ITC_LANE_LOGIC_PARAM struLane; //��������
	NET_ITC_VIOLATION_DETECT_PARAM struVioDetect; //Υ�������
	NET_ITC_VIOLATION_DETECT_LINE struLine; //Υ������
	NET_ITC_POLYGON struPlateRecog; //��ʶ�������
	BYTE byRecordEnable;//���������¼���־��0-��¼��1-¼��
	BYTE byRecordType;//�����¼�����ͣ�0-Ԥ¼��1-��ʱ¼��
	BYTE byPreRecordTime;//�����¼��Ƭ��Ԥ¼ʱ�䣨Ĭ��0������λ����
	BYTE byRecordDelayTime;//�����¼��Ƭ����ʱʱ�䣨Ĭ��0������λ����
	BYTE byRecordTimeOut;//���������¼��ʱʱ�䣨�룩
    BYTE byRes[59];
}NET_ITC_LANE_VIDEO_EPOLICE_PARAM, *LPNET_ITC_LANE_VIDEO_EPOLICE_PARAM;

//��Ƶ�羯���������ṹ
typedef struct tagNET_ITC_VIDEO_EPOLICE_PARAM
{
	BYTE byEnable;	//�Ƿ����ã�0-�����ã�1-����
	BYTE byLaneNum; //ʶ��ĳ�������
	BYTE byRes1[2];
	NET_ITC_PLATE_RECOG_PARAM struPlateRecog; //��ʶ����
	NET_ITC_TRAFFIC_LIGHT_PARAM struTrafficLight; //��ͨ�źŵƲ���
	NET_ITC_LANE_VIDEO_EPOLICE_PARAM struLaneParam[MAX_ITC_LANE_NUM]; //����������
	NET_ITC_LINE  struLaneBoundaryLine; //�����߽��ߣ����ұ߳����ı߽��ߣ�
	NET_ITC_LINE  struLeftLine; //��ת��ֽ���
	NET_ITC_LINE  struRightLine; //��ת��ֽ���
	NET_ITC_LINE  struTopZebraLine; //�ϲ�������
	NET_ITC_LINE  struBotZebraLine; //�²�������
    BYTE  byRes[32];
}NET_ITC_VIDEO_EPOLICE_PARAM, *LPNET_ITC_VIDEO_EPOLICE_PARAM;

typedef union tagNET_ITC_VIDEO_TRIGGER_PARAM_UNION
{
	DWORD  uLen[1150];			
	NET_ITC_VIDEO_EPOLICE_PARAM struVideoEP; //��Ƶ�羯����
}NET_ITC_VIDEO_TRIGGER_PARAM_UNION, *LPNET_ITC_VIDEO_TRIGGER_PARAM_UNION;

typedef struct tagNET_ITC_VIDEO_TRIGGER_PARAM
{
	DWORD dwSize;
	DWORD dwMode; //����ģʽ�����ITC_TRIGGERMODE_TYPE
    NET_ITC_VIDEO_TRIGGER_PARAM_UNION uVideoTrigger; //����ģʽ����
    BYTE  byRes[32];
}NET_ITC_VIDEO_TRIGGER_PARAM, *LPNET_ITC_VIDEO_TRIGGER_PARAM;

typedef struct tagNET_DVR_STATUS_DETECTCFG
{
	DWORD  dwSize;			//�ṹ����
	BYTE   byEnableTrigIODetect; //��������IO״̬��⣬1-�ǣ�0-��
	BYTE   byEnableFlashOutDetect; //����ͬ�����״̬��⣬1-�ǣ�0-��
	BYTE   byEnableRS485Detect; //����RS485����״̬��⣬1-�ǣ�0-��
	BYTE   byRes[29];
}NET_DVR_STATUS_DETECTCFG, *LPNET_DVR_STATUS_DETECTCFG;

typedef enum _ITC_STATUS_DETECT_TYPE_
{
	ITC_STATUS_DETECT_NULL = 0,		//δ֪
	ITC_STATUS_DETECT_TRIGGERIO,	//����IO
	ITC_STATUS_DETECT_FLASHOUT,     //ͬ�����
	ITC_STATUS_DETECT_RS485, //RS485
	ITC_STATUS_DETECT_TRIGGERTYPE //�������ͣ�������
}ITC_STATUS_DETECT_TYPE;

typedef struct tagNET_ITC_TRIGGERIO_INFO
{
	BYTE byTriggerIOIndex[MAX_IOIN_NUM]; //����IO��
	BYTE byRes[40]; 
}NET_ITC_TRIGGERIO_INFO, *LPNET_ITC_TRIGGERIO_INFO;

typedef struct tagNET_ITC_FLASHOUT_INFO
{
	BYTE byFlashOutIndex[MAX_IOOUT_NUM]; //ͬ�������
	BYTE byRes[44]; 
}NET_ITC_FLASHOUT_INFO, *LPNET_ITC_FLASHOUT_INFO;

typedef struct tagNET_ITC_SERIAL_CHECKINFO
{
	BYTE bySerialIndex[MAX_ITC_SERIALCHECK_NUM]; //485����У������0-��Ч,1-��Ч, bySerialIndex[0]��ʾ��ȷ��ͷ, bySerialIndex[1]��ʾ��ȷ��β
	BYTE byRes[40]; 
}NET_ITC_SERIAL_CHECKINFO, *LPNET_ITC_SERIAL_CHECKINFO;

typedef struct tagNET_ITC_TRIGGERTYPE_INFO
{
	BYTE byTrigTypeIndex; //��������ֵ
	BYTE byRes[47]; 
}NET_ITC_TRIGGERTYPE_INFO, *LPNET_ITC_TRIGGERTYPE_INFO;

typedef union tagNET_ITC_STATUS_UNION
{
	BYTE   uLen[48];			//����
	NET_ITC_TRIGGERIO_INFO struTrigIO; //����IO�ں�
	NET_ITC_FLASHOUT_INFO struFlashOut; //ͬ�����
	NET_ITC_SERIAL_CHECKINFO struSerial;  //����
	NET_ITC_TRIGGERTYPE_INFO struTrigType; //�������ͣ�������
}NET_ITC_STATUS_UNION, *LPNET_ITC_STATUS_UNION;

typedef struct tagNET_ITC_STATUS_DETECT_RESULT
{
	ITC_STATUS_DETECT_TYPE dwStatusType;//״̬������ͣ����ITC_STATUS_DETECT_TYPE
	NET_ITC_STATUS_UNION uStatusParam; //״̬�����
	DWORD dwHoldTime; //��������ʱ�䣨����������λ��ms
	BYTE byRes[32];
}NET_ITC_STATUS_DETECT_RESULT, *LPNET_ITC_STATUS_DETECT_RESULT;

typedef struct tagNET_DVR_SETUPALARM_PARAM
{
    DWORD dwSize;
	BYTE byLevel; //�������ȼ���0-һ�ȼ����ߣ���1-���ȼ����У���2-���ȼ����ͣ�
	BYTE byAlarmInfoType; //�ϴ�������Ϣ���ͣ�ץ�Ļ�֧�֣���0-�ϱ�����Ϣ��NET_DVR_PLATE_RESULT����1-�±�����Ϣ(NET_ITS_PLATE_RESULT)2012-9-28
	BYTE byRes[14];
}NET_DVR_SETUPALARM_PARAM, *LPNET_DVR_SETUPALARM_PARAM;

typedef struct tagNET_ITC_VIDEO_TRIGGER_COND
{
    DWORD dwSize;
	DWORD dwChannel;
    DWORD dwTriggerMode; //��Ƶ����ģʽ���ͣ����ITC_TRIGGERMODE_TYPE
    BYTE byRes[16];
}NET_ITC_VIDEO_TRIGGER_COND, *LPNET_ITC_VIDEO_TRIGGER_COND;

/********************************���ܸ���IPC V3.1 end*********************************/

/********************************�������������*********************************/
typedef enum _VCA_DATABASE_TYPE_
{
	DATABASE_NULL = 0, //δ֪
	DATABASE_SNAP,    //ץ�����ݿ�
	DATABASE_FACE    //�������ݿ�
}VCA_DATABASE_TYPE;

typedef struct tagNET_VCA_DATABASE_PARAM
{
	DWORD dwSize;
	DWORD dwDataBaseID; //���ݿ�ID���豸���ɣ����ʱ��Ч���޸ĺ�ɾ��ʱ��Ч��
	DWORD dwDataBaseType; //���ݿ����ͣ���VCA_DATABASE_TYPE
	BYTE byDataBaseName[NAME_LEN]; //���ݿ�����
	BYTE byAttribute[64]; //���ݿ�����
	BYTE byRes[20];
}NET_VCA_DATABASE_PARAM, *LPNET_VCA_DATABASE_PARAM;

typedef struct tagNET_VCA_FIND_DATABASE_COND
{
	DWORD dwDataBaseType; //���ݿ����ͣ����VCA_DATABASE_TYPE
	BYTE byRes[12]; //����
}NET_VCA_FIND_DATABASE_COND, *LPNET_VCA_FIND_DATABASE_COND;

typedef struct tagNET_VCA_DELETE_DATABASE_COND
{
	DWORD dwSize;
	DWORD dwDataBaseType; //���ݿ����ͣ���VCA_DATABASE_TYPE
	DWORD dwDataBaseID; //���ݿ�ID
	BYTE byRes[64]; //����
}NET_VCA_DELETE_DATABASE_COND, *LPNET_VCA_DELETE_DATABASE_COND;

typedef struct tagNET_VCA_INQUIRE_SNAPDB_COND
{
	DWORD dwChannel;//ͨ����
    NET_DVR_TIME struStartTime;//��ʼʱ��
	NET_DVR_TIME struStopTime;//����ʱ��
	BYTE bySex; //�Ա�0-�����ã�1-�У�2-Ů
	BYTE byRes1[3]; //����
	BYTE byStartBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ʼ�������£��磺201106
	BYTE byEndBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ֹ�������£���201106
	BYTE byAttribute1[NAME_LEN]; //����1
	BYTE byAttribute2[NAME_LEN]; //����2
	BYTE byRes[12]; //����
}NET_VCA_INQUIRE_SNAPDB_COND, *LPNET_VCA_INQUIRE_SNAPDB_COND;

typedef struct tagNET_VCA_INQUIRE_SNAPRECORD_RESULT
{ 
	DWORD dwSize; //�ṹ���С
	DWORD dwDataBaseID;  //���ݿ�ID
	DWORD dwRecordID; //��¼ID
	NET_DVR_TIME struSnapTime;  //ץ��ʱ��
	BYTE bySex; //�Ա�0-�����ã�1-�У�2-Ů
	BYTE byRes1[3]; //����
	BYTE byStartBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ʼ�������£��磺201106
	BYTE byEndBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ֹ�������£���201106
	BYTE byAttribute1[NAME_LEN]; //����1
	BYTE byAttribute2[NAME_LEN]; //����2
	DWORD dwFacePicID; //����ͼID
	DWORD dwFacePicLen;  //����ͼ���ݳ���
	BYTE byRes[80];  //����
	BYTE *pFacePic;    //����ͼ����
}NET_VCA_INQUIRE_SNAPRECORD_RESULT, *LPNET_VCA_INQUIRE_SNAPRECORD_RESULT;

typedef union tagNET_VCA_DELETE_SNAPRECORD_COND_UNION
{ 
	NET_VCA_INQUIRE_SNAPDB_COND struAttribute;  //��Ա��Ϣ������ɾ����
	DWORD dwRecordID; //��¼ID������ɾ����
}NET_VCA_DELETE_SNAPRECORD_COND_UNION, *LPNET_VCA_DELETE_SNAPRECORD_COND_UNION;

typedef enum _VCA_DELETE_RECORD_TYPE_
{
	DELETE_RECORD_SINGLE = 0, //����ɾ��
	DELETE_RECORD_BATCH    //����ɾ��
}VCA_DELETE_RECORD_TYPE;

typedef struct tagNET_VCA_DELETE_SNAPRECORD_COND
{ 
    VCA_DELETE_RECORD_TYPE dwDeleteType; //ɾ����¼����
	NET_VCA_DELETE_SNAPRECORD_COND_UNION uDeleteCond;  //ɾ������
	BYTE  byRes[40]; //����
}NET_VCA_DELETE_SNAPRECORD_COND, *LPNET_VCA_DELETE_SNAPRECORD_COND;

typedef enum _VCA_SEARCH_DATABASE_TYPE_
{
    VCA_NORMAL_SEARCH_DATABASE  = 0x00000000,   //��ͨ����
	VCA_ADVANCE_SEARCH_DATABASE  = 0x00000001  //�߼�����
}VCA_SEARCH_DATABASE_TYPE;

typedef struct tagNET_VCA_ADVANCE_SEARCH_DATABASE_COND
{
    DWORD dwDataBaseType; //���ݿ����ͣ����VCA_DATABASE_TYPE
    DWORD dwDataBaseID; //���ݿ�ID
	DWORD dwFacePicID; //����ͼƬID
	BYTE byRes[36];
}NET_VCA_ADVANCE_SEARCH_DATABASE_COND, *LPNET_VCA_ADVANCE_SEARCH_DATABASE_COND;

typedef union tagNET_VCA_SEARCH_DATABASE_COND_UNION
{
    DWORD uLen[25];
	NET_VCA_REGISTER_PIC struNormalFind; //��ͨ����
	NET_VCA_ADVANCE_SEARCH_DATABASE_COND struAdvanceFind; //�߼�����
}NET_VCA_SEARCH_DATABASE_COND_UNION, *LPNET_VCA_SEARCH_DATABASE_COND_UNION;

typedef struct tagNET_VCA_SEARCH_DATABASE_PARAM
{
	DWORD dwSearchType; //�������ͣ����VCA_SEARCH_DATABASE_TYPE
	NET_VCA_SEARCH_DATABASE_COND_UNION uSearchCond; //��������
	BYTE byRes[16];
}NET_VCA_SEARCH_DATABASE_PARAM, *LPNET_VCA_SEARCH_DATABASE_PARAM;

typedef struct tagNET_VCA_SEARCH_SNAPDB_COND
{ 
	DWORD dwChannel; //ͨ��
    DWORD dwDataBaseID; //���ݿ�ID
	NET_DVR_TIME struStartTime;//��ʼʱ��
	NET_DVR_TIME struStopTime;//����ʱ��
	BYTE bySex; //�Ա�0-�����ã�1-�У�2-Ů
	BYTE byRes1[3]; //����
	BYTE byStartBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ʼ�������£��磺201106
	BYTE byEndBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ֹ�������£���201106
	BYTE byAttribute1[NAME_LEN]; //����1
	BYTE byAttribute2[NAME_LEN]; //����2
	NET_VCA_SEARCH_DATABASE_PARAM struSearchParam;  //��������
	DWORD dwMaxSearchNum; //����������
	WORD wThreshold;  //��ֵ��0-100
	BYTE  byRes[78]; //����
}NET_VCA_SEARCH_SNAPDB_COND, *LPNET_VCA_SEARCH_SNAPDB_COND;

typedef struct tagNET_VCA_SEARCH_SNAPRECORD_RESULT
{ 
	DWORD dwSize; //�ṹ���С
	DWORD dwDataBaseID;  //���ݿ�ID
    DWORD dwRecordID; //��¼ID
	NET_DVR_TIME struSnapTime;//ץ��ʱ��
	BYTE bySex; //�Ա�0-�����ã�1-�У�2-Ů
	BYTE byRes1[3]; //����
	BYTE byStartBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ʼ�������£��磺201106
	BYTE byEndBirthDate[MAX_HUMAN_BIRTHDATE_LEN]; //��ֹ�������£���201106
	BYTE byAttribute1[NAME_LEN]; //����1
	BYTE byAttribute2[NAME_LEN]; //����2
	float fSimilarity; //���ƶȣ�[0.001,1]
	DWORD dwFacePicID; //����ͼID
	DWORD dwFacePicLen;  //����ͼ���ݳ���
	BYTE byRes[80];  //����
	BYTE *pFacePic;    //����ͼ����
}NET_VCA_SEARCH_SNAPRECORD_RESULT, *LPNET_VCA_SEARCH_SNAPRECORD_RESULT;

typedef struct tagNET_VCA_DATARECORD_INFO
{ 
	DWORD dwSize; //�ṹ���С
    DWORD dwRecordID; //��¼ID�����ʱ��Ч���޸�ʱ��Ч
	NET_VCA_HUMAN_ATTRIBUTE struAttribute;  //��Ա��Ϣ
	NET_VCA_REGISTER_PIC struRegisterPic;  //��ԱͼƬ��Ϣ
	BYTE  byRemark1[NAME_LEN]; //��ע��Ϣ1
	BYTE  byRemark2[64]; //��ע��Ϣ2
	BYTE  byRes[32]; //����
}NET_VCA_DATARECORD_INFO, *LPNET_VCA_DATARECORD_INFO;

typedef struct tagNET_VCA_FAST_DATARECORD_INFO
{ 
	DWORD dwSize; //�ṹ���С
	NET_VCA_HUMAN_ATTRIBUTE struAttribute;  //��Ա��Ϣ
	BYTE  byRemark1[NAME_LEN]; //��ע��Ϣ1
	BYTE  byRemark2[64]; //��ע��Ϣ2
	DWORD dwImageLen;  //ͼ�����ݳ���
	BYTE  byRes[80];  //����
	BYTE *pImage;    //ͼ������
}NET_VCA_FAST_DATARECORD_INFO, *LPNET_VCA_FAST_DATARECORD_INFO;

typedef struct tagNET_VCA_INQUIRE_DATARECORD_RESULT
{ 
	DWORD dwSize; //�ṹ���С
	DWORD dwDataBaseID;  //���ݿ�ID
    DWORD dwRecordID; //��¼ID
	NET_VCA_HUMAN_ATTRIBUTE struAttribute;  //��Ա��Ϣ
	BYTE  byRemark1[NAME_LEN]; //��ע��Ϣ1
	BYTE  byRemark2[64]; //��ע��Ϣ2
	DWORD dwFacePicID; //����ͼID
	DWORD dwFacePicLen;  //����ͼ���ݳ���
	BYTE byRes[80];  //����
	BYTE *pFacePic;    //����ͼ����
}NET_VCA_INQUIRE_DATARECORD_RESULT, *LPNET_VCA_INQUIRE_DATARECORD_RESULT;

typedef struct tagNET_VCA_SEARCH_DATARECORD_RESULT
{ 
	DWORD dwSize; //�ṹ���С
	DWORD dwDataBaseID;  //���ݿ�ID
    DWORD dwRecordID; //��¼ID
	NET_VCA_HUMAN_ATTRIBUTE struAttribute;  //��Ա��Ϣ
	BYTE  byRemark1[NAME_LEN]; //��ע��Ϣ1
	BYTE  byRemark2[64]; //��ע��Ϣ2
	float fSimilarity; //���ƶȣ�[0.001,1]
	DWORD dwFacePicID; //����ͼID
	DWORD dwFacePicLen;  //����ͼ���ݳ���
	BYTE byRes[80];  //����
	BYTE *pFacePic;    //����ͼ����
}NET_VCA_SEARCH_DATARECORD_RESULT, *LPNET_VCA_SEARCH_DATARECORD_RESULT;

typedef struct tagNET_VCA_DATARECORD_COND
{ 
	DWORD dwDataBaseID; //���ݿ�ID
	NET_VCA_HUMANATTRIBUTE_COND struAttribute;  //��Ա��Ϣ
	BYTE byRes[80];  //����
}NET_VCA_DATARECORD_COND, *LPNET_VCA_DATARECORD_COND;

typedef union tagNET_VCA_DELETE_RECORD_COND_UNION
{ 
	NET_VCA_HUMANATTRIBUTE_COND struAttribute;  //��Ա��Ϣ������ɾ����
	DWORD dwRecordID; //��¼ID������ɾ����
}NET_VCA_DELETE_RECORD_COND_UNION, *LPNET_VCA_DELETE_RECORD_COND_UNION;

typedef struct tagNET_VCA_DELETE_RECORD_COND
{ 
    VCA_DELETE_RECORD_TYPE dwDeleteType; //ɾ����¼����
	NET_VCA_DELETE_RECORD_COND_UNION uDeleteCond;  //ɾ������
	BYTE  byRes[40]; //����
}NET_VCA_DELETE_RECORD_COND, *LPNET_VCA_DELETE_RECORD_COND;

typedef struct tagNET_VCA_SEARCH_FACEDB_COND
{ 
	DWORD dwDataBaseID; //���ݿ�ID
	NET_VCA_HUMANATTRIBUTE_COND struAttribute;  //��Ա��Ϣ
	NET_VCA_SEARCH_DATABASE_PARAM struSearchParam;  //��������
	DWORD dwMaxSearchNum; //����������
	WORD wThreshold;  //��ֵ��0-100
	BYTE  byRes[78]; //����
}NET_VCA_SEARCH_FACEDB_COND, *LPNET_VCA_SEARCH_FACEDB_COND;

typedef struct tagNET_VCA_FIND_MATCHPIC_COND
{
	DWORD dwSize;
	DWORD dwDataBaseType; //���ݿ����ͣ���VCA_DATABASE_TYPE
	DWORD dwDataBaseID; //���ݿ�ID
	DWORD dwRecordID; //��¼ID
	BYTE byRes[64]; //����
}NET_VCA_FIND_MATCHPIC_COND, *LPNET_VCA_FIND_MATCHPIC_COND;

typedef struct tagNET_VCA_FIND_MATCHPIC_RESULT
{
	DWORD dwSize;
	DWORD dwDataBaseType; //���ݿ����ͣ���VCA_DATABASE_TYPE
	DWORD dwDataBaseID; //���ݿ�ID
	DWORD dwRecordID; //��¼ID
	DWORD dwPicLen; //ͼƬ����
	BYTE byRes[64]; //����
	BYTE *pPicBuffer; //ͼƬ����ָ��
}NET_VCA_FIND_MATCHPIC_RESULT, *LPNET_VCA_FIND_MATCHPIC_RESULT;
/********************************������������� end*********************************/

/********************************IPC �ڶ�����Ƭ��*************************/

typedef struct tagNET_DVR_REMOTECONTROL_ALARM_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	WORD wDealyTime; //�ӳ�ʱ�䣬��λs
	BYTE  byRes[30]; 
}NET_DVR_REMOTECONTROL_ALARM_PARAM, *LPNET_DVR_REMOTECONTROL_ALARM_PARAM;

typedef struct tagNET_DVR_REMOTECONTROL_STUDY_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	BYTE  byRes[16]; 
}NET_DVR_REMOTECONTROL_STUDY_PARAM, *LPNET_DVR_REMOTECONTROL_STUDY_PARAM;

typedef struct tagNET_DVR_WIRELESS_ALARM_STUDY_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	BYTE  byIndex;  //���߱�����ţ�1-8
	BYTE  byRes[15]; 
}NET_DVR_WIRELESS_ALARM_STUDY_PARAM, *LPNET_DVR_WIRELESS_ALARM_STUDY_PARAM;

#define MAX_AUX_ALARM_NUM 8 //�������������
#define MAX_WIRELESS_ALARM_NUM 8 //������߱�������
typedef enum _IPC_AUX_ALARM_TYPE_
{
    IPC_AUXALARM_UNKNOW = 0, //δ֪
	IPC_AUXALARM_PIR = 1, //PIR����
	IPC_AUXALARM_WIRELESS = 2,   //���߱���
	IPC_AUXALARM_CALLHELP = 3  //���ȱ���
}IPC_AUX_ALARM_TYPE;

typedef struct tagNET_IPC_PIR_ALARMCFG
{
    BYTE byAlarmName[NAME_LEN];	/* �������� */
	BYTE byAlarmHandle;	        /* �Ƿ��� 0-������ 1-����*/
	BYTE byRes1[3];			
	NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */	
    BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    BYTE byRes[64];
}NET_IPC_PIR_ALARMCFG, *LPNET_IPC_PIR_ALARMCFG;

//���ȱ���
typedef struct tagNET_IPC_CALLHELP_ALARMCFG
{
	BYTE byAlarmHandle;	        /* �Ƿ��� 0-������ 1-����*/
	BYTE byRes1[3];			
	NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */	
    BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��
    BYTE byRes[64];
}NET_IPC_CALLHELP_ALARMCFG, *LPNET_IPC_CALLHELP_ALARMCFG;

typedef struct tagNET_IPC_SINGLE_WIRELESS_ALARMCFG
{
    BYTE byAlarmName[NAME_LEN];	/* �������� */
	BYTE byAlarmHandle;	        /* �Ƿ��� 0-������ 1-����*/
	BYTE byID; //���߱���ID��1-8
	BYTE byRes1[2];			
	NET_DVR_HANDLEEXCEPTION_V30 struAlarmHandleType;	/* ����ʽ */
	BYTE byRelRecordChan[MAX_CHANNUM_V30]; //����������¼��ͨ��,Ϊ1��ʾ������ͨ��	
    BYTE byRes[32];
}NET_IPC_SINGLE_WIRELESS_ALARMCFG, *LPNET_IPC_SINGLE_WIRELESS_ALARMCFG;

typedef struct tagNET_IPC_WIRELESS_ALARMCFG
{
	NET_IPC_SINGLE_WIRELESS_ALARMCFG struWirelessAlarm[MAX_WIRELESS_ALARM_NUM]; //�������߱�������
    BYTE byRes[32];
}NET_IPC_WIRELESS_ALARMCFG, *LPNET_IPC_WIRELESS_ALARMCFG;

typedef union tagNET_IPC_AUX_ALARMCFG_UNION
{
    DWORD uLen[472];
	NET_IPC_PIR_ALARMCFG struPIRAlarm; //PIR��������
	NET_IPC_WIRELESS_ALARMCFG struWirelessAlarm; //���߱�������
	NET_IPC_CALLHELP_ALARMCFG struCallHelpAlarm; //���ȱ�������
}NET_IPC_AUX_ALARMCFG_UNION, *LPNET_IPC_AUX_ALARMCFG_UNION;

typedef struct tagNET_IPC_SINGLE_AUX_ALARMCFG
{
	BYTE byAlarmType;	   //���������ͣ����IPC_AUX_ALARM_TYPE
	BYTE byRes1[3];			
	NET_IPC_AUX_ALARMCFG_UNION uAlarm; //��������
    BYTE byRes[16];
}NET_IPC_SINGLE_AUX_ALARMCFG, *LPNET_IPC_SINGLE_AUX_ALARMCFG;

typedef struct tagNET_IPC_AUX_ALARMCFG
{
	DWORD dwSize;
    NET_IPC_SINGLE_AUX_ALARMCFG struAlarm[MAX_AUX_ALARM_NUM]; //��������
    BYTE byRes[64];
}NET_IPC_AUX_ALARMCFG, *LPNET_IPC_AUX_ALARMCFG;

typedef union tagNET_IPC_AUXALARM_UPLOAD_UNION
{
    DWORD uLen[66];
    NET_IPC_PIR_ALARMCFG struPIRAlarm; //PIR��������
	NET_IPC_SINGLE_WIRELESS_ALARMCFG struWirelessAlarm; //���߱�������
	NET_IPC_CALLHELP_ALARMCFG struCallHelpAlarm; //���ȱ�������
}NET_IPC_AUXALARM_UPLOAD_UNION, *LPNET_IPC_AUXALARM_UPLOAD_UNION;

typedef struct tagNET_IPC_AUXALARM_RESULT
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	BYTE byAlarmType;	   //���������ͣ����IPC_AUX_ALARM_TYPE
	BYTE byRes1[3];
	NET_IPC_AUXALARM_UPLOAD_UNION struAuxAlarm; //�����������
    BYTE byRes[64];
}NET_IPC_AUXALARM_RESULT, *LPNET_IPC_AUXALARM_RESULT;

typedef struct tagNET_DVR_PREVIEW_DISPLAYCFG
{
	DWORD  dwSize;         // �ṹ���С 
	BYTE byCorrectMode; //У��ģʽ��0-���У����1-оƬУ��
	BYTE byMountType; //��װ���ͣ�0-������1-���棬2-ǽ��
	BYTE byDisplayMode; //��ʾģʽ�����PREVIEW_DISPLAY_MODE
	BYTE byRes[61];
}NET_DVR_PREVIEW_DISPLAYCFG, *LPNET_DVR_PREVIEW_DISPLAYCFG;

typedef enum _PREVIEW_DISPLAY_MODE_
{
    PREVIEW_DISPLAY_NONE = 0, //��
		PREVIEW_DISPLAY_FISHEYE = 1, //����������
		PREVIEW_DISPLAY_PTZ = 2,   //������PTZ
		PREVIEW_DISPLAY_FULL_PANORAMA = 3, //�������Ľ�ȫ��չ��
		PREVIEW_DISPLAY_TWO_AROUNDPANORAMA = 4,  //��������180�㣨around panorama�� ���·���
		PREVIEW_DISPLAY_WIDEPANORAMA_TWO_PTZ = 5, //һ��360�㣨around panorama�� ��������PTZ��������������
		PREVIEW_DISPLAY_ONE_PANORAMA_TWO_PTZ = 6, //�Ľ�ȫ�����ֲ���+2 PTZ����
		PREVIEW_DISPLAY_FISHEYE_THREE_PTZ = 7 //һ�����������PTZ�������Ļ��棩
}PREVIEW_DISPLAY_MODE;

typedef struct tagNET_DVR_REMOTECONTROL_PTZ_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	DWORD dwPTZCommand; //PTZ�������� 
	NET_VCA_POINT struVcaPoint; //Ԥ�����������
	DWORD dwSpeed; //���Ƶ��ٶȣ�ȡֵ��Χ[0,7]
	DWORD dwStop; //ֹͣ������ʼ������0-��ʼ��1-ֹͣ
	BYTE  byRes[32]; 
}NET_DVR_REMOTECONTROL_PTZ_PARAM, *LPNET_DVR_REMOTECONTROL_PTZ_PARAM;

typedef struct tagNET_DVR_PRESET_POINT_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	DWORD dwPTZPresetCmd; //Ԥ�õ�������� 
	NET_VCA_POINT struVcaPoint; //Ԥ�����������
	DWORD dwPresetIndex; //Ԥ�õ����ţ���1��ʼ�������֧��255��Ԥ�õ�
	WORD  wZoomCoordinate;///<Ԥ�õ㴰��Zoomֵ
	BYTE  byRes[30];
}NET_DVR_PRESET_POINT_PARAM, *LPNET_DVR_PRESET_POINT_PARAM;

typedef struct tagNET_DVR_PTZ_CRUISE_PARAM
{
	DWORD dwSize;
	DWORD dwChannel; //ͨ����
	DWORD dwPTZCruiseCmd; //Ѳ���������� 
	NET_VCA_POINT struVcaPoint; //Ԥ�����������
	WORD wCruiseRoute; //Ѳ��·�������֧��32��·������Ŵ�1��ʼ��
	WORD wCruisePoint; //Ѳ���㣬���֧��32���㣨��Ŵ�1��ʼ��
	WORD wInput; //��ͬѲ������ʱ��ֵ��ͬ��Ԥ�õ�(���255)��ʱ��(���255)���ٶ�(���40)
	WORD wZoomCoordinate;///<Ԥ�õ㴰��Zoomֵ
	BYTE  byRes[32];
}NET_DVR_PTZ_CRUISE_PARAM, *LPNET_DVR_PTZ_CRUISE_PARAM;

typedef struct tagNET_DVR_WPS_PARAM
{
	DWORD dwSize;
	BYTE byEnableWps; //����WPS��0-��1-��
	BYTE byRes[31]; 
}NET_DVR_WPS_PARAM, *LPNET_DVR_WPS_PARAM;

typedef struct tagNET_DVR_PIN_PARAM
{
	DWORD dwSize;
	BYTE byPIN[8]; //PIN��
	BYTE byRes[32]; 
}NET_DVR_PIN_PARAM, *LPNET_DVR_PIN_PARAM;

typedef struct tagNET_DVR_WPS_CONNECT_PARAM_
{
	DWORD dwSize;
	BYTE byConnectType; //WPS���ӷ�ʽ��0-PBC,1-AP PIN
	BYTE byRes1[3];
	BYTE byPIN[8]; //PIN��(WPS���ӷ�ʽΪAP PINʱ��Ч)
	BYTE byEssid[IW_ESSID_MAX_SIZE]; //essid(WPS���ӷ�ʽΪAP PINʱ��Ч)
	BYTE byRes[32]; 
}NET_DVR_WPS_CONNECT_PARAM, *LPNET_DVR_WPS_CONNECT_PARAM;

/********************************IPC �ڶ�����Ƭ�� end*************************/

/********************************65���ܽ���� begin*************************/
typedef struct tagNET_DVR_DECODER_JOINT_PARAM
{
    DWORD	dwSize;		// �ṹ���С
    BYTE	byJointed;		//  0 û�й��� 1 �Ѿ�����
    BYTE	byRes1[3];		// �����ֽ�
    NET_DVR_IPADDR	struIP;	// ��������������IP��ַ
    WORD	wPort;			// �������������Ķ˿ں�
	WORD	wChannel;		// �������������Ľ���ͨ����
	BYTE	sDeviceName[NAME_LEN];	//���������������豸����
	BYTE	sChanName[NAME_LEN];	//�������������Ľ���ͨ������
	BYTE	byRes2[32];		// �����ֽ�
}NET_DVR_DECODER_JOINT_PARAM, *LPNET_DVR_DECODER_JOINT_PARAM;
#define  NET_DVR_GET_DECODER_JOINT_CHAN	1151
#define  NET_DVR_SET_DECODER_JOINT_CHAN	1152
/********************************65���ܽ���� end*************************/


/**********************��ģʽͼƬ���Խṹ��***************************/
typedef struct tagNET_DVR_PIC_VIEW_PARAM
{
	DWORD	dwSize;
	NET_DVR_IPADDR	struCuIp; //CU��IP��ַ
	WORD	wPort;/*CU�˿�*/
	BYTE	bySourceIndex;	//�ź�Դͨ����
	BYTE	byRes[29];
}NET_DVR_PIC_VIEW_PARAM, *LPNET_DVR_PIC_VIEW_PARAM;

//2012-03-13ͼƬ����ע����Ϣ�ص�
typedef struct tagNET_DVR_PICVIEW_CALLBACKPARAM
{
	DWORD	dwUserID;
	BYTE	sDeviceID[16];	//�豸ID
	LONG	nPicViewHandle; //���Ծ��
	WORD	wSignalIndex;	//�ź�Դ����
	WORD	wHeadLen;		//�ļ�ͷ���� �����������ļ�ͷ����40
	BYTE	byHeadBuf[100]; //�ļ�ͷ
	BYTE	byRes[32];
}NET_DVR_PICVIEW_CALLBACKPARAM, *LPNET_DVR_PICVIEW_CALLBACKPARAM;

/**********************��ȡ���豸��Ϣ�б�***************************/
#define DEVICEID_LEN	  32
#define DVCS_DEVICEID_LEN 16

typedef struct tagNET_DVR_DEVICEID_INFO
{
	DWORD		dwSize;
	DWORD		dwDeviceIndex;	//�豸���
	BYTE	    byRes1[28];
	DWORD		dwChan;		//ͨ����
	DWORD		dwInputSignalIndex; //�ź�Դ����������ʽ����������ʹ��
	BYTE		byRes2[60];
}NET_DVR_DEVICEID_INFO, *LPNET_DVR_DEVICEID_INFO;


typedef struct tagNET_DVR_SINGLE_NETPARAM
{
	DWORD  dwSize;
	BYTE   byUseDhcp;				 //�Ƿ�����DHCP 0xff-��Ч 0-������ 1-����
	BYTE   byRes1[3];
	NET_DVR_IPADDR  struDevIP;       // �豸IP��ַ
	NET_DVR_IPADDR  struSubnetMask;  // �豸��������
	NET_DVR_IPADDR  struGateway;     // �豸����
	WORD	wDevPort;				 // �豸�˿ں�
	BYTE	byMACAddr[MACADDR_LEN];   // MAC ��ַ(ֻ�ܻ�ȡ)
	BYTE	byRes2[16];
} NET_DVR_SINGLE_NETPARAM, *LPNET_DVR_SINGLE_NETPARAM;

typedef struct tagNET_DVR_CHAN_INFO
{
	DWORD  dwSize;
	BYTE   byValid;			//0-��Ч 1-��Ч
	BYTE   byUsed;           /*�Ƿ�ʹ��,0-û��ʹ�ã�1-��ʹ��*/
	BYTE   byRes1[2];
	BYTE   sChanName[NAME_LEN];    /*ͨ������*/
	NET_DVR_COLOR struVideoColor;      /*�ź�Դ��ɫ*/
	BYTE   byRes2[44];	
} NET_DVR_CHAN_INFO, *LPNET_DVR_CHAN_INFO;

//�������豸��Ϣ
typedef struct tagNET_DVR_CODEDEV_INFO 
{
	NET_DVR_CHAN_INFO struChanInfo[MAX_CHANNUM/*16*/];/*�豸ͨ����Ϣ*/ 
} NET_DVR_CODEDEV_INFO, *LPNET_DVR_CODEDEV_INFO;

//�������豸��Ϣ
typedef struct tagNET_DVR_DECODEDEV_INFO 
{
	BYTE	byRes[1408];
} NET_DVR_DECODEDEV_INFO, *LPNET_DVR_DECODEDEV_INFO;

//�����ź�Դ��Ϣ
typedef struct tagNET_DVR_NETSIGNAL_INFO
{
	DWORD	dwSize;
	BYTE	byDevName[NAME_LEN/*32*/];//�����ź�Դ����
	NET_DVR_PU_STREAM_CFG struPuStream;  //�����ź�Դ��Ϣ������ý��ṹ��struStreamMediaSvrCfg�е�byValidΪ0ʱ��ֱ��ʹ��struDevChanInfo�еĲ�����Ϊ�����ź�Դ����
	BYTE    byValid;			//�����ź�Դ�Ƿ���Ч��0-��Ч��ɾ�������ź�Դʱ��Ϊ0  1-��Ч����Ӻ��޸������ź�Դʱ��Ϊ1/
	BYTE 	byRes1[3];	//����
    BYTE	sGroupName[NAME_LEN/*32*/];//�����ź�Դ������������������ź�Դ�����������������
    BYTE	byRes2[28];	//����		
}NET_DVR_NETSIGNAL_INFO, *LPNET_DVR_NETSIGNAL_INFO;

typedef struct tagNET_DVR_NETSIGNALDEV_INFO
{
	NET_DVR_NETSIGNAL_INFO struDevInfo;
	BYTE	byRes1[816];
}NET_DVR_NETSIGNALDEV_INFO, *LPNET_DVR_NETSIGNALDEV_INFO;

typedef union tagNET_DVR_DIFFDEV_INFO 
{
	NET_DVR_CODEDEV_INFO struCodeDevInfo;		//�����豸��Ϣ
	NET_DVR_DECODEDEV_INFO struDecodeDevInfo;	//�����豸��Ϣ
	NET_DVR_NETSIGNALDEV_INFO struNetSignalInfo;	//�����ź�Դ��Ϣ
} NET_DVR_DIFFDEV_INFO, *LPNET_DVR_DIFFDEV_INFO;

/*ע���豸��Ϣ*/
typedef enum tagNET_DVCS_DEVICE_TYPE
{
	NET_DVR_BNC_PROC = 1,                       /* BNC������ */
	NET_DVR_RGB_PROC,                       /* RGB������ */
	NET_DVR_STP_PROC,                       /* ת�봦���� */
	NET_DVR_DISP_PROC,                      /* ��ʾ������ */
	NET_DVR_NETSIGNAL						//�����ź�Դ
}NET_DVCS_DEVICE_TYPE;

typedef struct  tagNET_DVR_SINGLE_DEV_INFO 
{
	DWORD	dwSize;
	DWORD	dwSoftVersion;			/*�豸����汾��(ֻ�ܻ�ȡ) ���8λΪ���汾�ţ��θ�8λΪ�ΰ汾�ţ���16λΪ�޸��汾��*/
	DWORD	dwSoftwareBuildDate; 		//�汾��������Build, 0xYYYYMMDD
	BYTE	byUseInSys;				/*�Ƿ���ϵͳ��ʹ��*/
	BYTE	byDevStatus;			/*�豸��ǰ״̬��0-���ߣ�1-����(ֻ�ܻ�ȡ)*/ 
	BYTE	byDeviceType;			/*�豸����(ֻ�ܻ�ȡ)  ��DEVICE_TYPE*/ 
	BYTE	byRes1;
	BYTE	sDeviceID[DVCS_DEVICEID_LEN];    /*�豸ID��ʶ��*/ 
	BYTE	sDevName[NAME_LEN];     /*�豸����*/
	NET_DVR_SINGLE_NETPARAM struEtherNet[MAX_ETHERNET]; /*�豸�������*/
	BYTE	sSerialNumber[SERIALNO_LEN];	/*�豸���к�*/
	NET_DVR_DIFFDEV_INFO  struSubDevInfo;		/*�豸��Ϣ*/ 
	BYTE	byRes2[20];
} NET_DVR_SINGLE_DEV_INFO, *LPNET_DVR_SINGLE_DEV_INFO;

typedef struct tagNET_DVR_DEVLIST
{
	DWORD		dwSize;
	DWORD		dwDevNums;//�豸���صķֲ�ʽ���豸����
	BYTE  		*pBuffer;
	BYTE		byRes1[3];
	DWORD 		dwBufLen;//������ָ�볤�ȣ��������
	BYTE		byRes2[64];
} NET_DVR_DEVLIST,*LPNET_DVR_DEVLIST;

/********************************���豸��Ϣ����****************************/
typedef struct tagNET_DVR_DEV_BASE_INFO
{
	DWORD  dwSize;
	BYTE   byEnable;          /*�Ƿ���ϵͳ��ʹ��*/
	BYTE   byDeviceType;      /*�豸����(ֻ�ܻ�ȡ)*/ 
	BYTE   byRes1[2];
	BYTE   sDevName[NAME_LEN]; /*�豸����*/ 
	BYTE   byRes2[24];
} NET_DVR_DEV_BASE_INFO,*LPNET_DVR_DEV_BASE_INFO;

/********************************���豸������Ϣ����****************************/

/*����������Ϣ*/
typedef  struct tagNET_DVR_NETPARAM
{	
	DWORD dwSize;
	NET_DVR_SINGLE_NETPARAM struEtherNet[MAX_ETHERNET];//��̫����	
	BYTE   byRes[64];
} NET_DVR_NETPARAM, *LPNET_DVR_NETPARAM;

/********************************��ʾ��Ԫ����****************************/
// ����Ļ���豸��ϵ(16���ֽ�)
typedef struct tagNET_DVR_DISP_SCREEN
{
	DWORD dwSize;
	WORD  wScreenID;	// ��ĻID��, ID�Ŵ�1��ʼ
	BYTE  byScreenMode; //����ģʽ
	BYTE  byRes1;    // ����1
	DWORD dwDeviceIndex;// ����豸���
	BYTE  byRes2[16];   // ����2
}NET_DVR_DISP_SCREEN, *LPNET_DVR_DISP_SCREEN;

// ��Ļ����
typedef struct tagNET_DVR_TEXTSHOW
{
	DWORD dwSize;
	BYTE  byShowText;		// �Ƿ���ʾ���֣�0-��ʾ���֣�1-����ʾ����
	BYTE  byRes[35];
}NET_DVR_TEXTSHOW, *LPNET_DVR_TEXTSHOW;

typedef struct tagNET_DVR_SCREENLIST
{
	DWORD		dwSize;
	BYTE		byRes[12];
	DWORD		dwScreenNums;//�豸���ص�ӳ����ʾ������
	BYTE  		*pBuffer;
	DWORD 		dwBufLen;//������ָ�볤�ȣ��������
} NET_DVR_SCREENLIST,*LPNET_DVR_SCREENLIST;

typedef struct tagNET_DVR_OPERATE_DEVICE
{
	DWORD	dwSize;
	DWORD	dwSubCommand;	//�����豸�����1-�豸��ʼ������2-ֹͣ����
	BYTE	sDeviceID[DVCS_DEVICEID_LEN];
	BYTE	byRes[32];
}NET_DVR_OPERATE_DEVICE, *LPNET_DVR_OPERATE_DEVICE;

//�豸����
typedef struct tagNET_DVR_UPGRADE_STATE
{
	DWORD	dwProgress; // 0-100
	BYTE 	byState;  //�������ȣ�1-������� 2-�������� 3-����ʧ��
	BYTE	byRes2[31];
}NET_DVR_UPGRADE_STATE, *LPNET_DVR_UPGRADE_STATE;
typedef void (CALLBACK *DVCS_UPGRADESTATE_CB)(LONG nUpgradeHandle, BYTE *pBuffer, DWORD dwBufSize, void* pUser);

//
//����������ͼƬ�����������ͣ����ں����������������Ե���ͼƬ��DATA_BMP�����ֲ�ʽ�������Ե��ǣ�DATA_SUBSTREAM��
typedef enum
{
	NET_DVR_DATA_BMP = 0,
	NET_DVR_START_CALLBACK, 
	NET_DVR_STREAM_SYSHEAD,
	NET_DVR_STREAM_DATA
}PIC_PREVIEW_DATATYPE;

typedef struct tagNET_DVR_START_PIC_VIEW_INFO
{
	DWORD	dwSize;
	DWORD	dwSignalIndex;	//�ź�Դ��ţ��ò������ں��������������������豸��ֵ��Ϊ0
	BYTE	sDeviceID[DVCS_DEVICEID_LEN];	//�豸ID
	BYTE	byChanIndex;	//ͨ����
	BYTE    byRes1[3];
	//��Ƶ�ۺ�ƽ̨���Բ���
    DWORD   dwScreenNum; //������ţ����㿪ʼ
	DWORD   dwLayer;     //ͼ��ţ����㿪ʼ
	DWORD   dwResolution;//���Էֱ���,1-QCIF,2-CIF,3-D1
	BYTE    byFrame;//֡�ʣ���λ��֡/��
	BYTE    byRes2[15];
}NET_DVR_START_PIC_VIEW_INFO, *LPNET_DVR_START_PIC_VIEW_INFO;

typedef struct tagNET_DVR_DVCS_STATE_ALARM
{
	DWORD  dwSize;
	BYTE   byAlarmType;                /* �������� 1-�豸���ߣ�2-�豸���� 3-���������� 4-����������*/
	BYTE   byDeviceType;				/* �豸����(ֻ�ܻ�ȡ) */ 
	BYTE   byRes1[2];
	BYTE   sDeviceID[DVCS_DEVICEID_LEN];
	BYTE   byRes2[80];
}NET_DVR_DVCS_STATE_ALARM, *LPNET_DVR_DVCS_STATE_ALARM;

typedef struct tagNET_DVR_PIC_ADJUST
{
	DWORD		dwSize;
	BYTE		bySubCommand;		//���궨��DECODEPIC_LEFTADJUST��
	BYTE		byScale;			//��������ֵ
	BYTE		byRes[30];			
}NET_DVR_PIC_ADJUST, *LPNET_DVR_PIC_ADJUST;
/********************************�ֲ�ʽ���� end****************************/

// 76SP�豸POEͨ����ӷ�ʽ����
typedef struct tagNET_DVR_POE_CHANNEL_ADD_MODE
{
	DWORD		dwSize;              	//�ṹ���С
	BYTE 		byAddMode;     			//��ӷ�ʽ 0: ���弴�� 1: �ֶ����	
	BYTE  		byRes1[127];          	//����
}NET_DVR_POE_CHANNEL_ADD_MODE, *LPNET_DVR_POE_CHANNEL_ADD_MODE;

#define MAX_ESATA_NUM 16
#define MAX_MINISAS_NUM 96

typedef struct tagNET_DVR_ESATA_MINISAS_USAGE
{
	DWORD		dwSize;
	BYTE	    byESATAUsage[MAX_ESATA_NUM];		// ����������ʾ�ڼ���eSATA��0��Ĭ�ϱ��� 1��Ĭ��¼��
	BYTE	    byMiniSASUsage[MAX_MINISAS_NUM];	// ����������ʾ�ڼ���miniSAS��0��Ĭ�ϱ��� 1��Ĭ��¼��
	BYTE 		byRes[32];
}NET_DVR_ESATA_MINISAS_USAGE, *LPNET_DVR_ESATA_MINISAS_USAGE;

#define MAX_DISK_NUM 128

typedef struct tagNET_DVR_BACKUP_LOG_PARAM
{
	DWORD		dwSize;
	BYTE	    byDiskDesc[DESC_LEN_32];		//���ݴ�������
	BYTE		byHardDisk[MAX_DISK_NUM];		//�豸�ݵ�Ӳ�̺ţ����ݼ���ȡǰ���� 
	BYTE		byBackupHardDiskNum;  			//�豸�ݵ�Ӳ�̸���
	BYTE	    byContinue;						//�Ƿ�������ݣ�0-��������1-����
	BYTE 		byRes[30];
}NET_DVR_BACKUP_LOG_PARAM, *LPNET_DVR_BACKUP_LOG_PARAM;

typedef struct tagNET_DVR_DIGITAL_CHANNEL_STATE
{
	DWORD dwSize;
	BYTE  byDigitalAudioChanTalkState[MAX_CHANNUM_V30];  //��ʾ��������ͨ���ĶԽ�״̬ 0-δʹ�ã�1-ʹ����, 0xff��Ч
	BYTE  byRes[512];
}NET_DVR_DIGITAL_CHANNEL_STATE, *LPNET_DVR_DIGITAL_CHANNEL_STATE;

/*************************************ITS****************************/
#define VERSION_LEN                 32 //�汾����
#define	MAX_OVERLAP_ITEM_NUM		50 //����ַ���������
#define	ITS_MAX_DEVICE_NUM		    32 //����豸����

//�ն˻�����Ϣ
typedef struct tagNET_ITS_BASEINFO
{
	DWORD   dwSize;	
	BYTE    byMainVer[VERSION_LEN];	// �㷨�����̰汾
	BYTE    byMprVer[VERSION_LEN];	// ��֡ʶ���汾
	BYTE    byBvtVer[VERSION_LEN];	// ������Ƶ��汾
	BYTE    byLptVer[VERSION_LEN];	// ��Ƶ���ٿ�汾
	BYTE    byTvdVer[VERSION_LEN];	// Υ�¼���汾
	BYTE    byTldVer[VERSION_LEN];	// �źŵƼ���汾
	BYTE    byRes[252];		// Ԥ���ֶ�
}NET_ITS_BASEINFO,*LPNET_ITS_BASEINFO;

//ͼƬ�ϳɲ���
typedef struct tagNET_ITS_IMGMERGE_CFG
{
    DWORD  dwSize;
	BYTE   byIsMerge;		//�Ƿ���Ҫ�ϳɣ�0�����ϳɣ�1���ϳɣ�
	BYTE   byRes1[3];
	DWORD  dwOneMergeType;	//ץ�ĵ���ͼ�ϳɷ�ʽ�����ܻ��ȡ��дͼ��
    /************************************************************************/
	/* 201 ����ͼƬ�������кϳ�,�ϳɺ�ͼƬ��Ϊ����ͼ��1��,��Ϊ2��         */
	/* 202 ����ͼƬ�������кϳ�,�ϳɺ�ͼƬ��Ϊ����ͼ��2��,��Ϊ1��         */
	/* 301 ����ͼƬ�������кϳ�,�ϳɺ�ͼƬ��Ϊ����ͼ��1��,��Ϊ3��         */
	/* 302 ����ͼƬ�������кϳ�,�ϳɺ�ͼƬ��Ϊ����ͼ��3��,��Ϊ1��		  */
	/* 303 ������ͼƬ��ȡһ��������д����,�������ͼƬ;����ͼƬ"��"���ͺϳ�,
		   ��д������;�ϳɺ�ͼƬ��Ϊ����ͼ��2��,��Ϊ2��					  */
	/* 304 ������ͼƬ��ȡһ��������д����,�������ͼƬ;����ͼƬ"��"���ͺϳ�,
		   ��д������;�ϳɺ�ͼƬ��Ϊ����ͼ��1��,��Ϊ1��					  */
	/* 305 ������ͼƬ��ȡһ��������д����,�������ͼƬ;����ͼƬ"��"���ͺϳ�,
		   ��д������;�ϳɺ�ͼƬ��Ϊ����ͼ��2��,��Ϊ2��					  */
	/* 306 ������ͼƬ��ȡһ��������д����,�������ͼƬ;����ͼƬ"��"���ͺϳ�,
		   ��д������;ѹ��ͼƬ�ֱ���,�ϳɺ�ͼƬ��Ϊ����ͼ��1��,��Ϊ1��	  */
    /* 307 ����ͼƬ"Ʒ"�������кϳ�										  */
	/* 308 ����ͼƬ��"Ʒ"�������кϳ�									  */
	/************************************************************************/
	DWORD  dwTwoMergeType;	//ץ������ͼ�ϳɷ�ʽ
	DWORD  dwThreeMergeType;	//ץ������ͼ�ϳɷ�ʽ
    DWORD  dwJpegQuality;      //ѹ��������0~100��
    DWORD  dwCloseupIndex;     //��дͼץ�ĵڼ���
	DWORD  dwMerageMaxSize;   //�ϳ�ͼƬ��С������,300-10240(��λKB)
	WORD   wCloseupDeviation; // ��дͼƫ����(50~ͼƬ�߶�)����λ:����
	BYTE   byRes[30];
}NET_ITS_IMGMERGE_CFG,*LPNET_ITS_IMGMERGE_CFG;

//��ͨ��������
typedef	struct	tagNET_ITS_TRAFFIC_DATA_HOST
{
 	NET_DVR_IPADDR	struHostAddr;	// Զ������IP
	WORD			wHostPort;	// Զ������Port
	BYTE			byRes1[2];
	DWORD			dwDataType;	// �ϴ�Զ���������������ͣ�������£�����λ��ʾ
	BYTE			bySuspendUpload;	// �Ƿ���ͣ�����ϴ���0-�����ϴ���1-��ͣ�ϴ�
	BYTE			byUploadStrategy;	// �ϴ����ԣ�0-�������������ϴ���1-����ͨ��ʱ���ϴ�
	WORD			wUploadInterval;	// �ϴ����ʱ�䣨ms��1~2000�����ò���ֻ����ʷ������Ч
	DWORD			dwUploadTimeOut; //�ϴ���ʱʱ��
	BYTE			byRes[24];
}NET_ITS_TRAFFIC_DATA_HOST,*LPNET_ITS_TRAFFIC_DATA_HOST;

//�����ϴ�����
typedef  struct	tagNET_ITS_UPLOAD_CFG
{
  	DWORD              	dwSize;
  	NET_ITS_TRAFFIC_DATA_HOST	struRemoteDataHost1;   	//���ս�ͨ��������1
  	NET_ITS_TRAFFIC_DATA_HOST	struRemoteDataHost2;	    //���ս�ͨ��������2 
}NET_ITS_UPLOAD_CFG,*LPNET_ITS_UPLOAD_CFG;

typedef struct tagNET_DVR_SYSTEM_TIME
{
	WORD  wYear;   	    //��
	WORD  wMonth;  		//��
	WORD  wDay;    		//��
	WORD  wHour;   		//ʱ
	WORD  wMinute;  	//��
	WORD  wSecond;  	//��
	WORD  wMilliSec;	//����
	BYTE  byRes[2];
}NET_DVR_SYSTEM_TIME, *LPNET_DVR_SYSTEM_TIME;

//��ͨ��������״̬��Ϣ
typedef	struct tagNET_ITS_TRAFFIC_DATA_INFO
{
	DWORD    dwDataQuantity;      //��������
	DWORD    dwDataRsendQuantity;     //δ������������Ҫ�ϴ���ͨ���������ģ�
	NET_DVR_SYSTEM_TIME      struStartTime;        //δ�������ݵ�����ʱ��
	NET_DVR_SYSTEM_TIME      struEndTime;        //δ�������ݵ�����ʱ��
	NET_DVR_IPADDR   struDataHost;    //���ս�ͨ��������
}NET_ITS_TRAFFIC_DATA_INFO, *LPNET_ITS_TRAFFIC_DATA_INFO;

//�ն˹���״̬
typedef  struct tagNET_ITS_WORKSTATE
{ 
	DWORD  dwSize ;
	BYTE   byDevName[32];	// �豸����
	DWORD  dwRunTime;		// ϵͳ����ʱ�䣬��λs
	NET_ITS_TRAFFIC_DATA_INFO	struTrafficDataInfo[2]; //֧����̨�����������ϴ����õ�������
	DWORD  dwMemoryUsage;	// �ڴ�ռ���ʣ�����ڴ�ռ����Ϊ30%���˴���30��
	DWORD  dwCpuUsage;		// cpuռ���ʣ����cpuռ����Ϊ30%���˴���30��
	DWORD  dwDevTemperature;	// �����¶�
	DWORD  dwDeviceStatic; 	// �豸��״̬,0-����,1-CPUռ����̫��,����85%,2-Ӳ������,���紮������
	NET_DVR_DISKSTATE  struHardDiskStatic[MAX_DISKNUM_V30];   //Ӳ��״̬
	NET_DVR_CHANNELSTATE_V30 struChanStatic[MAX_CHANNUM_V30]; //ͨ����״̬
	BYTE  byAlarmInStatic[MAX_ALARMIN_V30];  //��������ڵ�״̬,0-û�б���,1-�б���
	BYTE  byAlarmOutStatic[MAX_ALARMOUT_V30]; //��������˿ڵ�״̬,0-û�����,1-�б������
	DWORD dwLocalDisplay;			//������ʾ״̬,0-����,1-������
	BYTE  byAudioInChanStatus[8];  	//��ʾ����ͨ����״̬ 0-δʹ�ã�1-ʹ���У�����0��ʾ��1������ͨ��
	BYTE  byRes[36]; 			//����
}NET_ITS_WORKSTATE, *LPNET_ITS_WORKSTATE;

// ͼƬ��Ϣ�����������������
typedef struct tagNET_ITS_PICTURE_INFO
{
	DWORD   dwDataLen;		    //ý�����ݳ���
	BYTE    byType;			// 0:����ͼ;1:����ͼ;2:�ϳ�ͼ;3:����
	BYTE    byRes1[3];          //����
	DWORD   dwRedLightTime;		//�����ĺ��ʱ��  ��s��
	BYTE    byAbsTime[32];		//����ʱ���,yyyymmddhhmmssxxx,e.g.20090810235959999  �����λΪ������
	NET_VCA_RECT   struPlateRect;	//����λ��
	NET_VCA_RECT  struPlateRecgRect;   //��ʶ��������
	BYTE	*pBuffer;	//����ָ��
	BYTE    byRes2[12];   		//����
}NET_ITS_PICTURE_INFO, *LPNET_ITS_PICTURE_INFO;

// �����
typedef struct tagNET_ITS_PLATE_RESULT
{
	DWORD   dwSize;		//�ṹ����
	DWORD   dwMatchNo;		//ƥ�����,��(�������,��������,������)���ƥ����
	BYTE    byGroupNum;	//ͼƬ��������һ������������ץ�ĵ�����������һ��ͼƬ��������������ʱƥ�����ݣ�
	BYTE    byPicNo;		//���ĵ�ͼƬ��ţ����յ�ͼƬ�������󣬱�ʾ�������;���ճ�ʱ����ͼƬ������ʱ��������Ҫ������ɾ����
	BYTE    bySecondCam;	//�Ƿ�ڶ����ץ�ģ���Զ����ץ�ĵ�Զ���������ǰ��ץ�ĵĺ������������Ŀ�л��õ���
	BYTE    byFeaturePicNo; //����Ƶ羯��ȡ�ڼ���ͼ��Ϊ��дͼ,0xff-��ʾ��ȡ
	BYTE	byDriveChan;		//����������
	BYTE    byRes1[3];			//����
	WORD    wIllegalType;       //Υ�����Ͳ��ù��궨��
	BYTE    byIllegalSubType[8];   //Υ��������
	BYTE    byPostPicNo;    //Υ��ʱȡ�ڼ���ͼƬ��Ϊ����ͼ,0xff-��ʾ��ȡ
	BYTE    byChanIndex;		//ͨ���ţ�������
	WORD	wSpeedLimit;		//�������ޣ�����ʱ��Ч��
	BYTE	byRes2[2];
	NET_DVR_PLATE_INFO  struPlateInfo; 	//������Ϣ�ṹ
	NET_DVR_VEHICLE_INFO struVehicleInfo;	//������Ϣ
	BYTE    byMonitoringSiteID[48];		//������
	BYTE    byDeviceID[48];				//�豸���
	BYTE    byDir;    		//��ⷽ��1-���У�2-���У�3-˫��4-�ɶ�������5-������,6-�����򶫣�7-�ɱ����ϣ�8-����
	BYTE    byDetectType;	//��ⷽʽ,1-�ظд�����2-��Ƶ������3-��֡ʶ��4-�״ﴥ��
	BYTE    byRes3[38];	//����
	DWORD   dwPicNum;		//ͼƬ��������picGroupNum��ͬ����������Ϣ������ͼƬ������ͼƬ��Ϣ��struVehicleInfoEx����	
	NET_ITS_PICTURE_INFO struPicInfo[6]; 		//ͼƬ��Ϣ,���Żص������6��ͼ�����������
}NET_ITS_PLATE_RESULT, *LPNET_ITS_PLATE_RESULT;

//IPCͨ����������
typedef	struct 	tagNET_ITS_IPC_CHAN_CFG
{
	DWORD		dwSize; 
	BYTE		byCameraType;		//������࣬0-����������1-��Ȧ���������2-��Ƶ���������,3-һ���
	BYTE		byRes1[3];		   //����
	BYTE		byMonitoringSiteID[48];		//������
	BYTE		byDeviceID[48];				//�豸���
	BYTE		byDirectionNo;	     //��ⷽ����,0-��,1-����,2-����,3-˫��,4-�ɶ�����,5-������,6-������,7-�ɱ�����,8-����
	BYTE		byMonitorInfo[48];  	//������Ϣ����
	BYTE		byRes2[15];		//����
}NET_ITS_IPC_CHAN_CFG, *LPNET_ITS_IPC_CHAN_CFG;

//�����豸��Ϣ
typedef struct tagNET_ITS_SINGLE_DEVICE_INFO
{
	DWORD  dwDeviceType;          //�豸���ͣ�0-�նˣ�1-�����2-����ƣ�3-������
	DWORD  dwDirID;               //������
	DWORD  dwLaneID;             //�������
	DWORD  dwDeviceState;         //�豸״̬  0���� ��0 �쳣���ο��豸�쳣�����
	BYTE   byDeviceName[32];     //�豸����
	BYTE   byDeviceID[48];		   //�豸��ţ�һ�������кţ��������õ�ַ
	BYTE   byRes[16];
}NET_ITS_SINGLE_DEVICE_INFO,*LPNET_ITS_SINGLE_DEVICE_INFO;

//·����Ϣ
typedef struct tagNET_ITS_ROADINFO
{	
	DWORD	 dwSize;
	DWORD	 dwChannel;		  //ͨ����,0xffffffff��ʾ�նˣ�������ʾ��Ӧ�����
	BYTE     byTriggerMode;    //  0:��Ȧ����;  1:��Ƶ����
	BYTE	 byRes1[3];
	DWORD    dwDeviceNum;       //ʵ���豸���� 
	BYTE     byMonitoringSiteID[48];	//������
	BYTE  	 byRoadInfo[48];       //������Ϣ
	NET_ITS_SINGLE_DEVICE_INFO		struSingleDevice[ITS_MAX_DEVICE_NUM];
	BYTE     byRes[16];
}NET_ITS_ROADINFO,*LPNET_ITS_ROADINFO;

//��������·����Ϣ
typedef struct tagNET_ITS_TRAFFIC_DRIVE_CHAN
{
	BYTE   byDriveChan;		//������
	BYTE   byRes1[3];    		// Ԥ��
	WORD   wCarFlux;			//����������
	WORD   wPasserbyFlux;		//����������
	WORD   wShayFlux;		//���ֳ�������
	float  fAverOccpancy;   	//ƽ������ռ���ʰٷֱ�
	WORD   wAverSpeed;		 //ƽ������(km/h)
	WORD   wAverCarDis;    	//ƽ������(��λ����)
	BYTE   byRes2[16];   		 // Ԥ��
}NET_ITS_TRAFFIC_DRIVE_CHAN,*LPNET_ITS_TRAFFIC_DRIVE_CHAN;

typedef struct tagNET_ITS_TRAFFIC_COLLECT
{
	DWORD  dwSize;		//�ṹ��С
	BYTE   byMonitoringSiteID[48];		//������
	BYTE   byDeviceID[48];				//�豸���
	BYTE   byLaneNum;	//��������
	BYTE   byDir;    	//��ⷽ��
	BYTE   byDetectType;    //��ⷽʽ1-�ظ���Ȧ��2-��Ƶ������3����֡ʶ��4�״ﴥ��
	BYTE   byRes1;   		//Ԥ�� 	
	DWORD  dwChannel; //ͨ����
	NET_DVR_SYSTEM_TIME 	struStartTime;		//ͳ�ƿ�ʼʱ��
	DWORD  dwSamplePeriod;	//ͳ��ʱ��,��λ��
	NET_ITS_TRAFFIC_DRIVE_CHAN	struDriveChan[6]; 		//��ͨ��������,ÿ�����֧��6������
	BYTE   byRes2[24]; 	//Ԥ��
}NET_ITS_TRAFFIC_COLLECT,*LPNET_ITS_TRAFFIC_COLLECT;

typedef struct tagNET_ITS_OVERLAPCFG_COND
{
    DWORD dwSize;
	DWORD dwChannel;
    DWORD dwConfigMode; //����ģʽ��0-�նˣ�1-ǰ��(ֱ��ǰ�˻��ն˽�ǰ��)
    BYTE  byRes[16];
}NET_ITS_OVERLAPCFG_COND, *LPNET_ITS_OVERLAPCFG_COND;

typedef enum ITS_OVERLAP_ITEM_TYPE
{
	OVERLAP_ITEM_NULL = 0,	      //0-δ֪
	OVERLAP_ITEM_SITE,                //1-�ص�
	OVERLAP_ITEM_ROADNUM,             //2-·�ڱ��
	OVERLAP_ITEM_INSTRUMENTNUM,       //3-�豸���
	OVERLAP_ITEM_DIRECTION,           //4-������
	OVERLAP_ITEM_DIRECTIONDESC,       //5-����
	OVERLAP_ITEM_LANENUM,             //6-������
	OVERLAP_ITEM_LANEDES,             //7-����
	OVERLAP_ITEM_CAPTIME,             //8-ץ��ʱ��(��������)
	OVERLAP_ITEM_CAPTIME_MILLSECOND,  //9-ץ��ʱ��(������)
	OVERLAP_ITEM_PLATENUM,            //10-���ƺ�
	OVERLAP_ITEM_CARCOLOR,            //11-������ɫ
	OVERLAP_ITEM_CARTYPE,             //12-��������
	OVERLAP_ITEM_CARBRAND,            //13-����Ʒ��
	OVERLAP_ITEM_CARSPEED,            //14-�����ٶ�
	OVERLAP_ITEM_SPEEDLIMIT,          //15-���ٱ�־
	OVERLAP_ITEM_CARLENGTH,           //16-��������1~99m
	OVERLAP_ITEM_ILLEGALNUM,          //17-Υ������(Υ���������Ӧ��û�õģ�Ӧ��ֱ�ӵ���Υ����Ϣ���������������١����١����С�����ơ�ռ����ѹ���ߵ�)
	OVERLAP_ITEM_MONITOR_INFO,      //18-������Ϣ
	OVERLAP_ITEM_ILLEGALDES,          //19-Υ����Ϊ
	OVERLAP_ITEM_OVERSPEED_PERCENT,	//20-���ٱ�
	OVERLAP_ITEM_RED_STARTTIME,           //21-��ƿ�ʼʱ��
	OVERLAP_ITEM_RED_STOPTIME,		//22-��ƽ���ʱ��
	OVERLAP_ITEM_RED_DURATION,        //23-�������ʱ��
	OVERLAP_ITEM_SECUNITY_CODE,		//24-��α��
	OVERLAP_ITEM_CAP_CODE		//25-ץ�ı��                       
}ITS_OVERLAP_ITEM_TYPE;

//�ַ�����ÿһ����Ϣ�ṹ��
typedef struct tagNET_ITS_OVERLAP_SINGLE_ITEM_PARAM
{
	BYTE byRes1[2];                   // ����
	BYTE byItemType;   //���ͣ����OVERLAP_ITEM_TYPE
	BYTE byChangeLineNum;		   //�������Ļ�����[0-10](Ĭ��0)
	BYTE bySpaceNum;				   //�������Ŀո���[0-255](Ĭ��0)
	BYTE byRes[15];
}NET_ITS_OVERLAP_SINGLE_ITEM_PARAM, *LPNET_ITS_OVERLAP_SINGLE_ITEM_PARAM;

typedef struct tagNET_ITS_OVERLAP_ITEM_PARAM
{
	NET_ITS_OVERLAP_SINGLE_ITEM_PARAM struSingleItem[MAX_OVERLAP_ITEM_NUM]; //�����ַ�����
	DWORD dwLinePercent;  //�����аٷֱ�(0-100),(Ĭ��100)
	DWORD dwItemsStlye;   //���ӷ�ʽ��0-����,1-����(Ĭ�Ϻ���)
	WORD  wStartPosTop;    //��ʼ������,ֻ��ͼƬ�ڲ�������Ч[0~2448](Ĭ��0)
	WORD  wStartPosLeft;    //��ʼ������,ֻ��ͼƬ�ڲ�������Ч[0~2448](Ĭ��0)
	WORD  wCharStyle;    //��������,0-����1-κ��(Ĭ��)
	WORD  wCharSize;    //�ַ���С,0--16x16,1--32x32,2-48x48,3--64x64 (Ĭ��)
	WORD  wCharInterval;    //�ַ���࣬[0��16]�����赥λ������(Ĭ��)
	BYTE  byRes1[2];
	DWORD dwForeClorRGB;      //ǰ��ɫ��RGBֵbit0-1:(B) bit2-3:(G) bit4-5:(G) (Ĭ��x00FFFFFF-��)
	DWORD dwBackClorRGB; //����ɫ��RGBֵ,ֻ��ͼƬ�������Чbit0-1:(B) bit2-3:(G) bit4-5:(G) (Ĭ��x00000000-��)
	BYTE  byColorAdapt;	//��ɫ�Ƿ�����Ӧ0-��1-��
	BYTE  byRes[31];
}NET_ITS_OVERLAP_ITEM_PARAM, *LPNET_ITS_OVERLAP_ITEM_PARAM;

//�����������Ϣ
typedef struct tagNET_ITS_OVERLAP_INFO_PARAM
{
	BYTE bySite[128];           //�ص�����
	BYTE byRoadNum[32];  //·�ڱ��
	BYTE byInstrumentNum[32];				//�豸���
	BYTE byDirection[32];        //������
	BYTE byDirectionDesc[32];    //��������
	BYTE byLaneDes[32];        //��������
	BYTE byRes1[32];     //����
	BYTE byMonitoringSite1[44];		//����1��Ϣ
	BYTE byMonitoringSite2[32];		//����2��Ϣ
	BYTE byRes[64];		//����
}NET_ITS_OVERLAP_INFO_PARAM, *LPNET_ITS_OVERLAP_INFO_PARAM;

typedef struct tagNET_ITS_OVERLAP_CFG
{
	DWORD dwSize;	
    BYTE  byEnable; //�Ƿ����ã�0-�����ã�1-����
    BYTE  byRes1[3]; 
	NET_ITS_OVERLAP_ITEM_PARAM		struOverLapItem; //�ַ�������
	NET_ITS_OVERLAP_INFO_PARAM 	struOverLapInfo;  //�ַ���������Ϣ
	BYTE  byRes[32];
}NET_ITS_OVERLAP_CFG, *LPNET_ITS_OVERLAP_CFG;

#define  MAX_PTZCRUISE_POINT_NUM   32   //���֧��32��Ѳ����


//Ԥ�õ���Ϣ
typedef struct tagNET_DVR_PRESET_INFO
{
	DWORD dwSize;
	DWORD dwPresetNum; //Ԥ�õ����
	DWORD dwGroupNum;  //����
	BYTE  byRes[8];
}NET_DVR_PRESET_INFO, *LPNET_DVR_PRESET_INFO;

//�������
typedef struct tagNET_DVR_PRESET_COND
{
    DWORD dwSize;
	DWORD dwChannel;
	DWORD dwGroupNO; //���
    BYTE byRes[8];
}NET_DVR_PRESET_COND, *LPNET_DVR_PRESET_COND;

//�������
typedef struct tagNET_DVR_PRESETCFG
{
	DWORD dwSize;
	DWORD dwPresetIndex; //Ԥ�õ����
	NET_VCA_POINT struVcaPoint; //Ԥ�õ�����
	WORD wZoomCoordinate; ///<Ԥ�õ㴰��Zoomֵ
	BYTE  byRes[30]; 
}NET_DVR_PRESETCFG, *LPNET_DVR_PRESETCFG;

//��ȡѲ��·������Ŀ
typedef struct tagNET_DVR_PTZCRUISE_INFO
{
    DWORD dwSize;
	DWORD dwPtzCruiseNum; //·������
    DWORD dwGroupNum; //����
    BYTE byRes[8];
}NET_DVR_PTZCRUISE_INFO, *LPNET_DVR_PTZCRUISE_INFO;

//���������
typedef struct tagNET_DVR_PTZCRUISE_COND
{
    DWORD dwSize;
	DWORD dwChannel;
	DWORD dwGroupNO; //���
    BYTE byRes[8];
}NET_DVR_PTZCRUISE_COND, *LPNET_DVR_PTZCRUISE_COND;

//�������
typedef struct tagNET_DVR_PTZCRUISE_POINTCFG
{
	DWORD dwSize;
	DWORD dwPresetIndex; //Ԥ�õ����
	NET_VCA_POINT struVcaPoint; //Ԥ�õ�����
	BYTE	byDwell;		//ͣ��ʱ��
	BYTE	bySpeed;		//�ٶ�
	WORD  wZoomCoordinate;///<Ԥ�õ㴰��Zoomֵ
	BYTE   byRes[28]; 
}NET_DVR_PTZCRUISE_POINTCFG, *LPNET_DVR_PTZCRUISE_POINTCFG;

typedef struct tagNET_DVR_PTZCRUISECFG
{
	DWORD dwSize;
	DWORD dwCruiseRoute; //Ѳ��·�����
	NET_DVR_PTZCRUISE_POINTCFG struCruisePoint[MAX_PTZCRUISE_POINT_NUM]; //���֧��32��Ѳ����
	BYTE  byRes[32]; 
}NET_DVR_PTZCRUISECFG, *LPNET_DVR_PTZCRUISECFG;

//����ģʽ�ṹ
typedef struct tagNET_DVR_MOTION_TRACK_CFG
{
	DWORD dwSize; 
	BYTE byEnableTrack;   //���ø��٣�0-��1-��
	BYTE byRes[63];
}NET_DVR_MOTION_TRACK_CFG, *LPNET_DVR_MOTION_TRACK_CFG;

/*************************************ITS end****************************/
typedef struct tagNET_DVR_REBOOT_TIME
{
	BYTE byDate;   //���ڼ���1-7��������һ��������
	BYTE byHour;   //ʱ
	BYTE byMinute; //��	
	BYTE byRes[13]; //����
}NET_DVR_REBOOT_TIME,*LPNET_DVR_REBOOT_TIME;

typedef struct tagNET_DVR_AUTO_REBOOT_CFG
{
	DWORD dwSize;
	NET_DVR_REBOOT_TIME struRebootTime;
}NET_DVR_AUTO_REBOOT_CFG,*LPNET_DVR_AUTO_REBOOT_CFG;

/*************************************MVA 2.1 begin****************************/
#define NET_DVR_GPS_FINDING       0   //���ڲ���
#define NET_DVR_GPS_RECV          1   //��������
#define NET_DVR_GPS_OVER          2   //���ҽ���
#define NET_DVR_GPS_EXCEPTION     3   //�����쳣
typedef struct tagNET_DVR_MENU_OUTPUT_MODE
{
	DWORD		dwSize;
	BYTE		byMenuOutputMode; //��ͬԴ�豸��0-Auto 1-��CVBS 2-HDMI 3-VGA ͬԴ�豸��0-Auto 1-��CVBS 2-HDMI/VGA
	BYTE		byRes[63];
}NET_DVR_MENU_OUTPUT_MODE, *LPNET_DVR_MENU_OUTPUT_MODE;

typedef struct tagNET_DVR_MB_IPADDR
{
	NET_DVR_IPADDR   struIP;  //IP��ַ
	WORD        wPort;   //�˿ں�
	BYTE        byRes[2];
}NET_DVR_MB_IPADDR,*LPNET_DVR_MB_IPADDR;

typedef struct tagNET_DVR_MB_WVSPARA
{
	NET_DVR_MB_IPADDR struWVSAddr;
	BYTE byPuid[NAME_LEN];    //�豸id
	BYTE byPassword[PASSWD_LEN];  //����
	BYTE byRes[8];
}NET_DVR_MB_WVSPARA, *LPNET_DVR_MB_WVSPARA;

typedef struct tagNET_DVR_MB_EHOMEPARA
{
	NET_DVR_MB_IPADDR struEHomeAddr;
	BYTE byPuid[NAME_LEN];   //�豸id
}NET_DVR_MB_EHOMEPARA, *LPNET_DVR_MB_EHOMEPARA;

typedef struct tagNET_DVR_MB_PLATFORMPARA
{   
	DWORD dwSize;
	BYTE byNetEnvironment;/*���绷��,0-wireless,1-3G,2-wLan,3-lan*/
	BYTE byCurPlatForm;   /*< ��ǰƽ̨0 - WVS, 1 - E��, 2 - ��ģʽ */
	BYTE byRes1[2];	
	NET_DVR_MB_WVSPARA  struWVSPara; /*����ƽ̨(ƽ̨����)*/
	NET_DVR_MB_EHOMEPARA struMbEHpara;/*E��ƽ̨����ƽ̨�������豸�������� */
	BYTE byRes2[64];
}NET_DVR_MB_PLATFORMPARA, *LPNET_DVR_MB_PLATFORMPARA;

typedef struct tagNET_DVR_MB_GPS_STATUS
{
	BYTE		byGPSModule;      /*gpsģ��, 0: ������, 1: ����*/
	BYTE		byPositionStatus;	  /*gps��λ״̬, 0: ��λʧ��, 1: ��λ�ɹ�*/
	BYTE		bySignalStrength;    /*�ź�ǿ��, 0: ��, 1: ����, 2: ǿ*/
	BYTE		byres[5];
}NET_DVR_MB_GPS_STATUS, *LPNET_DVR_MB_GPS_STATUS;

typedef struct tagNET_DVR_MB_GSENSOR_STATUS
{
	BYTE		byGsensorModule;	/*g-sensorģ��, 0: not exist, 1: ����, 2: ����*/
	BYTE		byCurAccX[10]; 	/*��ǰX����ٶ�*/
	BYTE		byCurAccY[10];	/*��ǰY����ٶ�*/
	BYTE		byCurAccZ[10];	/*��ǰZ����ٶ�*/
	BYTE		byRefAccX[10];	/* X����ٶȱ궨ֵ*/
	BYTE		byRefAccY[10];	/* Y����ٶȱ궨ֵ*/
	BYTE		byRefAccZ[10];	/* Z����ٶȱ궨ֵ*/
	BYTE		byres[3];
}NET_DVR_MB_GSENSOR_STATUS, *LPNET_DVR_MB_GSENSOR_STATUS;

#define IP_ADDR_LEN 		16
#define IW_ESSID_MAX_SIZE	32

typedef struct tagNET_DVR_MB_WIFI_STATUS
{
	BYTE		byEnableWiFi; /* ����, 0 ��, 1 �� */
	BYTE 		byWiFiConnectStatus;  /* WIFI״̬, 0: ����ʧ��, 1: ���ӳɹ� 2: ��ģ��*/
	BYTE		bySignalStrength;             /* �ź�ǿ��, 0 ��, 1 ����, 2 ǿ */
	BYTE		byIPaddress[IP_ADDR_LEN];   /*WIFI �豸 ip*/
	BYTE		byEssid[IW_ESSID_MAX_SIZE];  /*���߽����essid*/
	BYTE		byres[5];
}NET_DVR_MB_WIFI_STATUS,*LPNET_DVR_MB_WIFI_STATUS;

typedef struct tagNET_DVR_MB_PLATFORM_STATUS
{
	BYTE		byCurPlat;	  /*��ǰƽ̨, 0: wvs, 1: ivms, 2: ��ģʽ(net_3g_sdk)*/
	BYTE		byLoginStatus; 	/*login ״̬, 0: login failed, 1: login success*/
	BYTE		byExceptionInfo;  	/*�쳣��Ϣ*/
/*
WVS :exception info:
	    0: ���ӷ�����ʧ��
		1: ע����
		2: �û����������
		3: ע�ᳬʱ
		4: ������ʱ
		5: ע��ɹ�
iVMS :exception info:
	    0δע��	
		1ע����	
		2ע�����ӳ���
		3ע�ᳬʱ
		4��ʱ��û�������������ж�
		5����ע��
		6 CMS��ע���豸�����Ѿ������޶���̨��
		7 CMS��ע��ͨ�������Ѿ������޶�ͨ����
		8�豸��WEB����������û������
		9CMS��WEB��������ͨ��ʧ��
		10��¼δ֪����
		11ע��ɹ�
��ģʽ :exception info:	
        0δע��
		1: ע����
		2: �ظ�ע��
		3: ע������ʧ��
		4: ������IP�仯
		5: ע��ɹ�
		6: �û�ע��
		7: ������ʱ
*/						
	BYTE		byres[5];
}NET_DVR_MB_PLATFORM_STATUS, *LPNET_DVR_MB_PLATFORM_STATUS;

					
typedef struct tagNET_DVR_MB_MOBILEDEV_STATUS
{
	DWORD		dwSize;      /*�ṹ��С*/
	union
	{
		NET_DVR_MB_GPS_STATUS struGPSStatus;
		NET_DVR_MB_GSENSOR_STATUS struGSensorStatus;
		NET_DVR_MB_WIFI_STATUS struWiFiStatus;
		NET_DVR_MB_PLATFORM_STATUS struPlatformStatus;
	}mobileStatus;
}NET_DVR_MB_MOBILEDEV_STATUS, *LPNET_DVR_MB_MOBILEDEV_STATUS;

#define NET_DVR_GPS_STATUS       0
#define NET_DVR_GSENSOR_STATUS   1
#define NET_DVR_WIFI_STATUS      2
#define NET_DVR_PLATFORM_STATUS  3

//GPS����Ϣ�ṹ
typedef struct tagNET_DVR_GPS_INFO
{
	/* ��γ��ΪS*100 */
	BYTE    byDirection[2];		/*direction[0]0or1(����/����), direction[1]:0or1(��γ/��γ)  */
    BYTE    bySvs;         /* satellite vehicles(��ֵ0)����Ч��λ���� */
	BYTE    byLocateMode;  /* ��λģʽ(��ֵ0)����NMEA0183 3.00�汾�����0=������λ��1=��֣�2=���㣬3=������Ч */
    WORD    wHDOP;  /* ˮƽ�������ӣ�����GPS��ȷ�ȣ�0.5-99.9��6���ڶ�λ���ȸߣ�20�����趪��������洢���ǳ���10�Ժ������ */     
	WORD    wHeight;         	/* �߶� */
	DWORD   dwLatitude;	 /*γ��latitude = ʵ�ʶ�*3600*100+ʵ�ʷ�*60*100+ʵ����*100 */
	DWORD   dwLongitude; /*����longitude =ʵ�ʶ�*3600*100+ʵ�ʷ�*60*100+ʵ����*100 */
	DWORD   dwVehicleSpeed;		/* mobile speed =ʵ���ٶ�*100000 ʵ�ʵ�λkph*/
	DWORD	dwVehicleDirection;	/* mobile direction= ʵ�ʷ���*100��ʵ����ֵ�Ƿ���ǣ�����Ϊ0�ȣ�˳ʱ�� */
	BYTE	byRes[8];            // ����
}NET_DVR_GPS_INFO,*LPNET_DVR_GPS_INFO; //32�ֽ�

//GPS����ʱ��
typedef struct tagNTE_DVR_GPS_DATA
{
	NET_DVR_GPS_INFO  struGPSInfo;      //GPS�����
	NET_DVR_TIME      struTime;    		//GPS�����Ӧ��ʱ��㣬UTCʱ��
	BYTE	    byRes[12];             // ����
}NET_DVR_GPS_DATA,*LPNET_DVR_GPS_DATA;

//GPS���������ṹ
typedef struct tagNET_DVR_GET_GPS_DATA_PAPAM
{	
	DWORD dwCmdType;              //0-��ʱ��β���GPS����,1-��ʱ������GPS����	
	union
	{
		struct
		{
			NET_DVR_TIME struBeginTime;               //GPS���ݲ�����ʼʱ��       
			NET_DVR_TIME struEndTime;                 //GPS���ݲ��ҽ���ʱ��
            DWORD dwInterval;                  //GPS��ʱ��������λ��
			BYTE  byRes[76];                    // ����
		}TimeSeg;
		struct
		{
			NET_DVR_TIME struTimePoint;              //GPS���ݲ�����ʼʱ�䵥λ��
			BYTE  byRes[104];              // ����
		}TimePoint;	
	}GpsDataParam;
}NET_DVR_GET_GPS_DATA_PARAM,*LPNET_DVR_GET_GPS_DATA_PARAM;
/*************************************MVA 2.1 end****************************/

typedef struct tagNET_DVR_SDKLOCAL_CFG
{
	BYTE	byEnableAbilityParse;	//ʹ��������������,0-��ʹ��,1-ʹ��,Ĭ�ϲ�ʹ��
	BYTE	byRes[511];
}NET_DVR_SDKLOCAL_CFG, *LPNET_DVR_SDKLOCAL_CFG;


typedef  struct  tagNET_DVR_OPTICAL_CHANNEL_BIND
{
    WORD wChannelIndex;    //��ں�(0-7)
	WORD wSubChannel;      //�����ͨ���ţ�ȡֵ��Χ����������ȡ
	BYTE  byBind;      //0-���󶨻�����󶨣�1-��
	BYTE  byRes[3];
}NET_DVR_OPTICAL_CHANNEL_BIND,*LPNET_DVR_OPTICAL_CHANNEL_BIND;

typedef struct tagNET_DVR_OPTICAL_CHANNEL_CFG
{
    DWORD dwSize;
	NET_DVR_OPTICAL_CHANNEL_BIND struBindVideo;//��Ƶ��
    NET_DVR_OPTICAL_CHANNEL_BIND struBindAudio;//��Ƶ��
    BYTE  byRes[16];           //����   
}NET_DVR_OPTICAL_CHANNEL_CFG,*LPNET_DVR_OPTICAL_CHANNEL_CFG;

typedef struct tagNET_DVR_OPTICAL_INFO
{
    DWORD dwSize;
	BYTE  bySlotNum;//������ϵͳ��λ��
	BYTE  byChannel; //����ͨ����
	BYTE  byRes[18];
}NET_DVR_OPTICAL_INFO,*LPNET_DVR_OPTICAL_INFO;

//��Ƶ�л�
typedef struct tagNET_DVR_AUDIO_SURCHAN_CFG
{
	DWORD dwSize;
	BYTE  byStatus;       //��Ƶ�Ƿ�����1-����0-��
	BYTE  byRes1[3];
	//���²�����byStatus == 1ʱ��Ч
	DWORD dwSubWinNum; //�������Ӵ��ں�
	DWORD dwSurChanNum;             /*���ͨ����  */   
	NET_DVR_IPADDR struIpaddr;            /*���ͨ����ַ */
	WORD   wPort;                      	/*���ͨ���˿� */ 	
	BYTE   byRes2[14];
}NET_DVR_AUDIO_SURCHAN_CFG, *LPNET_DVR_AUDIO_SURCHAN_CFG;

//�˿ھۺ�
#define MAX_ETHERNET_PORT_NUM       8//ÿ����·���˿���
typedef struct tagNET_DVR_ETHERNET_CHANNEL_INFO
{
	DWORD dwSize;
	BYTE byConverge[MAX_ETHERNET_PORT_NUM];
	//byConverge[i] = j��ʾ����i���˿ڼ��뵽��j����·��j��ȡֵΪ1-8,j=0��ʾ�Ƴ�
	BYTE byRes[32];
}NET_DVR_ETHERNET_CHANNEL_INFO,*LPNET_DVR_ETHERNET_CHANNEL_INFO;

//����
typedef struct tagNET_DVR_SPARTAN_INFO
{
	DWORD  dwSize;
	BYTE   bySpartanStatus; //0-���Թأ�1-���Կ�
	BYTE   byRes[31];
}NET_DVR_SPARTAN_INFO,*LPNET_DVR_SPARTAN_INFO;

typedef struct tagNET_DVR_IPADDR_FILTERCFG
{
	DWORD dwSize;
	BYTE byEnable; //����IP��ַ���ˣ�0-��1-��
	BYTE byFilterType; //�������ͣ�0-���ã�1-����
	BYTE byRes[18];
    BYTE byIPAddr[1024];	//IP��ַ��Ϣ����ʽ192.168.1.2;192.168.1.3
}NET_DVR_IPADDR_FILTERCFG, *LPNET_DVR_IPADDR_FILTERCFG;

typedef struct tagNET_DVR_LOGO_OVERLAYCFG
{
	DWORD dwSize;
	BYTE  byEnable; //�Ƿ����ã�0-��1-��
	BYTE  byRes1[3];
	DWORD dwCoordinateX;	//ͼƬ��ʾ����X����
    DWORD dwCoordinateY;	//ͼƬ��ʾ����Y����
	WORD  wPicWidth; //ͼƬ��
	WORD  wPicHeight; //ͼƬ��
    BYTE  byRes[16];		//����
}NET_DVR_LOGO_OVERLAYCFG,*LPNET_DVR_LOGO_OVERLAYCFG;

typedef struct tagNET_DVR_STRUCTHEAD
{
    WORD	wLength;		//�ṹ����
    BYTE	byVersion ;	/*�ߵ�4λ�ֱ����ߵͰ汾���������ݰ汾�ͳ��Ƚ�����չ����ͬ�İ汾�ĳ��Ƚ�������*/
    BYTE	byRes;
}NET_DVR_STRUCTHEAD, *LPNET_DVR_STRUCTHEAD;

typedef struct tagNET_DVR_INVALID_DISK_PARAM
{
	NET_DVR_STRUCTHEAD	struStructHead;
	DWORD				dwDiskNo;			// ���̺�
	BYTE				byDelAll;			// 0-ɾ��dwDiskNo  1-ɾ��ȫ����Ч����
	BYTE 				byres[31];
}NET_DVR_INVALID_DISK_PARAM, *LPNET_DVR_INVALID_DISK_PARAM;


typedef struct tagNET_DVR_INVALID_MOUNT_DISK_PARAM
{
	NET_DVR_STRUCTHEAD	struStructHead;
	DWORD				dwDiskNo;			// ���̺�
	BYTE 				byres[32];
}NET_DVR_MOUNT_DISK_PARAM, *LPNET_DVR_MOUNT_DISK_PARAM;

// �����ӻص�����
typedef enum
{
	NET_SDK_CALLBACK_TYPE_STATUS = 0,		// �ص�״ֵ̬
	NET_SDK_CALLBACK_TYPE_PROGRESS,			// �ص�����ֵ
	NET_SDK_CALLBACK_TYPE_DATA				// �ص���������
}NET_SDK_CALLBACK_TYPE;


// �ص�����ΪNET_SDK_CALLBACK_TYPE_STATUSʱ��״ֵ̬
typedef enum
{
	NET_SDK_CALLBACK_STATUS_SUCCESS = 1000,		// �ɹ�
	NET_SDK_CALLBACK_STATUS_PROCESSING,			// ������
	NET_SDK_CALLBACK_STATUS_FAILED				// ʧ��
}NET_SDK_CALLBACK_STATUS_NORMAL;

typedef enum
{
	NET_SDK_GET_NEXT_STATUS_SUCCESS = 1000,	// �ɹ���ȡ�����ݣ��ͻ��˴����걾�����ݺ���Ҫ�ٴε���NET_DVR_RemoteConfigGetNext��ȡ��һ������
	NET_SDK_GET_NETX_STATUS_NEED_WAIT,		// ��ȴ��豸�������ݣ���������NET_DVR_RemoteConfigGetNext����
	NET_SDK_GET_NEXT_STATUS_FINISH,			// ����ȫ��ȡ�꣬��ʱ�ͻ��˿ɵ���NET_DVR_StopRemoteConfig����������
	NET_SDK_GET_NEXT_STATUS_FAILED,			// �����쳣���ͻ��˿ɵ���NET_DVR_StopRemoteConfig����������
}NET_SDK_GET_NEXT_STATUS;
 
/*************************************���뿨������ start****************************/
#define MAX_CODE_CARD_SUPPORTDISPNUMS 8//ÿ�����뿨���֧�ֵ���ʾͨ����
#define MAX_SUPPORT_RES 32

typedef enum _BOARD_TYPE
{
	DS4004HC_BOARD		=2,  //4004HC
	DS4008HC_BOARD		=3,  //4008HC
	DS4016HC_BOARD		=4,  //4016HC
	DS4001HF_BOARD		=5,  //4001HF
	DS4004HF_BOARD		=6,  //4004HF
	DS4002MD_BOARD		=7,  //4002MD
	DS4004MD_BOARD		=8,  //4004MD
	DS4016HCS_BOARD		=9,  //4016HCS
	DS4004HC_PLUS_BOARD	=13, //4004HC+
	DS4008HC_PLUS_BOARD	=14, //4008HC+
	DS4016HC_PLUS_BOARD	=15, //4016HC+
	DS4008HF_BOARD		=16, //4008HF
	DS4008MD_BOARD		=17, //4008MD
	DS4008HS_BOARD		=18, //4008HS
	DS4016HS_BOARD		=19, //4016HS
		
	DS4108HCV_BOARD		=20, //4108HCV
	DS4116HCV_BOARD		=21, //4116HCV
	DS5016HC_BOARD		=22, //5016HC
		
	DS4208HFV_BOARD		=23, //4208HFV
	DS4216HC_BOARD		=24, //4216HC
	DS4216HFV_BOARD		=25, //4216HFV
		
	DS5008HF_BOARD		=26, //5008HF
	DS5116HF_BOARD		=27, //5116HF
		
	DS5216HC_BOARD		=28, //5216HC
	DS5208HF_BOARD		=29, //5208HF
	DS5216HF_BOARD		=30, //5216HF
		
	DS4101HD_BOARD		=31, //4101HD
	DS4102HD_BOARD		=32, //4102HD
	DS4104HD_BOARD		=33, //4104HD
		
	DS4002MD_PLUS_BOARD =34, //4002MD+  
	DS4004MD_PLUS_BOARD =35, //4004MD+
		
	DS4204HFV_BOARD		=36, //4204HFV
	DS4308HCV_BOARD		=37, //4308HCV
	DS4308HFV_BOARD		=38, //4308HFV
	DS4316HCV_BOARD		=39, //4316HCV
	DS4316HFV_BOARD		=40, //4316HFV
	DS4304HD_BOARD		=41, //4304HD
	DS4304HFH_BOARD     =42, //4304HFH
	DS4304HFV_BOARD     =43, //4304HFV
	DS4302HFH_BOARD     =44, //4302HFH
	DS5316HF_BOARD      =45, //5316HF
	UNKNOWN_BOARD_TYPE  =0xffffffff,
}BOARD_TYPE;

typedef struct tagNET_DVR_CODECARD_ABILITY /*������뿨������*/
{
	BYTE byCardType;      //���뿨����(��BOARD_TYPE�е�ö��)
	BYTE byCodeNums;      //����ͨ���� 
    BYTE byDispNums;      //��ʾͨ���� 
    BYTE byCodeStartIdx;     //�׸�����ͨ�������б���ͨ���е����� 
    BYTE byDispStartIdx;     //�׸���ʾͨ����������ʾͨ���е�����
    BYTE byRes1[3]; 
    DWORD dwVgaSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwHdmiSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwDviSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    DWORD dwYpbprSupportResolution[MAX_SUPPORT_RES/*32*/];//֧�ֵķֱ���
    BYTE byDispFormat[MAX_CODE_CARD_SUPPORTDISPNUMS];   //֧�ֵ����ģʽ(��HD_DISPLAY_FORMAT�е�ö��) 
    BYTE byWindowMode[MAX_CODE_CARD_SUPPORTDISPNUMS][12]; //֧�ֵĴ���ģʽ(����1,2,4,9,16))
    BYTE byRes2[36];
}NET_DVR_CODECARD_ABILITY,*LPNET_DVR_CODECARD_ABILITY;

#define		MAX_CODE_CARD_NUM			8   //��������뿨��
typedef struct tagNET_DVR_CODESVR_ABILITY
{
    DWORD dwSize;      /* �ṹ���С */
    BYTE byCardNums;      /* ���뿨�� */
    BYTE byStartChan;     /* ��ʼͨ���� */
    BYTE byRes1[2];
    NET_DVR_CODECARD_ABILITY struCodeCardAbility[MAX_CODE_CARD_NUM];
    BYTE byRes2[64];
}NET_DVR_CODESVR_ABILITY, *LPNET_DVR_CODESVR_ABILITY;

typedef struct tagNET_DVR_CODER_SERVER_OUTPUT_CFG
{
	DWORD  dwSize;
	BYTE   byDispChanType;		/*��ʾͨ�����ͣ�0-BNC��1-VGA��2-HDMI��3-DVI*/ //�˲���ֻ�ܻ�ȡ
	BYTE   byVedioFormat;      /*1:NTSC,2:PAL��0-NULL*/
	BYTE   byRes1[2];
	DWORD  dwResolution;       //�ֱ���
	DWORD  dwWindowMode;		/*����ģʽ��֧��ģʽ����������ȡ*/
	BYTE   byRes2[64];
}NET_DVR_CODER_SERVER_OUTPUT_CFG,*LPNET_DVR_CODER_SERVER_OUTPUT_CFG;

typedef struct tagNET_DVR_DISPLAY_START_INFO 
{
	DWORD  dwSize;
	DWORD  dwDisplayChan; //��ʾͨ����
	DWORD  dwCodeChan; //����ͨ����
	DWORD  dwWinNum;   //���ںţ���1��
	BYTE   byEnableAudio; //������Ƶ��0-�أ�1-��
	BYTE   byRes[31];
}NET_DVR_DISPLAY_START_INFO,*LPNET_DVR_DISPLAY_START_INFO;

typedef struct tagNET_DVR_CODER_WINDOW_INFO
{
	DWORD dwSize;
	DWORD dwDisplayChan;//��ʾͨ����
	DWORD dwWinNum;     //���ںţ���1��ʼ
	BYTE  byRes[16];
}NET_DVR_CODER_WINDOW_INFO,*LPNET_DVR_CODER_WINDOW_INFO;

typedef struct tagNET_DVR_WINDOW_STATUS
{
    DWORD  dwSize;         //�ṹ��С
    DWORD  dwCodeChan;      /*����ͨ����*/
    BYTE   byDisplay;              /*�Ƿ������0-��1-��*/
    BYTE   byAudio;			/*��Ƶ�Ƿ���,0-��1-��*/   
    BYTE   byRes[30];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
}NET_DVR_WINDOW_STATUS,*LPNET_DVR_WINDOW_STATUS;

/*************************************���뿨������ end****************************/

typedef struct tagNET_DVR_RECORD_LOCK_PERCENTAGE
{
	DWORD 	dwSize;      		//�ṹ���С
	BYTE 	byPercentage;    	//�ٷֱȣ�ȡֵ��Χ[0,100]
	BYTE  	byRes[31];          //����
}NET_DVR_RECORD_LOCK_PERCENTAGE, *LPNET_DVR_RECORD_LOCK_PERCENTAGE;

typedef struct tagNET_DVR_UPDATE_RECORD_INFO
{
	DWORD 			dwSize; 			//�ṹ���С
	NET_DVR_STREAM_INFO struStreasmInfo; 	//��ID
	DWORD  			dwBeginTime;    //¼���ܵĿ�ʼʱ��
	DWORD 			dwEndTime;		//¼���ܵĽ���ʱ��
	BYTE  			byRes[32];       //����
}NET_DVR_UPDATE_RECORD_INFO, *LPNET_DVR_UPDATE_RECORD_INFO;

typedef struct tagNET_DVR_CMD_TRIGGER_PERIOD_RECORD_PARA
{
	NET_DVR_STREAM_INFO		struStreamInfo; 
	DWORD					dwCmdType; 						//�ⲿ�������� 
	DWORD					dwRecordTimeLen;				//¼�����ʱ�䣬��λ����
	BYTE					byEventID[MAX_EVENTID_LEN];		//�¼�ID����Ϊ������Ϣ
	BYTE					byRes[128];
}NET_DVR_CMD_TRIGGER_PERIOD_RECORD_PARA, *LPNET_DVR_CMD_TRIGGER_PERIOD_RECORD_PARA;

typedef struct tagNET_DVR_LOCK_FILE_BY_NAME_PARA
{
	BYTE				byFileName[NAME_LEN]; 	// ¼���ļ�������Э��ֻ��32���ļ���
    DWORD				dwLockDuration;			// ��������ʱ��,��λ�룬0xffffffff��ʾ��������
	BYTE				byRes[512];
}NET_DVR_LOCK_FILE_BY_NAME_PARA, *LPNET_DVR_LOCK_FILE_BY_NAME_PARA;


typedef struct tagNET_DVR_MULTI_STREAM_COMPRESSIONCFG_COMD
{
	DWORD					dwSize;
    NET_DVR_STREAM_INFO		struStreamInfo;
    DWORD					dwStreamType; //�������ͣ�0-��������1-��������2-�¼����ͣ�3-����3������
	BYTE					byRes[32];
}NET_DVR_MULTI_STREAM_COMPRESSIONCFG_COND, *LPNET_DVR_MULTI_STREAM_COMPRESSIONCFG_COND;


typedef struct tagNET_DVR_MULTI_STREAM_COMPRESSIONCFG
{
	DWORD							dwSize;
    DWORD							dwStreamType;		//�������ͣ�0-��������1-��������2-�¼����ͣ�3-����3������
	NET_DVR_COMPRESSION_INFO_V30	struStreamPara;		//����ѹ������
	BYTE							byRes[80];
}NET_DVR_MULTI_STREAM_COMPRESSIONCFG, *LPNET_DVR_MULTI_STREAM_COMPRESSIONCFG;

typedef struct tagNET_DVR_PUSHALARMINFO_V40
{
	DWORD dwAlarmType; /*0-�ź�������,1-Ӳ����,2-�źŶ�ʧ,3���ƶ����,4��Ӳ��δ��ʽ��,5-��дӲ�̳���,6-�ڵ�����,7-��ʽ��ƥ��, 8-�Ƿ�����, 9-��Ƶ�ź��쳣��10-¼���쳣 11- ���ܳ����仯  12-�����쳣 */
	union
	{
		BYTE byRes[300];
		struct
		{
			DWORD dwAlarmInputNumber;    /*��λ,��0λ��Ӧ��0������˿�,dwAlarmTypeΪ0ʱ��Ҫ����*/
			BYTE  byAlarmOutputNumber[MAX_ALARMOUT_V30];   /*��λ,��0λ��Ӧ��0������˿�, */
			BYTE  byAlarmRelateChannel[MAX_CHANNUM_V30];  /*��λ,��0λ��Ӧ��0��ͨ��*/
			BYTE  byRes1[97];
            BYTE  byDeviceID[NAME_LEN]; /*�豸��ID��*/
            BYTE  byRes2[7];
		}struIOAlarm;
		struct
		{
			BYTE byStreamID[STREAM_ID_LEN]; // ID��Ϣ
			BYTE byRes1[132];
			BYTE byChannel[MAX_CHANNUM_V30];             /*��λ,0x2��ʾ��1ͨ������1λ��Ӧ��1��ͨ��(��ͨ��1��ʼ)��dwAlarmTypeΪ2��3, 6��9��10ʱ��Ҫ����, */
			BYTE byRes2[33];
            BYTE byDeviceID[NAME_LEN]; /*�豸��ID��*/
            BYTE byRes3[7];
		}struStreamIDorChannel;
		struct
		{
			BYTE byRes1[228];
			BYTE byDiskNumber[MAX_DISKNUM_V30];  /*��λ,��0λ��Ӧ��0��Ӳ��,dwAlarmTypeΪ1,4,5ʱ��Ҫ����*/
            BYTE byDeviceID[NAME_LEN]; /*�豸��ID��*/
            BYTE byRes2[7];
		}struDiskAlarm;
	}uAlarmInfo;
}NET_DVR_PUSHALARMINFO_V40, *LPNET_DVR_PUSHALARMINFO_V40;


/*****************************Netra 2.3***********************************/
typedef struct tagNET_DVR_RECORD_PACK
{
    NET_DVR_STRUCTHEAD 	struStruceHead;
	DWORD 			dwPackageInterval;    // ���ʱ���� ��ʱ�䵥λ������
	BYTE  			byRes[32];       		// ����
}NET_DVR_RECORD_PACK,*LPNET_DVR_RECORD_PACK;


#define NET_DVR_FIND_NAS_DIRECTORY     6161        //����NASĿ¼
#define NET_DVR_NAS_FINDING       0   //���ڲ���
#define NET_DVR_NAS_RECV          1   //��������
#define NET_DVR_NAS_OVER          2   //���ҽ���
#define NET_DVR_NAS_EXCEPTION     3   //�����쳣
typedef struct tagNET_DVR_NET_DISK_SERACH_PARAM
{
    NET_DVR_IPADDR    		  struIP;     	// IP��ַ
    WORD  			wPort;      // IP�˿�
    BYTE    			byRes[10];  // �����ֽ�
}NET_DVR_NET_DISK_SERACH_PARAM, *LPNET_DVR_NET_DISK_SERACH_PARAM;


typedef struct tagNET_DVR_NET_DISK_SERACH_RET
{
    BYTE byDirectory[128];  // ���ص��ļ�Ŀ¼
    BYTE byRes[20];
}NET_DVR_NET_DISK_SERACH_RET, *LPNET_DVR_NET_DISK_SERACH_RET;

typedef struct tagNET_DVR_WD1_CFG
{
	NET_DVR_STRUCTHEAD 	struStruceHead;
	BYTE  			byWD1Enable;     	//WD1ʹ�ܿ��� 0 �ر� 1 ����	
	BYTE 				byRes[31];          	//����
}NET_DVR_WD1_CFG, *LPNET_DVR_WD1_CFG;

typedef struct tagNET_DVR_FTP_CFG_V40
{
	NET_DVR_STRUCTHEAD 	struStruceHead;
	BYTE				byEnableFTP;		/*�Ƿ�����ftp�ϴ����ܣ�0-��1-��*/
	BYTE				byProtocolType;		/*Э������ 0-FTP��1-SFTP*/
	WORD				wFTPPort;			/*�˿�*/
	union 
	{
		struct
		{
			BYTE			szDomain[64];	  //��������ַ������ʹIPv4 IPv6��������
			BYTE			byRes1[80];
		}struDomain;
		struct
		{
			NET_DVR_IPADDR 	struIp;/*IP��ַ*/		//IPv4 IPv6��ַ, 144�ֽ�
		}struAddrIP;
	}unionServer;  //ʹ��������ṹ����ֹ����IP��ַ�������������

	BYTE				szUserName[32];		/*�û���*/
	BYTE				szPassWORD[16];		/*����*/
	BYTE				szTopCustomDir[64];	/*�Զ���һ��Ŀ¼*/
	BYTE				szSubCustomDir[64];	/*�Զ������Ŀ¼*/
	BYTE				byDirLevel;	        /*0 = ��ʹ��Ŀ¼�ṹ��ֱ�ӱ����ڸ�Ŀ¼,	1 = ʹ��1��Ŀ¼,2=ʹ��2��Ŀ¼*/
	BYTE 				byTopDirMode;	    /* һ��Ŀ¼��0x1 = ʹ���豸��, 0x2 = ʹ���豸��,0x3 = ʹ���豸ip��ַ��
											   0x4=ʹ�ü���,0x5=ʹ��ʱ��(����)  0x6-ʹ���Զ���*/
	BYTE 				bySubDirMode;       /*����Ŀ¼��0x1=ʹ��ͨ����,0x2=ʹ��ͨ����
											   0x3=ʹ��ʱ��(������),0x4=ʹ�ó����� 0x5-ʹ���Զ���*/
	BYTE				byType;			    /* 0-����������1-��������*/
	BYTE                byEnableAnony;      /*�������� 0-�� 1��*/
	BYTE                byAddresType;        /*0 ʹ��IPV4��IPV6  1- ʹ������*/
	BYTE 				byRes[254];         /*����*/
}NET_DVR_FTPCFG_V40, *LPNET_DVR_FTPCFG_V40;

typedef struct tagNET_DVR_FTP_TYPE
{
	BYTE	byType;  // 0-����������1-��������
	BYTE	byRes[3];
}NET_DVR_FTP_TYPE, *LPNET_DVR_FTP_TYPE;


/****************************Netra 2.3 end ***************************************/


/********************************����ǽ begin*********************************/
typedef struct tagNET_DVR_SINGLEWALLPARAM
{
	DWORD  dwSize;
	BYTE   byEnable;	
	BYTE   byRes1[3];
	DWORD  dwWallNum;//����ǽ�����
	//������Ϊ��׼�������������128��128������Ⱥ͸߶�ֵ�������ã���Ϊ��׼ֵ
	NET_DVR_RECTCFG struRectCfg;
	BYTE	byRes2[36];
}NET_DVR_SINGLEWALLPARAM, *LPNET_DVR_SINGLEWALLPARAM;

/*������Ϣ*/
typedef struct tagNET_DVR_WALLWINCFG
{
	DWORD dwSize;
	BYTE  byEnable;
	BYTE  byRes1[7];
	DWORD dwWinNum;//���ں�
	DWORD dwLayerIndex;//�������Ӧ��ͼ���
	NET_DVR_RECTCFG struWinPosition;//Ŀ�Ĵ���(�����ʾǽ)
	BYTE  byRes2[20];
}NET_DVR_WALLWINCFG, *LPNET_DVR_WALLWINCFG;

typedef struct tagNET_DVR_WALLWINPARAM
{
	DWORD dwSize;
	BYTE  byTransparency; //ʹ��͸���ȣ�0-�أ���0-��	
	BYTE  byWinMode;//���ڷ���ģʽ����������ȡ
	BYTE  byRes[34];
}NET_DVR_WALLWINPARAM, *LPNET_DVR_WALLWINPARAM;

typedef struct tagNET_DVR_WALLSCENECFG
{
	DWORD dwSize;
	BYTE  sSceneName[NAME_LEN];//��������
	BYTE  byRes [80];
}NET_DVR_WALLSCENECFG, *LPNET_DVR_WALLSCENECFG;

typedef struct tagNET_DVR_WALLWIN_INFO
{
	DWORD dwSize;
	DWORD dwWinNum;   //���ں�
	DWORD dwSubWinNum;//�Ӵ��ں�
	BYTE  byRes[16];
}NET_DVR_WALLWIN_INFO,*LPNET_DVR_WALLWIN_INFO;

typedef struct tagNET_DVR_WALL_WIN_STATUS
{
	DWORD dwSize ;
    BYTE  byDecodeStatus; /*��ǰ����״̬:0:δ����,1 :������*/
    BYTE  byStreamType;    /*��������*/
    BYTE  byPacketType;    /*�����ʽ*/
    BYTE  byFpsDecV; /*��Ƶ����֡��*/
    BYTE  byFpsDecA; /*��Ƶ����֡��*/
    BYTE  byRes1[7];    
    DWORD dwDecodedV; /*�������Ƶ֡*/
    DWORD dwDecodedA; /*�������Ƶ֡*/
    WORD  wImgW; /*��������ǰ��ͼ���С*/
    WORD  wImgH; 
    BYTE  byRes2[32];
}NET_DVR_WALL_WIN_STATUS, *LPNET_DVR_WALL_WIN_STATUS;

typedef struct tagNET_DVR_WININDEX_INFO
{
	DWORD dwWinIndex; //���ں�
	DWORD dwSubWinIndex;//�Ӵ��ں�
	BYTE  byType ;//��Դ���ͣ�1-���룬2-����
    BYTE  byRes[7];
}NET_DVR_WININDEX_INFO, *LPNET_DVR_WININDEX_INFO;

typedef struct tagNET_DVR_ASSOCIATEDDEV_CHAN_INFO
{
	DWORD  dwSize ;
	BYTE   sAddress[MAX_DOMAIN_NAME];//ip��ַ����������
    WORD   wDVRPort;			 	/* �˿ں� */
    WORD   wChannel;				/* ͨ���� */
    BYTE   sUserName[NAME_LEN];	/* ���������½�ʺ� */
	BYTE   sPassword[PASSWD_LEN];	/* ����������� */
    BYTE   byRes[24];
}NET_DVR_ASSOCIATEDDEV_CHAN_INFO,*LPNET_DVR_ASSOCIATEDDEV_CHAN_INFO;

typedef struct tagNET_DVR_WALLOUTPUTPARAM
{
	DWORD dwSize;
	DWORD dwResolution; //�ֱ���	
	NET_DVR_VIDEOEFFECT struRes;
	BYTE  byRes[64];
}NET_DVR_WALLOUTPUTPARAM, *LPNET_DVR_WALLOUTPUTPARAM;

#define 	MAX_UNITEDMATRIX_NUM		8  //�����������Ƶ�ۺ�ƽ̨����

typedef struct NET_DVR_SUBMATRIXSYSTEMINFO
{
	//ƽ̨�ţ�0��ʾ�޴�ƽ̨
	DWORD		dwSequence;
	BYTE		sAddress[MAX_DOMAIN_NAME];//ip��ַ����������
    WORD		wSubMatrixPort;        /*��ϵͳ�˿ں�*/
	BYTE		byRes1[6];   
	BYTE		sUserName[NAME_LEN];	/*�û���*/
	BYTE		sPassword[PASSWD_LEN];	/*���� */   
	BYTE		byRes2[36];
}NET_DVR_SUBMATRIXSYSTEMINFO,*LPNET_DVR_SUBMATRIXSYSTEMINFO;

typedef struct tagNET_DVR_UNITEDMATRIXSYSTEMINFO
{
	DWORD dwSize;
	//��Ƶ�ۺ�ƽ̨��Ϣ
	NET_DVR_SUBMATRIXSYSTEMINFO struMatrixInfo[MAX_UNITEDMATRIX_NUM]; 
    BYTE  byRes[32];
}NET_DVR_UNITEDMATRIXSYSTEMINFO,*LPNET_DVR_UNITEDMATRIXSYSTEMINFO;

typedef struct tagNET_DVR_WALL_CFG
{
	DWORD dwSize;
	BYTE  byTransparency;//͸����,0-100,0Ϊ��͸��
	BYTE  byRes[63];
}NET_DVR_WALL_CFG,*LPNET_DVR_WALL_CFG;
/********************************����ǽ end*********************************/

/************************************200������������������(V5.0.2)  begin*******************************/
typedef struct tagNET_DVR_LOW_LIGHT_CFG
{
	DWORD dwSize;
	BYTE  byLowLightLimt; /* ���նȵ��ӿ���: 0-�أ�1-�� */
	BYTE  byLowLightLimtLevel; /*���0-�أ�1-������*2��2-������*3��3-������*4��4-������*6��5-������*8��6-������*12��7-������*16��8-������*24��9-������*32��10-������*48��11-������*64��12-������*96��13-������*128��14-������*256��15-������*512*/
	BYTE  byRes[66];
}NET_DVR_LOW_LIGHT_CFG, *LPNET_DVR_LOW_LIGHT_CFG;

typedef struct tagNET_DVR_FOCUSMODE_CFG
{
	DWORD dwSize;
	BYTE  byFocusMode;  /* �۽�ģʽ��0-�Զ���1-�ֶ���2-���Զ� */
	BYTE  byAutoFocusMode; /* �Զ��۽�ģʽ��0-�أ�1-ģʽA��2-ģʽB��3-ģʽAB��4-ģʽC �Զ��۽�ģʽ����Ҫ�ھ۽�ģʽΪ�Զ�ʱ����ʾ*/
	WORD  wMinFocusDistance; /* ��С�۽����룬��λCM,  0-�Զ���0xffff-����Զ */
	BYTE  byZoomSpeedLevel;  /* �䱶�ٶȣ�Ϊʵ��ȡֵ��1-3 */
	BYTE  byFocusSpeedLevel; /* �۽��ٶȣ�Ϊʵ��ȡֵ��1-3 */
	BYTE  byOpticalZoom;		/* ��ѧ�䱶��0-255 */
	BYTE  byDigtitalZoom;		/* ���ֱ䱶��0-255 */
	BYTE  byRes[64];
}NET_DVR_FOCUSMODE_CFG, *LPNET_DVR_FOCUSMODE_CFG;

typedef struct tagNET_DVR_INFRARE_CFG
{
	DWORD  dwSize;
	BYTE  byIrControlMode;  /* �����������-����ģʽ��0-�Զ���1-�ֶ� */
	BYTE  byIrBrightness;	/* �����������-�������ȣ�0-100 */
	BYTE  byIrSensitivity;	/* �����������-����������ȣ�0-100 */
	BYTE  byRes[65];
}NET_DVR_INFRARE_CFG, *LPNET_DVR_INFRARE_CFG;

typedef struct tagNET_DVR_AEMODECFG
{
	DWORD  dwSize;
	int   iIrisSet;	/* ��Ȧ��Ϊʵ��ȡֵ*100��ֵ��0-�� */
	int   iGainSet;	/* �������棬�عⲹ����Ϊʵ��ȡֵ*100��ֵ���п����Ǹ�ֵ */
	int   iGainLimit;/* �������ƣ��عⲹ����Ϊʵ��ȡֵ*100��ֵ���п����Ǹ�ֵ */
	int   iExposureCompensate; /* �عⲹ����Ϊʵ��ȡֵ*100��ֵ������1050����10.5dB, -750����-7.5dB */
	BYTE  byExposureModeSet;	/* ������ع�ģʽ,0-�ֶ�ģʽ��1-�Զ��ع⣬2-��Ȧ���ȣ�3-�������ȣ�4-�������� */
	BYTE  byShutterSet;	/* ���ţ�0-�أ�1-�Զ�x1��2-�Զ�x2��3-�Զ�x4��4-�Զ�x8��5-�Զ�x16��6-�Զ�x32��7-�Զ�x64��8-�Զ�x128��9-1/1��10-1/2��11-1/3��12-1/4��13-1/6��14-1/8��15-1/12��16-1/15��17-1/25��18-1/30��19-1/50��20-1/60��21-1/75��22-1/90��23-1/100��24-1/120��25-1/125��26-1/150��27-1/180��28-1/200��29-1/215��30-1/250��31-1/300��32-1/350��33-1/425��34-1/500��35-1/600��36-1/725��37-1/1000��38-1/1250��39-1500,40-1/1750��41-1/2000��42-1/2500��43-3000,44-1/3500��45-1/4000��46-1/6000��47-1/10000��48-1/30000��49-1/100000 */
	BYTE  byImageStabilizeLevel;  /* �������ȼ�: 0-3 */
	BYTE  byCameraIrCorrect; /* ����У��: 0-�Զ���1-����2,�� */
	BYTE  byHighSensitivity; /* ������������: 0-�أ�1-�� */
	BYTE  byInitializeLens;  /* ��ʼ����ͷ: 0-�أ�1-�� */
	BYTE  byChromaSuppress; /* ɫ������ :0-255*/
	BYTE  byRes[65];
}NET_DVR_AEMODECFG, *LPNET_DVR_AEMODECFG;

/************************************200������������������(V5.0.2)  end*******************************/

/***************************************����ʽ����������V2.1 begin**************************************/

typedef struct tagNET_DVR_EXTERNAL_MATRIX_CFG
{
	DWORD		dwSize;
	BYTE		byValid;			// ��ЧʱΪ���ã���ЧʱΪɾ��
	BYTE		byRes1[3];
	BYTE	    sMatrixName[NAME_LEN/*32*/];       // ���������
	DWORD  	    dwMatrixID;		// �����ID�ţ�ֻ�ܻ�ȡ
	WORD		wMatrixInputChanNum;				// ���������ͨ����Ŀ
	WORD		wMatrixOutputChanNum;			// ��������ͨ����Ŀ
	WORD   	    wMatrixOutputChanRef[MAX_CAM_COUNT];   // �豸����;�������İ󶨹�ϵ�������±��ʾ�������豸����ͨ���ţ�Ԫ�ص�ֵ��ʾ��������ͨ���ţ�Ԫ��ֵ����0 ��ʾ�󶨾������ͨ����Ԫ��ֵΪ0ʱ��ʾ���󶨡�
	BYTE		byMatrixChanType;// �����ͨ������1-BNC��2-VGA��3-RGB��4-DVI
	BYTE		byMatrixProtocol;	// ��������Э��1��ZT1.0��2.ZT2.0��3.Extron��4.Creator
	BYTE		byMatrixType;		//1-ģ�����2-���־���
	BYTE		byRes2;
	NET_MATRIX_UNION struMatrixUnion;	
	BYTE		byRes3[128];		
}NET_DVR_EXTERNAL_MATRIX_CFG, *LPNET_DVR_EXTERNAL_MATRIX_CFG;


#define MAX_INPUTNUMS 1024
#define MAX_OUTPUTNUMS 256
typedef struct tagNET_DVR_ASSOCIATE_INPUT_PARAM
{
	BYTE byEnable;
	BYTE byRes1[3];
	DWORD dwDeviceIndex;//�ֲ�ʽ�����������豸���
	WORD wInputIndex;//�����ź�Դ
	BYTE  byRes2[18];
}NET_DVR_ASSOCIATE_INPUT_PARAM, *LPNET_DVR_ASSOCIATE_INPUT_PARAM;

typedef struct tagNET_DVR_ASSOCIATE_OUTPUT_PARAM
{
	BYTE byEnable;
	BYTE byRes1[3];
	DWORD	dwOutputIndex;	//�����ʾ�������	
	BYTE	byRes2[20];
}NET_DVR_ASSOCIATE_OUTPUT_PARAM,*LPNET_DVR_ASSOCIATE_OUTPUT_PARAM;

typedef struct tagNET_DVR_VCS_USER_INFO
{
	DWORD   dwSize;
	BYTE	sUserName[NAME_LEN];			// �û��������16�ֽ�
	BYTE	sPassWord[PASSWD_LEN];		// ����
	NET_DVR_IPADDR	struUserIP;	// �û�IP��ַ(Ϊ0ʱ��ʾ�����κε�ַ)
	BYTE	byMacAddr[MACADDR_LEN];			// �����ַ
	BYTE	byPriority;		// ���ȼ���1-����Ա��2-����Ա ������Ա�����κ�Ȩ�ޣ�����Աû��"�����û�"��Ȩ��
	BYTE	byRes1;
	DWORD	dwRight;/*Զ�̲���Ȩ�ޣ���λ��ʾ��0-��֧�֣�1-֧�֣���32λ�����Ȩ������*/	
	//bit0-�鿴��������
	//bit1-���û�������
	//bit2-��ʾ������
	//bit3-���ڹ���
	//bit4-�ź�Դ����
	//bit5-���ֹ���
	//bit6-Ԥ������
	//bit7-��ͼ����
	//bit8-OSD����
	//bit9-����Ȩ��
	//bit10-��������
	//bit11-Զ������
	//bit12-�ָ�Ĭ������
	//bit13-���뵼������
	//bit14-��־��ѯ
	//bit15-Զ������
	NET_DVR_ASSOCIATE_INPUT_PARAM struInputParam[MAX_INPUTNUMS/*1024*/];
	NET_DVR_ASSOCIATE_OUTPUT_PARAM struOutputParam[MAX_OUTPUTNUMS/*256*/];
	BYTE	byRes2[128];				/* ���� */
} NET_DVR_VCS_USER_INFO, *LPNET_DVR_VCS_USER_INFO;
/***************************************����ʽ����������V2.1 end**************************************/

/*************************************63T 64T 65D V2.0.0 start****************************/
typedef struct tagNET_DVR_STREAM_MEDIA_SERVER_CFG_V41
{    
    BYTE    byValid; //�Ƿ����ã�0-��1-��
    BYTE	byRes1[3];
    BYTE    byAddress[MAX_DOMAIN_NAME];   //IP��������   
    WORD	wDevPort;			/*��ý��������˿�*/    
    BYTE	byTransmitType;		/*����Э������ 0-TCP��1-UDP*/
    BYTE	byRes2[69];
}NET_DVR_STREAM_MEDIA_SERVER_CFG_V41,*LPNET_DVR_STREAM_MEDIA_SERVER_CFG_V41;

//�豸ͨ����Ϣ
typedef struct tagNET_DVR_DEV_CHAN_INFO_V41
{
	BYTE    byAddress[MAX_DOMAIN_NAME];	//�豸����
    WORD 	wDVRPort;			 	//�˿ں�
    BYTE 	byChannel;				//ͨ����
    BYTE	byTransProtocol;		//����Э������0-TCP��1-UDP
    BYTE	byTransMode;			//��������ģʽ 0�������� 1��������
    BYTE	byFactoryType;			/*ǰ���豸��������,ͨ���ӿڻ�ȡ*/
    BYTE	byDeviceType; //�豸����(��Ƶ�ۺ�ƽ̨���ܰ�ʹ��)��1-����������ʱ������Ƶ�ۺ�ƽ̨��������byVcaSupportChanMode�ֶ���������ʹ�ý���ͨ��������ʾͨ������2-������
    BYTE    byDispChan;//��ʾͨ����,��������ʹ��
    BYTE	bySubDispChan;//��ʾͨ����ͨ���ţ���������ʱʹ��
	BYTE	byResolution;	//; 1-CIF 2-4CIF 3-720P 4-1080P 5-500w����������ʹ�ã���������������ݸò������������Դ
    BYTE	byRes[2];    
    BYTE	sUserName[NAME_LEN];	//���������½�ʺ�
    BYTE	sPassword[PASSWD_LEN];	//�����������
}NET_DVR_DEV_CHAN_INFO_V41,*LPNET_DVR_DEV_CHAN_INFO_V41;

typedef struct tagNET_DVR_DEC_STREAM_DEV
{
	NET_DVR_STREAM_MEDIA_SERVER_CFG_V41	struStreamMediaSvrCfg;
	NET_DVR_DEV_CHAN_INFO_V41			    struDevChanInfo;
}NET_DVR_DEC_STREAM_DEV,*LPNET_DVR_DEC_STREAM_DEV;

typedef union tagNET_DVR_DEC_STREAM_MODE
{
    NET_DVR_DEC_STREAM_DEV                struDecStreamDev;
	NET_DVR_PU_STREAM_URL                 struUrlInfo;
	BYTE                                  byRes[300];	
}NET_DVR_DEC_STREAM_MODE,*LPNET_DVR_DEC_STREAM_MODE;

typedef struct tagNET_DVR_PU_STREAM_CFG_V41
{
	DWORD								dwSize;
    BYTE								byStreamMode;//ȡ��ģʽ��0-��Ч��1-ͨ��IP������ȡ����2-ͨ��URLȡ��
	BYTE								byRes1[3];
    NET_DVR_DEC_STREAM_MODE             uDecStreamMode;//ȡ����Ϣ
	BYTE  byRes2[64];
}NET_DVR_PU_STREAM_CFG_V41,*LPNET_DVR_PU_STREAM_CFG_V41;

typedef struct  tagNET_DVR_MATRIX_CHAN_INFO_V41
{
	BYTE								byEnable; //�Ƿ����ã�0-��1-��
	BYTE								byStreamMode;//ȡ��ģʽ��0-��Ч��1-ͨ��IP������ȡ����2-ͨ��URLȡ��
	BYTE								byRes[2];
    NET_DVR_DEC_STREAM_MODE             uDecStreamMode;//ȡ����Ϣ
}NET_DVR_MATRIX_CHAN_INFO_V41,*LPNET_DVR_MATRIX_CHAN_INFO_V41;

typedef struct  tagNET_DVR_MATRIX_LOOP_DECINFO_V41
{
    DWORD							dwSize;
    DWORD							dwPoolTime;		/*��Ѳ���*/
    NET_DVR_MATRIX_CHAN_INFO_V41	struchanConInfo[MAX_CYCLE_CHAN_V30];
    BYTE               			byRes[16];
}NET_DVR_MATRIX_LOOP_DECINFO_V41,*LPNET_DVR_MATRIX_LOOP_DECINFO_V41;

typedef struct tagNET_DVR_MATRIX_DEC_CHAN_INFO_V41
{
    DWORD	dwSize;
    BYTE								byStreamMode;//ȡ��ģʽ��0-��Ч��1-ͨ��IP������ȡ����2-ͨ��URLȡ��
	BYTE								byRes1[3];
    NET_DVR_DEC_STREAM_MODE             uDecStreamMode;//ȡ����Ϣ
    DWORD	dwPlayMode;		/* 0-��̬���� 1��ѭ������ 2����ʱ��ط� 3�����ļ��ط� */
    NET_DVR_TIME StartTime;		/* ��ʱ��طſ�ʼʱ�� */
    NET_DVR_TIME StopTime;		/* ��ʱ��ط�ֹͣʱ�� */
    BYTE    sFileName[128];		/* ���ļ��ط��ļ��� */
    DWORD   dwGetStreamMode;	/*ȡ��ģʽ:1-������2-����*/
    NET_DVR_MATRIX_PASSIVEMODE    struPassiveMode;
    BYTE	byRes2[32];
}NET_DVR_MATRIX_DEC_CHAN_INFO_V41,*LPNET_DVR_MATRIX_DEC_CHAN_INFO_V41;

/*************************************63T 64T 65D V2.0.0 end******************************/

/********************************�����������V20 begin****************************/

//��ȡ����״̬
typedef struct tagNET_DVR_TRUNK_USE_STATE
{
	DWORD		dwSize;
	DWORD		dwTrunkID;	//����ID
	WORD		wReserveUserID;	//Ԥ�����û�ID�� 1~256 ��0��ʾ�ͷ�Ԥ��
	BYTE		byStatus;  //1-���У�2-ռ�ã�3-���� */
	BYTE		byRes1;
	BYTE  		byUserId[256];  //�����±��ʾ�û�ID�ţ�����Ԫ�ص�ֵ��ʾ�Ƿ�ʹ�ø��ߡ��磺byUserID[0] ��ֵΪ1����ʾ�û�IDΪ0���û�����ʹ�ã�byUserID[0] ��ֵΪ0��ʾ�û�IDΪ0���û�û��ʹ����������
	BYTE	   	byRes2[64];  
}NET_DVR_TRUNK_USE_STATE,  *LPNET_DVR_TRUNK_USE_STATE;


//PTZ���Ʋ���
typedef struct tagNET_DVR_PTZ_CTRL_INFO
{
	DWORD	dwSize;
	DWORD	dwCtrlDelayTime;		//PTZ���Ƴ���ʱ�䣬ָPTZ���ƺ���dwCtrlDelayTimeʱ���ڣ�����ͬ�����ͼ����û����������Ч����λ����
	BYTE	byRes[64];
}NET_DVR_PTZ_CTRL_INFO, *LPNET_DVR_PTZ_CTRL_INFO;

//��ʾ·��
#define		MAX_MATRIX_CASCADE		32
typedef struct tagNET_DVR_MATRIX_ROUTE_INFO
{
	DWORD		dwSize;
	DWORD	   	dwCamNo;
	DWORD   	dwMonNo;
	DWORD		dwSubWin;
	DWORD		dwUserId;
	DWORD   	dwTrunkId[MAX_MATRIX_CASCADE/*32*/];//trunkId��Ա��Ӧ����������1��32����CAM�˿�ʼ��trunkId[0]��ʾ��һ��������trunkId[1]��ʾ�ڶ�������, trunkId[i] = 0 ��ʾ�޸���
	BYTE		byRes[64];      /* Ԥ�� */
}NET_DVR_MATRIX_ROUTE_INFO, *LPNET_DVR_MATRIX_ROUTE_INFO;


//��ȡPTZ״̬
typedef struct tagNET_DVR_PTZ_STATUS
{
	DWORD		dwSize;
	DWORD		dwUserID;	//1~256��0 ��ʾ���û�
	DWORD   	dwStatus;  	// PTZ����״̬0-ֹͣ��1-����
	DWORD		dwRestTime;  //ʣ��ʱ��
	BYTE		byRes[64];  
}NET_DVR_PTZ_STATUS, *LPNET_DVR_PTZ_STATUS;

/********************************�����������V20 end****************************/

/********************************�����տ����� V2.0 begin*********************************/
typedef struct tagNET_DVR_SAFETYCABIN_WORK_MODE
{
	DWORD dwSize;
	BYTE  byWorkMode; //����ģʽ��0-�����ų�����1-�����ų���
	BYTE  byRes[15];
}NET_DVR_SAFETYCABIN_WORK_MODE,*LPNET_DVR_SAFETYCABIN_WORK_MODE;

typedef struct tagNET_DVR_SAFETYCABIN_PERSON_SIGNAL_CFG
{
	DWORD dwSize;
	BYTE  bySensorType; //���������ͣ�0-��������ͣ�1-Ļ��������
	BYTE  bySensitivity; //���������жȣ���Χ��0-100%
	BYTE  byDevUseTimeout; //������ʹ�ó�ʱʱ�䣬��λ����,��Χ��0-30��Ĭ�ϳ�ʱ15min,��ʱ��ͨ������ͨ���ϴ�����
	BYTE  byRes1;
	WORD  wCurtainDelayTime; //Ļ��������̽����ʱʱ�䣬��λ���룬��Χ��0-10
	WORD  wCurtainResponseTime; //Ļ����״̬�仯��������Ӧʱ�䣬��λ���룬��Χ��0-300	
	BYTE  byRes2[32];
}NET_DVR_SAFETYCABIN_PERSON_SIGNAL_CFG,*LPNET_DVR_SAFETYCABIN_PERSON_SIGNAL_CFG;
/********************************�����տ����� V2.0 end **********************************/

/*********************************ǰ��IPC 5.0 begin**************************************/
//add by wxm for IPC_V5.0 12-12-17
#define NET_DVR_GET_IPV6_LIST       3236        //��ȡ������ȫ��IPV6��ַ��Ϣ		

typedef struct tagNET_DVR_ETHERNET_IPV6_COND
{
	DWORD		dwSize;
    BYTE  byMACAddr[MACADDR_LEN]; //�����������ַ
	BYTE  byRes[64];      //����
}NET_DVR_ETHERNET_IPV6_COND,*LPNET_DVR_ETHERNET_IPV6_COND;

typedef struct tagNET_DVR_ETHERNET_IPV6_CFG
{
	DWORD		dwSize;
	BYTE  byState; //IPv6״̬��0-·�ɷ��䣬1-�Զ�����
	BYTE  byRes1[3]; 
    BYTE  byIPv6[MAX_IPV6_LEN]; //IPv6��ַ
	BYTE  byRes[64];      //����
}NET_DVR_ETHERNET_IPV6_CFG,*LPNET_DVR_ETHERNET_IPV6_CFG;
/*********************************ǰ��IPC 5.0 end**************************************/

/*********************************ץ�Ļ�V2V3 begin**************************************/
typedef struct tagNET_DVR_CAMERA_SETUPCFG
{
	DWORD dwSize;
	WORD wSetupHeight; //����߶�[0,20]����λ����
	BYTE byLensType; //��ͷ�������ͣ�0-8mm,1-12mm,2-16mm,3-25mm,4-35mm,5-50mm
    BYTE byRes[61]; 
}NET_DVR_CAMERA_SETUPCFG, *LPNET_DVR_CAMERA_SETUPCFG;



//��ͨͳ�Ʊ�������
typedef struct tagNET_DVR_TPS_ALARMCFG
{
    DWORD dwSize;
	BYTE byEnable; //�Ƿ����ý�ͨͳ�Ʊ����ϴ�
	BYTE byRes1[3];	//
	DWORD dwInterval;//ͳ�Ƽ��ʱ�䣨��λ�����ӣ�
    BYTE  byRes[248];
}NET_DVR_TPS_ALARMCFG, *LPNET_DVR_TPS_ALARMCFG;

typedef struct tagNET_DVR_DOWNLOAD_ALARM_RECORD_COND
{
	DWORD dwSize;
	WORD  wAlarmRecordID;	//����¼��ID(���ڲ�ѯ¼�񣬽���byResultTypeΪ2ʱ��Ч)
	BYTE  byRes[130];
}NET_DVR_DOWNLOAD_ALARM_RECORD_COND, *LPNET_DVR_DOWNLOAD_ALARM_RECORD_COND;
/*********************************ץ�Ļ�V2V3 end**************************************/
/********************************SDK�ӿں�������*********************************/
NET_DVR_API BOOL __stdcall NET_DVR_Init();
NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();

//NET_DVR_SetDVRMessage����չ
#ifdef _WIN32
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessage(UINT nMessage,HWND hWnd);
NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT nMessage, HWND hWnd, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
#elif defined(__linux__) || defined(__APPLE__)
NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT reserved1, void* reserved2, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
/*Linuxר�� */
#if defined(__linux__)
NET_DVR_API BOOL NET_DVR_DrawAreaInit(INITINFO InitInfo, DWORD iUseSDL = 1);
NET_DVR_API BOOL NET_DVR_DrawAreaRelease();
#endif
#endif

NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack(BOOL (CALLBACK *fMessCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_EX(BOOL (CALLBACK *fMessCallBack_EX)(LONG lCommand,LONG lUserID,char *pBuf,DWORD dwBufLen));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_NEW(BOOL (CALLBACK *fMessCallBack_NEW)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, WORD dwLinkDVRPort));
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack(BOOL (CALLBACK *fMessageCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, DWORD dwUser), DWORD dwUser);
typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);

NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 3000, DWORD dwTryTimes = 3);
NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
NET_DVR_API int __stdcall NET_DVR_IsSupport();
NET_DVR_API BOOL __stdcall NET_DVR_StartListen(char *sLocalIP,WORD wLocalPort);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen();

NET_DVR_API LONG __stdcall NET_DVR_StartListen_V30(char *sLocalIP, WORD wLocalPort, MSGCallBack DataCallback, void* pUserData = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen_V30(LONG lListenHandle);
NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
NET_DVR_API BOOL __stdcall NET_DVR_Login_Check(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_SetShowMode(DWORD dwShowType,COLORREF colorKey);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRIPByResolveSvr(char *sServerIP, WORD wServerPort, BYTE *sDVRName,WORD wDVRNameLen,BYTE *sDVRSerialNumber,WORD wDVRSerialLen,char* sGetIP);
NET_DVR_API BOOL  __stdcall NET_DVR_GetDVRIPByResolveSvr_EX(char *sServerIP, WORD wServerPort, BYTE *sDVRName, WORD wDVRNameLen, BYTE *sDVRSerialNumber, WORD wDVRSerialLen, char* sGetIP, DWORD *dwPort);

//Ԥ����ؽӿ�
NET_DVR_API LONG __stdcall NET_DVR_PlayDirect(char *sDVRIP, char *sUserName, char *sPassword, \
											  LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayDirect(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_RigisterDrawFun(LONG lRealHandle,void (CALLBACK* fDrawFun)(LONG lRealHandle,HDC hDc,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayerBufNumber(LONG lRealHandle,DWORD dwBufNum);
NET_DVR_API BOOL __stdcall NET_DVR_ThrowBFrame(LONG lRealHandle,DWORD dwNum);
NET_DVR_API BOOL __stdcall NET_DVR_SetAudioMode(DWORD dwMode);
NET_DVR_API BOOL __stdcall NET_DVR_OpenSound(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSound();
NET_DVR_API BOOL __stdcall NET_DVR_OpenSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_Volume(LONG lRealHandle,WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetStandardDataCallBack(LONG lRealHandle,void(CALLBACK *fStdDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture(LONG lRealHandle,char *sPicFileName);//bmp
NET_DVR_API BOOL __stdcall NET_DVR_SetCapturePictureMode(DWORD dwCaptureMode);


//��̬����I֡
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//������
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//������

//��̨������ؽӿ�
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_Other(LONG lUserID,LONG lChannel,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_Other(LONG lUserID,LONG lChannel,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_EX(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_EX(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_EX(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_EX(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_Other(LONG lUserID, LONG lChannel, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_EX(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_Other(LONG lUserID, LONG lChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_EX(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_GetPTZCruise(LONG lUserID,LONG lChannel,LONG lCruiseRoute, LPNET_DVR_CRUISE_RET lpCruiseRet);


//�ļ�������ط�
NET_DVR_API LONG __stdcall NET_DVR_FindFile(LONG lUserID,LONG lChannel,DWORD dwFileType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextFile(LONG lFindHandle,LPNET_DVR_FIND_DATA lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindClose(LONG lFindHandle);
NET_DVR_API LONG __stdcall NET_DVR_FindNextFile_V30(LONG lFindHandle, LPNET_DVR_FINDDATA_V30 lpFindData);
NET_DVR_API LONG __stdcall NET_DVR_FindFile_V30(LONG lUserID, LPNET_DVR_FILECOND pFindCond);
NET_DVR_API BOOL __stdcall NET_DVR_FindClose_V30(LONG lFindHandle);

NET_DVR_API BOOL __stdcall NET_DVR_LockFileByName(LONG lUserID, char *sLockFileName);
NET_DVR_API BOOL __stdcall NET_DVR_UnlockFileByName(LONG lUserID, char *sUnlockFileName);
NET_DVR_API BOOL __stdcall NET_DVR_LockFileByNameV40(LONG lUserID, BOOL bLock, const NET_DVR_LOCK_FILE_BY_NAME_PARA *lpLockFilePara);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackByName(LONG lUserID,char *sPlayBackFileName, HWND hWnd);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, HWND hWnd);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackReverseByName(LONG lUserID, char *sPlayBackFileName, HWND hWnd);

NET_DVR_API BOOL __stdcall NET_DVR_PlayBackControl(LONG lPlayHandle,DWORD dwControlCode,DWORD dwInValue,DWORD *LPOutValue);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBack(LONG lPlayHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayDataCallBack(LONG lPlayHandle,void(CALLBACK *fPlayDataCallBack) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayDataCallBack_V40(LONG lPlayHandle,void(CALLBACK *fPlayDataCallBack_V40) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,void *pUser),void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackSaveData(LONG lPlayHandle,char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayBackSave(LONG lPlayHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPlayBackOsdTime(LONG lPlayHandle, LPNET_DVR_TIME lpOsdTime);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackCaptureFile(LONG lPlayHandle,char *sFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetFileByName(LONG lUserID,char *sDVRFileName,char *sSavedFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime(LONG lUserID,LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, char *sSavedFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopGetFile(LONG lFileHandle);
NET_DVR_API int __stdcall NET_DVR_GetDownloadPos(LONG lFileHandle);
NET_DVR_API int	__stdcall NET_DVR_GetPlayBackPos(LONG lPlayHandle);

//����
NET_DVR_API LONG __stdcall NET_DVR_AdapterUpgrade(LONG lUserID, char *sFileName);
NET_DVR_API LONG __stdcall NET_DVR_Upgrade(LONG lUserID, char *sFileName);
NET_DVR_API LONG __stdcall NET_DVR_VcalibUpgrade(LONG lUserID, LONG lChannel, char const *sFileName);
NET_DVR_API int __stdcall NET_DVR_GetUpgradeState(LONG lUpgradeHandle);
NET_DVR_API int __stdcall NET_DVR_GetUpgradeProgress(LONG lUpgradeHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseUpgradeHandle(LONG lUpgradeHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetNetworkEnvironment(DWORD dwEnvironmentLevel);
//Զ�̸�ʽ��Ӳ��
NET_DVR_API LONG __stdcall NET_DVR_FormatDisk(LONG lUserID,LONG lDiskNumber);
NET_DVR_API BOOL __stdcall NET_DVR_GetFormatProgress(LONG lFormatHandle, LONG *pCurrentFormatDisk,LONG *pCurrentDiskPos,LONG *pFormatStatic);
NET_DVR_API BOOL __stdcall NET_DVR_CloseFormatHandle(LONG lFormatHandle);
//����
NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan(LONG lAlarmHandle);
NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V30(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_CloseAlarmChan_V30(LONG lAlarmHandle);
//�����Խ�
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_V30(LONG lUserID, DWORD dwVoiceChan, BOOL bNeedCBNoEncData, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetVoiceComClientVolume(LONG lVoiceComHandle, WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_StopVoiceCom(LONG lVoiceComHandle);
//����ת��
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR(LONG lUserID, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, DWORD dwUser), DWORD dwUser);
NET_DVR_API LONG __stdcall NET_DVR_StartVoiceCom_MR_V30(LONG lUserID, DWORD dwVoiceChan, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_VoiceComSendData(LONG lVoiceComHandle, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetCurrentAudioCompress(LONG lUserID, LPNET_DVR_COMPRESSION_AUDIO lpCompressAudio);
//�����㲥
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStart();
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStart_V30(void(CALLBACK *fVoiceDataCallBack)(char *pRecvDataBuffer, DWORD dwBufSize, void * pUser), void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_ClientAudioStop();
NET_DVR_API BOOL __stdcall NET_DVR_AddDVR(LONG lUserID);
NET_DVR_API LONG __stdcall NET_DVR_AddDVR_V30(LONG lUserID, DWORD dwVoiceChan);
NET_DVR_API BOOL __stdcall NET_DVR_DelDVR(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_DelDVR_V30(LONG lVoiceHandle);
////////////////////////////////////////////////////////////
//͸��ͨ������
NET_DVR_API LONG __stdcall NET_DVR_SerialStart(LONG lUserID,LONG lSerialPort,void(CALLBACK *fSerialDataCallBack)(LONG lSerialHandle,char *pRecvDataBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
//485��Ϊ͸��ͨ��ʱ����Ҫָ��ͨ���ţ���Ϊ��ͬͨ����485�����ÿ��Բ�ͬ(���粨����)
NET_DVR_API BOOL __stdcall NET_DVR_SerialSend(LONG lSerialHandle, LONG lChannel, char *pSendBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_SerialStop(LONG lSerialHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SendTo232Port(LONG lUserID, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_SendToSerialPort(LONG lUserID, DWORD dwSerialPort, DWORD dwSerialIndex, char *pSendBuf, DWORD dwBufSize);

//���� nBitrate = 16000
NET_DVR_API void* __stdcall NET_DVR_InitG722Decoder(int nBitrate = 16000);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Decoder(void *pDecHandle);
NET_DVR_API BOOL __stdcall NET_DVR_DecodeG722Frame(void *pDecHandle, BYTE* pInBuffer, BYTE* pOutBuffer);
//����
NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,BYTE* pInBuffer, BYTE* pOutBuffer);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);

//����
NET_DVR_API void* __stdcall NET_DVR_InitG726Decoder(void** pDecMoudle);
NET_DVR_API void __stdcall NET_DVR_ReleaseG726Decoder(void *pDecHandle);
NET_DVR_API BOOL __stdcall NET_DVR_DecodeG726Frame(void *pDecMoudle, BYTE* pInBuffer, BYTE* pOutBuffer, BYTE byReset);
//����
NET_DVR_API void* __stdcall NET_DVR_InitG726Encoder(void** pEncMoudle);
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG726Frame(void *pEncMoudle,BYTE* pInBuffer, BYTE* pOutBuffer, BYTE byReset);
NET_DVR_API void __stdcall NET_DVR_ReleaseG726Encoder(void *pEncHandle);
//Զ�̿��Ʊ�����ʾ
NET_DVR_API BOOL __stdcall NET_DVR_ClickKey(LONG lUserID, LONG lKeyIndex);
//Զ�̿����豸���ֶ�¼��
NET_DVR_API BOOL __stdcall NET_DVR_StartDVRRecord(LONG lUserID,LONG lChannel,LONG lRecordType);
NET_DVR_API BOOL __stdcall NET_DVR_StopDVRRecord(LONG lUserID,LONG lChannel);
//���뿨
NET_DVR_API BOOL __stdcall NET_DVR_InitDevice_Card(long *pDeviceTotalChan);
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDevice_Card();
NET_DVR_API BOOL __stdcall NET_DVR_InitDDraw_Card(HWND hParent,COLORREF colorKey);
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDraw_Card();
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_Card(LONG lUserID,LPNET_DVR_CARDINFO lpCardInfo,long lChannelNum);
NET_DVR_API BOOL __stdcall NET_DVR_ResetPara_Card(LONG lRealHandle,LPNET_DVR_DISPLAY_PARA lpDisplayPara);
NET_DVR_API BOOL __stdcall NET_DVR_RefreshSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_ClearSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_RestoreSurface_Card();
NET_DVR_API BOOL __stdcall NET_DVR_OpenSound_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSound_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetVolume_Card(LONG lRealHandle,WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_AudioPreview_Card(LONG lRealHandle,BOOL bEnable);
NET_DVR_API LONG __stdcall NET_DVR_GetCardLastError_Card();
NET_DVR_API HANDLE __stdcall NET_DVR_GetChanHandle_Card(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture_Card(LONG lRealHandle, char *sPicFileName);
//��ȡ���뿨���кŴ˽ӿ���Ч������GetBoardDetail�ӿڻ��(2005-12-08֧��)
NET_DVR_API BOOL __stdcall NET_DVR_GetSerialNum_Card(long lChannelNum,DWORD *pDeviceSerialNo);
//��־
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog(LONG lLogHandle, LPNET_DVR_LOG lpLogData);
NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose(LONG lLogHandle);
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_V30(LONG lUserID, LONG lSelectMode, DWORD dwMajorType,DWORD dwMinorType, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime, BOOL bOnlySmart = FALSE);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_V30(LONG lLogHandle, LPNET_DVR_LOG_V30 lpLogData);
NET_DVR_API BOOL __stdcall NET_DVR_FindLogClose_V30(LONG lLogHandle);
// ����������־
NET_DVR_API LONG __stdcall NET_DVR_FindAlarmHostLog(LONG lUserID, LONG lSelectMode, NET_DVR_ALARMHOST_SEARCH_LOG_PARAM *lpSearchParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextAlarmHostLog(LONG lFindHandle, NET_DVR_ALARMHOST_LOG_RET *lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindAlarmHostLogClose(LONG lFindHandle);
//��ֹ2004��8��5��,��113���ӿ�
//ATM DVR
NET_DVR_API LONG __stdcall NET_DVR_FindFileByCard(LONG lUserID,LONG lChannel,DWORD dwFileType, int nFindType, BYTE *sCardNumber, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
//��ֹ2004��10��5��,��116���ӿ�

//����
NET_DVR_API void* __stdcall NET_DVR_InitG722Encoder();
NET_DVR_API BOOL __stdcall NET_DVR_EncodeG722Frame(void *pEncodeHandle,BYTE* pInBuffer, BYTE* pOutBuffer);
NET_DVR_API void __stdcall NET_DVR_ReleaseG722Encoder(void *pEncodeHandle);
//2005-09-15
NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sPicFileName);
//JPEGץͼ���ڴ�
NET_DVR_API BOOL __stdcall NET_DVR_CaptureJPEGPicture_NEW(LONG lUserID, LONG lChannel, LPNET_DVR_JPEGPARA lpJpegPara, char *sJpegPicBuffer, DWORD dwPicSize,  LPDWORD lpSizeReturned);


//2006-02-16
NET_DVR_API int __stdcall NET_DVR_GetRealPlayerIndex(LONG lRealHandle);
NET_DVR_API int __stdcall NET_DVR_GetPlayBackPlayerIndex(LONG lPlayHandle);

//2006-08-28 704-640 ��������
NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG(LONG lUserID, DWORD dwScale);
NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG(LONG lUserID, DWORD *lpOutScale);
NET_DVR_API BOOL __stdcall NET_DVR_SetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
NET_DVR_API BOOL __stdcall NET_DVR_GetScaleCFG_V30(LONG lUserID, LPNET_DVR_SCALECFG pScalecfg);
//2006-08-28 ATM���˿�����
NET_DVR_API BOOL __stdcall NET_DVR_SetATMPortCFG(LONG lUserID, WORD wATMPort);
NET_DVR_API BOOL __stdcall NET_DVR_GetATMPortCFG(LONG lUserID, WORD *LPOutATMPort);

//2006-11-10 ֧���Կ��������
NET_DVR_API BOOL __stdcall NET_DVR_InitDDrawDevice();
NET_DVR_API BOOL __stdcall NET_DVR_ReleaseDDrawDevice();
NET_DVR_API LONG __stdcall NET_DVR_GetDDrawDeviceTotalNums();
NET_DVR_API BOOL __stdcall NET_DVR_SetDDrawDevice(LONG lPlayPort, DWORD nDeviceNum);

NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn(LONG lRealHandle, LPNET_DVR_POINT_FRAME pStruPointFrame);
NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn_EX(LONG lUserID, LONG lChannel, LPNET_DVR_POINT_FRAME pStruPointFrame);

//�����豸DS-6001D/DS-6001F
NET_DVR_API BOOL __stdcall NET_DVR_StartDecode(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERINFO lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_StopDecode(LONG lUserID, LONG lChannel);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecoderState(LONG lUserID, LONG lChannel, LPNET_DVR_DECODERSTATE lpDecoderState);
//2005-08-01
NET_DVR_API BOOL __stdcall NET_DVR_SetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecInfo(LONG lUserID, LONG lChannel, LPNET_DVR_DECCFG lpDecoderinfo);
NET_DVR_API BOOL __stdcall NET_DVR_SetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecTransPort(LONG lUserID, LPNET_DVR_PORTCFG lpTransPort);
NET_DVR_API BOOL __stdcall NET_DVR_DecPlayBackCtrl(LONG lUserID, LONG lChannel, DWORD dwControlCode, DWORD dwInValue,DWORD *LPOutValue, LPNET_DVR_PLAYREMOTEFILE lpRemoteFileInfo);
NET_DVR_API BOOL __stdcall NET_DVR_StartDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
NET_DVR_API BOOL __stdcall NET_DVR_StopDecSpecialCon(LONG lUserID, LONG lChannel, LPNET_DVR_DECCHANINFO lpDecChanInfo);
NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlDec(LONG lUserID, LONG lChannel, DWORD dwControlCode);
NET_DVR_API BOOL __stdcall NET_DVR_DecCtrlScreen(LONG lUserID, LONG lChannel, DWORD dwControl);
NET_DVR_API BOOL __stdcall NET_DVR_GetDecCurLinkStatus(LONG lUserID, LONG lChannel, LPNET_DVR_DECSTATUS lpDecStatus);

//��·������
//2007-11-30 V211֧�����½ӿ�
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DYNAMIC_DEC lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStopDynamic(LONG lUserID, DWORD dwDecChanNum); 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecEnable(LONG lUserID, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, DWORD dwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanEnable(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwEnable);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_STATUS lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetVideoStandard(LONG lUserID, DWORD dwDecChanNum, LPDWORD lpdwVideoStandard);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetVideoStandard(LONG lUserID, DWORD dwDecChanNum, DWORD dwVideoStandard);

//2007-12-22 ����֧�ֽӿ� 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlay(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlayControl(LONG lUserID, DWORD dwDecChanNum, DWORD dwControlCode, DWORD dwInValue, DWORD *LPOutValue);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetRemotePlayStatus(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_STATUS lpOuter);
//2009-4-13 ����
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PU_STREAM_CFG lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo_V30(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO_V30 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetTranInfo_V30(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30 lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTranInfo_V30(LONG lUserID, LPNET_DVR_MATRIX_TRAN_CHAN_CONFIG_V30 lpTranInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDisplayCfg(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG lpDisplayCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDisplayCfg(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG lpDisplayCfg);

NET_DVR_API LONG __stdcall NET_DVR_MatrixStartPassiveDecode(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_PASSIVEMODE lpPassiveMode /*, void(CALLBACK *fPassiveDataCallBack)(LONG lPassiveHandle, char * pSendBuf, DWORD dwBufSize, DWORD dwStatus, DWORD dwUser), DWORD dwUser*/);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSendData(LONG lPassiveHandle, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStopPassiveDecode(LONG lPassiveHandle);
NET_DVR_API BOOL __stdcall NET_DVR_UploadLogo(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_DISP_LOGOCFG lpDispLogoCfg, char *sLogoBuffer);
#define	NET_DVR_SHOWLOGO			1		/*��ʾLOGO*/
#define	NET_DVR_HIDELOGO			2		/*����LOGO*/  
NET_DVR_API BOOL __stdcall NET_DVR_LogoSwitch(LONG lUserID, DWORD dwDecChan, DWORD dwLogoSwitch);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDeviceStatus(LONG lUserID,  LPNET_DVR_DECODER_WORK_STATUS lpDecoderCfg);

#define	DISP_CMD_ENLARGE_WINDOW				1	/*��ʾͨ���Ŵ�ĳ������*/
#define	DISP_CMD_RENEW_WINDOW				2	/*��ʾͨ�����ڻ�ԭ*/
#define	DISP_CMD_OPENAUDIO			        3	/*��ʾͨ������Ƶ*/
#define	DISP_CMD_CLOSEAUDIO			        4	/*��ʾͨ���ر���Ƶ*/

NET_DVR_API BOOL __stdcall NET_DVR_MatrixDiaplayControl(LONG lUserID, DWORD dwDispChanNum, DWORD dwDispChanCmd, DWORD dwCmdParam);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixPassiveDecodeControl(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PASSIVEDECODE_CONTROL lpInter);
NET_DVR_API LONG __stdcall NET_DVR_MatrixGetPassiveDecodeStatus(LONG lPassiveHandle);

NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanCfg(LONG lUserID, DWORD dwDecChan, LPNET_DVR_MATRIX_DECCHAN_CONTROL lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDecChanCfg(LONG lUserID, DWORD dwDecChan, LPNET_DVR_MATRIX_DECCHAN_CONTROL lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_RefreshPlay(LONG lPlayHandle);
//�ָ�Ĭ��ֵ
NET_DVR_API BOOL __stdcall NET_DVR_RestoreConfig(LONG lUserID);
//�������
NET_DVR_API BOOL __stdcall NET_DVR_SaveConfig(LONG lUserID);
//����
NET_DVR_API BOOL __stdcall NET_DVR_RebootDVR(LONG lUserID);
//�ر�DVR
NET_DVR_API BOOL __stdcall NET_DVR_ShutDownDVR(LONG lUserID);

//�������� begin
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
NET_DVR_API BOOL __stdcall NET_DVR_SetDVRConfig(LONG lUserID, DWORD dwCommand,LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState_V30(LONG lUserID, LPNET_DVR_WORKSTATE_V30 lpWorkState);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRWorkState(LONG lUserID, LPNET_DVR_WORKSTATE lpWorkState);
NET_DVR_API BOOL __stdcall NET_DVR_SetVideoEffect(LONG lUserID, LONG lChannel, DWORD dwBrightValue, DWORD dwContrastValue, DWORD dwSaturationValue, DWORD dwHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_GetVideoEffect(LONG lUserID, LONG lChannel, DWORD *pBrightValue, DWORD *pContrastValue, DWORD *pSaturationValue, DWORD *pHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_ClientGetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_ClientSetframeformat(LONG lUserID, LPNET_DVR_FRAMEFORMAT lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_GetAtmFrameFormat_V30(LONG lUserID, LONG lAtmChannel, LPNET_DVR_ATM_FRAMEFORMAT_V30 lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_SetAtmFrameFormat_V30(LONG lUserID, LONG lAtmChannel, LPNET_DVR_ATM_FRAMEFORMAT_V30 lpFrameFormat);
NET_DVR_API BOOL __stdcall NET_DVR_GetAtmProtocol(LONG lUserID, LPNET_DVR_ATM_PROTOCOL lpAtmProtocol);
NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut_V30(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS_V30 lpAlarmOutState);
NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmOut(LONG lUserID, LPNET_DVR_ALARMOUTSTATUS lpAlarmOutState);
NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmOut(LONG lUserID, LONG lAlarmOutPort,LONG lAlarmOutStatic);

//��Ƶ��������
NET_DVR_API BOOL __stdcall NET_DVR_ClientSetVideoEffect(LONG lRealHandle,DWORD dwBrightValue,DWORD dwContrastValue, DWORD dwSaturationValue,DWORD dwHueValue);
NET_DVR_API BOOL __stdcall NET_DVR_ClientGetVideoEffect(LONG lRealHandle,DWORD *pBrightValue,DWORD *pContrastValue, DWORD *pSaturationValue,DWORD *pHueValue);

//�����ļ�
NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile(LONG lUserID, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile(LONG lUserID, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_V30(LONG lUserID, char *sOutBuffer, DWORD dwOutSize, DWORD *pReturnSize);

NET_DVR_API BOOL __stdcall NET_DVR_GetConfigFile_EX(LONG lUserID, char *sOutBuffer, DWORD dwOutSize);
NET_DVR_API BOOL __stdcall NET_DVR_SetConfigFile_EX(LONG lUserID, char *sInBuffer, DWORD dwInSize);

//������־�ļ�д��ӿ�
NET_DVR_API BOOL __stdcall NET_DVR_SetLogToFile(DWORD nLogLevel = 0, char * strLogDir = NULL, BOOL bAutoDel = TRUE);
NET_DVR_API BOOL __stdcall NET_DVR_GetSDKState(LPNET_DVR_SDKSTATE pSDKState);
NET_DVR_API BOOL __stdcall NET_DVR_GetSDKAbility(LPNET_DVR_SDKABL pSDKAbl);
NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol(LONG lUserID, NET_DVR_PTZCFG *pPtzcfg);
//ǰ�������
NET_DVR_API BOOL __stdcall NET_DVR_LockPanel(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_UnLockPanel(LONG lUserID);

NET_DVR_API BOOL __stdcall NET_DVR_SetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpInBuffer, DWORD dwInBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetRtspConfig(LONG lUserID, DWORD dwCommand, LPNET_DVR_RTSPCFG lpOutBuffer, DWORD dwOutBufferSize);

//��������ȡ
NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceAbility(LONG lUserID, DWORD dwAbilityType, char* pInBuf, DWORD dwInLength, char* pOutBuf, DWORD dwOutLength);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubSystemInfo(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetSubSystemInfo(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetCodeSplitter(LONG lUserID, DWORD dwCodeChan, LPNET_DVR_CODESPLITTERINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetCodeSplitter(LONG lUserID, DWORD dwCodeChan, LPNET_DVR_CODESPLITTERINFO lpInter);

//����
//����/��ȡ�����ؼ���
NET_DVR_API BOOL __stdcall NET_DVR_SetBehaviorParamKey(LONG lUserID, LONG lChannel, DWORD dwParameterKey,int nValue);
NET_DVR_API BOOL __stdcall NET_DVR_GetBehaviorParamKey(LONG lUserID, LONG lChannel, DWORD dwParameterKey,int *pValue);

//��ȡ/������Ϊ����Ŀ����ӽӿ�
NET_DVR_API BOOL __stdcall NET_DVR_GetVCADrawMode(LONG lUserID, LONG lChannel, LPNET_VCA_DRAW_MODE lpDrawMode);
NET_DVR_API BOOL __stdcall NET_DVR_SetVCADrawMode(LONG lUserID, LONG lChannel, LPNET_VCA_DRAW_MODE lpDrawMode);

//�������ģʽ���ýӿ�
NET_DVR_API BOOL __stdcall NET_DVR_SetTrackMode(LONG lUserID, LONG lChannel, LPNET_DVR_TRACK_MODE lpTrackMode);
NET_DVR_API BOOL __stdcall NET_DVR_GetTrackMode(LONG lUserID, LONG lChannel, LPNET_DVR_TRACK_MODE lpTrackMode);

//�������ܿ�
NET_DVR_API BOOL __stdcall NET_VCA_RestartLib(LONG lUserID, LONG lChannel);

NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData_V30(LONG lRealHandle, DWORD dwTransType, char *sFileName);

NET_DVR_API BOOL __stdcall NET_DVR_EncodeG711Frame(DWORD iType, BYTE *pInBuffer, BYTE *pOutBuffer);
NET_DVR_API BOOL __stdcall NET_DVR_DecodeG711Frame(DWORD iType, BYTE *pInBuffer, BYTE *pOutBuffer);
NET_DVR_API LONG __stdcall NET_DVR_FindFileByEvent(LONG lUserID, LPNET_DVR_SEARCH_EVENT_PARAM  lpSearchEventParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextEvent(LONG lSearchHandle, LPNET_DVR_SEARCH_EVENT_RET lpSearchEventRet);
//ֹͣ���� NET_DVR_FindClose

NET_DVR_API LONG __stdcall NET_DVR_FindPDCInfo(LONG lUserID, LONG lChannel, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);
NET_DVR_API LONG __stdcall NET_DVR_FindNextPDCInfo(LONG lFindHandle,LPNET_DVR_PDC_QUERY lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindPDCClose(LONG lFindHandle);

// �궨У�� 
#define NET_DVR_PDC_VERIFY_CALIBRATION          1  //��ֵΪ1��ΪPDC�궨У�� pdc����ֵΪNET_VCA_POINT   ����ֵΪ NET_VCA_RECT�ṹ
#define NET_DVR_VERIFY_BEHAVIOR_CALIBRATION     2    // ��Ϊ�����궨��У�� 
#define NET_DVR_VERIFY_ITS_CALIBRATION		    3 	// ���ܽ�ͨ�궨У�� 

NET_DVR_API BOOL __stdcall  NET_DVR_VerifyCalibration(LONG lUserID, DWORD dwCommand, LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpOuterBuffer, DWORD dwOuterBufferSize);
NET_DVR_API BOOL __stdcall  NET_DVR_ResetCounter(LONG lUserID,LONG lChannel);

NET_DVR_API BOOL __stdcall NET_DVR_GetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);
NET_DVR_API BOOL __stdcall NET_DVR_SetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);
NET_DVR_API BOOL __stdcall NET_DVR_SetPatrolTrack(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_PATROL_TRACKCFG lpPatrolTrack);
NET_DVR_API BOOL __stdcall NET_DVR_GetPatrolTrack(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_PATROL_TRACKCFG lpPatrolTrack);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLog_MATRIX(LONG lLogHandle, LPNET_DVR_LOG_MATRIX lpLogData);
NET_DVR_API LONG __stdcall NET_DVR_FindDVRLog_Matrix(LONG lUserID, LONG lSelectMode, DWORD dwMajorType, DWORD dwMinorType, LPNET_DVR_VEDIOPLATLOG lpVedioPlatLog, LPNET_DVR_TIME lpStartTime, LPNET_DVR_TIME lpStopTime);

NET_DVR_API BOOL __stdcall NET_DVR_ManualSnap(LONG lUserID, LPNET_DVR_MANUALSNAP lpInter, LPNET_DVR_PLATE_RESULT lpOuter);
NET_DVR_API BOOL __stdcall NET_DVR_ContinuousShoot(LONG lUserID, LPNET_DVR_SNAPCFG lpInter);

NET_DVR_API BOOL __stdcall NET_DVR_GetPTZProtocol_Ex(LONG lUserID, LONG lChannel, NET_DVR_PTZCFG *pPtzcfg);

NET_DVR_API LONG __stdcall NET_DVR_StartEmailTest(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_StopEmailTest(LONG lEmailTestHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetEmailTestProgress(LONG lEmailTestHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_GetIPCProtoList(LONG lUserID, LPNET_DVR_IPC_PROTO_LIST lpProtoList);
NET_DVR_API LONG __stdcall NET_DVR_SmartSearch(LONG lUserID,  LPNET_DVR_SMART_SEARCH_PARAM lpSmartSearchParam);
NET_DVR_API LONG __stdcall NET_DVR_SearchNextInfo(LONG lSearchHandle, LPNET_DVR_SMART_SEARCH_RET lpSmartSearchRet);
NET_DVR_API BOOL __stdcall NET_DVR_StopSearch(LONG lSearchHandle);

// IP San �ļ�Ŀ¼����
NET_DVR_API LONG __stdcall NET_DVR_FindIpSanDirectory(LONG lUserID, LPNET_DVR_IPSAN_SERACH_PARAM lpIpsanSearchParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextDirectory(LONG lFindHandle, LPNET_DVR_IPSAN_SERACH_RET lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindDirectoryClose(LONG lFindHandle);

typedef void (CALLBACK *REALDATACALLBACK) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser);

NET_DVR_API LONG __stdcall NET_DVR_ZeroStartPlay(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, REALDATACALLBACK fRealDataCallBack_V30 = NULL, void* pUser = NULL, BOOL bBlocked = TRUE);

NET_DVR_API BOOL __stdcall NET_DVR_ZeroStopPlay(LONG lPlayHandle);
NET_DVR_API BOOL __stdcall NET_DVR_ZeroMakeKeyFrame(LONG lUserID, LONG lZeroChan);
NET_DVR_API BOOL __stdcall NET_DVR_PlayBackControl_V40(LONG lPlayHandle,DWORD dwControlCode, LPVOID lpInBuffer = NULL, DWORD dwInLen = 0, LPVOID lpOutBuffer = NULL, DWORD *lpOutLen = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_ZeroTurnOver(LONG lUserID, LONG lChannel, BOOL bNextPreview);

NET_DVR_API BOOL __stdcall NET_DVR_GetDiskList(LONG lUserID, LPNET_DVR_DISKABILITY_LIST lpDiskList);
NET_DVR_API LONG __stdcall NET_DVR_Backup(LONG lUserID, DWORD dwBackupType, LPVOID lpBackupBuff, DWORD dwBackupBuffSize);
NET_DVR_API LONG __stdcall NET_DVR_BackupByName(LONG lUserID, LPNET_DVR_BACKUP_NAME_PARAM lpBackupByName);
NET_DVR_API LONG __stdcall NET_DVR_BackupByTime(LONG lUserID, LPNET_DVR_BACKUP_TIME_PARAM lpBackupBytime);
NET_DVR_API BOOL __stdcall NET_DVR_GetBackupProgress(LONG lHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_StopBackup(LONG lHandle);

NET_DVR_API BOOL __stdcall NET_DVR_GetSadpInfoList(LONG lUserID, LPNET_DVR_SADPINFO_LIST lpSadpInfoList);
NET_DVR_API BOOL __stdcall NET_DVR_UpdateSadpInfo(LONG lUserID, LPNET_DVR_SADP_VERIFY lpSadpVerify, LPNET_DVR_SADPINFO lpSadpInfo);

NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubDecSystemJoinInfo(LONG lUserID, LPNET_DVR_ALLDECSUBSYSTEMJOININFO lpInter);

NET_DVR_API BOOL __stdcall NET_DVR_SetCodeSplitterAssociate(LONG lUserID, DWORD dwDecoderChan, DWORD dwSlotNum, LPNET_DVR_CODESPLITTERASSOCIATE lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_GetCodeSplitterAssociate(LONG lUserID, DWORD dwDecoderChan, DWORD dwSlotNum, LPNET_DVR_CODESPLITTERASSOCIATE lpInter);

NET_DVR_API BOOL __stdcall NET_DVR_InquestGetCDRWScheme(LONG lUserID, LPNET_DVR_INQUEST_CDRW_CFG lpCDRWCfg);
NET_DVR_API BOOL __stdcall NET_DVR_InquestSetCDRWScheme(LONG lUserID, LPNET_DVR_INQUEST_CDRW_CFG lpCDRWCfg);
NET_DVR_API BOOL __stdcall NET_DVR_InquestDeleteFile(LONG lUserID, LPNET_DVR_INQUEST_FILES lpDeleteFile);
NET_DVR_API BOOL __stdcall NET_DVR_InquestCDWByFile(LONG lUserID, LPNET_DVR_INQUEST_FILES lpCdrwFile);
NET_DVR_API LONG __stdcall NET_DVR_InquestUploadFile(LONG lUserID, char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_InquestUploadClose(LONG lUploadHandle);
NET_DVR_API LONG __stdcall NET_DVR_InquestGetUploadState(LONG lUploadHandle, LPDWORD pProgress);
NET_DVR_API BOOL __stdcall NET_DVR_InquestStartCDW( LONG lUserID, BOOL bPause);
NET_DVR_API BOOL __stdcall NET_DVR_InquestStopCDW(LONG lUserID, BOOL bCancelWrite);
NET_DVR_API BOOL __stdcall NET_DVR_InquestGetCDWState(LONG lUserID, LPNET_DVR_INQUEST_CDRW_STATUS pStatus);
NET_DVR_API BOOL __stdcall NET_DVR_InquestGetPIPStatus(LONG lUserID, LPNET_DVR_INQUEST_PIP_STATUS pStatus);
NET_DVR_API BOOL __stdcall NET_DVR_InquestSetPIPStatus(LONG lUserID, LPNET_DVR_INQUEST_PIP_STATUS pStatus);
NET_DVR_API BOOL __stdcall NET_DVR_InquestCheckSecretKey(LONG lUserID, BOOL *bSecretSet);
NET_DVR_API BOOL __stdcall NET_DVR_InquestSetSecretKey(LONG lUserID, LPNET_DVR_INQUEST_SECRET_INFO pSecretInfo);
NET_DVR_API BOOL __stdcall NET_DVR_InquestStreamEncrypt(LONG lUserID, LONG lChannel, BOOL bEncrypt);
NET_DVR_API BOOL __stdcall NET_DVR_InquestGetEncryptState(LONG  lUserID, LONG lChannel, BOOL *bEncrypt);
NET_DVR_API LONG __stdcall NET_DVR_InquestFindFile(LONG lUserID);
NET_DVR_API LONG __stdcall NET_DVR_InquestFindNextFile(LONG lFindHandle, LPNET_DVR_INQUEST_FILEINFO lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_InquestFindClose(LONG lFindHandle);

// 9000RH
NET_DVR_API LONG __stdcall NET_DVR_RaidFastConfig(LONG lUserID, char *sName);
NET_DVR_API BOOL __stdcall NET_DVR_FastConfigProcess(LONG lHandle, DWORD *pState);
NET_DVR_API BOOL __stdcall NET_DVR_CloseFastConfig(LONG lHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetArraySpaceAlloc(LONG lUserID, DWORD dwSlot, LPNET_DVR_ARRAY_SPACE_ALLOC_INFO lpOutBuf);
NET_DVR_API BOOL __stdcall NET_DVR_DelArray(LONG lUserID, DWORD dwID);
NET_DVR_API BOOL __stdcall NET_DVR_CreateArray(LONG lUserID, LPNET_DVR_OPERATE_ARRAY_PARAM lpArrayParam);
NET_DVR_API BOOL __stdcall NET_DVR_CalcArraySize(LONG lUserID, LPNET_DVR_OPERATE_ARRAY_PARAM lpArrayParam, UINT64* lpArraySize);
NET_DVR_API BOOL __stdcall NET_DVR_MigrateArray(LONG lUserID, LPNET_DVR_OPERATE_ARRAY_PARAM lpArrayParam);
NET_DVR_API BOOL __stdcall NET_DVR_RebuildArray(LONG lUserID, LPNET_DVR_OPERATE_ARRAY_PARAM lpArrayParam);
NET_DVR_API BOOL __stdcall NET_DVR_CreateVD(LONG lUserID, LPNET_DVR_OPERATE_VD_PARAM lpVDParam);
NET_DVR_API BOOL __stdcall NET_DVR_DelVD(LONG lUserID, DWORD dwID);
NET_DVR_API BOOL __stdcall NET_DVR_RepairVD(LONG lUserID, DWORD dwID);
NET_DVR_API BOOL __stdcall NET_DVR_SetSpareDisk(LONG lUserID, LPNET_DVR_SPARE_DISK_PARAM lpSpareDisk);
NET_DVR_API BOOL __stdcall NET_DVR_GetPDList(LONG lUserID, LPNET_DVR_PHY_DISK_LIST lpPDList);
NET_DVR_API BOOL __stdcall NET_DVR_GetArrayList(LONG lUserID, LPNET_DVR_ARRAY_LIST lpArrayList);
NET_DVR_API BOOL __stdcall NET_DVR_GetVDList(LONG lUserID, LPNET_DVR_VD_LIST lpVDList);
NET_DVR_API LONG __stdcall NET_DVR_ExpandDisk(LONG lUserID,DWORD dwVDSLot);
NET_DVR_API BOOL __stdcall NET_DVR_GetExpandProgress(LONG lExpandHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_CloseExpandHandle(LONG lExpandHandle);
NET_DVR_API LONG __stdcall NET_DVR_AlgoDebugStart(LONG lUserID, LONG lCHannel, void(CALLBACK *fAlgoLibInfoCallBack)(LONG lHandle, LONG lChannel,char *pRecvDataBuffer, DWORD dwBufSize, void* pUser), void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_AlgoDebugSend(LONG lHandle, LONG lChannel, char *pSendBuf, DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_AlgoDebugStop(LONG lHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetLogPrint(BOOL bLogPrint);
NET_DVR_API BOOL __stdcall NET_DVR_SetLogPrintAction(DWORD nLogLevel, DWORD nToDevice, BOOL bEnable, int Reserve1, int Reserve2);

NET_DVR_API BOOL __stdcall NET_DVR_GetPositionRule(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_POSITION_RULE_CFG lpPositionRule);
NET_DVR_API BOOL __stdcall NET_DVR_GetPositionRule_V41(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_POSITION_RULE_CFG_V41 lpPositionRule);
NET_DVR_API BOOL __stdcall NET_DVR_SetPositionRule(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_POSITION_RULE_CFG lpPositionRule);
NET_DVR_API BOOL __stdcall NET_DVR_SetPositionRule_V41(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_POSITION_RULE_CFG_V41 lpPositionRule);
NET_DVR_API BOOL __stdcall NET_DVR_SetPositionLimitAngle(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_LIMIT_ANGLE lpLimitAngle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPositionLimitAngle(LONG lUserID, LONG lChannel, LONG lPositionIndex, LPNET_DVR_LIMIT_ANGLE lpLimitAngle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);
NET_DVR_API BOOL __stdcall NET_DVR_SetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);
NET_DVR_API BOOL __stdcall NET_DVR_SetPatrolTrack(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_PATROL_TRACKCFG lpPatrolTrack);
NET_DVR_API BOOL __stdcall NET_DVR_GetPatrolTrack(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_PATROL_TRACKCFG lpPatrolTrack);
NET_DVR_API BOOL __stdcall NET_DVR_SetPatrolLimitAngle(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_LIMIT_ANGLE lpLimitAngle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPatrolLimitAngle(LONG lUserID, LONG lChannel, LONG lPatrolIndex, LPNET_DVR_LIMIT_ANGLE lpLimitAngle);
NET_DVR_API BOOL __stdcall NET_DVR_SetSceneMode(LONG  lUserID, LONG lChannel, DWORD dwSceneMode);
NET_DVR_API BOOL __stdcall NET_DVR_GetSceneMode(LONG lUserID, LONG lChannel, DWORD  *pSceneMode);
NET_DVR_API BOOL __stdcall NET_DVR_GetVCAVersion(LONG lUserID, LONG lChannel, LPNET_DVR_VCA_VERSION lpVersion);

NET_DVR_API BOOL __stdcall NET_DVR_ContinuousShoot(LONG lUserID, LPNET_DVR_SNAPCFG lpInter);     
NET_DVR_API BOOL __stdcall NET_DVR_MatrixPicAdjust(LONG lUserID, DWORD dwDispChan, DWORD dwPicAdjust, DWORD dwCmdParam); 
NET_DVR_API BOOL __stdcall NET_DVR_AlarmJoinedRecord(LONG lUserID, DWORD dwChan, DWORD dwAlarmSeq, DWORD dwRecordTime, DWORD dwRes);
NET_DVR_API BOOL __stdcall NET_DVR_GetUnitedMatrixInfo(LONG lUserID, LPNET_DVR_UNITEDMATRIXINFO lpInter);
typedef LONG(CALLBACK * REGCallBack)(LONG lUserID, LPNET_DVR_REGCALLBACKPARAM pRegCallbackParam, LPNET_DVR_LOGONREPONSEPARAM pInterParam, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetRegisterCallBack(REGCallBack fRegCallBack, void* pUser);
NET_DVR_API BOOL __stdcall NET_DVR_PreviewRequest(LONG lUserID, LONG lChannel, LPNET_DVR_PREVIEWPARAM lpPreviewParam, LPNET_DVR_DEVICENATINFO lpOuter);
typedef LONG(CALLBACK * PREVIEWRESPONSECallBack)(LONG lUserID, LONG lStreamHandle, LPNET_DVR_PREVIEWCALLBACKPARAM pPewviewCallbackParam,void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPreviewResponseCallBack(PREVIEWRESPONSECallBack fPreviewResponseCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_PlaybackRequest(LONG lUserID, LPNET_DVR_PLAYBACKREQUESTPARAM lpPlayBackRequestParam);
typedef LONG(CALLBACK * PLAYBACKRESPONSECallBack)(LONG lUserID, LONG lPlaybackHandle, LPNET_DVR_PLAYBACKCALLBACKPARAM lpPlaybackParam,void *pUser);     
NET_DVR_API BOOL __stdcall NET_DVR_SetPlaybackResponseCallBack(PLAYBACKRESPONSECallBack fPlaybackResponseCallBack, void *pUser);          
typedef LONG(CALLBACK * VOICERESPONSECallBack)(LONG lUserID, LONG lVoiceHandle, LONG lVoiceChannel, BYTE nAudioType, void *pUser);     
NET_DVR_API BOOL __stdcall NET_DVR_SetVoiceResponseCallBack(VOICERESPONSECallBack fVoiceResponseCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_VoiceRequest(LONG lUserID, LPNET_DVR_VOICEREQUESTPARAM lpVoiceParam);		   
NET_DVR_API BOOL __stdcall NET_DVR_AlarmSetupRequest(LONG lUserID, LPNET_DVR_ALARMSETUPREQUESTPARAM lpAlarmSetupParam);
NET_DVR_API BOOL __stdcall NET_DVR_GetDialParam(LONG lUserID, LPNET_DVR_DIALREQUEST lpDialRequest, LPNET_DVR_DIALPARAM lpDialParam);			 		 
NET_DVR_API BOOL __stdcall NET_DVR_SetDialParam(LONG lUserID, LPNET_DVR_DIALREQUEST lpDialRequest, LPNET_DVR_DIALPARAM lpDialParam);
NET_DVR_API BOOL __stdcall NET_DVR_GetSmsListInfo(LONG lUserID, LPNET_DVR_TIME_EX lpStartTime, LPNET_DVR_TIME_EX lpStopTime, LPNET_DVR_SMSLISTINFO lpSmsListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetSmsContent(LONG lUserID, DWORD dwSmsIndex, LPNET_DVR_SMSCONTENT lpSmsContent);
NET_DVR_API BOOL __stdcall NET_DVR_SendSms(LONG lUserID, LPNET_DVR_SMSCONTENT lpSmsContent);
NET_DVR_API LONG __stdcall NET_DVR_StartServer(char *sLocalIP, WORD wLocalPort, BYTE byMode);
NET_DVR_API BOOL __stdcall NET_DVR_StopServer(LONG lServerHandle);           
typedef LONG(CALLBACK * ALARMSETUPRESPONSECallBack)(LONG lUserID, LONG lAlarmHandle, void * pUser);         
NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmSetupResponseCallBack(ALARMSETUPRESPONSECallBack fAlarmSetupResponseCallBack, void * pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SpringJPEGPicture(LONG lUserID, LONG lChannel, NET_DVR_PUSHJPEGPARA const *lpJpegPara);
NET_DVR_API BOOL __stdcall NET_DVR_SetPushModeParam(LPNET_DVR_PUSHMODEPARAM pPushParam);

NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSetupAlarmChan(LONG lUserID, NET_DVR_ALARMIN_SETUP *lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostCloseAlarmChan(LONG lUserID, NET_DVR_ALARMIN_SETUP *lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_BypassAlarmChan(LONG lUserID, NET_DVR_ALARMIN_SETUP *lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_UnBypassAlarmChan(LONG lUserID, NET_DVR_ALARMIN_SETUP *lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostAssistantControl(LONG lUserID, DWORD dwType, DWORD dwNumber, DWORD dwCmdParam);
NET_DVR_API BOOL __stdcall NET_DVR_SetAirCondition(LONG lUserID, LONG l485Index, NET_DVR_AIR_CONDITION_PARAM* lpAirConditionParam);
NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceTypeList(LONG lUserID, NET_DVR_DEVICE_TYPE_LIST *lpDeviceTypeList);
NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceProtoList(LONG lUserID, LONG lDeviceType, NET_DVR_DEVICE_PROTO_LIST *lpDeviceProtoList);
NET_DVR_API BOOL __stdcall NET_DVR_GetBatteryVoltage(LONG lUserID, float *pVoltage);
NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmDeviceUser(LONG lUserID, LONG lUserIndex, NET_DVR_ALARM_DEVICE_USER* lpDeviceUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetAlarmDeviceUser(LONG lUserID, LONG lUserIndex, NET_DVR_ALARM_DEVICE_USER* lpDeviceUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetKeyboardUser(LONG lUserID, LONG lUserIndex, NET_DVR_KEYBOARD_USER* lpKeyboardUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetKeyboardUser(LONG lUserID, LONG lUserIndex, NET_DVR_KEYBOARD_USER* lpKeyboardUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetOperateUser(LONG lUserID, LONG lUserIndex, NET_DVR_OPERATE_USER* lpOperateUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetOperateUser(LONG lUserID, LONG lUserIndex, NET_DVR_OPERATE_USER* lpOperateUser);
NET_DVR_API BOOL __stdcall NET_DVR_ControlGateway(LONG lUserID, LONG lGatewayIndex, DWORD dwStaic);
NET_DVR_API BOOL __stdcall NET_DVR_SetAlarmHostOut(LONG lUserID, LONG lAlarmOutPort, LONG lAlarmOutStatic);
typedef void(CALLBACK *fAlarmHostSerialDataCallBack)
(LONG lSerialHandle, LONG lPort, LONG lDateType, char *pRecvDataBuffer, DWORD  dwBufSize,void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_AlarmHostSerialStart(LONG lUserID, LONG lSerialType, fAlarmHostSerialDataCallBack cbSerialDataCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSerialSend(LONG lSerialHandle,LONG lPort,char *pSendBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSerialStop(LONG  lSerialHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetMatrixPuChan(LONG lUserID, LONG lChanType, NET_DVR_PU_CHAN_LIST* lpChanList);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAlarmOffMonitor(LONG lUserID, DWORD dwMonID, DWORD dwCamID);
NET_DVR_API BOOL __stdcall NET_DVR_GetCameraListInfo(LONG lUserID, DWORD dwCamNum, DWORD dwStartCam, LPNET_DVR_MATRIX_CAMERALIST lpCamListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetMonitorListInfo(LONG lUserID, DWORD dwMonNum, DWORD dwStartMon, LPNET_DVR_MATRIX_MONITORLIST lpMonListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetGlobalNum(LONG lUserID, DWORD *dwCamNum, DWORD *dwMonNum); 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetUnitedMatrixInfo(LONG lUserID, LPNET_DVR_ALLUNITEDMATRIXINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetUnitedMatrixInfo(LONG lUserID, LPNET_DVR_ALLUNITEDMATRIXINFO lpInter); 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetGatewayInfo(LONG lUserID, LPNET_DVR_MATRIXGATEWAYINFO lpInter);		 
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetGatewayInfo(LONG lUserID, LPNET_DVR_MATRIXGATEWAYINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSpanSwitch(LONG lUserID, BYTE nSwitchMode, LPNET_DVR_MATRIXSWITCH lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartSwitch(LONG lUserID, LPNET_DVR_MATRIXSWITCHCTRL lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetConfigFile(LONG lUserID, LPNET_DVR_MATRIXDATABASE lpInter, char *sInBuffer,  DWORD dwInSize);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetConfigFile(LONG lUserID, LPNET_DVR_MATRIXDATABASE lpInter, char  *sOutBuffer,  DWORD   dwOutSize,  DWORD   *pReturnSize);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubSystemInfo_V40(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO_V40 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetSubSystemInfo_V40(LONG lUserID, LPNET_DVR_ALLSUBSYSTEMINFO_V40 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubDecSystemJoinInfo_V40(LONG lUserID, LPNET_DVR_ALLDECSUBSYSTEMJOININFO_V40 lpInter);
typedef void (CALLBACK *FLOWTESTCALLBACK)(LONG lFlowHandle, LPNET_DVR_FLOW_INFO pFlowInfo, void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_StartNetworkFlowTest(LONG lUserID, NET_DVR_FLOW_TEST_PARAM* pFlowTest,  FLOWTESTCALLBACK fFlowTestCallback, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_StopNetworkFlowTest(LONG lHandle);
NET_DVR_API LONG __stdcall NET_DVR_FindRecordLabel(LONG lUserID, LPNET_DVR_FIND_LABEL lpFindLabel);
NET_DVR_API LONG __stdcall NET_DVR_FindNextLabel(LONG lFindHandle, LPNET_DVR_FINDLABEL_DATA lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_StopFindLabel(LONG lFindHandle);
NET_DVR_API BOOL __stdcall NET_DVR_InsertRecordLabel(LONG lPlayHandle, NET_DVR_RECORD_LABEL* lpRecordLabel, NET_DVR_LABEL_IDENTIFY *lpLableIdentify);
NET_DVR_API BOOL __stdcall NET_DVR_DelRecordLabel(LONG lUserID, NET_DVR_DEL_LABEL_PARAM* lpDelLabelParam);
NET_DVR_API BOOL __stdcall NET_DVR_ModifyRecordLabel(LONG lUserID, NET_DVR_MOD_LABEL_PARAM * lpModLabelParam);
NET_DVR_API LONG __stdcall NET_DVR_FindPicture(LONG lUserID, NET_DVR_FIND_PICTURE_PARAM* pFindParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextPicture(LONG lFindHandle,LPNET_DVR_FIND_PICTURE lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_CloseFindPicture(LONG lFindHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetPicture(LONG lUserID,char *sDVRFileName,const char *sSavedFileName);
NET_DVR_API BOOL __stdcall NET_DVR_GetPicture_V30(LONG lUserID, char *sDVRFileName, char *sSavedFileBuf, DWORD dwBufLen, DWORD *lpdwRetLen);
NET_DVR_API LONG __stdcall NET_DVR_BackupPicture(LONG lUserID, NET_DVR_BACKUP_PICTURE_PARAM *lpBackupPicture);
NET_DVR_API LONG __stdcall NET_DVR_GetUpgradeStep(LONG lUpgradeHandle, LONG *pSubProgress);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetEncodeJoint(LONG lUserID, LONG lChannel, LPNET_DVR_ENCODE_JOINT_PARAM lpEncodeJoint);
NET_DVR_API BOOL  __stdcall NET_DVR_GetLocalIP(char strIP[16][16], DWORD *pValidNum, BOOL *pEnableBind);
NET_DVR_API BOOL  __stdcall NET_DVR_SetValidIP(DWORD dwIPIndex, BOOL bEnableBind);
NET_DVR_API BOOL __stdcall NET_DVR_GetVcaDevWorkState(LONG lUserID, LPNET_DVR_VCA_DEV_WORKSTATUS lpWorkState);
NET_DVR_API BOOL  __stdcall NET_DVR_SetRecvTimeOut(DWORD nRecvTimeOut = 5000); //��С3000����
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDisplayCfg_V40(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG_V40 lpDisplayCfg);			  
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDisplayCfg_V40(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_VGA_DISP_CHAN_CFG_V40 lpDisplayCfg);
NET_DVR_API BOOL __stdcall NET_DVR_ShutterCompensation(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_CorrectDeadPixel(LONG lUserID, LONG lChannel, LPNET_DVR_CORRECT_DEADPIXEL_PARAM lpInParam);
NET_DVR_API BOOL __stdcall NET_DVR_CustomConfig(LONG lUserID, LONG lChannel, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpOutBuffer, DWORD dwOutBufferSize, LPDWORD lpBytesReturned);
NET_DVR_API BOOL __stdcall NET_DVR_GetHistoricDataInfo(LONG lUserID, LONG lChannel, LPNET_DVR_HISTORICDATACFG lpHisData);
NET_DVR_API BOOL __stdcall NET_DVR_GetHistoricData(LONG lUserID, LONG lChannel, LPNET_DVR_PLATE_RESULT lpOuter);
NET_DVR_API BOOL __stdcall NET_DVR_ClearHistoricData(LONG lUserID, LONG lChannel);
NET_DVR_API LONG  __stdcall NET_DVR_InquestUploadFile_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom,  char *sFileName);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestDeleteFile_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, LPNET_DVR_INQUEST_FILES lpDeleteFile);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestGetPIPStatus_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, LPNET_DVR_INQUEST_PIP_STATUS lpStatus);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestSetPIPStatus_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, LPNET_DVR_INQUEST_PIP_STATUS lpStatus);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestGetSystemInfo(LONG lUserID, LPNET_DVR_INQUEST_SYSTEM_INFO lpSystemInfo);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestSetSystemInfo(LONG lUserID, LPNET_DVR_INQUEST_SYSTEM_INFO lpSystemInfo);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestSendMessage(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, LPNET_DVR_INQUEST_MESSAGE lpInquestMessage);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestStartCDW_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, BOOL bPause);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestStopCDW_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, BOOL bCancelWrite);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestGetCDWState_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM lpInquestRoom, LPNET_DVR_INQUEST_CDRW_STATUS pStatus);
NET_DVR_API LONG  __stdcall NET_DVR_InquestResumeEvent(LONG lUserID, LPNET_DVR_INQUEST_RESUME_EVENT lpResumeEvent);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestGetResumeProgress(LONG lHandle, DWORD* pState);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestStopResume(LONG lHandle);
NET_DVR_API LONG  __stdcall NET_DVR_InquestFindFile_V30(LONG lUserID, LPNET_DVR_INQUEST_ROOM pInquestRoom);
NET_DVR_API BOOL  __stdcall NET_DVR_InquestGetDeviceVersion(LONG lUserID, LPNET_DVR_INQUEST_DEVICE_VERSION lpVersionInfo);
NET_DVR_API BOOL  __stdcall NET_DVR_SetSDKSecretKey(LONG lUserID, char *sSecretKey);
NET_DVR_API BOOL __stdcall NET_DVR_LockFileByTime(LONG lUserID, LPNET_DVR_TIME_LOCK lpLockPara, LPNET_DVR_LOCK_RETURN lpLockReturn);
NET_DVR_API BOOL __stdcall NET_DVR_UnlockFileByTime(LONG lUserID, LPNET_DVR_TIME_LOCK lpLockPara, LPNET_DVR_LOCK_RETURN lpLockReturn);
NET_DVR_API BOOL __stdcall NET_DVR_ScreenZoomIn(LONG lUserID, LPNET_DVR_SCREENZOOM pStruScreen);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetAllCameraInfo(LONG lUserID, LPNET_DVR_MATRIX_CAMERALIST lpCamListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSingleCameraInfo(LONG lUserID, DWORD dwCameraId, LPNET_MATRIX_CAMERAINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddCamera(LONG lUserID, DWORD dwCameraNum, BYTE *pBuffer, DWORD dwBufLength);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModCameraInfo(LONG lUserID, LPNET_MATRIX_CAMERAINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixDelCamera(LONG lUserID, DWORD dwCameraId);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetAllMonitorInfo(LONG lUserID, LPNET_DVR_MATRIX_MONITORLIST lpMonListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSingleMonitorInfo(LONG lUserID, DWORD dwMonitorId, LPNET_MATRIX_MONITORINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddMonitor(LONG lUserID, DWORD dwMonitorNum, BYTE *pBuffer, DWORD dwBufLength);			
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModMonitorInfo(LONG lUserID, LPNET_MATRIX_MONITORINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixDelMonitor(LONG lUserID, DWORD dwMonitorId);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetAllMatrixInfo(LONG lUserID, LPNET_DVR_MATRIXLIST lpMatrixListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetSingleMatrixInfo(LONG lUserID, DWORD dwMatrixId, LPNET_MATRIX_MATRIXINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_AddMatrix(LONG lUserID, LPNET_MATRIX_MATRIXINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_ModMatrixInfo(LONG lUserID, LPNET_MATRIX_MATRIXINFO lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_DelMatrix(LONG lUserID, DWORD dwMatrixId);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetUartParam(LONG lUserID, DWORD dwSerialChan, LPNET_MATRIX_UARTPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetUartParam(LONG lUserID, DWORD dwSerialChan , LPNET_MATRIX_UARTPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetUserInfo(LONG lUserID, DWORD dwUserNum, LPNET_MATRIX_USERPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddUser(LONG lUserID, DWORD dwUserNum, LPNET_MATRIX_USERPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModUserInfo(LONG lUserID, DWORD dwUserNum, LPNET_MATRIX_USERPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixDelUser(LONG lUserID, DWORD dwUserNum);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetResourceInfo(LONG lUserID, DWORD dwResourceNum, LPNET_MATRIX_RESOURSEGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddResourceInfo(LONG lUserID, DWORD dwResourceNum, LPNET_MATRIX_RESOURSEGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModResourceInfo(LONG lUserID, DWORD dwResourceNum, LPNET_MATRIX_RESOURSEGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixDelResourceInfo(LONG lUserID, DWORD dwResourceNum);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetUserGroupInfo(LONG lUserID, DWORD dwUserGroupNum, LPNET_MATRIX_USERGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddUserGroupInfo(LONG lUserID, DWORD dwUserGroupNum, LPNET_MATRIX_USERGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModUserGroupInfo(LONG lUserID, DWORD dwUserGroupNum, LPNET_MATRIX_USERGROUPPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixDelUserGroup (LONG lUserID, DWORD dwUserGroupNum);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetAllTrunkInfo(LONG lUserID, LPNET_DVR_MATRIX_TRUNKLIST lpTrunkListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetTrunkInfo(LONG lUserID, DWORD dwTrunkNum, LPNET_MATRIX_TRUNKPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixAddTrunk(LONG lUserID, LPNET_MATRIX_TRUNKPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixModTrunkInfo(LONG lUserID, LPNET_MATRIX_TRUNKPARAM lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixTrunkCtrl(LONG lUserID, DWORD dwTrunkNum, BYTE byCtrlMode);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixTrunkStatusQuery(LONG lUserID, DWORD dwTrunkNum, BYTE *byTrunkStatus);

NET_DVR_API BOOL __stdcall NET_DVR_FindBackgroundPic(LONG lUserID, DWORD dwPicID, BYTE *pPicBuffer, DWORD *lpPicLen);
NET_DVR_API BOOL __stdcall NET_DVR_DetectImage(LONG lUserID, LPNET_VCA_FD_PROCIMG_CFG lpFDProcImg,LPNET_VCA_FD_PROCIMG_RESULT lpOutBuf);
NET_DVR_API BOOL __stdcall NET_DVR_GetPictureModel(LONG lUserID, LPNET_VCA_REGISTER_PIC lpInBuf, LPNET_VCA_PICMODEL_RESULT lpOutBuf);
NET_DVR_API BOOL __stdcall NET_DVR_AddBlackList(LONG lUserID,LONG lChannel,LPNET_VCA_BLACKLIST_PARA lpInter);
NET_DVR_API LONG __stdcall NET_DVR_FindBlackList(LONG lUserID, LPNET_VCA_BLACKLIST_COND lpBlackListCond);
NET_DVR_API LONG __stdcall NET_DVR_FindNextBlackList(LONG lFindHandle,LPNET_VCA_BLACKLIST_INFO lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindBlackListClose(LONG lFindHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetBlackListPicture(LONG lUserID, DWORD dwRegisterID, LPNET_VCA_BLACKLIST_PIC lpOutBuffer);
NET_DVR_API BOOL __stdcall NET_DVR_UpdateBlackList(LONG lUserID,LONG lChannel, LPNET_VCA_BLACKLIST_PARA lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_DelBlackList(LONG lUserID,LONG lChannel, DWORD dwRegisterID);
NET_DVR_API LONG __stdcall NET_DVR_FindSnapPicture(LONG lUserID, LPNET_VCA_FIND_PICTURECOND lpFindParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextSnapPic(LONG lFindHandle,LPNET_VCA_SUB_SNAPPIC_DATA lpFindData);
NET_DVR_API BOOL __stdcall NET_DVR_FindSnapPicClose(LONG lFindHandle);
NET_DVR_API LONG __stdcall NET_DVR_AdvanceFindSnapPicture(LONG lUserID, LPNET_VCA_FIND_PICTURECOND_ADVANCE lpFindParam);
NET_DVR_API LONG __stdcall NET_DVR_FindFaceMatchAlarm(LONG lUserID, LPNET_VCA_FIND_PICTURECOND lpFindParam);
NET_DVR_API LONG __stdcall NET_DVR_FindNextFaceMatchAlarm(LONG lFindHandle, LPNET_VCA_FACESNAP_MATCH_ALARM_LOG lpFaceMatchAlarmLog);
NET_DVR_API BOOL __stdcall NET_DVR_FindFaceMatchAlarmClose(LONG lFindHandle);
NET_DVR_API BOOL __stdcall NET_DVR_GetFaceMatchPic(LONG lUserID, LPNET_VCA_FACEMATCH_PICCOND lpMatchCond, LPNET_VCA_FACEMATCH_PICTURE lpMatchPic);
NET_DVR_API BOOL __stdcall NET_DVR_FastAddBlackList(LONG lUserID,LONG lChannel,LPNET_VCA_BLACKLIST_FASTREGISTER_PARA lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetRemotePlay_V41(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_REMOTE_PLAY_V41 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDisplayCfg_V41(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_MATRIX_VOUTCFG lpVoutCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetDisplayCfg_V41(LONG lUserID, DWORD dwDispChanNum, LPNET_DVR_MATRIX_VOUTCFG lpDisplayCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDeviceStatus_V41(LONG lUserID, LPNET_DVR_DECODER_WORK_STATUS_V41 lpDecoderCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSceneCfg(LONG lUserID, DWORD dwSceneNum, LPNET_DVR_MATRIX_SCENECFG lpSceneCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetSceneCfg(LONG lUserID, DWORD dwSceneNum, LPNET_DVR_MATRIX_SCENECFG lpSceneCfg);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSceneControl(LONG lUserID, DWORD dwSceneNum, DWORD dwCmd, DWORD dwCmdParam);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetCurrentSceneMode(LONG lUserID, DWORD *dwSceneNum);
NET_DVR_API BOOL __stdcall NET_DVR_GetAllValidWinInfo(LONG lUserID, LPNET_DVR_WINLIST lpWinListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_ScreenWinCtrl(LONG lUserID, DWORD dwWinIndex, DWORD dwCommand, LPNET_DVR_SCREEN_WINCFG lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_GetScreenInputStatus(LONG lUserID, LPNET_DVR_SCREENINPUTSTATUS lpStatus);
NET_DVR_API LONG __stdcall NET_DVR_PicUpload(LONG lUserID, char const *sFileName, LPNET_DVR_PICTURECFG lpPictureCfg);
NET_DVR_API LONG __stdcall NET_DVR_GetPicUploadProgress(LONG lUploadHandle);
NET_DVR_API BOOL CALLBACK  NET_DVR_CloseUploadHandle(LONG lUploadHandle);		
NET_DVR_API BOOL __stdcall NET_DVR_PicControl(LONG lUserID, BYTE byUseType, BYTE byPicIndex, BYTE byCtrlCmd);
NET_DVR_API LONG __stdcall NET_DVR_GetPicUploadState(LONG lUploadHandle);
NET_DVR_API BOOL __stdcall NET_DVR_ScreenCtrl(LONG lUserID, DWORD dwDeviceNum, LPNET_DVR_SCREEN_CONTROL lpStruScreenCtrl);
typedef void (CALLBACK *SCREENPICDATACB)(LONG nScreenPicHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_StartScreenPic(LONG nUserID, DWORD nInputNum, SCREENPICDATACB PicDataCallback, void *pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_StopScreenPic(LONG nScreenPicHandle);
NET_DVR_API BOOL __stdcall NET_DVR_FocusOnePush(LONG lUserID, LONG lChannel);
NET_DVR_API BOOL __stdcall NET_DVR_ResetLens(LONG lUserID, LONG lChannel);

typedef void(CALLBACK *fRemoteConfigCallback)(DWORD dwType, void* lpBuffer, DWORD dwBufLen, void* pUserData);
NET_DVR_API LONG __stdcall NET_DVR_StartRemoteConfig(LONG lUserID, DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferLen, fRemoteConfigCallback cbStateCallback, LPVOID pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_StopRemoteConfig(LONG lHandle);
NET_DVR_API LONG __stdcall NET_DVR_GetNextRemoteConfig(LONG lHandle, void* lpOutBuff, DWORD dwOutBuffSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetRemoteConfigState(LONG lHandle, void *pState);

typedef void(CALLBACK *fLongCfgStateCallback)(LONG lHandle,  DWORD dwState, LPVOID pUserData);
NET_DVR_API BOOL CALLBACK NET_DVR_CloseLongCfgHandle(LONG lHandle);
NET_DVR_API LONG CALLBACK NET_DVR_RaidPullDiskStart(LONG lUserID, LONG lRaidID, fLongCfgStateCallback cbStateCallback, LPVOID pUserData);
NET_DVR_API LONG CALLBACK NET_DVR_ScanRaidStart(LONG lUserID, fLongCfgStateCallback cbStateCallback, LPVOID pUserData);
NET_DVR_API LONG CALLBACK NET_DVR_SetAccessCameraInfo(LONG lUserID, DWORD dwChannel, LPNET_DVR_ACCESS_CAMERA_INFO lpCameraInfo, fLongCfgStateCallback cbStateCallback, LPVOID pUserData);


NET_DVR_API BOOL __stdcall NET_DVR_InquiryRecordTimeSpan(LONG lUserID, DWORD dwChannel,  NET_DVR_RECORD_TIME_SPAN_INQUIRY const *lpInquiry, LPNET_DVR_RECORD_TIME_SPAN lpResult);
NET_DVR_API BOOL __stdcall NET_DVR_UpdateRecordIndex(LONG lUserID, DWORD dwChannel);
NET_DVR_API BOOL __stdcall NET_DVR_GetUpnpNatState(LONG lUserID, LPNET_DVR_UPNP_NAT_STATE lpState);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo_EX(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_EX lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo_EX(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_EX lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic_EX(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PU_STREAM_CFG_EX lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetTrunkListInfo(LONG lUserID, DWORD dwTrunkNum, DWORD dwStartTrunk, LPNET_DVR_MATRIX_TRUNKLIST lpTrunkListInfo, DWORD *pReturnSize);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetSubDecSystemJoinInfo_V41(LONG lUserID, LPNET_DVR_ALLDECSUBSYSTEMJOININFO_V41 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSubSystemSetupAlarmChan(LONG lUserID, DWORD dwSubSystemNum);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSubSystemCloseAlarmChan(LONG lUserID, DWORD dwSubSystemNum);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostClearAlarm(LONG lUserID, DWORD dwSubSystemNum);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostArrayBypass(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostArrayBypassResume (LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostSetReportMode(LONG lUserID, LONG lCenterNum, LPVOID lpInputBuf, DWORD dwInputBufLen);
NET_DVR_API BOOL __stdcall NET_DVR_AlarmHostGetReportMode(LONG lUserID, LPVOID lpOutputBuf, DWORD dwOutputBufLen);
NET_DVR_API LONG __stdcall NET_DVR_StartUploadAudio(LONG lUserID, DWORD dwAudioNum, DWORD dwAudioType, char const *sAudioFileName);
NET_DVR_API LONG __stdcall NET_DVR_StartDownloadAudio(LONG lUserID, DWORD dwAudioNum, char const *sAudioFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopAudioOperate(LONG lAudioHandle);
NET_DVR_API LONG __stdcall NET_DVR_GetAudioProgress(LONG lAudioHandle);
NET_DVR_API BOOL __stdcall NET_DVR_AudioCtrl(LONG lUserID, DWORD dwAudioNum, DWORD dwCtrlParam);
NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceConfig(LONG lUserID, DWORD dwCommand, DWORD dwCount, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpStatusList, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_SetDeviceConfig(LONG lUserID, DWORD dwCommand, DWORD dwCount, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpStatusList, LPVOID lpInParamBuffer, DWORD dwInParamBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_LockStreamFileByTime(LONG lUserID, LPNET_DVR_STREAM_TIME_LOCK lpLockPara, LPNET_DVR_LOCK_RETURN lpLockReturn);
NET_DVR_API BOOL __stdcall NET_DVR_UnlockStreamFileByTime(LONG lUserID, LPNET_DVR_STREAM_TIME_LOCK lpLockPara, LPNET_DVR_LOCK_RETURN lpLockReturn);
NET_DVR_API BOOL __stdcall NET_DVR_StartManualRecord(LONG lUserID, LPNET_DVR_MANUAL_RECORD_PARA lpManualRecPara);
NET_DVR_API BOOL __stdcall NET_DVR_StopManualRecord(LONG lUserID, LPNET_DVR_STREAM_INFO pIDInfo);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackReverseByName(LONG lUserID, char *sPlayBackFileName, HWND hWnd);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackByTime_V40(LONG lUserID, NET_DVR_VOD_PARA const* pVodPara);
NET_DVR_API LONG __stdcall NET_DVR_PlayBackReverseByTime_V40(LONG lUserID, HWND hWnd, LPNET_DVR_PLAYCOND pPlayCond);
NET_DVR_API LONG __stdcall NET_DVR_GetFileByTime_V40(LONG lUserID, char *sSavedFileName, LPNET_DVR_PLAYCOND  pDownloadCond);
NET_DVR_API LONG __stdcall NET_DVR_FindFile_V40(LONG lUserID, LPNET_DVR_FILECOND_V40 pFindCond);
NET_DVR_API LONG __stdcall NET_DVR_SetupAlarmChan_V41(LONG lUserID, LPNET_DVR_SETUPALARM_PARAM lpSetupParam);
NET_DVR_API BOOL __stdcall NET_DVR_AddDataBase(LONG lUserID, LPNET_VCA_DATABASE_PARAM lpInBuf);
NET_DVR_API LONG __stdcall NET_DVR_FindDataBase(LONG lUserID, LPNET_VCA_FIND_DATABASE_COND lpInBuf);
NET_DVR_API LONG __stdcall NET_DVR_FindNextDataBase(LONG lFindHandle, LPNET_VCA_DATABASE_PARAM lpOutBuf);
NET_DVR_API BOOL __stdcall NET_DVR_FindDataBaseClose(LONG lFindHandle);
NET_DVR_API BOOL __stdcall NET_DVR_UpdateDataBase(LONG lUserID, LPNET_VCA_DATABASE_PARAM lpInBuf);
NET_DVR_API BOOL __stdcall NET_DVR_DeleteDataBase(LONG lUserID, LPNET_VCA_DELETE_DATABASE_COND lpCond);
typedef void(CALLBACK *fSearchDBCallBack)(LONG lHandle, DWORD dwType, DWORD dwResultNum, BYTE* pBuffer, DWORD dwBufSize,void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_InquireSnapDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_INQUIRE_SNAPDB_COND lpInBuf, fSearchDBCallBack cbSearchDBCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetInquireSnapDBProgress(LONG lInquireHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_DeleteSnapDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_DELETE_SNAPRECORD_COND lpInBuf);
NET_DVR_API LONG __stdcall NET_DVR_SearchSnapDB(LONG lUserID, LPNET_VCA_SEARCH_SNAPDB_COND lpInBuf, fSearchDBCallBack cbSearchDBCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetSearchSnapDBProgress(LONG lSearchHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_AddFaceDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_DATARECORD_INFO lpInBuf);
NET_DVR_API BOOL __stdcall NET_DVR_FastAddFaceDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_FAST_DATARECORD_INFO lpInBuf);
NET_DVR_API LONG __stdcall NET_DVR_InquireFaceDBRecord(LONG lUserID, LPNET_VCA_DATARECORD_COND lpInBuf,fSearchDBCallBack cbInquireDBCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetInquireFaceDBProgress(LONG lInquireHandle, DWORD* pState);
NET_DVR_API BOOL __stdcall NET_DVR_UpdateFaceDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_DATARECORD_INFO lpInBuf);
NET_DVR_API BOOL __stdcall NET_DVR_DeleteFaceDBRecord(LONG lUserID, DWORD dwDataBaseID, LPNET_VCA_DELETE_RECORD_COND lpInBuf);
typedef void(CALLBACK *fSearchDBCallBack)(LONG lSearchHandle, DWORD dwType, DWORD dwResultNum, BYTE* pBuffer, DWORD dwBufSize,void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_SearchFaceDB(LONG lUserID, LPNET_VCA_SEARCH_FACEDB_COND lpInBuf,fSearchDBCallBack cbSearchDBCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_GetSearchFaceDBProgress(LONG lSearchHandle, DWORD* pState);
NET_DVR_API LONG __stdcall NET_DVR_StopSearchDB(LONG lHandle);
NET_DVR_API BOOL __stdcall NET_DVR_FindMatchPicture(LONG lUserID, LPNET_VCA_FIND_MATCHPIC_COND lpFindCond, LPNET_VCA_FIND_MATCHPIC_RESULT lpFindResult);
NET_DVR_API BOOL __stdcall NET_DVR_RemoteControl(LONG lUserID, DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferSize);

NET_DVR_API BOOL __stdcall NET_DVR_PicViewRequest(LONG lUserID, NET_DVR_PIC_VIEW_PARAM *lpPicViewParam);
typedef LONG (CALLBACK *PicViewCallBack)(LPNET_DVR_PICVIEW_CALLBACKPARAM pStruPicViewParam, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPicViewResponseCallBack(PicViewCallBack fPicViewResponseCallBack, void *pUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPicViewDataCallBack(LONG lPicViewHandle, SCREENPICDATACB fPicDataCallback, void *pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_GetDevList(LONG lUserID, LPNET_DVR_DEVLIST lpDevListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_GetScreenList(LONG lUserID, LPNET_DVR_SCREENLIST lpScreenListInfo);
NET_DVR_API BOOL __stdcall NET_DVR_SetScreenRelation(LONG lUserID, NET_DVR_DISP_SCREEN const* lpScreenInfo);
NET_DVR_API BOOL __stdcall NET_DVR_TextShowCtrl(LONG lUserID, char const *sDeviceID, LPNET_DVR_TEXTSHOW lpText);
NET_DVR_API LONG __stdcall NET_DVR_StartUpgrade(LONG lUserID, LPNET_DVR_OPERATE_DEVICE lpStruOperate, DVCS_UPGRADESTATE_CB UpgradeStateCallback, void *pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_StopUpgrade(LONG lUserID, LPNET_DVR_OPERATE_DEVICE lpStruOperate, LONG lUpgradeHandle);
NET_DVR_API BOOL __stdcall NET_DVR_AddNetSignal(LONG lUserID, LPNET_DVR_NETSIGNAL_INFO lpStruSignal, void* lpOutBuf , DWORD dwBufLen);
NET_DVR_API LONG __stdcall NET_DVR_StartPicPreview(LONG lUserID, NET_DVR_START_PIC_VIEW_INFO const* lpStruStartPicView, SCREENPICDATACB PicDataCallback, void *pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_GetDeviceStatus(LONG lUserID, DWORD dwCommand, DWORD dwCount, LPVOID lpInBuffer, DWORD dwInBufferSize, LPVOID lpStatusList, LPVOID lpOutBuffer, DWORD dwOutBufferSize);
NET_DVR_API BOOL __stdcall NET_DVR_GetPlanList(LONG lUserID, DWORD dwDevNum, LPNET_DVR_PLAN_LIST lpPlanList);
NET_DVR_API BOOL __stdcall NET_DVR_GetInputSignalList(LONG lUserID, DWORD dwDevNum, LPNET_DVR_INPUT_SIGNAL_LIST lpInputSignalList);
NET_DVR_API LONG __stdcall NET_DVR_UploadFile(LONG lUserID, DWORD dwUploadType, LPVOID lpInBuffer, DWORD dwInBufferSize, char* sFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetUploadState(LONG lUploadHandle, LPDWORD pProgress);
NET_DVR_API BOOL __stdcall NET_DVR_UploadClose(LONG lUploadHandle);
typedef void (CALLBACK *DATADOWNLOAD)(LONG nDownloadHandle, DWORD dwDataType, void* pBuffer, DWORD dwBufSize, void *pUser);
NET_DVR_API LONG __stdcall NET_DVR_StartUploadFile(LONG lUserID, LPNET_DVR_UPLOAD_PARAM  lpStruUploadParam);
NET_DVR_API LONG __stdcall NET_DVR_GetUploadFileProgress(LONG lFileHandle);
NET_DVR_API LONG __stdcall NET_DVR_GetUploadFileState(LONG lFileHandle);
NET_DVR_API BOOL __stdcall NET_DVR_StopUploadFile (LONG lFileHandle);
NET_DVR_API LONG __stdcall NET_DVR_StartDownloadFile(LONG lUserID, LPNET_DVR_DOWNLOAD_PARAM lpStruDownloadParam);
NET_DVR_API LONG __stdcall NET_DVR_GetDownloadFileProgress(LONG lFileHandle);
NET_DVR_API LONG __stdcall NET_DVR_GetDownloadFileState(LONG lFileHandle);
NET_DVR_API BOOL __stdcall NET_DVR_StopDownloadFile (LONG lFileHandle);

NET_DVR_API BOOL __stdcall NET_DVR_GetMobileDevStatus(LONG lUserID, DWORD dwStatusType, LPNET_DVR_MB_MOBILEDEV_STATUS lpstruMobileDevStatus);
NET_DVR_API BOOL __stdcall NET_DVR_SetVoiceDataCallBack(LONG lVoiceComHandle, BOOL bNeedCBNoEncData, void(CALLBACK *fVoiceDataCallBack)(LONG lVoiceComHandle, char *pRecvDataBuffer, DWORD dwBufSize, BYTE byAudioFlag, void* pUser), void* pUser);


NET_DVR_API BOOL __stdcall NET_DVR_SetSDKLocalConfig(LPNET_DVR_SDKLOCAL_CFG lpSdkLocalCfg);
NET_DVR_API BOOL __stdcall NET_DVR_GetSDKLocalConfig(LPNET_DVR_SDKLOCAL_CFG lpSdkLocalCfg);
NET_DVR_API LONG __stdcall NET_DVR_OpticalUpgrade(LONG lUserID, char const *sFileName, LPNET_DVR_OPTICAL_INFO lpOpticalInfo);
typedef void(CALLBACK *fGPSDataCallback)(LONG nHandle, DWORD dwState, void* lpBuffer, DWORD dwBufLen, void* pUserData);
NET_DVR_API LONG __stdcall NET_DVR_GetVehicleGpsInfo(LONG nUserID, LPNET_DVR_GET_GPS_DATA_PARAM lpGPSDataParam, fGPSDataCallback cbGPSDataCallback, void* pUser);

NET_DVR_API BOOL __stdcall NET_DVR_ClosePreview(LONG lUserID, DWORD nSessionID);
NET_DVR_API BOOL __stdcall NET_DVR_ClosePlayBack(LONG lUserID, DWORD nSessionID);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V40(LONG lUserID, LPNET_DVR_PREVIEWINFO lpPreviewInfo, REALDATACALLBACK fRealDataCallBack_V30 = NULL, void* pUser = NULL);
typedef void(CALLBACK *fRemoteConfigCallback)(DWORD dwType, void* lpBuffer, DWORD dwBufLen, void* pUserData);
NET_DVR_API LONG __stdcall NET_DVR_StartRemoteConfig(LONG lUserID, DWORD dwCommand, LPVOID lpInBuffer, DWORD dwInBufferLen, fRemoteConfigCallback cbStateCallback, LPVOID pUserData);
NET_DVR_API BOOL __stdcall NET_DVR_StopRemoteConfig(LONG lHandle);
NET_DVR_API LONG __stdcall NET_DVR_GetNextRemoteConfig(LONG lHandle, void* lpOutBuff, DWORD dwOutBuffSize);

NET_DVR_API LONG __stdcall NET_DVR_StartDownload(LONG lUserID, DWORD dwDownloadType, LPVOID lpInBuffer, DWORD dwInBufferSize, const char *sFileName);
NET_DVR_API LONG __stdcall NET_DVR_GetDownloadState(LONG lDownloadHandle, LPDWORD pProgress);
NET_DVR_API BOOL __stdcall NET_DVR_StopDownload(LONG lHandle);

NET_DVR_API BOOL __stdcall NET_DVR_MatrixStartDynamic_V41(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_PU_STREAM_CFG_V41 lpDynamicInfo);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetLoopDecChanInfo_V41(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V41 lpOuter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixSetLoopDecChanInfo_V41(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_LOOP_DECINFO_V41 lpInter);
NET_DVR_API BOOL __stdcall NET_DVR_MatrixGetDecChanInfo_V41(LONG lUserID, DWORD dwDecChanNum, LPNET_DVR_MATRIX_DEC_CHAN_INFO_V41 lpOuter);
#endif //

