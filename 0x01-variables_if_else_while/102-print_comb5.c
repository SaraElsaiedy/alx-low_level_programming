#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = '0'; digit1 <= '9'; ++digit1)
	{
		for (digit2 = '0'; digit2 <= '9'; ++digit2)
		{
			for (digit3 = '0'; digit3 <= '9'; ++digit3)
			{
				for (digit4 = '0'; digit4 <= '9'; ++digit4)
				{
					if (digit1 > digit3 || digit2 >= digit4)
					{
						continue;
					}
					else
					{
						putchar(digit1);
						putchar(digit2);
						putchar(' ');
						putchar(digit3);
						putchar(digit4);
						if (!(digit1 == '9' && digit2 == '8' && digit3 == '9' && digit4 == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
