#include "main.h"

/**
* leet - Encodes a string into "1337"
* @str: Pointer to string to encode
*
* Return: Pointer to encoded string
*/
char *leet(char *str)
{
int i, j;
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letter[j] != '\0'; j++)
{
if (str[i] == letter[j])
{
str[i] = number[j];
break;
}
}
}
return (str);
}
