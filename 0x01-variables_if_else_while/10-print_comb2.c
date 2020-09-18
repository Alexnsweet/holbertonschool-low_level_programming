#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
/* define variables */
int ones, tens;
/* loop through tens '0-9' */
	for (tens = '0'; tens <= '9'; tens++)
	{
/*
 * Nest
 * loop through ones '0-9'
 * putchar(tens)
 * putchar(ones)
 * if value is not 99
 * putchar(COMMA)
 * putchar(SPACE)
 */
		for (ones = '0'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (!(tens == '9' && ones == '9'))
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');

	return (0);
}
