#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		if (n == 'e' || n == 'q')
			continue;
		putchar(n);
	}
	putchar('\n');
	return (0);
}
