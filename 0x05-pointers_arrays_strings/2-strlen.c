#include "main.h"
/**
 * _strlen - find the lengt of a string
 * @s: pointer to te string to check
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
