#include "main.h"
/**
 * create_array - allocates memory using malloc
 * @b: unsigned int of amount of needed memory
 * Return: void
 */
void *create_array(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

