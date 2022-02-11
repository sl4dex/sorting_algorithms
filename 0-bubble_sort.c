#include "sort.h"
/**
 * bubble_sort - sorts int array in ascending order using Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	int a, b, tmp, swap = 0;

	if (!array || !(*array) || size <= 1)
		return;
	while (swap != -1)
	{
		for (a = 0, b = 1; b < (int)size; a++, b++)
		{
			if (array[a] > array[b])
			{
				tmp = array[a];
				array[a] = array[b];
				array[b] = tmp;
				swap = 1;
				print_array(array, size);
			}
			if (b == (int)size - 1 && swap == 0)
				swap = -1;
		}
		if (swap == 1)
			swap = 0;
	}
}
