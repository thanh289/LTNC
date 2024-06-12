//Fibonaci

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a = 0; int b = 1;
    cout<<a<<" "<<b<<" ";
    int ans;
    for(int i=2; i<=n; i++)
    {
        ans = b + a;
        cout<<ans<<" ";
        a = b;
        b = ans;
        
    }
}