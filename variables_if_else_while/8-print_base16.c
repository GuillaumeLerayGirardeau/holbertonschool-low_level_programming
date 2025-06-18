#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char letter = 'a';

	do {
		putchar(num);
		num++;
	} while (num <= '9');
	do {
		putchar(letter);
		letter++;
	} while (letter <= 'f');
	putchar('\n');
	return (0);
}
