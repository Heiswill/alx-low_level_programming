#include "lists.h"
#include <stdio.h>

void startUpFun(void)__attribute__ ((constructor));
/**
 * startUpFun - function executed before the main function.
 * Apply the constructor attribute to function so that it
 * prints out a string before the main function is executed.
 * Return: Nothing.
 */
void startUpFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n before the main!\n");
}
