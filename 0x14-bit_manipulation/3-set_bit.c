#include "main.h"

/**
 * set_bit - func sets value of bit to 1 at given index
 * @index: index of bit set to 1
 * @n: pointer to number to change
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
