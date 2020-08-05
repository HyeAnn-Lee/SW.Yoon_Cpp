#include <iostream>
using namespace std;

class AAA{
    public:
        AAA(){
            cout << "empty object\n";   // To check whether line 30 calls the constructor
        }
        void ShowYourName(){
            cout << "I'm class AAA\n";
        }
};

class BBB{
    private:
        AAA& ref;       // Reference should be initialized with an initializer (line 19)
        const int& num; // CONST REFERENCE can be initialized to CONST INT by the initializer (line 19)
    public:
        BBB(AAA& r, const int& n)
            : ref(r), num(n)
        {}
        void ShowYourName(){
            ref.ShowYourName();
            cout << "and\n";
            cout << "I ref num " << num << endl;
        }
};

int main(void){
    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.ShowYourName();
    return 0;
}
