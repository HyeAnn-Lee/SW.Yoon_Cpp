#include <iostream>

int main(void)
{
    int val, sum;

    std::cout << "Input 1st integer: ";
    std::cin >> sum;
    std::cout << "Input 2nd integer: ";
    std::cin >> val;
    sum += val;
    std::cout << "Input 3rd integer: ";
    std::cin >> val;
    sum += val;
    std::cout << "Input 4th integer: ";
    std::cin >> val;
    sum += val;
    std::cout << "Input 5th integer: ";
    std::cin >> val;
    sum += val;

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
