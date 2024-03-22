#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if (a<b) swap(a, b);
    if(b==0) return a;
    return gcd(a-b, b);
}

int main()
{
    int a, b; cin>>a>>b;
    int ans = gcd(a, b);
    if(ans==1) cout<<a<<" va "<<b<<" nguyen to voi nhau"<<endl;
    else cout<<"UCLN("<<a<<", "<<b<<") = "<<ans<<endl;
}