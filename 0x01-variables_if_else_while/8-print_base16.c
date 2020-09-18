#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	unsigned int hexi_number;
	unsigned int hexi_lowercase;

	for (hexi_number = 48; hexi_number <= 57; hexi_number++)
	{
		putchar(hexi_number);
	}

	for (hexi_lowercase = 97; hexi_lowercase <= 102; hexi_lowercase++)
	{
		putchar(hexi_lowercase);
	}

	putchar('\n');

	return (0);
}
