#include <iostream>
#include "print_subsequence.h"

using namespace std;

/**
 * @brief Used to print all sub-array (sub-sequence of a given array)
 *
 * @param arr Initial array whose subsequence are requried.
 * @param size The size of initial array
 * @param i pointer to hold position of original array
 * @param cur Array used to store subsequcne
 * @param pos Pointer to point to empty location in `cur` pointer
 */
void print_subsequence(int *arr, int size, int i, int *cur, int pos)
{
    if (i >= size)
    {
        for (int j = 0; j < pos; j++)
        {
            cout << cur[j] << " ";
        }
        cout << endl;
        if (pos == 0)
            cout << "{}" << endl;
        return;
    }
    print_subsequence(arr, size, i + 1, cur, pos);
    cur[pos] = arr[i];
    print_subsequence(arr, size, i + 1, cur, pos + 1);
}

/**
 * @brief Used to print all sub-array (sub-sequence of a given array)
 *
 * @param arr Initial array whose subsequence are requried.
 * @param size The size of initial array
 */
void print_subsequence(int *arr, int size)
{
    int *cur = new int[size];
    int i = 0;
    print_subsequence(arr, size, i, cur, 0);
}