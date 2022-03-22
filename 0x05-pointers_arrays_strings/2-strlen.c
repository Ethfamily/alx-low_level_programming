#include "main.h"
/**
 * _strlen - find te lengt of a string
 * @s: pointer to te string to check
 * return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
