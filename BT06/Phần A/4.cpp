#include <bits/stdc++.h>
using namespace std;


void checkArr(int arr[])
{
    arr[0] = 9;
}

void checkStr(string s)
{
    s = "Hi";
}

int main()
{
    int arr[] = {3, 6, 1, 5, 2};
    checkArr(arr);
    cout<<"First element of array: "<<arr[0]<<endl; //9
    //-> pass by reference

    string s = "Hello!";
    checkStr(s);
    cout<<"String after check: "<<s<<endl; //Hello!
    // -> pass by value

}