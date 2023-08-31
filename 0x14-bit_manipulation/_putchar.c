#include "main.h"
#include <unistd.h>
/**
 * Description:  _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (success).
 * Return -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
