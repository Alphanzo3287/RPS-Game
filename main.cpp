//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 7D: RPS Game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Function to get the computer's choice
int getComputerChoice() {
    return rand() % 3 + 1; // Generates a random number between 1 and 3
}

// Function to get the player's choice
int getPlayerChoice() {
    int choice;
    do {
        std::cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
        std::cin >> choice;
    } while (choice < 1 || choice > 3);
    return choice;
}

// Function to determine the winner
std::string determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int playerWins = 0;
    int computerWins = 0;
    int ties = 0;

    do {
        int computerChoice = getComputerChoice();
        int playerChoice = getPlayerChoice();

        std::string choices[] = {"Rock", "Paper", "Scissors"};
        std::cout << "Computer chose: " << choices[computerChoice - 1] << std::endl;
        std::cout << "You chose: " << choices[playerChoice - 1] << std::endl;

        std::string result = determineWinner(playerChoice, computerChoice);
        std::cout << result << std::endl;

        if (result == "You win!") {
            playerWins++;
        } else if (result == "Computer wins!") {
            computerWins++;
        } else {
            ties++;
        }

        std::cout << "Do you want to play again? (1 for yes, 0 for no): ";
        int playAgain;
        std::cin >> playAgain;

        if (playAgain != 1) {
            break;
        }
    } while (true);

    std::cout << "Game Over!" << std::endl;
    std::cout << "Total ties: " << ties << std::endl;
    std::cout << "Total computer wins: " << computerWins << std::endl;
    std::cout << "Total player wins: " << playerWins << std::endl;

    return 0;
}
