#include "main.h"

/**
 * print_alphabet - prints alphabet in small letters
 * Return: 0
 */

void print_alphabet(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;

	}
	_putchar('\n');
}
