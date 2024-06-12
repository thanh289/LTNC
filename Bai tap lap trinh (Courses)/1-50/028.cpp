#include <bits/stdc++.h>

struct Point 
{
    double x, y;

    Point(){
        x = 0; y = 0;
    }

    Point(double x_, double y_){
        x = x_; y = y_;
    }

    Point(const Point& p){
        x = p.x;
        y = p.y;
    }
};


class Triangle 
{
    private:
        Point p1, p2, p3;

    public:
        Triangle(const Point& p1_, const Point& p2_,  const Point& p3_){
            p1 = p1_; p2 = p2_; p3 = p3_;
        }

        double getPerimeter() const{
            double xa = p1.x;
            double xb = p1.y;
            double ya = p2.x;
            double yb = p2.y;
            double za = p3.x;
            double zb = p3.y;
            
            double p = sqrt((xa-ya)*(xa-ya)+(xb-yb)*(xb-yb));
            double q = sqrt((xa-za)*(xa-za)+(xb-zb)*(xb-zb));
            double r = sqrt((ya-za)*(ya-za)+(yb-zb)*(yb-zb));
            
            return p+q+r;
        }

        double getArea() const{
            double xa = p1.x;
            double xb = p1.y;
            double ya = p2.x;
            double yb = p2.y;
            double za = p3.x;
            double zb = p3.y;
            double a = sqrt((xa-ya)*(xa-ya)+(xb-yb)*(xb-yb));
            double b = sqrt((xa-za)*(xa-za)+(xb-zb)*(xb-zb));
            double c = sqrt((ya-za)*(ya-za)+(yb-zb)*(yb-zb));
            double p = getPerimeter()/2;
            return sqrt(p*(p-a)*(p-b)*(p-c));
        }

    // Từ khoá const ở cuối đảm bảo hàm không làm thay đổi các biến thành viên p1, p2, p3

};
