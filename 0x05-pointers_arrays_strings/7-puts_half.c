#include "main.h"
#include <stdio.h>

/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * @string: The input string.
 * --------------------------
 * Write a function that prints half of a string,
 * followed by a new line.
 */
void puts_half(char *string)
{
	int num;
	/* Calculate the length of the string using the _strlen function. */
	int length = _strlen(string);
	/* Calculate the starting index for the second half */
	int start = (length + 1) / 2;
	/* Print the second half of the string */
	for (num = start; string[num] != '\0'; num++)
	{
		_putchar(string[num]);
	}
	/* Print a new line character to create a newline in the output. */
	_putchar('\n');
}

/**
 * _strlen - Write a function that returns the length of a string.
 * the values of two integers.
 * This function does not return a value (void).
 * @string: The given string
 * Return: The length of the string as an integer.
 * Write a function that returns the length of a string.
 */
int _strlen(char *string)
{
	/* Initialize a variable 'length' to store the  */
	/* length of the string, starting from 0. */
	int length = 0;
	/**
	 * Utilizing a while loop to iterate through the characters of the string.
	 * while (*string): This is a while loop that continues as
	 * long as the character pointed to by s is not the null
	 * terminator ('\0'). The null terminator marks the end of
	 * a C string, so this loop will continue until the end
	 * of the string is reached.
	 */
	while (*string)
	{
		/* For each character, increment the 'length' variable. */
		length++;
		/* Move the 'string' pointer to the next character in the string. */
		string++;
	}
	/* Return the final length of the string. */
	return (length);
}
