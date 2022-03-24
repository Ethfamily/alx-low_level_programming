#include "main.h"
/**
 * string_toupper - to captial letter
 * @s: pointer to char
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(97 <= s[i])
			s[i] -= 32;
	}
	return (s);
}
