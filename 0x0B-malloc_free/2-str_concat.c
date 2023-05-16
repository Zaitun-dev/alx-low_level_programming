#include <stdlib.h>
#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: 0, and if fail returns NULL.
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
unsigned int len1 = 0, len2 = 0, i, j;
/* Treat NULL as an empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate the length of s1 */
while (s1[len1] != '\0')
len1++;
/* Calculate the length of s2 */
while (s2[len2] != '\0')
len2++;
conct = malloc(sizeof(char) * (len1 + len2 + 1));
if (conct == NULL)
return (NULL);
for (i = 0; i < len1; i++)
conct[i] = s1[i];
for (j = 0; j < len2; j++)
conct[i + j] = s2[j];
conct[i + j] = '\0';
return (conct);
}
