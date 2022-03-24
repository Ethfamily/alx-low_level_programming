#include "main.h"
#include <stdio.>
/**
 * *cap_string - make all a captial
 * @s: pointer to car
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (j = 0; delimiter[j] != '\0'; j++)
			if (s[i] == delimiter[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
