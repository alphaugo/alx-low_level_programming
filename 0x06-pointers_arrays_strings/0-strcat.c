#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - function or pointer function
 *
 * @dest: a character pointer
 * @src: a character pointer
 *
 * Return: character
 */



char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		printf("%c", *dest);
		dest++;
	}
	while (*src != '\0')
	{
		printf("%c", *src);
		src++;
	}
	printf("\n");
}
