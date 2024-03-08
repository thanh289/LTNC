#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void modifyByValue(Point p) {
    p.x = 99;
    p.y = 100;
    cout << "After modifyByValue: " << &(p.x) << " " << &(p.y) << endl;
}

void modifyByReference(Point &p) {
    p.x = 2;
    p.y = 3;
    cout << "After modifyByReference: " << &(p.x) << " " << &(p.y) << endl;
}


int main() {
    Point point = {1, 4};

    cout << "Before modifyByValue: " << &(point.x) << " " << &(point.y) << endl;
    modifyByValue(point);
    

    cout << "Before modifyByReference: " << &(point.x) << " " << &(point.y) << endl;
    modifyByReference(point);
    

    return 0;
}
