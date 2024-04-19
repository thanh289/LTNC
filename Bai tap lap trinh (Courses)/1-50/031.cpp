#include <bits/stdc++.h>
using namespace std;

class Time
{
    private:
        int h;
        int m;
        int s;
    public:
        Time(int h_, int m_, int s_);
        friend ostream& operator<< (ostream& , const Time& );
        bool operator<(const Time& other);
        bool operator==(const Time& other);
        bool operator>(const Time& other);
        bool operator>=(const Time& other);
        bool operator!=(const Time& other);
        bool operator<=(const Time& other);
        int hour();
        int minute();
        int second();


};

Time::Time(int h_= 0, int m_= 0, int s_= 0)
{
    if(s_ >= 60) {s_ = s_%60; m_+=s_/60;}
    if(m_ >= 60) {m_ = m_%60; h_+=m_/60;}
    if(h_ >= 24) h_ = h_%24;
    
    h = h_;
    m = m_;
    s = s_;
}

ostream& operator<<(ostream& os, const Time& time)
{
    os << (time.h < 10 ? "0" : "") << time.h << ":"
       << (time.m < 10 ? "0" : "") << time.m << ":"
       << (time.s < 10 ? "0" : "") << time.s<<endl;
    return os;
}


bool Time::operator<(const Time& other)
{
    if (h != other.h)
        return h < other.h;
    if (m != other.m)
        return m < other.m;
    return s < other.s;
}

bool Time::operator==(const Time& other)
{
    return h == other.h && m == other.m && s == other.s;
}

bool Time::operator>(const Time& other)
{
    if (h != other.h)
        return h > other.h;
    if (m != other.m)
        return m > other.m;
    return s > other.s;
}

bool Time::operator>=(const Time& other)
{
    if (h != other.h)
        return h >= other.h;
    if (m != other.m)
        return m >= other.m;
    return s >= other.s;
}

bool Time::operator!=(const Time& other)
{
    return h != other.h || m != other.m || s != other.s;
}

bool Time::operator<=(const Time& other)
{
    if (h != other.h)
        return h <= other.h;
    if (m != other.m)
        return m <= other.m;
    return s <= other.s;
}

int Time::hour()
{
    return h;
}

int Time::minute()
{
    return m;
}

int Time::second()
{
    return s;
}


int main()
{
    Time t1(2);
    cout<<t1;

    cout<<Time(1, 10);

    cout<<Time(23, 0, 30);

    cout<<(Time(12, 4, 3) < Time(12, 3, 8))<<endl;

    cout<<(Time(12, 4, 3) <= Time(12, 3, 8))<<endl;

    cout<<(Time(12, 4, 3) > Time(12, 3, 8))<<endl;

    cout<<(Time(12, 4, 3) >= Time(12, 3, 8))<<endl;

    cout<<(Time(12, 4, 3) == Time(12, 3, 8))<<endl;

    cout<<(Time(12, 4, 3) != Time(12, 3, 8))<<endl;

    Time t2(13, 30, 45);
    cout<<t2.hour()<<" "<< t2.minute()<<" "<<t2.second();
}