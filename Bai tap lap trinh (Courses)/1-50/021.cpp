//Tính a^n mod m

#include <bits/stdc++.h>
using namespace std;

long long a, n, m;

string changeToBinary(long long n)
{
    string ans = "";
    while(n>0)
    {
        ans += n%2;
        n/=2;
    }
    return ans;
}

int main()
{
    cin>>a>>n>>m;
    long long y = 1;
    long long power = a%m;
    string nbinary = changeToBinary(n);
    
    int t = nbinary.size();
    for(int i=0; i<t; i++)
    {
        if(nbinary[i]) y = (y*power) % m;
        power = (power*power) % m;
    }
    cout<<y<<endl;
}