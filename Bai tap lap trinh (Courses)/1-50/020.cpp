//Tìm kiếm nhị phân

#include <bits/stdc++.h>
using namespace std;

const int Max = 10e5;
int arr[Max];
int n, m;

string binarySearch(int x){
    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(x == arr[mid])
            return "YES";

        if(x > arr[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    
    return "NO";
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    for(int i=0; i<m; i++){
        int x; cin>>x;
        cout<<binarySearch(x)<<endl;
    }
}