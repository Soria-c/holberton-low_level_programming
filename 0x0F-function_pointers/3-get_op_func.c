#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation required
 * @s: address of operator.
 * Return: pointer to correct function.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	i = 0;
	while (i < 6)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
