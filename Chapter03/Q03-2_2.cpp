#include <iostream>
#include <cstring>
using namespace std;

class Printer{
    private:
        char string[30];
    public:
        void SetString(const char* str);
        void ShowString();
};

inline void Printer::SetString(const char* str){
    strcpy(string, str);
    return;
}

inline void Printer::ShowString(){
    cout << string << endl;
    return;
}

int main(void){
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();
    pnt.SetString("I love C++");
    pnt.ShowString();    
    return 0;
}
