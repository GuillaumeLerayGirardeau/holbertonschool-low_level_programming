#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHA = 'A';

	for (; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
