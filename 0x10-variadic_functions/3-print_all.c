#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - prints character
 * @sep: string separator
 * @ap: argument pointer
 */
void print_char(char *sep, va_list ap)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * print_int - prints integer
 * @sep: string separator
 * @ap: argument pointer
 */
void print_int(char *sep, va_list ap)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * print_float - prints float
 * @sep: string separator
 * @ap: argument pointer
 */
void print_float(char *sep, va_list ap)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * print_string - printing string
 * @sep: string separator
 * @ap: argument pointer
 */
void print_string(char *sep, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", sep, str);
}

/**
 * print_all - does print anything
 * @format: list of type of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ap;
	print_t prints[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (prints[j].print)
		{
			if (format[i] == prints[j].print[0])
			{
				prints[j].f(sep, ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
