#include "main.h"
#include <unistd.h>
/**
 * _putchar - is the name of the function
 *
 * @c: is the parameter of the function
 * description: the function return a single character
 * Return: is to return the required result
 */

int _putchar(int c)
{
        return (write(1, &c, 1));
}
