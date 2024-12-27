#include "./print_to_one.h"
#include <iostream>

/**
 * @brief Print numbers from a given number to 1, Internal function
 * @param from The number to start from and print to 1
 * @param i The current number to print
 */
void print_to_one(int from, int to, int i)
{
    if (i < to)
    {
        std::cout << "Invalid input < 1" << std::endl;
        return;
    }
    if (i < 1)
    {
        return;
    }
    std::cout << i << std::endl;
    print_to_one(from, to, i - 1);
}

/**
 * @brief Print numbers from a given number to 1
 * @param from The number to start from and print to 1
 */
void print_to_one(int from, int to)
{
    print_to_one(from, to, from);
}