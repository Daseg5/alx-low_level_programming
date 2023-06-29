#include <stdio.h>
/**
 * main - A program that prints all possible different combinations of 3digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (k <= 9)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');

	if (i < 7)
	{
		putchar(',');
		putchar(' ');
	}
	else
	{
		break;
	}
	k++;
	if (k > 9)
	{
		k++;
		k = j + 1;
	}
	if (j > 8)
	{
		i++;
		j = i + 1;
		k = j + 1;
	}
	}
	return (0);
}
