#include <iostream>
#include <stdlib.h>
#include <string.h>

#define UNIT_ARRAY_SIZE 1024

using namespace std;
const int NAME_LEN = 20;

class customer{
    private:
        int ID;
        char* name;
        int balance;
    public:
        customer(int ID, const char* name, int balance){
            this->ID = ID;
            this->name = new char[strlen(name)+1];
            strcpy(this->name, name);
            this->balance = balance;
        }
        customer(const customer& copy){
            ID = copy.ID;
            name = new char[strlen(copy.name)+1];
            strcpy(name, copy.name);
            balance = copy.balance;
        }
        void Deposit(int money){
            balance += money;
            cout << "Deposit Succeeded\n\n";
            return;
        }
        void Withdraw(int money){
            if (money > balance){
                cout << "Lack of Balance.\nQuery failed.\n\n";
                return;
            }
            balance -= money;
            cout << "Withdraw Succeeded\n\n";
            return;
        }
        void ShowCustInfo() const{
            cout << "Account ID: " << ID << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
        }
        ~customer(){
            delete []name;
        }
};

class DataBase{
    private:
        customer* pArray[UNIT_ARRAY_SIZE];
        int curArrSize = UNIT_ARRAY_SIZE;
        int numCust = 0;
    public:
        bool ValidID(int id) const{
            if (id >= numCust){
                cout << "Illegal ID.\n\n";
                return false;
            }
            return true;
        }
        void CreateAccount(){
            if (numCust == curArrSize){
                cout << "Database is full. Query failed.\n";
                return;
            }

            char name[NAME_LEN];
            int balance;

            cout << "\n[Create accout]\nAccount ID: " << numCust << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Deposit amount: ";
            cin >> balance;
            cout << endl;

            pArray[numCust] = new customer(numCust, name, balance);
            numCust++;
            return;
        }
        void Deposit(){
            int id, money;
            cout << "\n[Deposit]\nAccount ID: ";
            cin >> id;

            if (!ValidID(id))
                return;
            
            cout << "Deposit amount: ";
            cin >> money;
            pArray[id]->Deposit(money);
            return;
        }
        void Withdraw(){
            int id, money;
            cout << "\n[Withdraw]\nAccount ID: ";
            cin >> id;

            if (!ValidID(id))
                return;
            
            cout << "Withdraw amount: ";
            cin >> money;
            pArray[id]->Withdraw(money);
            return;
        }
        void ShowInfo() const{
            for (int id=0; id<numCust; id++){
                cout << endl;
                pArray[id]->ShowCustInfo();
            }
            cout << endl;
            return;
        }
        void Delete(){
            for (int i=0; i<numCust; i++)
                delete pArray[i];
            return;
        }
};

int main(void){
    DataBase DB;
    while(1){
        int choice;
        cout << "-----Menu-----\n";
        cout << "1. Create account\n2. Deposit\n3. Withdraw\n4. Show entire account info\n5. Exit\nSelect: ";
        cin >> choice;

        switch(choice){
            case 1:
                DB.CreateAccount();
                break;
            case 2:
                DB.Deposit();
                break;
            case 3:
                DB.Withdraw();
                break;
            case 4:
                DB.ShowInfo();
                break;
            case 5:
                DB.Delete();
                return 0;
            default:
                cout << "Illegal selection..\n";
        }
    }
}
