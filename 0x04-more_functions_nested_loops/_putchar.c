#include "main.h"
#include <unstd.h>
/**
 * _putchar - writes the character c to stdout
 * @c The character to print
 * Return: 1 (success)
 * On error - return 1 and emno is set automatically
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
