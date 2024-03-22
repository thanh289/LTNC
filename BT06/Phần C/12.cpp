#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    if(n==0 || n==1) return 1;
    int ans = 1;
    for(int i=2; i<=n; i++)
        ans *= i;
    return ans;
}

int toHop(int k, int n)
{
    //  n! / (k! * (n-k)!)
    return factorial(n) / (factorial(k) * factorial(n-k));

}

int check(int k, int n)
{
    if(k>=0 && k<=n && n>=0 && n<=20)
        return 1;
    return 0;
}


int main()
{
    while(true)
    {
        int k, n; cin>>k>>n;
        if(k==-1 && n==-1) break;

        if(!check(k, n)) continue;

        cout<<toHop(k, n)<<endl;
    }

    return 0;
}