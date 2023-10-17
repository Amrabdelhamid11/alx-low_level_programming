#include"main.h"
#include <stdio.h>

/**
 *swap_int - swap integers value
 *
 *@a:first parameter
 *
 *@b:second parameter
 *
 *return:nothing
*/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b ;
	*b = temp;
}
