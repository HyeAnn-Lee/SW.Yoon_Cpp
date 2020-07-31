#include <iostream>
using namespace std;

bool IsPositive(int num){
    if (num<=0)
        return false;
    return true;
}

int main(void){
    bool isPos;
    int num;
    cout << "Input number: ";
    cin >> num;

    isPos = IsPositive(num);
    if (isPos)
        cout << "Positive number\n";
    else
        cout << "Negative number\n";

    return 0;
}
