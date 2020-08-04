#include <iostream>
#include "1_Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr){
    if (ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY()){
        cout << "Wrong position\n";
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const{
    cout << "Up Left: [" << upLeft.GetX() << ", " << upLeft.GetY() << "]\n";
    cout << "Low Right: [" << lowRight.GetX() << ", " << lowRight.GetY() << "]\n";
}
