#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int s_specifier(char *s);
int c_specifier(char c);
int percent_specifier(char c);
char *int_to_string(int x);
#endif
