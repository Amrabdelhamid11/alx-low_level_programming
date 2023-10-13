#include "main.h"

/**
 *_isupper chechs if c is upper
 *description: chech c is uppercase or not
 *@c: input for alphabet
 *
 *return: 1 if it its uppercase, 0 if not
*/
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	return (1);
else
	return (0);
}
