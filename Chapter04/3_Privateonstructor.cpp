#include <iostream>
using namespace std;

class AAA{
    private:
        int num;
    public:
        AAA() : num(0) {}
        AAA& CreateInitObj(int n) const{
            AAA* ptr = new AAA(n);  // Can use private constructor since it's inside of the class AAA.
            return *ptr;
        }
        void ShowNum() const{ cout << num << endl; }
    private:
        AAA(int n) : num(n) {}
};

int main(void){
    AAA base;       // Have to use public constructor since it's outside of the class AAA.
    base.ShowNum();

    AAA& obj1 = base.CreateInitObj(3);
    obj1.ShowNum();

    AAA& obj2 = base.CreateInitObj(12);
    obj2.ShowNum();

    delete &obj1;
    delete &obj2;
    return 0;
}
