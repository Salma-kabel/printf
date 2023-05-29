#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/* printf.c */
int _printf(const char *format, ...);
/*functions.c*/
int s_specifier(char *s);
int c_specifier(char c);
int percent_specifier(char c);
int d_and_i_specifier(char c);
/*helpers.c*/
char *int_to_string(int x);
int _atoi(char *s);

#endif
