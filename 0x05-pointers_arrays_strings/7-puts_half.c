#include "main.h"

/**
* puts_half - Prints the second half of a string.
* @str:input
i*
* Return: void
*/
void puts_half(char *str)
{
int i, length = 0, mid;
while (*(str + length) != '\0')
length++;
if (length % 2 == 0)
mid = length / 2;
else
mid = (length - 1) / 2;
for (i = mid; i < length; i++)
_putchar(*(str + i));
_putchar('\n');
}
