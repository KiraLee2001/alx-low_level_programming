#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: parameter to check if characters are in lowercase
 *
 * Return: returns 1 or 0 depending on checks'
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
