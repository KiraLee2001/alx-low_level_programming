
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	int m;
	int n;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				if (n == 57 && m == 56)
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
