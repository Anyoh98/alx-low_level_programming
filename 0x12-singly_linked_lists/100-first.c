#include <stdio.h>

void before_mainexec(void)__attribute__((constructor));

/**
 * before_mainexec - Function that will print a string before main is executed
 *  Return: void.
*/

void before_mainexec(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
