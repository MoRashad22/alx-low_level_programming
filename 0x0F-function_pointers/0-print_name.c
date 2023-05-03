#include "function_pointers.h"
/**
 * print_name - printing name
 * @name: name input
 * @f: printing name function
 *
 * Return: nothing
 * made at sunset
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
