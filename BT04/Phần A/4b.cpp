#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {5, 4, 10, 3, 2, 6};

    arr[-1] = 20;
    arr[6] = 78;
    arr[7] = 90;
    cout<<arr[-1]<<endl; 
    cout<<arr[6]<<endl; 
    cout<<arr[7]<<endl; 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    
    //vẫn in ra các giá trị
}