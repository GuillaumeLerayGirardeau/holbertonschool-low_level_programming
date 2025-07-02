#include "main.h"

/**
  * calcul_prime - checks if a is a prime number
  *
  * @a : first digit
  * @b : second digit
  *
  * Return: 1 for true, 0 for false
  */

int calcul_prime(int a, int b)
{
	if (b >= a)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return (calcul_prime(a, b + 1));
	}
}

/**
  * is_prime_number - check is the number is a prime number
  *
  * @n : number to be checked
  *
  * Return: 1 is true, 0 is false
  */

int is_prime_number(int n)
{

	int result;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		result = calcul_prime(n, 2);
		return (result);
	}
}
