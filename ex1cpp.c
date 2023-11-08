#include <iostream>

int main() {
    int userNumber;
    int myNumber = 0;

    std::cout << "Playing number game!" << std::endl;

    while (true) {
        std::cout << "Give a number: ";
        std::cin >> userNumber;

        myNumber = userNumber + 1;

        std::cout << "I won, mine is " << myNumber << "!" << std::endl;
    }

    return 0;
}

