#include "main.h"
/**
 * print_alphabet - Prints letters of alphabet in lowercase
 *
 * Result: Always void (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
