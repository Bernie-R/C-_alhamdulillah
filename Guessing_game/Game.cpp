#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Game::play() {
// Generate a random number between 1 and 100
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    // Loop iuntil the user guesses the number
    int guess;
    do {
        std::cout << "Guess a Number between 1 and 100" << std::endl;
        std::cin >> guess;

        if (guess < secretNumber) {
            std::cout << "Too Low, Try again" << std::endl;
        }
        else if (guess > secretNumber) {
            std::cout << "Too High, try again" << std::endl;
        }
        else {
            std::cout << "Congratulations! You guessed the number." << std::endl;
        }
    } while (guess != secretNumber);
}