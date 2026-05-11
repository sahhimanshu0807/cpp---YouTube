#include <iostream>

// In C++, int main(int argc, char *argv[]) is the standard way to define the program's entry point when you need to handle command-line arguments. These parameters allow your program to receive input directly from the terminal or shell when it is launched.

int main(int argc, char *argv[])
{
    std::cout << "Number of argument: " << argc << std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout << "Argument " << i << ":" << argv[i] << std::endl;
    }
    return 0;
}