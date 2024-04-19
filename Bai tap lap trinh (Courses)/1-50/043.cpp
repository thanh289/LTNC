#include <bits/stdc++.h>
using namespace std;

vector<int> list_square(int a, int b)
{
    vector<int> ans;

    for(int i=1; i<1000; i++)
    {
        int t = i*i;
        if(t>=a && t<=b) ans.push_back(t);
        if(t>b) break;
    }

    return ans;
}

int main()
{
    vector<int> a = list_square(2, 100);
    for (int i = 0; i < a.size(); i ++)
        cout << a[i] << " ";
}