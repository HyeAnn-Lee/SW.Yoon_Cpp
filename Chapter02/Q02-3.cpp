#include <iostream>
using namespace std;

typedef struct __Point{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point* ptr = new Point;
//    cout << ptr << endl;
    ptr->xpos = p1.xpos + p2.xpos;
    ptr->ypos = p1.ypos + p2.ypos;
    return *ptr;
}

int main(void){
    Point* ptr1 = new Point;
//    cout << ptr1 << endl;
    ptr1->xpos = 19;
    ptr1->ypos = 98;

    Point* ptr2 = new Point;
//    cout << ptr2 << endl;
    ptr2->xpos = 10;
    ptr2->ypos = 13;
    
    Point& pt = PntAdder(*ptr1, *ptr2);
//    cout << &pt << endl;
    cout << pt.xpos << ", " << pt.ypos << endl;

    delete ptr1;
    delete ptr2;
    delete &pt;
    return 0;
}
