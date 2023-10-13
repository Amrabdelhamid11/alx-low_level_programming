#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 0.
 * starting with 0.
 * Return: the last digit of a number
 * Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 */

int main(void)
{
	int i;
	int n = 50;

	unsigned long int a = 1, b = 2;

	printf("%lu, %lu", a, b);

	for (i = 2; i < n; i++)
	{
		unsigned long int next = a + b;

		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
