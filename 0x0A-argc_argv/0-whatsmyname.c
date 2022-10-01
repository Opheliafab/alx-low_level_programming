#include <stdio.h>
/**
 * main - declares the argument count and argument vector
 * @argc: returns the total number of input written to the program
 * @argv: returns the actual value of the input written to the program
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
