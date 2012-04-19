/**
* ChineseCalendarDB.h
* @Author   Tu Yongce <yongce (at) 126 (dot) com>
* @Created  2008-12-13 
* @Modified 2008-12-13   
* @Version  0.1
*/

#ifndef CHINESE_CALENDAR_DB_H_INCLUDED
#define CHINESE_CALENDAR_DB_H_INCLUDED

#ifdef _MSC_VER
#pragma once
#endif

#include <exception>

class ChineseCalendarDB
{
private:
    typedef unsigned short uint16_t;
    typedef unsigned char  uint8_t;

    static const int YEAR_BASE;   // �������ݵ���ʼ��
    static const int YEAR_NUM;    // �������ݵ�����

    static const uint8_t  sm_leapMonth[150];       // ÿ��������·�
    static const uint16_t sm_monthDay[150];        // ÿ��������µ�������
    static const uint8_t  sm_solarTerm[150][12];   // ÿ��Ķ�ʮ�Ľ�������

public:
     // ����ʾ������Чʱ�׳����쳣����
    class InvalidParamter: public std::exception
    {
    };

public:
    /*
    * ��ѯũ��ĳ�������
    * @param year: Ҫ��ѯ����ݣ���Чȡֵ��Χ1901~2050
    * @return: ���ظ�������£����û�������򷵻�0��
    *          �������year������Чֵ��Χ�ڣ����׳��쳣ChineseCalendarDB::InvalidParamter
    */
    static int GetLeapMonth(int year)
    {
        if (year < YEAR_BASE || year >= YEAR_BASE + YEAR_NUM)
            throw InvalidParamter(); // û�и��������
        return sm_leapMonth[year - YEAR_BASE];
    }

    /*
    * ��ѯũ��ĳ�������
    * @param year: Ҫ��ѯ����ݣ���Чȡֵ��Χ1901~2050
    * @return: ���ظ�������������û�������򷵻�12�������·���13��
    *          �������year������Чֵ��Χ�ڣ����׳��쳣ChineseCalendarDB::InvalidParamter
    */
    static int GetYearMonths(int year)
    {
        if (year < YEAR_BASE || year >= YEAR_BASE + YEAR_NUM)
            throw InvalidParamter(); // û�и��������
        return sm_leapMonth[year - YEAR_BASE] ? 13 : 12;
    }

    /*
    * ��ѯũ��ĳ��ĳ�µ�����
    * @param year: Ҫ��ѯ����ݣ���Чȡֵ��Χ1901~2050
    * @param month: Ҫ��ѯ���·ݣ���Чȡֵ��ΧΪ1~12��1~13�������£�
    * @return: ���ظ��µ�������30��29��
    *          �������year��month������Чֵ��Χ�ڣ����׳��쳣ChineseCalendarDB::InvalidParamter
    */
    static int GetMonthDays(int year, int month)
    {
        if (year < YEAR_BASE || year >= YEAR_BASE + YEAR_NUM)
            throw InvalidParamter(); // û�и��������

        int num = 12 + (sm_leapMonth[year - YEAR_BASE] ? 1 : 0);
        if (month < 1 || month > num)
            throw InvalidParamter(); // û�и��������

        return (sm_monthDay[year - YEAR_BASE] & (1 << (month - 1))) ? 30 : 29;
    }

    /*
    * ��ѯũ��ĳ�������
    * @param year: Ҫ��ѯ����ݣ���Чȡֵ��Χ1901~2050
    * @return: ���ظ��������
    *          �������year������Чֵ��Χ�ڣ����׳��쳣ChineseCalendarDB::InvalidParamter
    */
    static int GetYearDays(int year)
    {
        // ʵ��ע�ǣ��Ժ���Կ��ǰ�ÿ�����������������ֱ�Ӳ���
        if (year < YEAR_BASE || year >= YEAR_BASE + YEAR_NUM)
            throw InvalidParamter(); // û�и��������

        uint16_t num = sm_monthDay[year - YEAR_BASE];

        // ����num�Ķ�����λ�С�1���ĸ���
        num = ((num >> 1) & 0x5555) + (num & 0x5555);
        num = ((num >> 2) & 0x3333) + (num & 0x3333);
        num = ((num >> 4) & 0x0F0F) + (num & 0x0F0F);
        num = ((num >> 8) & 0x00FF) + (num & 0x00FF);

        int monthNum = 12 + (sm_leapMonth[year - YEAR_BASE] ? 1 : 0);
        return monthNum * 29 + num;
    }

    /*
    * ��ѯ�������ڣ����ص��ǹ������ڣ�
    * @param year: Ҫ��ѯ����ݣ���Чȡֵ��Χ1901~2050
    * @param index: Ҫ��ѯ�Ľ�������Чȡֵ��Χ1~24
    * @return: ���ظý��������ڣ��������ڣ�
    *          �������year��index������Чֵ��Χ�ڣ����׳��쳣ChineseCalendarDB::InvalidParamter
    */
    static int GetSolarTerm(int year, int index) 
    {
        if (year < YEAR_BASE || year >= YEAR_BASE + YEAR_NUM)
            throw InvalidParamter(); // û�и��������

        if (index < 1 || index > 24)
            throw InvalidParamter(); // û�и��������

        --index;  // ��ȡֵ��Χת��Ϊ[0, 23]
        uint8_t data = sm_solarTerm[year - YEAR_BASE][index / 2];
        return (index % 2) ? ((data & 0x0F) + 14) : (data >> 4);
    }
};

#endif //CHINESE_CALENDAR_DB_H_INCLUDED
