//GCD

#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}