#include <bits/stdc++.h>
using namespace std;

class Vector {
    double x, y;
public:
    Vector(double x_ = 0, double y_ = 0);  
    void print(int precision = 2, bool newLine = true);
    Vector& operator=(const Vector& v);    
    Vector operator+(const Vector& v) const;
    Vector operator-(const Vector& v) const;
    Vector& operator+=(const Vector& v);
    Vector& operator-=(const Vector& v);
};

Vector::Vector(double x_ = 0, double y_ = 0){
    x = x_; y = y_;
}

void Vector::print(int precision = 2, bool newLine = true){
    cout<<fixed<<setprecision(precision)<<"("<<x<<", "<<y<<")";
    if (newLine) 
        cout << endl;
        
}

Vector& Vector::operator=(const Vector& v){
     if (this != &v) {
            x = v.x;
            y = v.y;
        }
        return *this;
}

Vector Vector::operator+(const Vector& v) const{
    return Vector(x + v.x, y + v.y);
}

Vector Vector::operator-(const Vector& v) const{
    return Vector(x - v.x, y - v.y);
}

Vector& Vector::operator+=(const Vector& v){
    x += v.x;
    y += v.y;
    return *this;
}

Vector& Vector::operator-=(const Vector& v){
    x -= v.x;
    y -= v.y;
    return *this;
}