#include "search_algos.h"

/**
 * min - finds the minimum between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the minimum number
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located or -1 if value is not
 * present in array or if array is NULL.
 **/
int jump_search(int *array, size_t size, int value)
{
    size_t jump, left = 0, right = 0;

    if (array == NULL || size == 0)
        return (-1);

    jump = sqrt(size);

    while (right < size && array[right] < value)
    {
        left = right;
        right += jump;
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    right = (right >= size) ? (size - 1) : right;

    while (left <= right)
    {
        printf("Value checked array[%lu] = [%d]\n", left, array[left]);

        if (array[left] == value)
            return (left);

        left++;
    }

    return (-1);
}
