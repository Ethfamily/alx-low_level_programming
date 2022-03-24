#include <unistd.h>
/**
 * _putchar - wirtes the cha c to stdout
 * @c: The char to print
 *
 * Return: On success 1
 * On error, -1 is returne
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
