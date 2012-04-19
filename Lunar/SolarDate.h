/**
* SolarDate.h
* @Author   Tu Yongce <yongce (at) 126 (dot) com>
* @Created  2008-12-13 
* @Modified 2008-12-13   
* @Version  0.1
*/

#ifndef SOLAR_DATE_H_INCLUDED
#define SOLAR_DATE_H_INCLUDED

#ifdef _MSC_VER
#pragma once
#endif

#include <cassert>

class ChineseDate;  // ǰ������

/*
* ����������
* @note: �ܹ���ʾ�ӹ�Ԫ1��1��1�տ�ʼ���κ�һ��
*/
class SolarDate
{
private:
    int m_year;      // 1~?
    int m_month;     // 1~12
    int m_day;       // 1~[28|29|30|31]

    static const int sm_monthDay[12];    // ƽ����ÿһ���µ�����
    static const int sm_yearDays[12];    // ƽ����ÿһ����֮ǰ�����µ�����

public:
    SolarDate();
    SolarDate(int year, int month, int day);
    //!! ʹ�ñ��������ɵĿ������캯����������ֵ����������������

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

    // �ж��Ƿ�Ϊ��Ч����
    bool IsValidDate() const;
    // �ж��Ƿ�Ϊ����
    bool IsLeapYear() const;

    // �ж��Ƿ���ָ������֮ǰ
    bool IsPrior(const SolarDate &ref) const;
    // �ж��Ƿ�Ϊͬһ����
    friend bool operator== (const SolarDate &lhs, const SolarDate &rhs);
    friend bool operator!= (const SolarDate &lhs, const SolarDate &rhs);
    
    // ����ĳ���ȫ������
    int GetYearDays() const;
    // �����Ǹ����еĵڼ���
    int YearDay() const;
    // �Ӹ����ĳ��������ڣ�����޶�Ӧ���ڣ������ʧ�ܲ�����false�����򷵻�true��
    bool FromYearDay(int days);

    // ת��Ϊ���ڣ�����0~6���ֱ����������~������
    int ToWeek() const;

    // �����ָ��������������
    // ���this->IsPrior(ref)Ϊ�棬�򷵻ظ��������򷵻�����
    int Diff(const SolarDate &ref) const;

    // ��ǰ����������ָ��������ע�⣺���ܵ�������Ԫ1��1��1��֮ǰ��
    // ���days����0������ǰ����(δ��������������������ȥ��
    // ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
    bool AdjustDays(int days);

    // ת��Ϊũ�����ѹ�Ԫ1901��2��19�յ���Ԫ2051��2��29���ڼ�Ĺ�������ת��Ϊũ�����ڣ�
    // ���ת���ɹ�������true�����򷵻�false
    bool ToChineseDate(ChineseDate &date) const;

private:
    // ����ĳ��֮ǰ��������
    static int GetLeapYears(int year);

    // ����*this��ref֮������������Ҫ��!IsPrior(ref)Ϊ��
    int DoDiff(const SolarDate &ref) const;

    // ��ǰ��δ��������ָ��������ʼ�շ���true��
    bool DoAdjustForward(int days);

    // ��󣨹�ȥ������ָ��������ע�⣺���ܵ�������Ԫ1��1��1��֮ǰ��
    // ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
    bool DoAdjustBackward(int days);
};

inline SolarDate::SolarDate(): m_year(1), m_month(1), m_day(1)
{
}

inline SolarDate::SolarDate(int year, int month, int day): m_year(year), m_month(month), m_day(day) 
{
    //assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
}

inline int SolarDate::GetYear() const
{
    return m_year;
}

inline int SolarDate::GetMonth() const
{
    return m_month;
}

inline int SolarDate::GetDay() const
{
    return m_day;
}

// �ж��Ƿ�Ϊ����
inline bool SolarDate::IsLeapYear() const
{
    return (!(m_year % 4) && (m_year % 100)) || !(m_year % 400);    
}

// �ж��Ƿ���ָ������֮ǰ
inline bool SolarDate::IsPrior(const SolarDate &ref) const
{
    return m_year < ref.m_year || 
         m_year == ref.m_year && m_month < ref.m_month  ||
         m_month == ref.m_month && m_day < ref.m_day;
}

// �ж��Ƿ�Ϊͬһ����
inline bool operator== (const SolarDate &lhs, const SolarDate &rhs)
{
    return lhs.m_year == rhs.m_year && lhs.m_month == rhs.m_month && lhs.m_day == rhs.m_day;
}

inline bool operator!= (const SolarDate &lhs, const SolarDate &rhs)
{
    return !(lhs == rhs);
}

// ����ĳ���ȫ������
inline int SolarDate::GetYearDays() const
{
    return IsLeapYear() ? 366 : 365;
}

// �����Ǹ����еĵڼ���
inline int SolarDate::YearDay() const
{
    int days = sm_yearDays[m_month - 1] + m_day;
    if (m_month > 2 && IsLeapYear())
        ++days;
    return days;
}

// ����ĳ��֮ǰ��������
inline int SolarDate::GetLeapYears(int year)
{
    if (year == 0)
        return 0;

    int y = year - 1;
    return y / 4 - y / 100 + y / 400;
}

// ת��Ϊ���ڣ�����0~6���ֱ����������~������
inline int SolarDate::ToWeek() const
{
    // ��ʽ��W = [Y-1] + [(Y-1)/4] - [(Y-1)/100] + [(Y-1)/400] + D 
    // Y���������D����һ������һ�����ǵڼ��졣
    // �������W����7�������Ǽ��������ڼ������������0����Ϊ�����ա�
    // ע��365 = 52 * 7 + 1����ԪԪ��1��1��Ϊ����һ
    return (m_year - 1 + GetLeapYears(m_year) + YearDay()) % 7;
}

// �����ָ��������������
// ���this->IsPrior(ref)Ϊ�棬�򷵻ظ��������򷵻�����
inline int SolarDate::Diff(const SolarDate &ref) const
{
    return this->IsPrior(ref) ? -ref.DoDiff(*this) : this->DoDiff(ref);
}

// ��ǰ����������ָ��������ע�⣺���ܵ�������Ԫ1��1��1��֮ǰ��
// ���days����0������ǰ����(δ��������������������ȥ��
// ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
inline bool SolarDate::AdjustDays(int days)
{
    if (days > 0) 
        return DoAdjustForward(days);
    else if (days < 0)
        return DoAdjustBackward(-days);

    assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
    return true;
}

#endif // SOLAR_DATE_H_INCLUDED
