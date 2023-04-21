#include "variadic_functions.h"

/**
 * print_strings - does print strings with separator again
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
	int x = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
