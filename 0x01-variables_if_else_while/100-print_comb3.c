#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);
			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
