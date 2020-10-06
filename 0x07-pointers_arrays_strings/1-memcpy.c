#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: destination to copy n bytes of src to
 * @src: source memory area
 * @n: number of bytes from memory area src to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

return (dest);


}
