#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c; cin>>a>>b>>c;
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        cout<<"Invalid"<<endl;
        return 0;
    }

    cout<<a+b+c<<endl;
    if(a==b && a==c) cout<<"deu"<<endl;
    else if(a==b || b==c || c==a) cout<<"can"<<endl;
    else if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
        cout<<"vuong"<<endl;
    else cout<<"thuong"<<endl;
}