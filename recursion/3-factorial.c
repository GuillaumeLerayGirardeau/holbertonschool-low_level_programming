#include "main.h"

/**
  * factorial - returns the factorial
  *
  * @n : given number
  *
  * Return: result of factorial
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n  - 1));
	}
}
