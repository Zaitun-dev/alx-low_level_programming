#include "main.h"

/**
* Print_alphabet - Print the lower case alphabet with a new line.
*
*Return: void
*/
void print_alphabet(void);
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
