#include <bits/stdc++.h>
using namespace std;

const int N = 10e4;
bool isPrime[N];

void Eratosthenes()
{
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i=2; i*i<N; i++){
            if(!isPrime[i]){
                for(int j=i*i; j<N; j+=i)
                    isPrime[j] = 1;
            }
    }
}

bool checkPrime(int n)
{
    if(!isPrime[n])
        return true;
    return false;
}


int main()
{
    Eratosthenes();
    int n; cin>>n;
    cout<<checkPrime(n);
}