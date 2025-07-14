#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Executes a given function to print a name
 * @name: The name to be printed (string)
 * @f: Pointer to a function that takes a char * as parameter and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
