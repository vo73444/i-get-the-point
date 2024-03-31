#include <cassert>
#include "point.hpp"
#include <iostream>

using namespace std;

int main(){

    cout << "Test started... \n\n";

    Point p = Point(3.2, 9.8);

    Point p2 = p * 2;

    Point p3 = p * 2.0;

    Point p4 = p * (-3);

    assert(abs(p2.getX() - 6.4) < 0.1 && abs(p2.getY() - 19.6) < 0.1);

    assert(abs(p3.getX() - 6.4) < 0.1 && abs(p3.getY() - 19.6) < 0.1);

    assert(abs(p4.getX() - (-9.6)) < 0.1 && abs(p4.getY() - (-29.4)) < 0.1);

    cout << "Test Passed!\n";

    return 0;
}
