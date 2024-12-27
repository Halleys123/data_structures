#include "./print_to.h"
#include <iostream>

int sign(int from, int to)
{
    if (from == to)
        return 0;
    return to - from > 0 ? 1 : -1;
}

void print_to(int current, int to, int sign)
{
    if ((sign > 0 && current > to) || (sign < 0 && current < to))
    {
        std::cout << "Exiting" << std::endl;
        return;
    }
    std::cout << current << std::endl;
    print_to(current + sign, to, sign);
}

/**
 * @brief Print numbers from a given number to 1
 * @param from The number to start from and print to 1
 * @param to The ending number
 */
void print_to(int from, int to)
{
    int step = sign(from, to);
    if (step != 0)
    {
        print_to(from, to, step);
    }
}