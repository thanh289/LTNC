#include <bits/stdc++.h>
using namespace std;


int C(int n, int k){
    if(k==0 || k==n) return 1;
    return C(n-1, k-1) + C(n-1, k);
}

int main(){
    while(true){
        int n, k; cin>>n>>k;
        if(n==-1 && k==-1) break;
        cout<<C(n, k)<<endl;

    }

}