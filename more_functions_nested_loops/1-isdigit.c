#include "main.h"

/**
  *_isdigit : check if the value is a digit
  * @c : the value
  *Return: 1 if success, 0 if not a digit
  */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
