#include "main.h"
/**
 * _strcar - function or pointer function
 *
 * @dest: a character pointer
 * @src: a character pointer
 *
 * Return: character
 */



char *_strcat(char *dest, char *src)
{
    while(*dest != '\0')
    {
        if(*dest != '\0')
            printf("%c", *dest);
        dest++;
    
    }
    while (*src != '\0')
     {
        if(*src != '\0')
            printf("%c", *src);
        src++;
     }
    printf("\n");
     return 0;
}
