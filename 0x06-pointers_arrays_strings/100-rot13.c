#include "main.h"

/**
* rot13 - Encodes a string using ROT13
* @s: Pointer to string to encode
*
* Return: Pointer to encoded string
*/
char *rot13(char *s)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (s[i] == alphabet[j])
{
s[i] = rot13[j];
break;
}
}
}
return (s);
}
