#include <bits/stdc++.h>
using namespace std;

int main( )
{ 
    //a
    cout<<"CHAR"<<endl;
    char a[4] = "abc"; 
    for (char *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
    //b
    cout<<"INT"<<endl;
    int b[] = {1, 3, 5, 7}; 
    int n1 = sizeof(b) / sizeof(b[0]);
    for (int *cp = b; cp < b+n1; cp++) {
        cout << cp << " : " << (*cp) << endl;
    } 
    //c
    cout<<"DOUBLE"<<endl;
    double c[] = {1.0, 2.5, 10.99, 20.1}; 
    int n2 = sizeof(c) / sizeof(c[0]);
    for (double *cp = c; cp < c+n2; cp+=2) {
        cout << cp << " : " << (*cp) << endl;
    } 

    return 0;

    //d
    //Thì skip 1 phần tử, vẫn hoạt động bthg
}
