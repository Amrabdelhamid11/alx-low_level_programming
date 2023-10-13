#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * description:teset upper.
 *_isupper - prints the sign of a number
 * c: ASCii value.
 * Return: 1 if c is lowercase or Returns 0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
