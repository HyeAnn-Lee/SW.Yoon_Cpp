#include <iostream>
using namespace std;

class Point{
    public:
        int x;
        int y;
};

class Rectangle{
    public:
        Point upLeft;
        Point lowRight;
        
        void ShowRecInfo(){
            cout << "Up Left: [" << upLeft.x << ", " << upLeft.y << "]\n";
            cout << "Low Right: [" << lowRight.x << ", " << lowRight.y << "]\n";
        }
};

int main(void){
    Point pos1 = {-2, 4};
    Point pos2 = {5, 9};
    Rectangle rec = {pos2, pos1};
    rec.ShowRecInfo();
    return 0;
}
