#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dests
 * Returns a pointer to the resulting string destination
 * --------------------------
 * @destination: It is the destination string where
 * the characters from source will be added
 * @source: The characters from source are copied to
 * the end of the destination string.
 * @n: src does not need to be null-terminated if it contains n or more bytes
 * Return: the starting address of the concatenated string
 */

char *_strncat(char *dest,  char *src, int n)
{
	/* Store the starting address of 'destination' in 'result' */
	char *result = dest;
	/*
	 * Looping through 'destination' until reaching the null terminator (\0)
	 * This ensures that 'destination' is pointing to the end of the string
	 */
	for (; *dest!= '\0'; dest++)
	{
	}
	/*
	 * Looping through 'source' until reaching the end of string (\0)
	 * and ensure you haven't copied more than 'n' characters
	 */
	for (; *src != '\0' && n > 0; n--)
	{
		/* Copying each character from 'source' to 'destination' */
		*dest = *src;
		/* Moving to the next character in 'destination' */
		dest++;
		/* Moving to the next character in 'source' */
		src++;
	}
	/* Adding  (\0) to 'destination' to terminate the concatenated string */
	*dest = '\0';

	/* Returning the starting address of the concatenated string */
	return (result);
}
