#include <stdio.h>

/**
 *main - Entry poin
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q')
		putchar(k);
	}
	putchar('\n');
	return (0);
}
