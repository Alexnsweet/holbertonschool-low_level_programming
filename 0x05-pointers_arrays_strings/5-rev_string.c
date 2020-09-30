#include "holberton.h"
/**
 * rev_string - Reverse string value
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	char *b;

	while (s[len] != '\0')
	{
		len++;
	}

	b = s + len - 1;

	while (s < b)
	{
		temp = *s;
		*s = *b;
		*b = temp;

		s++;
		b--;
	}
/*
*	for (i = len, j = 0, temp; i > j && j <= len; i--, j++)
*	{
*		temp = s[len - i];
*		s[len - i] = s[j];
*		s[i] = temp;
*	}
*/
}
