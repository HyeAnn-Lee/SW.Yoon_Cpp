#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num;
    public:
        SoSimple(int n) : num(n){}
        SoSimple(const SoSimple& copy) : num(copy.num){
            cout << "Called SoSimple(const SoSimple& copy)\n";
        }
        SoSimple& AddNum(int n){
            num += n;
            return *this;   // return a reference value of object itself
        }
        void ShowData(){
            cout << "num: " << num << endl;
        }
};

SoSimple SimpleFuncObj(SoSimple ob){
    cout << "Before RETURN\n";
    return ob;      // return a copy of ob
}

int main(void){
    SoSimple obj(7);
    SimpleFuncObj(obj).AddNum(30).ShowData();
    obj.ShowData();
    return 0;
}
