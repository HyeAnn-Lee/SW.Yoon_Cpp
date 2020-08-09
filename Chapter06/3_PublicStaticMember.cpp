#include <iostream>
using namespace std;

class SoSimple{
    public:
        static int simObjCnt;
    public:     // Unnecessary, but in order to make a division b/w variables and functions
        SoSimple(){
            simObjCnt++;
        }
};
int SoSimple::simObjCnt = 0;

int main(void){
    cout << SoSimple::simObjCnt << "th SoSimple object\n";  // To show that static member variable is outside of an object.
    SoSimple sim1;
    SoSimple sim2;

    cout << SoSimple::simObjCnt << "th SoSimple object\n";
    cout << sim1.simObjCnt << "th SoSimple object\n";   // This kind of access is not recommended.
    cout << sim2.simObjCnt << "th SoSimple object\n";   // This kind of access is not recommended.
    
    return 0;
}
