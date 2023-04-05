#include "main.h"

/**
 * _puts_recursion - there is a print of string next new line
 * @s: strings to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
