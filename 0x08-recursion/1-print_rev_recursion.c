#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _print_rev_recursion(char *s);
 * @string: The string to be printed in reverse order
 * --------------------------
 */
void _print_rev_recursion(char *string)
{
if (*string > '\0')
	{
	_print_rev_recursion(string + 1);
	_putchar(*string);
	}
}
