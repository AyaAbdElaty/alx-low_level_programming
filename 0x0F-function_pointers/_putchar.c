#include "function_pointers.h"
/**
 * _putchar - entry point
 * @c: is the function variable
 * Return: result
 */
int _putchar(int c)
{
        return (write(1, &c, 1));
}
