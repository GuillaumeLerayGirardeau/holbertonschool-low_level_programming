#include "main.h"
#include <stdlib.h>

/**
  *_abs - check for lowercase character
 * @a : value
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int a)
{

	int absolute = abs(a);

	return (absolute);
}
