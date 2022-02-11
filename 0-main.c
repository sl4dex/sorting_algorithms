#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int a[] = {1};
	int b[] = {20};
	int c[] = {-3};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    printf("\n");
    bubble_sort(a, 1);
    printf("\n");
    bubble_sort(b, 0);
    printf("\n");
    bubble_sort(c, 1);
    printf("\n");
    return (0);
}
