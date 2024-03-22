#include <bits/stdc++.h>
using namespace std;

int a[] = {1, 2, 3, 4};

int main()
{

    int b[] = {1, 2, 3, 4};
    int n = sizeof(a)/sizeof(int);

    for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<endl;
    for(int i=0; i<n; i++) cout<<b[i]<<" "; cout<<endl;

    return 0;
}
