#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int sep = 0, count = 0, number = 0;
	char letter;
	float chiffre;
	char *str;
	va_list print;

	va_start(print, format);
	while (format[count] != '\0')
	{
		sep = 0;
		switch (format[count])
		{
			case 'c':
				printf("%c", letter = va_arg(print, int));
				sep = 1;
				break;
			case 'i':
				printf("%d", number = va_arg(print, int));
				sep = 1;
				break;
			case 'f':
				printf("%f", chiffre = va_arg(print, double));
				sep = 1;
				break;
			case 's':
				str = va_arg(print, char*);
				if (str == NULL)
				{printf("(nil)");
					break; }
				printf("%s", str);
				sep = 1;
				break;
		}
		if (sep == 1 && format[count + 1] != '\0')
			printf(", ");
		count++;
	}
	va_end(print);
	printf("\n");
}
