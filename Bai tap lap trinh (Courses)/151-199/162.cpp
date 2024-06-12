#include <bits/stdc++.h>
using namespace std;

//To hop
int C(int n, int k){
    //C(n, k) = C(n-1, k-1) + C(n-1, k);

    if(k==0 || k==n) return 1;
    return C(n-1, k-1) + C(n-1, k);
}


int main(){
    int n; cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++)
            cout<<C(i, j)<<" ";
        cout<<endl;
    }
}