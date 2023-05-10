#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}

#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integer
 * using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located.
 * If value is not present in array or if array is NULL, returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, middle, i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        middle = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right]);

        if (array[middle] == value)
            return (middle);

        if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return (-1);
}

/**
 * binary_helper - helper function to binary_search
 * @array: a pointer to the first element of the array to search in
 * @low: start point
 * @high: end point
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low != high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		print_array(array, low, high);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
