#include "main.h"

/**
  * swap_int - swap the value of two integer
  *
  * @a : first integer adress
  * @b : second integer adress
  */
void swap_int(int *a, int *b)
{
	int one_a = *a;
	int one_b = *b;

	*a = one_b;
	*b = one_a;
}
