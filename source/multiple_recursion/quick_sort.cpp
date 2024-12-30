int partition(int *array, int start, int end)
{
    int pivot = array[start];
    int i = start + 1;
    int j = end;
    while (i <= j)
    {
        while (i <= end && array[i] <= pivot)
        {
            i += 1;
        }
        while (j >= start && array[j] > pivot)
        {
            j -= 1;
        }
        if (i < j)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    array[start] = array[j];
    array[j] = pivot;
    return j;
}

/**
 * @brief Recursively sorts the array using the quick sort algorithm.
 *
 * @param array The array to be sorted.
 * @param start The starting index of the sub-array to be sorted.
 * @param end The ending index of the sub-array to be sorted.
 */
void quick_sort(int *array, int start, int end)
{
    if (start < end)
    {
        int partition_index = partition(array, start, end);
        quick_sort(array, start, partition_index - 1);
        quick_sort(array, partition_index + 1, end);
    }
}

/**
 * @brief Sorts the entire array using the quick sort algorithm.
 *
 * @param array The array to be sorted.
 * @param size The size of the array.
 */
void quick_sort(int *array, int size)
{
    quick_sort(array, 0, size - 1);
}