#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer.
 * @number: The array of characters to be modified.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special valuesvoid print_buffer(char *b, int size) {
**/
if (size <= 0) {
    printf("\n");
    return;
  }

  int position = 0;
  while (size > 0) {
    printf("%08x ", position);

    for (int i = 0; i < 10 && size > 0; i++) {
      printf("%02x ", (unsigned char)*b);
      b++;
      size--;
    }

    for (int i = 0; i < 10 - size; i++) {
      printf("   ");
    }

    for (int i = 0; i < 10 && position < position + size; i++) {
      char c = (char)*b;
      if (isprint(c)) {
        printf("%c", c);
      } else {
        printf(".");
      }
      b++;
    }

    printf("\n");
    position += 10;
  }
}

