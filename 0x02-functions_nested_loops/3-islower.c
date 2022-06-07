#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int k)

{

	if (k > 'a' && k < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
