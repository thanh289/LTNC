#include <iostream>
using namespace std;

int main() {
    //a
    int x = 5;
    int &ref_x = x; 

    cout << "Address of x: " << &x << endl;
    cout << "Address of ref_x: " << &ref_x << endl;

    ref_x = 10;
    cout << "New value of x: " << x << endl;
    // Address of x: 0x61ff00
    // Address of ref_x: 0x61ff00
    // New value of x: 10
    //Cùng địa chỉ và khi thay đổi ref_x thì cũng thay đổi x
    //-> cùng là một biến trong bộ nhớ


    //b
    // int &ref_y;
    //lỗi -> không thể khai báo tham chiếu khi chưa chiếu nó tới một biến thường


    //c
    int y = 20;
    int &ref_y = y; //chỉ tới y
    cout << "Address of y: " << &y << endl;
    
    int z = 30;
    ref_y = z;
    cout << "New adress of y: " << &y << endl;
    // Address of y: 0x61fefc
    // New adress of y: 0x61fefc
    //-> Không thể chiếu tới một tham chiếu khác với đích ban đầu
    return 0;
}
