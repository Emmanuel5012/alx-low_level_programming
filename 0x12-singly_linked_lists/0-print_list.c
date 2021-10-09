#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;

while(nodes != NULL){
if(nodes->next == NULL){
printf("%d", nodes->value);
}
else{
printf("%d, ", nodes->value);
}
nodes = nodes->next;
}
return (nodes);
}
