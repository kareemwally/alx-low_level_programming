#include "lists.h"
/**
 *print_list-function
 *Description:this function
 *@h:pointer of type list_t to next node
 *Return:(size_t)
 */
size_t print_list(const list_t *h)
{
size_t res = 0;
const list_t *n = malloc(sizeof(list_t));
(void)n;
if (h == NULL)
{
return (res);
}
n = h;
while (n != NULL)
{
res++;
if (n->str != NULL)
{
printf("[%d] %s\n", n->len, n->str);
}
else
{
printf("[0] (nil)\n");
}
n = n->next;
}
return (res);
}
