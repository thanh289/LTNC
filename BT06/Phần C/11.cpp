#include <bits/stdc++.h>
using namespace std;

int BinaryToDemical(string s)
{
    int t = s.size()-1;
    int ans = 0;

    string s1 = "";
    for(int i=t; i>=0; i--)
        s1 += s[i];

    for(int i=0; i<=t; i++)
        ans += (s1[i]-'0') * pow(2, i);
    
    return ans;
}

string DemicalToBinary(int n)
{
    vector<int> remain;
    while(n>0)
    {
        remain.push_back(n%2);
        n /= 2;
    }

    string ans = "";
    int t = remain.size()-1;
    for(int i=t; i>=0; i--)
        ans += remain[i] + '0';

    return ans;

}

int main()
{
    string Bin; cin>>Bin;
    cout<<BinaryToDemical(Bin)<<endl;

    int x; cin>>x;
    cout<<DemicalToBinary(x)<<endl;

}