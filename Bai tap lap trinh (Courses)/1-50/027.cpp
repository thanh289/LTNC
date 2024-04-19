#include <bits/stdc++.h>
using namespace std;

struct Complex 
{ 
    double a, b; 
};

void print(const Complex& c)
{
    // Your code here
    if(c.a==0 && c.b == 0) cout<<0<<endl;
    else if(c.a==0)
    {
        if(c.b==1) cout<<"i"<<endl;
        else if(c.b==-1) cout<<"-i"<<endl;
        else cout<<c.b<<"i"<<endl;
    }
    else if(c.b==0)
    {
        cout<<c.a<<endl;
    }
    else
    {
        if(c.b==1) cout<<c.a<<"+i"<<endl;
        else if(c.b==-1) cout<<c.a<<"-i"<<endl;
        else
        {
            if(c.b > 0) cout<<c.a<<"+"<<c.b<<"i"<<endl;
            else cout<<c.a<<c.b<<"i"<<endl;
        }
    }
}

Complex add(const Complex& c1, const Complex &c2)
{
    // Your code here
    Complex x;
    x.a = c1.a+c2.a;
    x.b = c1.b+c2.b;
    return x;
}

int compare(const Complex& c1, const Complex &c2)
{
    // Your code here
    if(c1.a*c1.a+c1.b*c1.b == c2.a*c2.a+c2.b*c2.b) return 0;
    
    if(c1.a*c1.a+c1.b*c1.b < c2.a*c2.a+c2.b*c2.b)
        return -1;
    return 1;
    
}

int main()
{
    Complex c;
    c.a = 1;
    c.b = 10;
    print(c);

    Complex c1 = {1, 2}, c2 = {3, -5};
    Complex c3 = add(c1, c2);
    print(c3);

    Complex c4 = {1, 2}, c5 = {1, 2};
    cout << compare(c4, c5);
}