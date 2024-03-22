#include <iostream>
using namespace std;


void printArray(char arr[2][12]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << static_cast<int>(arr[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // Thử chỉ khởi tạo một phần của mảng bằng cách xóa bớt các giá trị khởi tạo

    char daytab1[2][12] = {
        {31,28,31,30,31,30,31,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    cout << "Mang chi khoi tao mot phan theo cach 1:\n";
    printArray(daytab1);


    char daytab2[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31 
    };
    cout << "Mang chi khoi tao mot phan theo cach 2:\n";
    printArray(daytab2);


    //k in ra kí tự nữa
    return 0;
}
