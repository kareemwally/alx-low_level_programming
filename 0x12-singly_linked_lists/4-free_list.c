#include "lists.h"
/**
 *free_list-function
 *Description:this function frees the entire list
 *@head:pointer to first node
 *Return:(void)
 */
void free_list(list_t *head)
{
list_t *tmp, *res;
if(!head)
{
return;
}
res = head;
while (res != NULL)
{
tmp = res->next;
free(res->str);
free(res);
res = tmp;
}
}
