#include "holberton.h"
/**
 * times_table - print times table of 9
 *
 */
void times_table(void)
{

int c, r;

/* print 10s place by dividing by 10 */
/* print 1s place by modulo 10 */
/* add 48 (ascii for '0') */
for (c = 0; c <= 9; c++)
{
	for (r = 0; r <= 9; r++)
	{
	if (c * r >= 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(((c * r) / 10) + 48);
		_putchar(((c * r) % 10) + 48);
	}
	else
		{
			if (r > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
				_putchar((c * r) + 48);
		}
	}
		_putchar('\n');
}

}
