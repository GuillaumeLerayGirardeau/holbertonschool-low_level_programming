#include "main.h"

/**
  * calcul - found the natural square root of a number
  *
  * @a : the number in function calcul
  * @b : the countdown to the number
  *
  * Return: natural square root of the number
  */

int calcul(int a, int b)
{
	if (b > a)
	{
		return (-1);
	}
	else if (a == b * b)
	{
		return (b);
	}
	else
	{
		return (calcul(a, b + 1));
	}
}

/**
  * _sqrt_recursion - return the natural square root of a number
  *
  * @n : the umber
  *
  * Return: natural square root of n
  */

int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}

	result = calcul(n, 1);

	return (result);
}
