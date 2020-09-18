#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char alf;

	for (alf = 'a' ; alf <= 'z' ; alf++)
	{
		if (alf != 'e' && alf != 'q')
		{
			putchar(alf);
		}
	}

	putchar('\n');

	return (0);
}
