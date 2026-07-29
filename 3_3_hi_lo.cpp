#include <iostream>

bool checkAttempt(std::string player, int playerNum, int guessNum) {
    std::cout << player << " please enter a number to guess: ";
    std::cin >> playerNum;
    
    if (guessNum > playerNum) {
        std::cout << "Guessed number is HIGHER than " << playerNum << "\n\n";
    }
    else if (guessNum < playerNum) {
        std::cout << "Guessed number is LOWER than " << playerNum << "\n\n";
    }
    else {
        std::cout << "Congratulations! " << player << " has guessed a number and WON the game!" << "\n";
        return true;
    }

    return false;
}

void game(std::string player1, std::string player2, int guessNum) {
    int num1{}, num2{};

    checkAttempt(player1, num1, guessNum);

    checkAttempt(player2, num2, guessNum);
}

int main()
{
    std::string player_1{ "Player 1" };
    std::string player_2{ "Player 2" };

    std::cout << player_1 << " and " << player_2 << " are participating in the game." << "\n";

    int numberToGuess{};
    std::cout << "Enter a number to be guessed: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> numberToGuess;

    game(player_1, player_2, numberToGuess);

    return 0;
}