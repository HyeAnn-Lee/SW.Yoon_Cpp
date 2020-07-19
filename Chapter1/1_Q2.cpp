#include <iostream>

int main(void)
{
    char name[100];
    char phone[20];

    std::cout << "What's your name? ";
    std::cin >> name;   // There should be no white space

    std::cout << "What's your phone number? ";
    std::cin >> phone;  // There should be no white space

    std::cout << "My name is " << name << ".\n";
    std::cout << "My phone number is " << phone << ".\n";
    return 0;
}
