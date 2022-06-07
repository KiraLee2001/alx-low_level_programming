#include "main.h"

/**
 * print_alphabet_x10 - prints small letter alphabets ten times
 */

void print_alphabet_x10(void)
{
	int j;
	char k;

	for (j = 0; j < 10; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
