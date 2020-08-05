#include <iostream>
using namespace std;

class SinivelCap{
    public:
        void Take() const {cout << "Medicine for runny nose\n";};
};

class SneezeCap{
    public:
        void Take() const {cout << "Medicine for sneezing\n";};
};

class SnuffleCap{
    public:
        void Take() const {cout << "Medicine for snuffed nose\n";};
};

class ColdPatient{
    public:
        void TakeSinivelCap(const SinivelCap& cap) const {cap.Take();};
        void TakeSneezeCap(const SneezeCap& cap) const {cap.Take();};
        void TakeSnuffleCap(const SnuffleCap& cap) const {cap.Take();};
};

int main(void){
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    return 0;
}
