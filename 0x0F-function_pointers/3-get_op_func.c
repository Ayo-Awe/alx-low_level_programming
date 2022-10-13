#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - gets the function associated with the operator
 * @s: pointer to char representing the operator
 *
 * Return: pointer to function
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
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
