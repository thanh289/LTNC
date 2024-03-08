#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point myPoint = {1, 2};

    cout << "Address of myPoint: " << &myPoint << endl;
    cout << "Address of x: " << &(myPoint.x) << endl;
    cout << "Address of y: " << &(myPoint.y) << endl;

    return 0;
}
