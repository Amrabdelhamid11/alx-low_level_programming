#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Description : print
 * --------------------------
 */
int main(void)
{
	int num;
	char chart;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	for (chart = 'a' ; chart <= 'f' ; chart++)
	{
		putchar(chart);
	}
	putchar('\n');
	return (0);
}
