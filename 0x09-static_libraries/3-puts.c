#include "main.h"

/**
* _puts - Prints a string to stdout, followed by a new line.
* @str: Pointer to string to be printed.
*
* Return: void.
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');
}
