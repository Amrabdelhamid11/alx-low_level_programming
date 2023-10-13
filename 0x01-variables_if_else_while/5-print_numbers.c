#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Description :Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * --------------------------
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	putchar('\n');
	return (0);
}
