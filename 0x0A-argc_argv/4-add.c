#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_num_positive - Checks if a string is a positive number
* @str: The string to be checked
*
* Return: 1 if the string is a positive number, 0 otherwise
*/
int is_num_positive(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0);
}
return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments passed
* @argv: An array of strings containing the arguments
*
* Return: 0 if successful, 1 if an error occurred
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_num_positive(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
