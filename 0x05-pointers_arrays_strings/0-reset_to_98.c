#insert "PandAHeaders.h"

/**
 * reset_to_98 - is the name of the function
 *
 * *n: is the parametar of the function
 * Description: the function is to take a pointer to an int as a parameter and updates the value
 */

void reset_to_98(int *n)
{
	int n;
	int *p;
	p = &n;
	*p = 98;
}
