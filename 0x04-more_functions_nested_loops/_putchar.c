#include <stdio.h>
#include <unistd.h>
#include "main.h"



/**
 * _putchar - Writes a character to stdout.
 *
 * @character: The character to write.
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set
 *         appropriately.
 * * _putchar - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 */


int _putchar(char c)
{
	return (write(1, &character, 1));
}
