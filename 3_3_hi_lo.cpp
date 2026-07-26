#include <iostream>

int main()
{
    int numberToGuess{};
    std::cout << "Enter a number to be guessed: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> numberToGuess;

    std::string player_1{ "Player 1" };
    std::string player_2{ "Player 2" };

    std::cout << player_1 << " and " << player_2 << " are participating in the game." << "\n\n";

    int num1{}, num2{};

    std::cout << player_1 << " please enter a number to guess: ";
    std::cin >> num1;

    if (numberToGuess > num1) {
        std::cout << "Guessed number is HIGHER than " << num1;
    }
    else if (numberToGuess < num1) {
        std::cout << "Guessed number is LOWER than " << num1;
    }
    else {
        std::cout << "Congratulations! " << player_1 << " has guessed a number and WON the game!";
    }
}