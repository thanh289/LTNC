//In ra số có tần suất xuất hiện lớn nhất

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;

    int count[10];
    for(int i=0; i<10; i++)
        count[i] = 0;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        count[x]++;
    }

    int ans = 0;
    for(int i=1; i<10; i++){
        if(count[i] > count[ans] ) ans = i;
    }

    cout<<ans<<endl;
}