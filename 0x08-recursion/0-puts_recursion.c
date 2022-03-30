#include "main.h"
/**
 * _print_rev_recursion - which prints string in reverse.
 * @st: pointer to string 
 * Return: nothing 
 */
void _puts_recursion(char *st)
{
	if (*st != '\0')
	{
		_puts_recursion(st + 1);
		_putchar(*st);
	}
}
