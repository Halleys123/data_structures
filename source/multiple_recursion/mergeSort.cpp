/**
 * @brief Recursively divides the array into subarrays and merges them in sorted order.
 *
 * This function implements the divide step of the merge sort algorithm. It recursively
 * divides the array into two halves until the subarrays have only one element, then
 * merges them back together in sorted order.
 *
 * @param array Pointer to the array to be sorted.
 * @param start The starting index of the subarray to be divided.
 * @param end The ending index of the subarray to be divided.
 */
void divide(int *array, int start, int end);

/**
 * @brief Merges two sorted subarrays into a single sorted subarray.
 *
 * This function implements the merge step of the merge sort algorithm. It takes two
 * sorted subarrays and merges them into a single sorted subarray.
 *
 * @param array Pointer to the array containing the subarrays to be merged.
 * @param start The starting index of the first subarray.
 * @param middle The ending index of the first subarray and the starting index of the second subarray.
 * @param end The ending index of the second subarray.
 */
void merge(int *array, int start, int middle, int end);

void divide(int *array, int start, int end)
{
    if (end > start)
    {
        int middle = (start + end) / 2;
        divide(array, start, middle);
        divide(array, middle + 1, end);
        merge(array, start, middle, end);
    }
}

void merge(int *array, int start, int middle, int end)
{
    int *temp = new int[end - start + 1];
    int i = start;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= end)
    {
        if (array[i] <= array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while (i <= middle)
    {
        temp[k++] = array[i++];
    }
    while (j <= end)
    {
        temp[k++] = array[j++];
    }

    for (int i = start, k = 0; i <= end; i++, k++)
    {
        array[i] = temp[k];
    }
    delete[] temp;
}

void mergeSort(int *array, int size)
{
    divide(array, 0, size - 1);
}