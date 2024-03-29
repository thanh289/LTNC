#include <bits/stdc++.h>
using namespace std;

void printSize(int arr[])
{
    //lúc này arr là địa chỉ phần tử đầu tiên
    //nên phải dùng *arr
    cout<<sizeof(*arr)<<endl;
}

int main()
{
    int a[] = {7,2,3,4,5,6};
    int b[7] = {1,2,3};
    cout<<sizeof(a)<<endl;  //24
    printSize(a);           //4
    cout<<sizeof(b)<<endl;  //28
    printSize(b);           //4

    //-> truyền vào hàm là địa chỉ ptu đầu tiên
}