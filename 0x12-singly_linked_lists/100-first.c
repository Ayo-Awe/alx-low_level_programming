#include<stdio.h>
void before(void) __attribute__((constructor));
/**
 * before - this function runs before main
*/
void before(void)
{
	printf
	("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
