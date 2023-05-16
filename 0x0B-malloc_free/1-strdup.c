#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - Returns a copy of  new memory space location
* @str: The string to duplicate.
*
* Return: . 0 if fail, returns NULL.
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;
if (str == NULL)
return (NULL);
/* Calculate the length of the string */
for (len = 0; str[len] != '\0'; len++)
;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
