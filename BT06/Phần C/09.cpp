#include <bits/stdc++.h>
using namespace std;

int generateRandom(int n)
{
    int x = rand() % n;
    return x;
}

int main()
{
    int n; cin>>n;
    cout<<generateRandom(n)<<endl;
}