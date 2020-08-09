#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
    enum {CLERK=1, SENIOR, ASSIST, MANAGER};
}

class NameCard{
    private:
        char* name;
        char* company;
        char* phone;
        int position;
    public:
        NameCard(const char* _name, const char* _com, const char* _phone, int _posi){
            name = new char[strlen(_name) + 1];
            strcpy(name, _name);
            
            company = new char[strlen(_com) + 1];
            strcpy(company, _com);

            phone = new char[strlen(_phone) + 1];
            strcpy(phone, _phone);

            position = _posi;
        }
        NameCard(const NameCard& copy){
            name = new char[strlen(copy.name) + 1];
            strcpy(name, copy.name);
            company = new char[strlen(copy.company) + 1];
            strcpy(company, copy.company);
            phone = new char[strlen(copy.phone) + 1];
            strcpy(phone, copy.phone);
            position = copy.position;
        }
        const char* Position() const{
            switch(position){
                case COMP_POS::CLERK:
                    return "Clerk";
                case COMP_POS::SENIOR:
                    return "Senior";
                case COMP_POS::ASSIST:
                    return "Assist";
                case COMP_POS::MANAGER:
                    return "Manager";
            }
        }
        void ShowNameCardInfo() const{
            cout << "Name: " << name << endl;
            cout << "Company: " << company << endl;
            cout << "Phone: " << phone << endl;
            cout << "Position: " << Position() << endl << endl;            
        }
        ~NameCard(){
            delete []name;
            delete []company;
            delete []phone;
        }
};

int main(void){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    return 0;
}
