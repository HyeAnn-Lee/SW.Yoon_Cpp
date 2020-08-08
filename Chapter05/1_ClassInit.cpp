#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num1, num2;
    public:
        SoSimple(int n1, int n2)
            : num1(n1), num2(n2) {}
        SoSimple(SoSimple& copy)
            : num1(copy.num1), num2(copy.num2) {
            cout << "Called SoSimple(SoSimple& copy)\n"; 
        }
        void ShowSimpleData(){
            cout << num1 << endl;
            cout << num2 << endl;
        }
};

int main(void){
    SoSimple sim1(15, 30);
    cout << "Right before creating and initializing\n";
    SoSimple sim2 = sim1;
    cout << "Right after creating and initializing\n";
    sim2.ShowSimpleData();
    return 0;
}
