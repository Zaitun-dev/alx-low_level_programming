#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - Allocates memory using malloc
* @b: Size of memory to allocate
*
* Return: Pointer to the allocated memory
*         Exit with status value of 98 on failure
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
