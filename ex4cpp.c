#include <iostream>
#include <cstdlib>  // For random number generation
#include <ctime>    // For seeding the random number generator

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;  // Generate a random number between 1 and 100
    int userGuess;
    int numGuesses = 0;

    std::cout << "Guess a number (1 - 100): ";

    do {
        std::cin >> userGuess;
        numGuesses++;

        if (userGuess < secretNumber) {
            std::cout << "Too small!" << std::endl;
        } else if (userGuess > secretNumber) {
            std::cout << "Too large!" << std::endl;
        } else {
            std::cout << "Right! You made " << numGuesses << " guess(es)." << std::endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
