#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Description :Write a single reverse  alpha  by a new line.
 * -------------------------
*/
int main(void)
{
	char chart;

	for (chart = 'z'; chart >= 'a'; chart--)
	{
		putchar(chart);
	}
	putchar('\n');
	return (0);
}
