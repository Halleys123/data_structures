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

void reverse_array(int *array, int i, int size)
{
    if (i > size - i - 1)
    {
        return;
    }
    int temp = array[size - i - 1];
    array[size - i - 1] = array[i];
    array[i] = temp;
}

void reverse_array(int *array, int size)
{
    reverse_array(array, 0, size);
}