#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
/* Used to hold ASCII values of numbers to pass to  char */
/* Explicitly define SPACE ASCII value to pass to char */
/* Explicitly define COMMA ASCII value to pass to char */
unsigned int nums;
unsigned int space = 32;
unsigned int comma = 44;
/*
 * Create a loop that increments nums
 * and appends space and comma after each increment
 *
 */
	for (nums = 48; nums <= 57; nums++)
	{
		putchar(nums);

		if (nums <= 56)
		{
		putchar(comma);
		putchar(space);
		}
	}

	putchar('\n');

	return (0);

}
