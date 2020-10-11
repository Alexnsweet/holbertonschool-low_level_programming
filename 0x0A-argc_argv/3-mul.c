#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: string value of argument
 *
 * Return: 1 if doesn't recieve 2 arguments, 0 if 2 are recieved
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
