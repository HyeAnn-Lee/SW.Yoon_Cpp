#include <iostream>
using namespace std;

class Point{
    private:
        int xpos, ypos;
    public:
        Point(int x, int y)
            : xpos(x), ypos(y) {}
        void ShowPointInfo() const{
            cout << "[" << xpos << ", " << ypos << "]\n";
        }
};

class Circle{
    private:
        Point ctr;
        int radius;
    public:
        Circle(int x, int y, int r)
            : ctr(x, y), radius(r) {}
        void ShowCircleInfo() const{           
            cout << "Radius: " << radius << endl;
            ctr.ShowPointInfo();
        }
};

class Ring{
    private:
        Circle inCir;
        Circle outCir;
    public:
        Ring(int x1, int y1, int r1, int x2, int y2, int r2)
            : inCir(x1, y1, r1), outCir(x2, y2, r2) {}
        void ShowRingInfo() const{
            cout << "Inner Circle Info..\n";
            inCir.ShowCircleInfo();
            cout << "Outter Circle Info..\n";
            outCir.ShowCircleInfo();
        }
};

int main(void){
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}
