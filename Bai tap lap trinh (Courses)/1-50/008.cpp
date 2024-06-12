//Fibonaci

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    string ans;
    for(int i=2; i<=10; i++)
    {
        ans = b + a;
        cout<<ans<<endl;
        a = b;
        b = ans;
        
    }
}