#include <iostream>
#include "1_Point.h"
#include "1_Rectangle.h"
using namespace std;

int main(void){
    Point pos1;
    if (!pos1.InitMembers(-2, 4))
        cout << "Initialization failed\n";
    if (!pos1.InitMembers(2, 4))
        cout << "Initialization failed\n";

    Point pos2;
    if (!pos2.InitMembers(5, 9))
        cout << "Initialization failed\n";

    Rectangle rec;
    if (!rec.InitMembers(pos2, pos1))
        cout << "Initialization of rectangle failed\n";
    if (!rec.InitMembers(pos1, pos2))
        cout << "Initialization of rectangle failed\n";

    rec.ShowRecInfo();
    return 0;
}
