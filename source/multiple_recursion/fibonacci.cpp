#include "fibonacci.h"

/**
 * @brief The function is used to calculate nth fibonacci number with recursion.
 *
 * @param n Position of number that you want to find.
 * @return returns the nth fibonacci number.
 */
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}