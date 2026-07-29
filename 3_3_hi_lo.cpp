#include <iostream>

bool checkAttempt(std::string player, int playerNum, int guessNum) {
    if (guessNum > playerNum) {
        std::cout << "Guessed number is HIGHER than " << playerNum << "\n";
    }
    else if (guessNum < playerNum) {
        std::cout << "Guessed number is LOWER than " << playerNum << "\n";
    }
    else {
        std::cout << "Congratulations! " << player << " has guessed a number and WON the game!" << "\n";
        return true;
    }

    return false;
}

int main()
{
    std::string player_1{ "Player 1" };
    std::string player_2{ "Player 2" };

    std::cout << player_1 << " and " << player_2 << " are participating in the game." << "\n";

    int numberToGuess{};
    std::cout << "Enter a number to be guessed: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> numberToGuess;

    int num1{}, num2{};

    std::cout << player_1 << " please enter a number to guess: ";
    std::cin >> num1;

    checkAttempt(player_1, num1, numberToGuess);

    std::cout << player_2 << " please enter a number to guess: ";
    std::cin >> num2;

    checkAttempt(player_2, num2, numberToGuess);

    return 0;
}