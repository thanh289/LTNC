#include <bits/stdc++.h>
using namespace std;

int a[5] = {1, 4, 8, 2, 5};
char b[3] = {'a', 'b', 'c'};

int main()
{
    
    for(int i=1; i<4; i++)
        cout<<(&a[i])<<" ";
    cout<<endl;
    //0x404008 0x40400c 0x404010 

    for(int i=0; i<3; i++)
        cout<<((void *)&b[i])<<" ";
    cout<<endl;
    //0x404018 0x404019 0x40401a


    //địa chỉ các phần tử tăng dần theo bộ nhớ
    return 0;
}