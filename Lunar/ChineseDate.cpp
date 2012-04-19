/**
* ChineseDate.cpp
* @Author   Tu Yongce <yongce (at) 126 (dot) com>
* @Created  2008-12-13 
* @Modified 2008-12-13   
* @Version  0.1
*/
#include "ChineseDate.h"
#include "ChineseCalendarDB.h"
#include "SolarDate.h"


// �ж��Ƿ�Ϊ��Ч����
bool ChineseDate::IsValidDate() const
{
    if (m_year < 1901 || m_year > 2050)
        return false;

    if (m_month < 1 || m_month > ChineseCalendarDB::GetYearMonths(m_year))
        return false;

    if (m_day < 1 || m_day > ChineseCalendarDB::GetMonthDays(m_year, m_month))
        return false; 

    return true;
}

// ���㵱ǰ�����Ǹ���ĵڼ���
int ChineseDate::YearDay() const
{
    int days = 0;

    for (int i = 1; i < m_month; ++i)
        days += ChineseCalendarDB::GetMonthDays(m_year, i);
    days += m_day;

    return days;
}

// ����*this��ref֮������������Ҫ��ref.IsPrior(*this)Ϊ��
int ChineseDate::DoDiff(const ChineseDate &ref) const
{
    assert(!IsPrior(ref));  // *this >= ref

    int days = 0;

    // ���ȼ���������ݵ�1��1����������
    for (int year = ref.m_year; year < m_year; ++year) {
        days += ChineseCalendarDB::GetYearDays(year);
    }

    // �����º���
    days += YearDay();
    days -= ref.YearDay();

    return days;
}

// �Ӹ����ĳ���������
// ����޶�Ӧ���ڣ������ʧ�ܲ�����false�����򷵻�true
bool ChineseDate::FromYearDay(int days)
{
    if (days < 1 && days > ChineseCalendarDB::GetYearDays(m_year))
        return false;

    m_month = 1;
    int monthDay = ChineseCalendarDB::GetMonthDays(m_year, m_month);

    while (days > monthDay) {
        days -= monthDay;
        ++m_month;
        monthDay = ChineseCalendarDB::GetMonthDays(m_year, m_month);
    }

    m_day = days;

    assert(IsValidDate());  // ��ChineseDate�����ڲ����ݱ仯ʱȷ��������ȷ������
    return true;
}


// ��ǰ��δ��������ָ��������ע�⣺���ܵ�����ũ��2050��12��30��֮��
// ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
bool ChineseDate::DoAdjustForward(int days)
{
    assert(days > 0);
    if (ChineseDate(2050, 12, 30).DoDiff(*this) < days)
        return false;  // ���ܵ�����ũ��2050��12��30��֮��

    // ��ÿ�����һ��Ϊ�ο�����м���
    days += YearDay();
    int yearDays = ChineseCalendarDB::GetYearDays(m_year);

    while (days > yearDays) {
        days -= yearDays;
        ++m_year;
        yearDays = ChineseCalendarDB::GetYearDays(m_year);
    }

    FromYearDay(days);

    return true;
}

// ��󣨹�ȥ������ָ��������ע�⣺���ܵ�����ũ��1901��1��1��֮ǰ��
// ��������ɹ����򷵻�true�����򷵻�false����ʱ*this�ڵ���ǰ�󲻻ᷢ���ı䣩
bool ChineseDate::DoAdjustBackward(int days)
{
    assert(days > 0);
    if (this->DoDiff(ChineseDate(1901, 1, 1)) < days)
        return false;  // ���ܵ���ʱ�䵽ũ��1901��1��1��֮ǰ

    // ��ÿ���һ�죨1��1�գ�Ϊ�ο�����м���
    int yearDays = ChineseCalendarDB::GetYearDays(m_year);
    days += yearDays - YearDay();

    while (days > yearDays) {
        days -= yearDays;
        --m_year;
        yearDays = ChineseCalendarDB::GetYearDays(m_year);
    }

    FromYearDay(yearDays - days);

    return true;
}

// ת��Ϊ����
SolarDate ChineseDate::ToSolarDate() const
{
    // �ο����ڣ�ũ��2000��1��1�վ��ǹ�Ԫ2000��2��5��
    ChineseDate refDay(2000, 1, 1);

    // �������ǰ������ο�����֮�������
    int days = this->Diff(refDay);

    SolarDate tmp(2000, 2, 5);
    tmp.AdjustDays(days);
    assert(tmp.Diff(SolarDate(2000, 2, 5)) == days);

    return tmp;
}
