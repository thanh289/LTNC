//Sàng nguyên tố

#include <bits/stdc++.h>
using namespace std;

const int MAX = 10e6;
int prime[MAX];

int main()
{
    prime[0] = 1;
    prime[1] = 1;
    for(int i=2; i*i<MAX; i++)
    {
        if(!prime[i])
        {
            for(int j=i*i; j<MAX; j+=i)
                prime[j] = 1;
        }
    }
    
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        arr.push_back(x);
    }
    
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(!prime[arr[i]]) ans++;
    }
    cout<<ans<<endl;
    
    
    
    
}


