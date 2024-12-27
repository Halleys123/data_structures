#include "./print_to_backtrack.h"
#include "../other/sign.h"
#include <iostream>

void print_to_backtrack(int current, int to, int sign)
{
    if (sign > 0)
    {
        std::cout << current << std::endl;
        if (current > to)
        {
            std::cout << "Exiting" << std::endl;
            return;
        }
    }
    print_to_backtrack(current + sign, to, sign);
    if (sign < 0)
    {
        std::cout << current << std::endl;
        if (current < to)
        {
            std::cout << "Exiting" << std::endl;
            return;
        }
    }
}

/**
 * @brief Print numbers from a given number to 1
 * @param from The number to start from and print to 1
 * @param to The ending number
 */
void print_to_backtrack(int from, int to)
{
    int step = sign(from, to);
    if (step != 0)
    {
        print_to_backtrack(from, to, step);
    }
}