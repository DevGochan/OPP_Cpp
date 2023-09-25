#include <iostream>

int main() {
    int size;
    do {
        std::cout << "Enter the array size (larger than zero): ";
        std::cin >> size;
    } while (size <= 0);

    int* p_array = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cout <<"Enter the value for element " << i << ": ";
        std::cin >> *(p_array + 1);
        // std::cin >> p_array[i]
    }
    std::cout << "The elements in the array are: " << std::endl;
    for (int i = 0; i < size; ++i) 
        std::cout << *(p_array + i) << ' ';
        // std::cout << p_array[i] << ' ';

    delete[] p_array;
    return 0;
}