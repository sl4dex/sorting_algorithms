#include "sort.h"
/**
 * selection_sort - sorts an array of integers with Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int elem, i, aux, marker;

	if (size < 2 || !array)
		return;
	for (elem = 0; elem < (int)size; elem++)
	{
		marker = elem;
		if (!(array[elem + 1]))
			return;
		for (i = elem + 1; i < (int)size; i++)
		{
			if (array[i] < array[marker])
				marker = i;
		}
		if (marker == elem)
			continue;
		aux = array[marker];
		array[marker] = array[elem];
		array[elem] = aux;
		print_array(array, size);
	}
}
