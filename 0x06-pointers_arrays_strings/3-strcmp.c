#include "main.h"
/**
 * _strcmp - fumction that compares two strings
 *
 * @s1: a character pointer
 * @s2: a character pointer
 *
 * Retrun: int
 */
int _strcmp(char *s1; char *s2)
{
	int i = 0;
	int amb;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			amb = *(s1 + i) - *(s2 + i);
			return (amb);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			amb = *(s1 + i) - *(s2 + i);
			return (amb);
		}
		i++;
	}
	return (0);
}
