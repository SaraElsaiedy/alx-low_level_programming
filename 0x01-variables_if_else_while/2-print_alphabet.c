#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * @n - alphabet
 *Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
