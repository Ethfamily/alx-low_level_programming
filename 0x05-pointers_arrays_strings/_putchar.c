#include <unistd.h>
/**
 * _putchar - writes the charater c to standaer out
 * @c: T e charcter to print
 *
 * Return: S uccess on 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
