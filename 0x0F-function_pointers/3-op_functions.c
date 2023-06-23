#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function for addition
 * @a: first num
 * @b: second num
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function for sub
 * @a: first num
 * @b: second num
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function for mul
 * @a: first num
 * @b: second num
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function for div
 * @a: first num
 * @b: second num
 *
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function for reminder
 * @a: first num
 * @b: second num
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
