#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - found the right operator
 *
 * @s: operator to match with
 *
 * Return: Right operation if success, NULL if fail
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;

while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}

return (NULL);
}
