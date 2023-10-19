#include "lists.h"
/**
 *list_len-function
 *Description:this function returns number of nodes
 *@h:pointer to 1st node
 *Return:(int)
 */
size_t list_len(const list_t *h)
{
size_t res = 0;
const list_t *n = NULL;
if (h == NULL)
{
return (res);
}
n = h;
while (n != NULL)
{
res++;
n = n->next;
}
return (res);
}
