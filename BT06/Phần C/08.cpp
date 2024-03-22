#include <bits/stdc++.h>
using namespace std;

int rounding1(double x)
{
    if(ceil(x)-x <= x-floor(x))
        return ceil(x);
    return floor(x);
}

int rounding2(double x)
{
    double remain = x - (int)x;
    if(remain < 0.5) return (int)x;
    return (int)x + 1;
}

int main()
{
    double n; cin>>n;
    cout<<rounding1(n)<<endl;
    cout<<rounding2(n)<<endl;
}