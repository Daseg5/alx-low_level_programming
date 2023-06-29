#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
