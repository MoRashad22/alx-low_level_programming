#include "lists.h"

void premain(void) __attribute__((constructor));
/**
 * premain - printing before main
 * Return: nothing to return
 */
void premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
