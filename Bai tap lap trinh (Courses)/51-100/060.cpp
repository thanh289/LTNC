#include <bits/stdc++.h>
using namespace std;

const int Max = 10e6;
bool notPrime[Max];

void primeNumber(int n){

    for(int i=2; i<=n; i++){
        if(!notPrime[i])
            cout<<i<<" ";
    }
    cout<<endl;
}


void perfectNumber(int n){

    for(int i=6; i<=n; i++){

        int sum = 1;
        for(int j=2; j<i; j++)
            if(!(i%j))
                sum += j;

        if(sum == i) cout<<i<<" ";
    }

    cout<<endl;

}


void squareNumber(int n){

    for(int i=2; i<sqrt(n)+1; i++){
        if(i*i >= 4 && i*i<=n)
            cout<<i*i<<" ";
    }
    cout<<endl;
}

int main(){
    
    notPrime[0] = 1;
    notPrime[1] = 1;

    for(int i=2; i*i<Max; i++){
        if(!notPrime[i]){
            for(int j=i*i; j<Max; j+=i)
                notPrime[j] = 1;
        }
    }


    int n; cin>>n;
    primeNumber(n);
    perfectNumber(n);
    squareNumber(n);

}