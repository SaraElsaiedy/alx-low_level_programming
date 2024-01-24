#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * @digit1 - the first number
 * @digit2 - the  second number
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; ++digit1)
	{
		for (digit2 = 0; digit2 <= 9; ++digit2)
		{
			if (digit1 >= digit2)
			{
				continue;
			}
			else
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				if (digit1 != 8 || digit2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
