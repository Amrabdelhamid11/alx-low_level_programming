#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _puts_recursion(char *s);
 * @string: The string to be printed
 * FYI: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 * --------------------------
 */

void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		putchar('\n');
	}
	else
	{
		_putchar(*string);
		_puts_recursion(string + 1);
	}
}

