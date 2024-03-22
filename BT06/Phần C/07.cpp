#include <bits/stdc++.h>
using namespace std;

void printStar(int m, int n)
{
    for(int i=1; i<=m; i++)
        cout<<" ";
    for(int i=1; i<=n; i++)
        cout<<"*";
    cout<<endl;
}

int main()
{
    int line; cin>>line;
    for(int i=1; i<=line; i++)
    {
        printStar(line-i, (i-1)*2+1);
    }
}