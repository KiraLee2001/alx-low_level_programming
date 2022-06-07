#include "main.h"

/**
 * print_alphabet - prints alphabet, in lowercase, followed by a newline
 * Return: 0
 */

void print_alphabet(void)
{
	char k = 'a';

	while (k <= 'z');
	{
		_putchar(k);
		k++;

	}
	_putchar('\n');
}
