#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string passed to function
 * @c: character to find in string
 *
 * Return: s string starting with first occurance of character
 */
char *_strchr(char *s, char c)
{
	int k;

for (k = 0; s[k] != '\0'; k++)
{
	if (s[k] == c)
	{
		return (&s[k]);
	}
}
	if (c == '\0')
	{
		return (&s[k]);
	}
	else
	{
		return (NULL);
	}
}
