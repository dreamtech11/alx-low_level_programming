#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Reeturn: Always 0 (Success0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	
	
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i] = src[i];

	return (dest);

}
