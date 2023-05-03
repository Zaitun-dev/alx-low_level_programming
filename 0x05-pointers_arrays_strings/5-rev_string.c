#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to the string to reverse
*/
void rev_string(char *s)
{
int i, j;
char rev;
if (s == NULL)
return;
for (i = 0, j = 0; s[j + 1]; j++)
;
while (i < j)
{
rev = s[i];
s[i] = s[j];
s[j] = rev;
i++;
j--;
}
}
