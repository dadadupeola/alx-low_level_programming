#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: This is the character to print
 * Return: On success 1.
 * On error, -1 will be returned, and the error is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
