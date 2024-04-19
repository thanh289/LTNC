#include <bits/stdc++.h>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl; //-aaaaaaaaa-
    cerr <<"c: " << "-" << c << "-" << endl; //-aaaaaa-
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl; //-aaaaaaaaa-

    //giá trị của toán hạng sau delete phải là biến/ mảng cấp phát động
    //như vậy hành động "delete c" là không xác định

}