#include "main.h"
/**
 * *_strcpy- is the name of the function
 *
 * @dest: is the argument of the function
 * src: is the argument of the function
 * return: return
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
