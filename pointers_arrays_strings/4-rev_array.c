#include "main.h"

/**
  * reverse_array - reverses the content of an array of integer
  *
  * @a : array
  * @n : number of elements of the array
  *
  */

void reverse_array(int *a, int n)
{
	int count = 0;
	int mid = n / 2;
	int swap;

	n -= 1;

	while (count < mid)
	{
		swap = a[count];
		a[count] = a[n];
		a[n] = swap;
		count++;
		n--;
	}
}
