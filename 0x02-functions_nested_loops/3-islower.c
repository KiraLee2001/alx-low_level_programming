#include "main.h"

/** 
 * _islower - checks for lowercase
 *
 * @c: parameter to check if characters are in lowercase
 *
 * Return: returns 1 if character is lower case and 0 if character is not lowercase'
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
