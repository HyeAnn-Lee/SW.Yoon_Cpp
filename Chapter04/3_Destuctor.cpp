#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private:
        char* name;
        int age;
    public:
        Person(const char* myname, int myage){
            int len = strlen(myname) + 1;
            name = new char[len];
            strcpy(name, myname);
            age = myage;
        }
        void ShowPersonInfo() const{
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        ~Person(){
            delete []name;
            cout << "called destructor!\n";
        }
};

int main(void){
    Person man1("HyeAnn Lee", 23);
    Person man2("Dongjun Ann", 21);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();
    return 0;
}
