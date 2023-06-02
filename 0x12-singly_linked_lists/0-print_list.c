#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[%ld] (nil)\n", count);
}
else
{
printf("[%ld] %s\n", count, current->str);
}
count++;
current = current->next;
}
return count;
}


