#include <iostream>
using namespace std;


void printArray(char arr[2][12]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Khởi tạo mảng theo cách 1
    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    cout << "Mang duoc khoi tao theo cach 1:\n";
    printArray(daytab1);


    // Khởi tạo mảng theo cách 2
    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };
    cout << "Mang duoc khoi tao theo cach 2:\n";
    printArray(daytab2);

    return 0;
}
