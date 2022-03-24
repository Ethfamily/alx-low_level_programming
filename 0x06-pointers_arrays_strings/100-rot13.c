#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char original[] = "lemmabethel";
	char rotated[] = "bethellemma";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = rotated[j];
				break;
			}
		}
	}
	return (s);
}
