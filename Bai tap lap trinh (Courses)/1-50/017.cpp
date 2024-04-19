#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for(int i=0; i<n; i++)
    {
        int r; cin>>r; 
        arr[i][0] = r;
        int c; cin>>c; 
        arr[i][1] = c;
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i][0] == arr[j][0] || arr[i][1] == arr[j][1])
            {
                cout<<"YES"<<endl;
                return 0;
            }
            
            if(abs(arr[i][0]-arr[j][0]) == abs(arr[i][1]-arr[j][1]))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}