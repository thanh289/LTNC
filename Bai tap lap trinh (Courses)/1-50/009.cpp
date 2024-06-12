//Tìm abs nhỏ nhất trong dãy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        arr.push_back(x);
    }
    
    sort(arr.begin(), arr.end());
    int ans = arr[n-1] - arr[0];
    for(int i=1; i<n; i++)
        ans = min(ans, arr[i]-arr[i-1]);
    cout<<ans<<endl;
    
}