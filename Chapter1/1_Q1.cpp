#include <iostream>

int main(void)
{
    int val, sum = 0;

    for (int i = 1; i < 6; i++){
        std::cout << "Input integer #" << i << ": ";
        std::cin >> val;
        sum += val;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
