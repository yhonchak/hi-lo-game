#include <iostream>

int main()
{
    int num{};
    std::cout << "Enter a number: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> num;

    std::cout << "You entered: " << num << "\n";
}