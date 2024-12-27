#include <iostream>
#include "subsequence_with_sum_k.h"

using namespace std;

/**
 * @brief Helper function to find and print all subsequences of the given array that sum up to the required sum.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 * @param i Current index in the array.
 * @param cur Pointer to the current subsequence being formed.
 * @param pos Current position in the subsequence.
 * @param required_sum The sum that each subsequence should add up to.
 * @param current_sum The current sum of the subsequence being formed.
 *
 * @return The total number of subsequence with given sum.
 */
int subsequence_with_sum_k(int *arr, int size, int i, int *cur, int pos, int required_sum, int current_sum)
{
    if (i >= size)
    {
        if (current_sum == required_sum)
        {
            // cout << endl;
            // for (int j = 0; j < pos; j++)
            // {
            //     cout << cur[j] << " ";
            // }
            // // cout << endl;
            // if (pos == 0)
            //     cout << "{}" << endl;
            return 1;
        }
        return 0;
    }
    int l = subsequence_with_sum_k(arr, size, i + 1, cur, pos, required_sum, current_sum);
    cur[pos] = arr[i];
    int r = subsequence_with_sum_k(arr, size, i + 1, cur, pos + 1, required_sum, current_sum += cur[pos]);
    return l + r;
}

/**
 * @brief Finds and prints all subsequences of the given array that sum up to the required sum.
 *
 * @param arr Pointer to the array of integers.
 * @param size Size of the array.
 * @param required_sum The sum that each subsequence should add up to.
 *
 * @return The total number of subsequence with given sum.
 */
int subsequence_with_sum_k(int *arr, int size, int required_sum)
{
    int i = 0;
    int *current_subsequence = new int[size];
    int pos = 0;
    int current_sum = 0;
    return subsequence_with_sum_k(arr, size, i, current_subsequence, pos, required_sum, current_sum);
}