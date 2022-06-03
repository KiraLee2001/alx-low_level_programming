#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 57 || b == 56)
				{
					break
						;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
