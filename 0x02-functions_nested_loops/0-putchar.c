#include "main.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	int j;
	char s[] = "_putchar";

	for (j = 0; j < 8; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

	return (0);
}
