#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: argument string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		argv++;
		printf("%d\n", argc - 1);
	}


return (0);
}
