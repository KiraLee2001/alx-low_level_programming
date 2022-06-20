#include "main.h"

/**
 * _strlen -shows string length
 * @s: parameter
 * Return: always 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
