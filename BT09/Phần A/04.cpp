#include <iostream>
using namespace std;

int* createPointerToLocalVariable() {
    int x = 5;
    cout<<&x<<endl; //0x61fedc
    return &x;
}

int main() {
    int* ptr = createPointerToLocalVariable();
    cout<<ptr<<endl; //0
    delete ptr;
    cout<<ptr<<endl; //0
    return 0;
}
/*
04.cpp: In function 'int* createPointerToLocalVariable()':
04.cpp:5:9: warning: address of local variable 'x' returned [-Wreturn-local-addr]
     int x = 5;
         ^
*/