#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdlib.h>
void _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
void copy_file(int a, int b, char *file_from, char *file_to);
#endif
