#include "holberton.h"
/**
 * *_strcpy - function that copies string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: char array (string)
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

while (src[len] != '\0')
{
	len++;
}

for (i = 0; i <= len; i++)
{
	dest[i] = src[i];
}

	return (dest);





}
