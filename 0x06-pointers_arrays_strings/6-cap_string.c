#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @str: Pointer to string to capitalize
*
* Return: Pointer to capitalized string
*/
char *cap_string(char *str)
{
int i;
/* Capitalize first letter if necessary */
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
/* Capitalize letters after separators */
for (i = 1; str[i] != '\0'; i++)
{
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
break;
default:
break;
}
}
return (str);
}
