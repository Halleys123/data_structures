#include "fibonacci.h"

/**
 * @brief The function is used to calculate nth fibonacci number with recursion.
 *
 * @param n Position of number that you want to find.
 * @return returns the nth fibonacci number.
 */

int fibonacci(int n, int *save)
{
    if (save[n] != -1)
        return save[n];

    if (n == 0)
    {
        save[n] = 0;
        return 0;
    }
    if (n == 1)
    {
        save[n] = 1;
        return 1;
    }
    save[n] = fibonacci(n - 1, save) + fibonacci(n - 2, save);
    return save[n];
}

int fibonacci(int n)
{
    int *saves = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        saves[i] = -1;
    }
    int result = fibonacci(n, saves);
    delete[] saves;
    return result;
}