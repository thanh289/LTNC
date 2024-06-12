#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*b / gcd(a, b);
}


class Fraction {
    int a, b;
public:
    Fraction(int a_ = 1, int b_ = 1){
        a = a_; b = b_;
    }    

    friend ostream& operator<<(ostream& os, const Fraction& f){
        Fraction f1 = f;
        f1.simplify();
        if(f1.b!=0)
            os << f1.a << "/" << f1.b;
        else 
            os << "invalid";
        return os;
    }

    Fraction operator+(const Fraction& f) const{
        Fraction ans;
        int denominator = lcm(b, f.b);
        ans.b = denominator;
        ans.a = denominator/b*a + denominator/f.b*f.a;

        return ans;
    }

    Fraction operator-(const Fraction& f) const{
        Fraction ans;
        int denominator = lcm(b, f.b);
        ans.b = denominator;
        ans.a = denominator/b*a - denominator/f.b*f.a;

        return ans;
    }
    Fraction operator*(const Fraction& f) const{
        Fraction ans;
        ans.a = a * f.a;
        ans.b = b * f.b;

        return ans;
    }
    Fraction operator/(const Fraction& f) const{
        Fraction ans;
        ans.a = a * f.b;
        ans.b = b * f.a;

        return ans;
    }

    void simplify(){
        int x = gcd(a, b);
        a = a/x;
        b = b/x;
    }

    bool operator>(const Fraction& f) const{
        if(a*f.b > b*f.a) return true;
        return false; 
    }

    bool operator<(const Fraction& f) const{
        if(a*f.b < b*f.a) return true;
        return false; 
    }
};

int main(){
    	
    	
    Fraction x(4, 5), y(5, 20), z;
    Fraction result = x * y / z;
    cout << result;
}