#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b; cin>>a>>b;
    a.insert(0, max(0, int(b.size()-a.size())), '0');
    b.insert(0, max(0, int(a.size()-b.size())), '0');

    string ans = "";
    int n = a.size();
    int tem = 0, remain = 0;
    for(int i=n-1; i>=0; i--)
    {
        tem = a[i]-'0'+b[i]-'0' + remain;
        remain = tem / 10;
        ans = to_string(tem % 10) + ans;
    }
    if(remain) ans = '1' + ans;

    cout<<ans<<endl;
}