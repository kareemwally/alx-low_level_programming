#include"lists.h"
/**
 *add_node-function
 *Description:this function adds new node in beginning of list
 *@head:pointer to 1st node in list
 *@str:string to add
 *Return:(pointer to list)
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *res = malloc(sizeof(list_t));
if (res != NULL)
{
res->str = strdup(str);
res->len = strlen(str);
res->next = *head;
*head = res;
return (*head);
}
else
return (NULL);
}
