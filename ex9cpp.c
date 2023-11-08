#include <iostream>

int* find_largest(const int* table, int table_len) {
    if (table == nullptr || table_len <= 0) {
        return nullptr;  // Handle invalid input
    }

    const int* largest_ptr = table;  // Initialize the pointer to the first element as the largest
    for (int i = 1; i < table_len; ++i) {
        if (table[i] > *largest_ptr) {
            largest_ptr = &table[i];  // Update the pointer if a larger element is found
        }
    }

    return const_cast<int*>(largest_ptr);  // Remove const qualification and return the pointer
}

int main() {
    int numbers[] = {5, 12, 7, 9, 22, 15, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int* largest = find_largest(numbers, size);

    if (largest != nullptr) {
        std::cout << "The largest number in the array is: " << *largest << std::endl;
    } else {
        std::cout << "The array is empty." << std::endl;
    }

    return 0;
}
