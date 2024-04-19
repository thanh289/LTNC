#include<bits/stdc++.h>
using namespace std;


bool checkNumber(int x)
{
    map<int, int> countDigit;
    while(x>0)
    {
        countDigit[x%10]++;
        x/=10;
    }

    for(auto& t: countDigit)
    {
        if(t.second >= 2)
            return false;
    }

    return true;
}


int main()
{
    int l, r; cin>>l>>r;
    for(int i=l; i<=r; i++)
    {
        if(checkNumber(i)) 
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}