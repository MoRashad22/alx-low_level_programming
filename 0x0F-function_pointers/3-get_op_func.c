#include "3-calc.h"

/**
* get_op_func - choosing right function to perform
* @s: operator type string
*
* Return: pointer to right function
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

	int c = 0;

	while (c < 5)
	{
		if (s && s[0] == ops[c].op[0] && !s[1])
			return (ops[c].f);
		c++;
	}

	return (NULL);
}
