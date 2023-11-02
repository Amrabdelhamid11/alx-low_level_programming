#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string.
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Your function should work exactly like strncpy
 * Returns a pointer to the resulting string destination
 * @destination: It is the destination string where
 * the characters from source will be added
 * @source: The characters from source are copied to
 * the end of the destination string.
 * @n: src does not need to be null-terminated if it contains n or more bytes
 * Return: the starting address of the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* Storing the starting address of 'destination' in 'output' */
	char *output = dest;
	int num = 0;

	for (; num < n; num++)
	{
		/* Copying each character from 'source' to 'destination' at position 'num' */
		dest[num] = src[num];

		/* If the end of 'source' is reached, */
		/* fill the remaining 'destination' with (\0) */
		if (src[num] == '\0')
		{
			while (num < n)
			{
				dest[num] = '\0';
				num++;
			}
			/* break from the for loop */
			break;
		}
	}
	/* Return the starting address of 'destination' */
	return (output);
}
