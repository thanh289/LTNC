#include <bits/stdc++.h>
using namespace std;

unsigned long factorial(int x)
{
    cout<<"x = "<<x<<" at "<<(&x)<<endl;
    if(x==0 || x==1) return 1;
    return x * factorial(x-1);
}

int main()
{
    int n; cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
}

// 4
// x = 4 at 0x61fee0
// x = 3 at 0x61fec0
// x = 2 at 0x61fea0
// x = 1 at 0x61fe80
// Factorial of 4 is 24


// kích thước stack frame = kích thước 1 stack frame * số lần đệ quy