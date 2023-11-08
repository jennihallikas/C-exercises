#include <iostream>

int main() {
    int userNumber;
    int myNumber = 0;

    std::cout << "Playing number game! Enter 0 to quit." << std::endl;

    while (true) {
        std::cout << "Give a number: ";
        std::cin >> userNumber;

        if (userNumber == 0) {
            std::cout << "You quit the game. Goodbye!" << std::endl;
            break; // Exit the loop if the user enters 0
        }

        myNumber = userNumber + 1;

        std::cout << "I won, mine is " << myNumber << "!" << std::endl;
    }

    return 0;
}
