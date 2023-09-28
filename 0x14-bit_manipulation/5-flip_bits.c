#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_value = 0;
	unsigned long int current_value;
	unsigned long int exclusive_value = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_value = exclusive_value >> i;
		if (current_value & 1)
			count_value++;
	}

	return (count_value);
}
