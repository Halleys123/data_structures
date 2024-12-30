// Example of Partitioning
// [4 6 2 5 7 9 1]
// pivot = 4, i = 0, j = 7
// i = 1
// j = 7
// array = [4 1 2 5 7 9 6]
// i = 3
// j = 2
// no swap
// array = [2 1 '4' 5 7 9 6]

/**
 * @brief Partitions the array around a pivot element.
 *
 * The function selects the first element as the pivot and then rearranges the array such that
 * all elements less than or equal to the pivot are on its left, and all elements greater than
 * the pivot are on its right. It then returns the final position of the pivot.
 *
 * @param array The array to be partitioned.
 * @param start The starting index of the sub-array to be partitioned.
 * @param end The ending index of the sub-array to be partitioned.
 * @return The index of the pivot element after partitioning.
 */
int partition(int *array, int start, int end)
{
    int pivot = array[start]; // Select the first element as the pivot
    int i = start + 1;
    int j = end;
    while (i <= j)
    {
        // Increment i until an element greater than the pivot is found
        while (i <= end && array[i] <= pivot)
        {
            i += 1;
        }
        // Decrement j until an element less than or equal to the pivot is found
        while (j >= start && array[j] > pivot)
        {
            j -= 1;
        }
        if (i < j)
        {
            // Swap elements at i and j
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Place the pivot in its correct position
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