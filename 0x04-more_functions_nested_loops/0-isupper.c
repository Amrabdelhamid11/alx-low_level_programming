#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - prints the sign of a number
 *
 * @c: The character to write.*
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
