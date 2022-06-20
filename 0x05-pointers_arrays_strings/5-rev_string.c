#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int a, size, half;
	char first, last;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	size = a - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
