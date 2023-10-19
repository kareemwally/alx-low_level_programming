#include"lists.h"
/**
 *add_node_end-function
 *Description:this function adds node at the end of list
 *@head:pointer to the list_t 1st pointer node
 *@str:string to be added to node
 *Return:(pointer to list)
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp, *res = malloc(sizeof(list_t));
tmp = *head;
if (res != NULL)
{
res->str = strdup(str);
res->len = strlen(str);
res->next = NULL;
if (*head == NULL)
{
*head = res;
return (res);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = res;
return (res);
}
else
return (NULL);
}
