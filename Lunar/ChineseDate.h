/**
* ChineseDate.h
* @Author   Tu Yongce <yongce (at) 126 (dot) com>
* @Created  2008-12-13 
* @Modified 2008-12-13   
* @Version  0.1
*/

#ifndef CHINESE_DATE_H_INCLUDED
#define CHINESE_DATE_H_INCLUDED

#ifdef _MSC_VER
#pragma once
#endif

#include <cassert>
#include "ChineseCalendarDB.h"

class SolarDate;  // ǰ������

/*
* ũ��������
* @note: ֻ�ܱ�ʾũ��1901��1��1�յ�ũ��2050��12��30���ڼ������
*/
class ChineseDate
{
private:
    int m_year;      // 1901~2050
    int m_month;     // 1~13
    int m_day;       // 1~[29|30]

public:
    ChineseDate();
    ChineseDate(int year, int month, int day);
    //!! ʹ�ñ��������ɵĿ������캯����������ֵ����������������

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

    // �ж��Ƿ�Ϊ��Ч����
    bool IsValidDate() const;

    // �ж��Ƿ���ָ������֮ǰ
    bool IsPrior(const ChineseDate &ref) const;
    // �ж��Ƿ�Ϊͬһ����
    friend bool operator== (const ChineseDate &lhs, const ChineseDate &rhs);
    friend bool operator!= (const ChineseDate &lhs, const ChineseDate &rhs);

    // ���㵱ǰ�����Ǹ���ĵڼ���
    int YearDay() const;
    // �Ӹ����ĳ��������ڣ�����޶�Ӧ���ڣ������ʧ�ܲ�����false�����򷵻�true��
    bool FromYearDay(int days);

    // �����ָ��������������
    // ���this->IsPrior(ref)Ϊ�棬�򷵻ظ��������򷵻�����
    int Diff(const ChineseDate &ref) const;

    // ��ǰ����������ָ����������Ч���ڷ�Χ��ũ��1901��1��1�յ�ũ��2050��12��30�գ�
    // ���days����0������ǰ����(δ��������������������ȥ��
    // ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
    bool AdjustDays(int days);

    // ת��Ϊ����
    SolarDate ToSolarDate() const;

private:
    // ����*this��ref֮������������Ҫ��!IsPrior(ref)Ϊ��
    int DoDiff(const ChineseDate &ref) const;

    // ��ǰ��δ��������ָ��������ע�⣺���ܵ�����ũ��2050��12��30��֮��
    // ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
    bool DoAdjustForward(int days);

    // ��󣨹�ȥ������ָ��������ע�⣺���ܵ�����ũ��1901��1��1��֮ǰ��
    // ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
    bool DoAdjustBackward(int days);
};

inline ChineseDate::ChineseDate(): m_year(1901), m_month(1), m_day(1)
{
}

inline ChineseDate::ChineseDate(int year, int month, int day): m_year(year), m_month(month), m_day(day)
{
    //assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
}

inline int ChineseDate::GetYear() const
{
    return m_year;
}

inline int ChineseDate::GetMonth() const
{
    return m_month;
}

inline int ChineseDate::GetDay() const
{
    return m_day;
}

// �ж��Ƿ���ָ������֮ǰ
inline bool ChineseDate::IsPrior(const ChineseDate &ref) const
{
    return m_year < ref.m_year || 
         m_year == ref.m_year && m_month < ref.m_month  ||
         m_month == ref.m_month && m_day < ref.m_day;
}

// �ж��Ƿ�Ϊͬһ����
inline bool operator== (const ChineseDate &lhs, const ChineseDate &rhs)
{
    return lhs.m_year == rhs.m_year && lhs.m_month == rhs.m_month && lhs.m_day == rhs.m_day;
}

inline bool operator!= (const ChineseDate &lhs, const ChineseDate &rhs)
{
    return !(lhs == rhs);
}

// �����ָ��������������
// ���this->IsPrior(ref)Ϊ�棬�򷵻ظ��������򷵻�����
inline int ChineseDate::Diff(const ChineseDate &ref) const
{
    return this->IsPrior(ref) ? -ref.DoDiff(*this) : this->DoDiff(ref);
}

// ��ǰ����������ָ��������ע�⣺���ܵ�������Ԫ1��1��1��֮ǰ��
// ���days����0������ǰ����(δ��������������������ȥ��
// ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
inline bool ChineseDate::AdjustDays(int days)
{
    if (days > 0) 
        return DoAdjustForward(days);
    else if (days < 0)
        return DoAdjustBackward(-days);

    assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
    return true;
}


#endif //CHINESE_DATE_H_INCLUDED
