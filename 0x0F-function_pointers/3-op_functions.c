#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two number
 * @a: first number
 * @b: second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers.
 * @a: num1
 * @b: num2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 * @a: num1
 * @b: num2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b.
 * @a: numerator
 * @b: denum
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus.
 * @a: num1
 * @b: num2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
