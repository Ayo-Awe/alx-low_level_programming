#ifndef _MAIN_H_
#define _MAIN_H_
unsigned int binary_to_uint(const char *b);
int _pow(int base, int exponent);
int _strlen(char *s);
void _putchar(char c);
void print_binary_recur(unsigned long int b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
