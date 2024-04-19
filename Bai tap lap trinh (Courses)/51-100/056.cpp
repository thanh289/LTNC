#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1; cin>>x1>>y1;
    double x2, y2; cin>>x2>>y2;

    if(x1>=x2 || y1<=y2)
    {
        cout<<"invalid"<<endl;
        return 0;
    }
    cout<<setprecision(2)<<fixed;

    double x = abs(x2-x1);
    double y = abs(y2-y1);

    cout<<2*(x+y)<<endl;
    cout<<x*y<<endl;

}