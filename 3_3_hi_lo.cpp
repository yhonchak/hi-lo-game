#include <iostream>

int numberToGuess{};

std::string player_1{ "Player 1" };
std::string player_2{ "Player 2" };

int num1{}, num2{};

bool checkAttempt(std::string player, int playerNum) {
    std::cout << player << " please enter a number to guess: ";
    std::cin >> playerNum;
    
    if (numberToGuess > playerNum) {
        std::cout << "Guessed number is HIGHER than " << playerNum << "\n\n";
    }
    else if (numberToGuess < playerNum) {
        std::cout << "Guessed number is LOWER than " << playerNum << "\n\n";
    }
    else {
        std::cout << "Congratulations! " << player << " has guessed a number and WON the game!" << "\n";
        return true;
    }

    return false;
}

void gameStep(std::string player, int num) {
    if (!checkAttempt(player, num)) {
        std::string currentPlayer = player_1;
        int currentNum = num1;
        
        if (player == player_1) {
            currentPlayer = player_2;
            currentNum = num2;
        }
        gameStep(currentPlayer, currentNum);
    }
}

int main()
{
    std::cout << player_1 << " and " << player_2 << " are participating in the game." << "\n";

    std::cout << "Enter a number to be guessed: "; // todo: need to discover how to hide entered number from the users (players)
    std::cin >> numberToGuess;
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    gameStep(player_1, num1);

    return 0;
}