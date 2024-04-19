#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x;cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    
    int count[10000];
    int ans = 0;
    for(int i=0; i<n; i++) count[arr[i]]++;
    for(int i=0; i<=arr[n-1]; i++)
    {
        for(int j=i+1; j<=arr[n-1]; j++)
        {
            int x = count[i];
            int y = count[j];
            if(x && y && (i+j)%k==0)
                ans += x*y;
        }
    }
    for(int i=0; i<=arr[n-1]; i++)
    {
        if(count[i]>=2 && (i*2)%k==0)
            ans += (count[i]-1)*count[i]/2;
    }
    
    cout<<ans<<endl;
    
}