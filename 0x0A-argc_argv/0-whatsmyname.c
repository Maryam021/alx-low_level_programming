#include<stdio.h>

/**
 * main - Print the name of the executeable file
 * @argc: Argument count
 * @argv: Array of argument string
 *
 * Return: 0 for successful exit
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
