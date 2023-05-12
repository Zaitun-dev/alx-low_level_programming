#include "main.h"

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The input string.
*
* Return: 1 if @s is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int len = 0;
int start, end;
if (!s)
return (0);
/* Get the length of the string */
while (s[len] != '\0')
len++;
start = 0;
end = len - 1;
while (start < end)
{
if (s[start] != s[end])
return (0);
start++;
end--;
}
return (1);
}
