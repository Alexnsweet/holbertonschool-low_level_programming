#include "holberton.h"
/**
 * more_numbers - prints 0-14 10x
 */
void more_numbers(void)
{
	int i, j;
for (j = 0; j < 10; j++)
	{
	for (i = 48; i <= 62; i++)
	{
		if (i >= 58)
		{
		_putchar(((i - 48) / 10) + 48);
		}
		_putchar(((i - 48) % 10) + 48);

	}
	_putchar('\n');
	}
}
