#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - is the name
 * @s: is parameter
 *
 * Return: value
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
	
	while (i < 5)
	{
		if (s && s[0] == ops[i].ops[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
