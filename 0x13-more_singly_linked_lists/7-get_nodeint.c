#include "lists.h"

/**
 *get_nodeint_at_index-function
 *description:that function gets the node with some index
 *@index:the index of node in list
 *@head:pointer to 1st node in list
 *Return:(pointer)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *res;
if (head)
{
while (index > 0)
{
head = head->next;
index--;
}
res = head;
return (res);
}
else
return (NULL);
}
