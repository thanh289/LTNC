//Tổng các số nhỏ hơn và nguyên tố với n

#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int sum_relative_primes(int n)
{
    int ans = 0;
    for(int i=1; i<n; i++){
        if(UCLN(i, n) == 1) ans += i;
    }
    return ans;
}

int main(){
    cout<<sum_relative_primes(10)<<endl;
}