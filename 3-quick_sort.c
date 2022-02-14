#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order using Quick sort
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size <= 1)
		return;
	qs(array, 0, size - 1, (int)size);
}
/**
 * qs - quicksort to establish a range (partition) from low to high
 * @array: array to sort
 * @low: start of range
 * @high: end of range
 * @size: size of array
 */
void qs(int *array, int low, int high, int size)
{
	int p;

	if (low >= high)
		return;
	p = partition(array, low, high, size);
	qs(array, low, p - 1, size);
	qs(array, p + 1, high, size);
}
/**
 * partition - puts the pivot (high) in its place and returns its index
 * @array: array to sort
 * @low: start of range
 * @high: end of range
 * @size: size of array
 * Return: index of element
 */
int partition(int *array, int low, int high, int size)
{
	int i = low - 1, j, aux;

	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i != j)
			{
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
