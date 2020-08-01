#include <iostream>
using namespace std;

void PlusByRef(int &ref){
    ref++;
}

void RevByRef(int &ref){
    ref = -ref;
}

int main(void){
    int num = 10;
    cout << "num: " << num << endl;

    PlusByRef(num);
    cout << "After +1: " << num << endl;
    RevByRef(num);
    cout << "Even after changing sign: " << num << endl;

    return 0;
}
