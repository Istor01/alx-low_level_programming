#include "main.h"

/**
 * get_endianness - func checks the endianness big or little
 * Return: 0 big endian, 1 little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
