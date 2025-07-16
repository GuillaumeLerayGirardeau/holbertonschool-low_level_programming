#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of a and b
 * @a: first digit
 * @b: second digit
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
