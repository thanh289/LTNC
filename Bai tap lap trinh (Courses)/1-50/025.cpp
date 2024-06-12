#include <bits/stdc++.h>
using namespace std;

struct Triangle 
{ 
    double a, b, c; 

    Triangle(double a_, double b_, double c_){
        a = a_;
        b = b_;
        c = c_;
    }
};

double getArea(Triangle tri)
{
    // Your code here
    
    double a = tri.a;
    double b = tri.b;
    double c = tri.c;
    
    if(a<=0 || b<=0 || c<=0 || a>=b+c || b>=a+c || c>=a+b) {
        return -1;
    }
    float p = (a + b + c) / 2;
    float res = sqrt(p * (p - a) * (p - b) * (p - c));
    return res;
}

int main(){
    Triangle tri(3, 4, 5);
    cout<<getArea(tri)<<endl;
}

