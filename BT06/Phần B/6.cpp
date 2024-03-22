#include <bits/stdc++.h>
using namespace std;

void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)";
}


int main()
{
    cout<<f(1,2)<<endl;
}

//call of overloaded 'f(int, int)' is ambiguous