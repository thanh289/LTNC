#include <bits/stdc++.h>
using namespace std;

vector<int> fibonaci;

bool generateFibo(int n)
{
    fibonaci.push_back(1);
    fibonaci.push_back(1);
    int f1 = 1, f2 = 1;
    int f3 = 1;
    while(f3 < n)
    {
        f3 = f1 + f2;
        if(f3<=n)
            fibonaci.push_back(f3);
        f2 = f1;
        f1 = f3;
    }

    if(f3 == n) return true;
    return false;
}

int main()
{
    int n; cin>>n;
    if(generateFibo(n)) cout<<"Thuoc day Fibonacci"<<endl;
    else cout<<"Khong thuoc day Fibonacci"<<endl;

    for(auto& x : fibonaci)
        cout<<x<<" ";
    cout<<endl;

}