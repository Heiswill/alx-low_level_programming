#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to be passed as a parameter.
 * Return: -1 to indicate an error, factorial of number if no error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
