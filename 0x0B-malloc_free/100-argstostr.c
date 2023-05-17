#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments of a program
* @ac: The argument count
* @av: An array of argument strings
*
* Return: A pointer to the concatenated string, or NULL on failure
*/
char *argstostr(int ac, char **av)
{
char *concat_str;
int i, j, k = 0;
int total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of all arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_len++;
total_len++; /* Account for the \n character */
}
/* Allocate memory for the concatenated string */
concat_str = malloc(sizeof(char) * (total_len + 1));
if (concat_str == NULL)
return (NULL);
/* Copy the arguments into the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concat_str[k] = av[i][j];
k++;
}
concat_str[k] = '\n'; /* Append \n after each argument */
k++;
}
concat_str[k] = '\0'; /* Add null terminator at the end */
return (concat_str);
}
