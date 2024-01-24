#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * @digit1 - the first number
 * @digit2 - the second number
 * @digit3 - the third number
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1 = 0;

	while (digit1 <= 9)
	{
		int digit2 = digit1 + 1;

		while (digit2 <= 9)
		{
			int digit3 = digit2 + 1;

			while (digit3 <= 9)
			{
				if (digit1 >= digit2 || digit2 >= digit3)
				{
					continue;
				}
				else
				{
					putchar((digit1 % 10) + '0');
					putchar((digit2 % 10) + '0');
					putchar((digit3 % 10) + '0');
					if (digit1 != 7 || digit2 != 8 || digit3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++digit3;
			}
			++digit2;
		}
		++digit1;
	}
	putchar('\n');
	return (0);
}
