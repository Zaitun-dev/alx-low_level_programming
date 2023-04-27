#include "main.h"
/**
* times_table - prints the 9 time stable,starting with zero
*/
void times_table(void)
{
int i, product;
for (i = 0; i <= 9; i++)
{
product = i * 9;
_putchar('9');
_putchar(' ');
_putchar('*');
_putchar(' ');
_putchar(i + '0');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
_putchar('\n');
}
}
