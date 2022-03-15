#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char k = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
		{
			putchar(k);
			k++;
		}
	}
	putchar('\n');
	return (0);
}
