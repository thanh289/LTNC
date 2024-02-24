#include <bits/stdc++.h>
using namespace std;

const int MAX = 7;
int digit[MAX];

int splitDigit(int n){
    int d= 0;

    while(n>0){
        digit[d] = n%10;
        n /= 10;
        d++;
    }

    return d;
}

int main(){
    int t; cin>>t;
    while(t--){
        int ans = 0; 

        int a, b; cin>>a>>b;

        for(int i=a; i<=b; i++){

            bool success = true;

            int n = splitDigit(i);

            for(int j=0; j<n/2; j++){
                if(digit[j] == digit[n-j-1])
                    continue;
                else{
                    success = false;
                    break;
                }
            }

            if(success) ans++;

        }

        cout<<ans<<endl;
    }
}