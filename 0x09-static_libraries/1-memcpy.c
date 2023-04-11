#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: area of the memory
 * @src: is the source
 * @n: the length of src to be copied
 *
 * Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int liv;

	for (liv = 0; liv < n; liv++)
	{
		dest[liv] = src[liv];
	}
	return (dest);
}
