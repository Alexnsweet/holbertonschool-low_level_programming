#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: size of arguments
 * @argv: string value of arguments
 *
 * Return: 0 if no argument(number) is passed, 1 if a symbol is passed
 */
int main(int argc, char *argv[])
{
	int count;
	int value;

if (argc > 1)
{
	for (count = 1; count < argc; count++)
	{
		if (atoi(argv[count]) != 0 && atoi(argv[count]) > 0)
		{
			value = value + atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", value);

	return (0);
}
else
{
	printf("0\n");
	return (0);

}
}
