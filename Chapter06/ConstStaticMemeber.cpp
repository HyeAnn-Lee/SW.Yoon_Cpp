#include <iostream>
using namespace std;

class CountryArea{
    public:
        const static int RUSSIA     = 1707540;
        const static int CANADA     = 998467;
        const static int CHINA      = 957290;
        const static int S_KOREA    = 9922;
};

int main(void){
    cout << "Area of Russia: " << CountryArea::RUSSIA << "km^2\n";
    cout << "Area of Canada: " << CountryArea::CANADA << "km^2\n";
    cout << "Area of China: " << CountryArea::CHINA << "km^2\n";
    cout << "Area of S.Korea: " << CountryArea::S_KOREA << "km^2\n";

    return 0;
}
