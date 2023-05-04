#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, password_length = 10;
char password[11];
srand(time(0));
for (i = 0; i < password_length; i++)
{
password[i] = rand() % 94 + 33;
}
password[i] = '\0';
printf("%s", password);
return (0);
}
