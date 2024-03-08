#include <bits/stdc++.h>
using namespace std;


struct Point
{
    int x, y;
};


struct Rect
{
    int x, y, w, h;

    bool Contains(const Point p)
    {
        if(p.x < x) 
            return false;
        if(p.x > x+w)
            return false;
        if(p.y < y)
            return false;
        if(p.y > y+h)
            return false;

        return true; 
    }
};



int main()
{
    Point point;
    point.x = 10;
    point.y = 12;

    Rect rectangle1;
    rectangle1.x = 1;
    rectangle1.y = 5;
    rectangle1.w = 8;
    rectangle1.h = 7;

    Rect rectangle2;
    rectangle2.x = 2;
    rectangle2.y = 5;
    rectangle2.w = 8;
    rectangle2.h = 7;

    cout<<rectangle1.Contains(point)<<endl;
    cout<<rectangle2.Contains(point)<<endl;
}
