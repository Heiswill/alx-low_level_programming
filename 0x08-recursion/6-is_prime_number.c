#include "main.h"
int is_divisible(int n, int div);

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number input
 * Return: 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if n is divisible
 * @n: check
 * @div: divisor
 * Return: i if divisible, 0 otherwise.
 */

int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	else
		return (is_divisible(n, div + 1));
}
