#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char str1[50], str2[50];
    cout << "Input any words: ";
    cin.getline(str1, sizeof(str1));
    cout << "length: " << strlen(str1) << endl;
    strcpy(str2, str1);
    if (!strcmp(str1, str2))
        cout << "doubled: " << strcat(str2, str1) << endl;

    return 0;
}
