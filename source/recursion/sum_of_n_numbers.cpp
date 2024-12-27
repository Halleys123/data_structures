#include <iostream>
#include "./sum_of_n_numbers.h"

/**
 * @brief Parameterised version of sum of n numbers. Answer is returned in the sum variable
 * @param n The number to sum up to
 * @param sum The sum of the numbers passed as reference
 */
void parameterized_sum_of_n(int n, int &sum)
{
    if (n == 0)
    {
        return;
    }
    sum += n;
    parameterized_sum_of_n(n - 1, sum);
}