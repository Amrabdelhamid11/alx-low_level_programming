#include <stdio.h>
#include <unistd.h>
#include "main.h"
int _putchar(char character)
{
	return(write(1, &character,1));
}
