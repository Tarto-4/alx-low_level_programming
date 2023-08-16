#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif
