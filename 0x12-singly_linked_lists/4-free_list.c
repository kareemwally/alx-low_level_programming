#include "lists.h"
/**
 *free_list-function
 *Description:this function frees the entire list
 *@head:pointer to first node
 *Return:(void)
 */
void free_list(list_t *head)
{
list_t *tmp = head;
while (tmp != NULL)
{
tmp = tmp->next;
free(head);
head = tmp;
}
}
