#include <iostream>
#include "3_Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
    :upLeft(x1, y1), lowRight(x2, y2){
    // empty
}

void Rectangle::ShowRecInfo() const{
    cout << "Up Left: [" << upLeft.GetX() << ", " << upLeft.GetY() << "]\n";
    cout << "Low Right: [" << lowRight.GetX() << ", " << lowRight.GetY() << "]\n";
}
