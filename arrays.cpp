// Declaring and using arrays
// Arrays store values of the same time
#include <iostream>

int main(int argc, char *argv[])
{
    int scores[10]; // Declaring an int array of 10 integers.

    // Writing the data to the array
    for (size_t i = 0; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    // Reading an array
    for (size_t i = 0; i < 10; i++) // std::size_t is an implementation-defined unsigned integer type specifically designed to represent the size of objects in bytes
    {
        std::cout << scores[i] << std::endl;
    }

    // Omit size - Array declaration
    int class_sizes[] = {10, 20, 5, 6, 7};

    for (auto value : class_sizes)
    {
        std::cout << value << ", ";
    }
    return 0;
}