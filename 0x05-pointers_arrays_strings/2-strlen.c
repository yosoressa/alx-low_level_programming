#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return:length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
