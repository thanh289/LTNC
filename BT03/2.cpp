#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void modifyByValue(Point p) {
    p.x = 99;
    p.y = 100;
}

void modifyByReference(Point &p) {
    p.x = 2;
    p.y = 3;
}

int main() {
    Point point = {1, 4};

    cout << "Before modifyByValue: " << point.x << " " << point.y << endl;
    modifyByValue(point);
    cout << "After modifyByValue: " << point.x << " " << point.y << endl;

    cout << "Before modifyByReference: " << point.x << " " << point.y << endl;
    modifyByReference(point);
    cout << "After modifyByReference: " << point.x << " " << point.y << endl;

    return 0;
}
