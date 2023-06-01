#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdint.h>
/* printf.c */
int _printf(const char *format, ...);
/*functions.c*/
int s_specifier(char *s);
int c_specifier(char c);
int percent_specifier(char c);
int d_and_i_specifier(int n);
int b_specifier(unsigned int n);
int u_specifier(unsigned int n);
int o_specifier(unsigned int n);
int x_specifier(unsigned int n);
int X_specifier(unsigned int n);
int S_specifier(char *s);
int p_specifier(void *p);
/*helpers.c*/
char *int_to_string(int x);
void tostring(char str[], int num);
int _atoi(char *s);
int _putchar(char c);
char *itoa(long int num, int base);
void to_upper(char *s);



#endif
