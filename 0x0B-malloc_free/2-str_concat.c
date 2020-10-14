#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i, j;
	char *str;

if (s1 == NULL)
{	s1 = "";	}
if (s2 == NULL)
{	s2 = "";	}

for (i = 0; s1[s1_len] != '\0'; i++)
{	s1_len++;	}
for (i = 0; s2[s2_len] != '\0'; i++)
{	s2_len++;	}

str = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (str == NULL)
{	return (NULL);	}
else
{
for (i = 0; i < s1_len; i++)
{	str[i] = s1[i];	}

for (i = s1_len, j = 0; i <= s1_len + s2_len + 1; i++, j++)
{	str[i] = s2[j];	}
return (str);
}

}
