#include <bits/stdc++.h>
using namespace std;


class Complex {
    double a, b;
public:
    Complex(double a_, double b_);
    friend ostream& operator<<(ostream& os, const Complex& f);
    Complex operator+(const Complex& f) const;
    Complex operator-(const Complex& f) const;
    Complex operator*(const Complex& f) const;
    Complex operator/(const Complex& f) const;
    double modulus() const;
    bool operator==(const Complex& f) const;
    bool operator!=(const Complex& f) const;
};


Complex::Complex(double a_ = 0, double b_ = 0){
    a = a_; b = b_;
}

ostream& operator<<(ostream& os, const Complex& f){
    if(f.a == 0 && f.b == 0) os<<0<<endl;
    else if(f.a==0){
        if(f.b == 1)        os<<"i"<<endl;
        else if(f.b == -1)  os<<"-i"<<endl;
        else                os<<f.b<<"i"<<endl;
    }
    else{
        if(f.b == 0)        os<<f.a<<endl;
        else if(f.b == 1)   os<<f.a<<"+i"<<endl;
        else if(f.b == -1)  os<<f.a<<"-i"<<endl;
        else if(f.b > 0)    os<<f.a<<"+"<<f.b<<"i"<<endl;
        else if(f.b < 0)    os<<f.a<<f.b<<"i"<<endl;
    }

    return os;
}

Complex Complex::operator+(const Complex& f) const{
    Complex ans;
    ans.a = a + f.a;
    ans.b = b + f.b;
    return ans;
}

Complex Complex::operator-(const Complex& f) const{
    Complex ans;
    ans.a = a - f.a;
    ans.b = b - f.b;
    return ans;
}

Complex Complex::operator*(const Complex& f) const{
    Complex ans;
    ans.a = a*f.a - b*f.b;
    ans.b = a*f.b + b*f.a;
    return ans;
}

Complex Complex::operator/(const Complex& f) const{
    Complex ans;
    ans.a = (a*f.a + b*f.b) / (f.a*f.a + f.b*f.b);
    ans.b = (b*f.a - a*f.b) / (f.a*f.a + f.b*f.b);
    return ans;
}

double Complex::modulus() const{
    return sqrt(a*a + b*b);
}

bool Complex::operator==(const Complex& f) const{
    if(a == f.a && b == f.b) return true;
    return false;
}

bool Complex::operator!=(const Complex& f) const{
    if(a != f.a || b != f.b) return true;
    return false;
}




int main(){
    Complex x, y(0, 4.5);
    x = x - y;
    cout << x;
}