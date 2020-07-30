#include <iostream>
#include <stdlib.h>
#include <string.h>

#define UNIT_ARRAY_SIZE 1024

using namespace std;
const int NAME_LEN = 20;

struct customer{
    int ID;
    char name[NAME_LEN];
    int balance;
};

struct DB{
    struct customer* pArray;
    int curArrsize = 0;
    int numCust = 0;
};

typedef struct DB* DB_T;
typedef struct customer* cus_T;

int ValidID(DB_T db, int id){
    if (id >= db->numCust){
        cout << "Illegal ID.\n\n";
        return 0;
    }
    return 1;
}

void CreateAccount(DB_T db){
    // expand array if the memory will be full
    if (db->numCust == (db->curArrsize-1)){
        int NewArrSize = db->curArrsize + UNIT_ARRAY_SIZE;
        cus_T NewpArray = (cus_T) realloc(db->pArray, NewArrSize * sizeof(customer));
        db->curArrsize = NewArrSize;
        db->pArray = NewpArray;
    }
    
    cout << "\n[Create accout]\nAccount ID: " << (db->numCust) << endl;
    (db->pArray[db->numCust]).ID = db->numCust;

    cout << "Name: ";
    cin >> (db->pArray[db->numCust]).name;

    cout << "Deposit ammount: ";
    cin >> (db->pArray[db->numCust]).balance;
    cout << endl;

    db->numCust++;
    return;
}

void Deposit(DB_T db){    
    int id, deposit;
    cout << "\n[Deposit]\nAccount ID: ";
    cin >> id;

    if (!(ValidID(db, id)))
        return;

    cout << "Deposit ammount: ";
    cin >> deposit;
    (db->pArray[id]).balance += deposit;
    cout << "Deposit Succeed\n\n";

    return;
}

void Withdraw(DB_T db){
    int id, withdraw;
    cout << "\n[Withdraw]\nAccount ID: ";
    cin >> id;

    if (!(ValidID(db, id)))
        return;
    
    cout << "Withdraw ammount: ";
    cin >> withdraw;
    if (withdraw > (db->pArray[id]).balance){
        cout << "Lack of Balance.\n\n";
        return;
    }
    (db->pArray[id]).balance -= withdraw;
    cout << "Withdraw Succeed\n\n";

    return;
}

void ShowInfo(DB_T db){
    int id;
    for (int id = 0; id < db->numCust; id++){
        cout << endl;
        cout << "Account ID: " << id << endl;
        cout << "Name: " << (db->pArray[id]).name << endl;
        cout << "Balance: " << (db->pArray[id]).balance << endl;
    }
    cout << endl;

    return;
}

int main(void){
    // create DB
    DB_T db;
    db = (DB_T) calloc(1, sizeof(DB));
    db->curArrsize = UNIT_ARRAY_SIZE;
    db->numCust = 0;
    db->pArray = (cus_T) calloc(db->curArrsize, sizeof(customer));
    
    while(1){
        int choice;
        cout << "-----Menu-----\n";
        cout << "1. Create account\n2. Deposit\n3. Withdraw\n4. Show entire account info\n5. Exit\nSelect: ";
        cin >> choice;

        switch(choice){
            case 1:
                CreateAccount(db);
                break;
            case 2:
                Deposit(db);
                break;
            case 3:
                Withdraw(db);
                break;
            case 4:
                ShowInfo(db);
                break;
            case 5:
                return 0;
            default:
                cout << "Illegal selection..\n";
        }
    }
}
