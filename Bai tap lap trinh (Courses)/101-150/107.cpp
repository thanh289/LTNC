//Hoàn thành class Complex

#include <bits/stdc++.h>
using namespace std;

class Complex 
{ 
    double a, b; 

public:
    Complex(double a_, double b_){
        a = a_; b = b_;
    }

    friend ostream& operator<<(ostream& os, const Complex& c){
        if(c.a==0 && c.b == 0) os<<0<<endl;
        else if(c.a==0){
            if(c.b==1) os<<"i"<<endl;
            else if(c.b==-1) os<<"-i"<<endl;
            else os<<c.b<<"i"<<endl;
        }
        else if(c.b==0){
            os<<c.a<<endl;
        }
        else
        {
            if(c.b==1) os<<c.a<<"+i"<<endl;
            else if(c.b==-1) os<<c.a<<"-i"<<endl;
            else
            {
                if(c.b > 0) os<<c.a<<"+"<<c.b<<"i"<<endl;
                else os<<c.a<<c.b<<"i"<<endl;
            }
        }

        return os;
    }


    friend Complex operator+(const Complex& x, const Complex& y){
        Complex c(0, 0);
        c.a = x.a + y.a;
        c.b = x.b + y.b;
        return c;
    }

    friend Complex operator-(const Complex& x, const Complex& y){
        Complex c(0, 0);
        c.a = x.a - y.a;
        c.b = x.b - y.b;
        return c;
    }

    double abs(){
        return sqrt(a*a + b*b);
    }

};



int main()
{
    Complex c(-20, -5);
    cout << c;

    Complex c1(4, 7), c2(2, 3);
    cout << c1 - c2;

    Complex c3(4, 4);
    cout << c3.abs();
}