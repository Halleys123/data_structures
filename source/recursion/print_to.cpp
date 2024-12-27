#include "./print_linearly_1_to_N.h"
#include <iostream>

void print_num_to_10(int n, int i)
{
    if (n < 1)
    {
        std::cout << "invalid input < 1" << std::endl;
        return;
    }
    if (i > n)
    {
        i = 0;
        return;
    }
    std::cout << i << std::endl;
    print_num_to_10(n, i + 1);
}

void print_num_to_10(int n)
{
    print_num_to_10(n, 1);
}