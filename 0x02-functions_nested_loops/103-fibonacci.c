#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	long num1, num2, fib, sum;

	for (num1 = 1, num2 = 2, fib = 0, sum = 0; num1 < 4000000 && num2 < 4000000;)
	{
		if (fib % 2 == 0)
		{
			sum = sum + fib;
		}

	fib = num1 + num2;
	num1 = num2;
	num2 = fib;

	}

printf("%ld", sum);
putchar('\n');

return (0);


}
