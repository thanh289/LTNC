#include <bits/stdc++.h>
using namespace std;


bool majority(bool a, bool b, bool c)
{
    return ((a&&b)||(b&&c)||(a&&c));
}

int main()
{
    bool a, b, c; cin>>a>>b>>c;
    bool ans = majority(a, b, c);
    cout<<ans<<endl;

    return 0;
}