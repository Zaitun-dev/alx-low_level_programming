#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: Pointer to destination string
* @src: Pointer to source string
*
* Return: Pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len] = src[i];
dest_len++;
}
dest[dest_len] = '\0';
return (dest);
}
