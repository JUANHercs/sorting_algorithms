#include "sort.h"

/**
 * bubble_sort - sort an array of int in ascending order with the sort
 algorithm
 *
 *@array: data to sort
 *@size: of the array
 *Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
size_t currentpos, nextpos, tmp;

if (size < 2)
return;
for (currentpos = 0; currentpos <= size - 1; currentpos++)
{
for (nextpos = 0; nextpos <= size - 2; nextpos++)
{
if (array[nextpos] > array[nextpos + 1])
{
tmp = array[nextpos];
array[nextpos] = array[nextpos + 1];
array[nextpos + 1] = tmp;
print_array(array, size);
}
}
}
}
