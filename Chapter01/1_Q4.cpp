#include <iostream>

int main(void)
{
    int sales;
    while (1) {
        std::cout << "Input sales amount in dollars(-1 to end): ";
        std::cin >> sales;
        if (sales != -1)
            std::cout << "Salary of the month: $" << 500 + sales*0.12 << std::endl;
        else{
            std::cout << "End of the program.\n";
            return 0;
        }
    }
}
