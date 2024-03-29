#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int sixe, int (*cmp)(int));

#endif
