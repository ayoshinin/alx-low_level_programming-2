#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
