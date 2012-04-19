/**
* SolarDate.cpp
* @Author   Tu Yongce <yongce (at) 126 (dot) com>
* @Created  2008-12-13 
* @Modified 2008-12-13   
* @Version  0.1
*/
#include "SolarDate.h"
#include "ChineseDate.h"

// ƽ����ÿһ���µ�����
const int SolarDate::sm_monthDay[12] = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

// ƽ����ÿһ����֮ǰ�����µ�����
const int SolarDate::sm_yearDays[12] = {
    0, 31, 59 , 90, 120, 151, 181, 212, 243, 273, 304, 334
};


// �ж��Ƿ�Ϊ��Ч����
bool SolarDate::IsValidDate() const
{
    if (m_year < 1 || m_month < 1 || m_month > 12 || m_day < 1)
        return false;

    if (m_month != 2 && m_day > sm_monthDay[m_month - 1])
        return false;

    int feb = (IsLeapYear() ? 29 : 28);
    if (m_month == 2 && m_day > feb)
        return false;

    return true;
}

// �Ӹ����ĳ���������
// ����޶�Ӧ���ڣ������ʧ�ܲ�����false�����򷵻�true
bool SolarDate::FromYearDay(int days)
{
    if (days < 1 || days > (IsLeapYear() ? 366 : 365))
        return false;

    int m = 11;
    for (; m > 0; --m) {
        if (sm_yearDays[m] < days)
            break;
    }

    m_month = m + 1;
    m_day = days - sm_yearDays[m];

    if (m_month > 2 && IsLeapYear()) {
        // ����
        if (m_day > 1)
            --m_day;
        else {
            --m_month;
            m_day = sm_monthDay[m_month - 1];
        }
    }

    assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
    return true;
}

// ����*this��ref֮������������Ҫ��!IsPrior(ref)Ϊ��
int SolarDate::DoDiff(const SolarDate &ref) const
{
    assert(!IsPrior(ref));  // *this >= ref

    // ���ȼ���������ݵ�1��1����������
    int days = (m_year - ref.m_year) * 365;

    // ��������Ķ�������
    days += GetLeapYears(m_year);
    days -= GetLeapYears(ref.m_year);

    // �ٴ����º���
    days += YearDay();
    days -= ref.YearDay();

    return days;
}

// ��ǰ��δ��������ָ��������ʼ�շ���true��
bool SolarDate::DoAdjustForward(int days)
{
    assert(days > 0);

    // ��ÿ�����һ��Ϊ�ο�����м���
    days += YearDay();

    // 400��һ���ֻ�
    const int t1 = 400 * 365 + 100 - 3;
    m_year += days / t1 * 400;
    days  -= days / t1 * t1;

    int y = days / 365;
    int leapYears = GetLeapYears(m_year + y) - GetLeapYears(m_year);

    days -= y * 365;

    if (days > leapYears) {
        m_year += y;
        FromYearDay(days - leapYears);
    } else {
        m_year += y - 1;
        int yearDays = GetYearDays();
        FromYearDay(days + yearDays - leapYears);
    }

    return true;
}

// ��󣨹�ȥ������ָ��������ע�⣺���ܵ�������Ԫ1��1��1��֮ǰ��
// ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
bool SolarDate::DoAdjustBackward(int days)
{
    assert(days > 0);
    if (this->DoDiff(SolarDate(1, 1, 1)) < days)
        return false;  // ���ܵ���ʱ�䵽��Ԫǰ

    // ��ÿ���һ�죨1��1�գ�Ϊ�ο�����м���
    days += GetYearDays() - YearDay();

    // 400��һ���ֻ�
    const int t1 = 400 * 365 + 100 - 3;
    m_year -= days / t1 * 400;
    days  -= days / t1 * t1;

    int y = days / 365;
    int leapYears = GetLeapYears(m_year + 1) - GetLeapYears(m_year - y + 1);

    days -= y * 365;

    if (days >= leapYears) {
        m_year -= y;
        days -= leapYears;
        FromYearDay(GetYearDays() - days);
    } else {
        m_year -= y - 1;
        FromYearDay(leapYears - days);
    }

    return true;
}

// ת��Ϊũ�����ѹ�Ԫ1901��2��19�յ���Ԫ2051��2��10���ڼ�Ĺ�������ת��Ϊũ�����ڣ�
// ���ת���ɹ�������true�����򷵻�false
bool SolarDate::ToChineseDate(ChineseDate &date) const
{
    if (this->IsPrior(SolarDate(1901, 12, 19)) || SolarDate(2051, 2, 10).IsPrior(*this))
        return false; // ֻ��ת����Ԫ1901��2��19�յ���Ԫ2051��2��10���ڼ�Ĺ�������

    // �ο����ڣ���Ԫ2000��2��5�վ���ũ��2000��1��1��
    SolarDate refDay(2000, 2, 5);

    // �������ǰ������ο�����֮�������
    int days = this->Diff(refDay);

    ChineseDate tmp(2000, 1, 1);
    tmp.AdjustDays(days);
    date = tmp;
    assert(tmp.Diff(ChineseDate(2000, 1, 1)) == days);

    return true;
}
