#include <stdio.h>

/**
 * main - function starts
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char c;
	char k;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (k = 'A'; k<= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
