#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the char c to stdout
 * @c: The char to meant to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is setin an appropriate manner.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

