#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints the name using a function pointer
* @name: name to be printed
* @f: function pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
