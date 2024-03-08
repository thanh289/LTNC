#include <bits/stdc++.h>
using namespace std;


struct MyStruct {
    int array[10];
};

int main() 
{
    MyStruct stru1;
    for (int i = 0; i < 10; ++i) 
        stru1.array[i] = i + 1;
    

    MyStruct stru2 = stru1;
    for (int i = 0; i < 10; ++i) 
        stru2.array[i] *= 2;
    

    cout << "First array: ";
    for (int i = 0; i < 10; ++i) {
        cout << stru1.array[i] << " ";
    }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < 10; ++i) {
        cout << stru2.array[i] << " ";
    }
    cout << endl;


    //việc tạo ra bản sao stru2 không làm ảnh hưởng stru1
    return 0;

}