#include "variadic_functions.h"

/**
 * sum_them_all - does sum the variables arguments
 * @n: arguments' number
 * @...: integers to be summed
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, x = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (x--)
		result += va_arg(ap, int);
	va_end(ap);
	return (result);
}
