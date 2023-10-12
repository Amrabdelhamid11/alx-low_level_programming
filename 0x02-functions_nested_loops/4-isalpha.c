#include <stdio.h>
#include "main.h"

/**
 * _isalpha - prints the sign of a number
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 */

int _isalpha(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
