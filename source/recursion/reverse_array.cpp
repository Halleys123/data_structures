#include "reverse_array.h"

void reverse_array(int *array, int i, int j, int size)
{
    if (size % 2 == 0)
    {
        if (j == i + 1)
            return;
    }
    else
    {
        if (j == i)
            return;
    }
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
}

void reverse_array(int *array, int size)
{
    reverse_array(array, 0, size - 1, size);
}