#include <iostream>
using namespace std;

class FruitSeller{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        bool InitMembers(int price, int num, int money){
            if (price<0 || num<0 || money<0){
                cout << "Out of range\n";
                return false;
            }
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
            return true;
        }
        int GetPrice() const{
            return APPLE_PRICE;
        }
        int GetMoney() const{
            return myMoney;
        }
        int GetApples() const{
            return numOfApples;
        }
        int SaleApples(int money){
            if (money<0){
                cout << "Out of range\n";
                return 0;
            }
            int num = money/GetPrice();
            numOfApples -= num;
            myMoney += money;
            return num;
        }
        void ShowSalesResult() const{
            cout << "Apple left: " << GetApples() << endl;
            cout << "Margin: " << GetMoney() << endl << endl;
        }
};

class FruitBuyer{
    int myMoney;
    int numOfApples;

    public:
        bool InitMembers(int money){
            if (money<0){
                cout << "Out of range\n";
                return false;
            }
            myMoney = money;
            numOfApples = 0;
            return true;
        }
        int GetMoney() const{
            return myMoney;
        }
        int GetApples() const{
            return numOfApples;
        }
        bool BuyApples(FruitSeller& seller, int money){
            if (money<0 || money>GetMoney()){
                cout << "Out of range\n";
                return false;
            }
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
            return true;
        }
        void ShowBuyResult() const{
            cout << "Balance: " << GetMoney() << endl;
            cout << "The number of apples: " << GetApples() << endl << endl;
        }
};

int main(void){
    FruitSeller seller;
    if (!seller.InitMembers(1000, 20, 0))
        cout << "Initialization failed\n";
    FruitBuyer buyer;
    if (!buyer.InitMembers(5000))
        cout << "Initialization failed\n";
    if (!buyer.BuyApples(seller, 2000))
        cout << "Purchase failed\n";

    cout << "Status of fruit seller" << endl;
    seller.ShowSalesResult();
    cout << "Status of fruit buyer" << endl;
    buyer.ShowBuyResult();
    return 0;
}
