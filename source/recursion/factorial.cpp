#include <iostream>
#include "factorial.h"

int factorial_calculate(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int factorial(int n)
{
    if (n < 0)
    {
        std::cout << "Factorial of negative number is not possible" << std::endl;
        return -1;
    }
    return factorial_calculate(n);
}