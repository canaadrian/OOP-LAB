#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle r1(10, 20);
    Rectangle r2(5, 15);

    cout << "r1 perimeter: " << r1.getPerimeter() << endl;
    cout << "r2 perimeter: " << r2.getPerimeter() << endl;

    cout << "r1 area: " << r1.getArea() << endl;
    cout << "r2 area: " << r2.getArea() << endl;

    cout << "r1 has bigger perimeter? " << r1.hasBiggerPerimeter(r2) << endl;
    cout << "r1 has bigger area? " << r1.hasBiggerArea(r2) << endl;

    return 0;
}
