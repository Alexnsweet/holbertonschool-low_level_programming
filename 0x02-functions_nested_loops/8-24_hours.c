#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{

/* print hours as '00' and ':' each time */
/* count and print 00-59 */
/* stop at 23:59 */
	int i1, i2,  i3, i4 = '0';
/* count the first numbers place and print all values in places above */

for (i1 = '0'; i1 <= '2'; i1++)
{
	for (i2 = '0'; i2 <= '9'; i2++)
	{
		for (i3 = '0'; i3 <= '5'; i3++)
		{
			for (i4 = '0'; i4 <= '9'; i4++)
			{
				_putchar(i1);
				_putchar(i2);
				_putchar(':');
				_putchar(i3);
				_putchar(i4);
				_putchar('\n');
			}
		}
if (i1 == '2' && i2 == '3')
{
break;
}

	}
}

}
