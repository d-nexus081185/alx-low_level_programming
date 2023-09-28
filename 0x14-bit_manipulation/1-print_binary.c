#include "main.h"

/**
 * print_binary -  prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count_value = 0;
	unsigned long int current_value;

	for (i = 63; i >= 0; i--)
	{
		current_value = n >> i;

		if (current_value & 1)
		{
			_putchar('1');
			count_value++;
		}
		else if (count_value)
			_putchar('0');
	}
	if (!count_value)
		_putchar('0');
}
