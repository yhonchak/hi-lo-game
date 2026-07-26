#include <iostream>

int main()
{
    int num{};
    std::cout << "Enter a number: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> num;

    std::string player_1{ "Player 1" };
    std::string player_2{ "Player 2" };

    std::cout << player_1 << " and " << player_2 << " participated in the game." << "\n";
}