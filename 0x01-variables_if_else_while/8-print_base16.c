#include <stdio.h>

/**
 * main - point of entry
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int i;
	char k;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

