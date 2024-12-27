#include "reverse_array.h"

// void reverse_array(int *array, int i, int j, int size)
// {
//     // if (size % 2 == 0)
//     // {
//     //     if (j == i + 1)
//     //         return;
//     // }
//     // else
//     // {
//     //     if (j == i)
//     //         return;
//     // }
//     if (i > j)
//         return;
//     int temp = array[j];
//     array[j] = array[i];
//     array[i] = temp;
// }

/**
 * @brief Recursively reverses the elements of an array.
 *
 * This function swaps the elements at the current index `i` and the corresponding
 * index from the end of the array, then recursively calls itself to reverse the
 * next pair of elements.
 *
 * @param array Pointer to the array to be reversed.
 * @param from Current index to be swapped.
 * @param size Total size of the array.
 */
void reverse_array(int *array, int fromIndex, int size)
{
    if (fromIndex > size - fromIndex - 1)
    {
        return;
    }
    int temp = array[size - fromIndex - 1];
    array[size - fromIndex - 1] = array[fromIndex];
    array[fromIndex] = temp;
}

/**
 * @brief Reverses the elements of an array.
 *
 * function serves as a wrapper for the recursive reverse_array function,
 * initiating the reversal process from the first element.
 *
 * @param array Pointer to the array to be reversed.
 * @param size Total size of the array.
 */
void reverse_array(int *array, int size)
{
    reverse_array(array, 0, size);
}