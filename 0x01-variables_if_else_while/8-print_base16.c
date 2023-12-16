#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	char p;

	for (n = '0'; n <= '9'; ++n)
	{
		putchar(n);
	}
	for (p = 'a'; p <= 'z'; ++p)
	{
		putchar(p);
		if (p == 'f')
			break;
	}
	putchar('\n');
	return (0);
}
