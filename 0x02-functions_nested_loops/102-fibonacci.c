#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int count;
	long num1, num2, fib;

	for (count = 0, num1 = 1, num2 = 2, fib = 0; count <= 48; count++)
	{
		if (count == 0)
		{
			printf("%ld, %ld, ", num1, num2);
		}
		else
		{
			if (count < 48)
			{
				printf("%ld, ", fib);
			}
			else
			{
				printf("%ld", fib);
			}
		}

		fib = num1 + num2;
		num1 = num2;
		num2 = fib;


	}
putchar('\n');

return (0);


}
