#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _puts_recursion(char *s);
 * @s: The string to be printed
 * FYI: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 * --------------------------
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') {
   	 _putchar('\n');}
    else {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}

