#include <bits/stdc++.h>
using namespace std;


bool eq(int a[], int b[], int n)
{
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {2,3,4,5,6};
    int c[] = {1,2,3,4,5};
    int n = 5;

    cout<<eq(a, b, n)<<endl;
    cout<<eq(a, c, n)<<endl;

    return 0;
}