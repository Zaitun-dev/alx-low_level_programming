#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
char *str;
int num;
float f;
char c;
va_start(args, format);
while (ptr != NULL && *ptr != '\0')
{
switch (*ptr)
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
ptr++;
continue;
}
if (*(ptr + 1) != '\0' && (ptr + 1) != NULL)
printf(", ");
ptr++;
}
printf("\n");
va_end(args);
}
