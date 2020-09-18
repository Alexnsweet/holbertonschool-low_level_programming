#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 *
 */
int main(void)
{
	char alf_lower;
	char alf_upper;

	for (alf_lower = 'a' ; alf_lower <= 'z' ; alf_lower++)
	{
		putchar(alf_lower);
	}

	for (alf_upper = 'A' ; alf_upper <= 'Z' ; alf_upper++)
	{
		putchar(alf_upper);
	}

	putchar('\n');
	return (0);
}
